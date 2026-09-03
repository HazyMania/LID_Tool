/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: BrgGameBase_classes.hpp
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

#define CONST_c_ITBACK                                          ""
#define CONST_c_ITBIV                                           ""
#define CONST_c_PT_COVER_ID                                     ""
#define CONST_cScreen1080pPixelScale                            2
#define CONST_cScreen720pPixelScale                             3
#define CONST_cScreenSizeX                                      3
#define CONST_cScreenSizeY                                      2
#define CONST_c_BrgMeshOutlineManager_MaxNum                    1
#define CONST_AUTHCODE_KEY                                      ""
#define CONST_BrgDefaultSkipPhysicsAnimSpeedEquip               3
#define CONST_cBrgPartConst_SubDeathOpacityNum                  2
#define CONST_cBrgPartConst_AlwaysMaterialParamSetNum           3
#define CONST_cBrgRenderPrimitive2DSet_VertexBufferNum          3
#define CONST_cBlackSelectWindow_CharaStatus_Space_Y            9
#define CONST_cBlackSelectWindow_MenuAlphaInTime                1
#define CONST_cBlackSelectWindow_MenuAlphaOutTime               0
#define CONST_cBlackSelectWindow_DispMaxNum                     5
#define CONST_cBlackSelectWindow_MaxItemNum                     1
#define CONST_cBlackSelectWindow_OpenTime                       0
#define CONST_cBlackSelectWindow_CloseTime                      0
#define CONST_cBlackSelectWindow_Space_Left                     3
#define CONST_cBlackSelectWindow_Space_Right                    9
#define CONST_cBlackSelectWindow_Space_Top                      1
#define CONST_cBlackSelectWindow_Space_Bottom                   1
#define CONST_cBlackSelectWindow_ItemAlphaInTime                0
#define CONST_cBlackSelectWindow_ItemAlphaOutTime               0
#define CONST_cBlackSelectWindow_ScrollBar_Size_X               3
#define CONST_cBlackSelectWindow_ScrollBar_Cursor_Size_Y        6
#define CONST_cBlackSelectWindow_ScrollBar_MoveSpeed            0
#define CONST_cBlackSelectWindow_ScrollBar_Space                6
#define CONST_cBlackSelectWindow_MaskAddPixel                   1
#define CONST_cBrgUIBlackWindow_Alpha                           2
#define CONST_cBrgUIBlackWindow_AlphaTime                       0
#define CONST_cBrgUIBlackYesNoWindow_ButtonAlphaSpeed           0
#define CONST_cBrgUIDebugGauge_Alpha                            2
#define CONST_cBrgUIDebugGauge_AlphaTime                        0
#define CONST_cBrgUIDebugGauge_ParamTime                        0
#define CONST_cBrgUIDebugGauge_SelectInTime                     0
#define CONST_cBrgUIDebugGauge_SelectOutTime                    0
#define CONST_cBrgUIDebugString_SelectInTime                    0
#define CONST_cBrgUIDebugString_SelectOutTime                   0
#define CONST_cBrgUIDebugString_OneCharaDispWait_Max            0
#define CONST_cBrgUIDebugString_OneCharaDispWait_Min            0
#define CONST_cBrgUIDebugString_OneCharaOutWait                 0
#define CONST_cBrgUIDebugString_OneCharaInTime                  0
#define CONST_cBrgUIDebugString_OneCharaOutTime                 0
#define CONST_cSecondRepeatInputTime                            0
#define CONST_cSecondSpeedInputTime                             1
#define CONST_cRepeatInputTime                                  0
#define CONST_cFirstRepeatInputTime                             0
#define CONST_cButtonNum                                        1
#define CONST_cGamePadInput_Back                                3
#define CONST_cGamePadInput_Start                               1
#define CONST_cGamePadInput_R3                                  8
#define CONST_cGamePadInput_L3                                  4
#define CONST_cGamePadInput_R2                                  2
#define CONST_cGamePadInput_L2                                  1
#define CONST_cGamePadInput_R1                                  5
#define CONST_cGamePadInput_L1                                  2
#define CONST_cGamePadInput_Y                                   1
#define CONST_cGamePadInput_X                                   6
#define CONST_cGamePadInput_Cancel                              3
#define CONST_cGamePadInput_Select                              1
#define CONST_cGamePadInput_Right                               8
#define CONST_cGamePadInput_Left                                4
#define CONST_cGamePadInput_Down                                2
#define CONST_cGamePadInput_Up                                  1
#define CONST_cMaxFontNum                                       6
#define CONST_cMUSHROOMDEBUGINFO_GRASP_TRANS_SCALE              0
#define CONST_cMUSHROOMDEBUGINFO_GRASP_ROT_SCALE                0
#define CONST_cMUSHROOMDEBUGINFO_FLYING_TRANS_SCALE             0
#define CONST_cMUSHROOMDEBUGINFO_FLYING_ROT_SCALE               0
#define CONST_cMUSHROOMDEBUGINFO_MAX_HSPEED                     5
#define CONST_cMUSHROOMDEBUGINFO_SLIPBRAKE_SCALE                1
#define CONST_cMUSHROOMDEBUGINFO_BOUNDRATE_SCALE                0
#define CONST_cMUSHROOMDEBUGINFO_WALLBOUNDRATE_SCALE            0
#define CONST_cMUSHROOMDEBUGINFO_GRAVITY_SCALE                  1
#define CONST_cMUSHROOMDEBUGINFO_SPEED_SCALE                    1
#define CONST_cMUSHROOMDEBUGINFO_NUM                            7
#define CONST_cMUSHROOMDEBUGINFO_SPACE                          8
#define CONST_cMUSHROOMDEBUGINFO_Y                              1
#define CONST_cMUSHROOMDEBUGINFO_X                              1
#define CONST_cGLOBALPARTINFO_NUM                               2
#define CONST_cGLOBALPARTINFO_INFO                              6
#define CONST_cGLOBALPARTINFO_SPACE                             4
#define CONST_cGLOBALPARTINFO_Y                                 1
#define CONST_cGLOBALPARTINFO_X                                 8
#define CONST_UIPARAM_TYPE_MAX_NUM                              2
#define CONST_UIPARAM_MAX_NUM                                   1
#define CONST_UIPARAM_MAX_DISP_NUM                              5
#define CONST_UIPARTICLE_UNIT_MAX_NUM                           5
#define CONST_UIPARTICLE_MAX_NUM                                2
#define CONST_UIPARTICLE_CONSTPARAM_MAX_NUM                     6
#define CONST_cBrgUITextureResource_TX_UI_AreaMap_v00_TextureNum 3
#define CONST_cBrgUITextureResource_TX_UI_ButtonGuide_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_ButtonGuide_STM_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Elevator_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Memo_v00_TextureNum 4
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Menu_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Menu_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Beast_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Catalog_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Fighter_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Help_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Index_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Magazine_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Mail_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_MasterLevel_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Mushroom_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Omoide_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Quest_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Senpai_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_Sticker_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Page_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Paperdoll_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Stamp_Arrow_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Stamp_v00_TextureNum 2
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Stamp_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_STM_Tab_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_Tab_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_EnmaMenu_v01_TextureNum 6
#define CONST_cBrgUIResource_StreamImageManager_DefaultMaxLoadNum 6
#define CONST_cBrgUIResource_StreamImageManager_MinLoadNum      1
#define CONST_cBrgUIResource_EnmaMenuImageManager_DefaultMaxLoadNum 1
#define CONST_cBrgUIResource_FighterIcon_DefaultMaxLoadNum      6
#define CONST_cBrgUITextureResource_TX_UI_Defense_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Facility_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_MyTeam_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_Raid_Info_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Raid_v00_TextureNum   1
#define CONST_cBrgUITextureResource_TX_UI_Ranking_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_Report_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_ReportDetail_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_Result_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_Result_v00_INT_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_Result_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_RoomCustom_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_TeamChange_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_Top_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_Whistle_v00_TextureNum 1
#define CONST_cBrgUIResource_FortIconImageManager_DefaultMaxLoadNum 1
#define CONST_cBrgUITextureResource_TX_UI_Fort_Monitor_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_FreeContinue_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_FreezerMenu_STM_Name_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_FreezerMenu_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_HUD_Base_Status_v06_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Icon_Info_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Icon_Info_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Icon_Info_v02_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Icon_MiniMap_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Icon_Network_v00_TextureNum 1
#define CONST_cBrg_Insurance_Flip_Num                           1
#define CONST_cBrgUITextureResource_TX_UI_InsuranceMenu_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_InsuranceMenu_Cover_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_InsuranceMenu_v00_00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Icon_Item_v00_TextureNum 1
#define CONST_cBrgUIResource_ItemIconManager_DefaultMaxLoadNum  1
#define CONST_cBrgUITextureResource_TX_UI_Icon_Item_S_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_ItemLMenu_v00_TextureNum 2
#define CONST_cBrgUITextureResource_TX_UI_Loading_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Loading_v00_Blue_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Loading_v00_Bronze_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Loading_v00_Gold_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Loading_v00_Silver_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_MiniGame_STM_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_MiniGame_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_MotherBarbs_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Mushroom_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_questmenu_v00_TextureNum 2
#define CONST_cBrgUITextureResource_TX_UI_OpeningLogo_v00_TextureNum 1
#define CONST_cBrgUIResource_PartTypeIconManager_DefaultMaxLoadNum 6
#define CONST_cBrgUITextureResource_TX_UI_PauseMenu_STM_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_PauseMenu_v01_TextureNum 2
#define CONST_cBrgUITextureResource_TX_UI_PauseMenu_v02_Shop_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Prison_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_questmenu_STM_v00_TextureNum 1
#define CONST_cBrgUIResource_QuestPictureManager_DefaultMaxLoadNum 3
#define CONST_cBrgUITextureResource_TX_UI_radiomenu_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_ReachingMail_v00_TextureNum 0
#define CONST_cBrgUITextureResource_TX_UI_Reception_v00_TextureNum 2
#define CONST_cBrgUITextureResource_TX_UI_Result_Floor_Info_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Result_Floor_v02_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_RewardBox_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_RewardBox_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_SkillSticker_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_StampEx_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Status_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_SystemWindow_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_SystemWindow_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_SystemWindow_v02_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_SystemWindow_v03_TextureNum 1
#define CONST_cBrgUIResource_TeamEmblemIconImageManager_DefaultMaxLoadNum 2
#define CONST_cBrgUIResource_TeamEmblemImageManager_DefaultMaxLoadNum 8
#define CONST_cBrgUITextureResource_TX_UI_TengokuMenu_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Tips_v00_TextureNum   1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_v00_TextureNum 3
#define CONST_cBrgUITextureResource_TX_UI_Title_First_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_Notice_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_Spring00_v00_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_Spring00_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_Autumn00_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_Autumn00_v02_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_Autumn00_v03_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_Summer00_v00_TextureNum 1
#define CONST_FishLayerWidth                                    1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_Summer00_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_Summer00_v02_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_Winter00_v01_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_Winter00_v02_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_Winter00_v03_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_Title_VS_Winter00_v04_TextureNum 1
#define CONST_cBrgUITextureResource_TX_UI_HUD_UncleDeath_Anim_v00_TextureNum 1
#define CONST_cStrSelectWindow_MenuAlphaInTime                  0
#define CONST_cStrSelectWindow_MenuAlphaOutTime                 0
#define CONST_cStrSelectWindow_MaxItemNum                       2
#define CONST_cStrSelectWindow_ItemAlphaInTime                  0
#define CONST_cStrSelectWindow_ItemAlphaOutTime                 0
#define CONST_cStrSelectWindow_Center_X                         1
#define CONST_BrgBodySkillSticker_SplitNum                      3
#define CONST_BrgBodySkillSticker_OneStickerSize                1
#define CONST_BrgBodySkillSticker_RTSize                        1

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum BrgGameBase.BrgParamMove.EParamMoveType
enum class EParamMoveType : uint8_t
{
	EParamMoveType_Linear                              = 0,
	EParamMoveType_Linear_Time                         = 1,
	EParamMoveType_Linear_Slowdown                     = 2,
	EParamMoveType_Linear_Slowdown_Time                = 3,
	EParamMoveType_Linear_Acceleration                 = 4,
	EParamMoveType_Linear_Acceleration_Time            = 5,
	EParamMoveType_Mul                                 = 6,
	EParamMoveType_Mul_Time                            = 7,
	EParamMoveType_Sin_Time                            = 8,
	EParamMoveType_Pow3_Up_Time                        = 9,
	EParamMoveType_Pow3_Down_Time                      = 10,
	EParamMoveType_Pow4_Up_Time                        = 11,
	EParamMoveType_Pow4_Down_Time                      = 12,
	EParamMoveType_BezierCurve_Time                    = 13,
	EParamMoveType_FlashClassicTween_Time              = 14,
	EParamMoveType_FlashClassicTweenRev_Time           = 15,
	EParamMoveType_Num                                 = 16,
	EParamMoveType_END                                 = 17
};

// Enum BrgGameBase.BrgParamMove.EParamLoopMoveType
enum class EParamLoopMoveType : uint8_t
{
	EParamLoopMoveType_Linear                          = 0,
	EParamLoopMoveType_Sin                             = 1,
	EParamLoopMoveType_SinBound                        = 2,
	EParamLoopMoveType_Brink                           = 3,
	EParamLoopMoveType_END                             = 4
};

// Enum BrgGameBase.BrgGameDefine.EBrgLocalItemType
enum class EBrgLocalItemType : uint8_t
{
	EBrgLocalItemType_Part                             = 0,
	EBrgLocalItemType_Mushroom                         = 1,
	EBrgLocalItemType_MushroomBeast                    = 2,
	EBrgLocalItemType_Item                             = 3,
	EBrgLocalItemType_END                              = 4
};

// Enum BrgGameBase.BrgGameDefine.EBrgEquipSite
enum class EBrgEquipSite : uint8_t
{
	EBrgEquipSite_Head                                 = 0,
	EBrgEquipSite_ArmR                                 = 1,
	EBrgEquipSite_ArmL                                 = 2,
	EBrgEquipSite_Body                                 = 3,
	EBrgEquipSite_Legs                                 = 4,
	EBrgEquipSite_None                                 = 5,
	EBrgEquipSite_Max                                  = 6
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbBoss
enum class EBrgDbBoss : uint8_t
{
	BOSS1                                              = 0,
	BOSS2                                              = 1,
	BOSS3                                              = 2,
	BOSS4                                              = 3,
	EBrgDbBoss_END                                     = 4
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbPartType
enum class EBrgDbPartType : uint8_t
{
	PTTP_HEAD                                          = 0,
	PTTP_ARM                                           = 1,
	PTTP_BODY                                          = 2,
	PTTP_LEGS                                          = 3,
	PTTP_NOEQ                                          = 4,
	PTTP_MASK                                          = 5,
	PTTP_PANTS                                         = 6,
	PTTP_END                                           = 7
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbMboss
enum class EBrgDbMboss : uint8_t
{
	MBOSS1                                             = 0,
	MBOSS2                                             = 1,
	MBOSS3                                             = 2,
	MBOSS4                                             = 3,
	STAGE_BOSS1                                        = 4,
	STAGE_BOSS2                                        = 5,
	STAGE_BOSS3                                        = 6,
	STAGE_BOSS4                                        = 7,
	EBrgDbMboss_END                                    = 8
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbMbossAtkTargetType
enum class EBrgDbMbossAtkTargetType : uint8_t
{
	MBSATTP_NORMAL                                     = 0,
	MBSATTP_PLAYER                                     = 1,
	MBSATTP_END                                        = 2
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbDoctorCategory
enum class EBrgDbDoctorCategory : uint8_t
{
	DRCAT_NONE                                         = 0,
	DRCAT_MILITARY                                     = 1,
	DRCAT_HOMECENTER                                   = 2,
	DRCAT_GEEK                                         = 3,
	DRCAT_FANTASY                                      = 4,
	DRCAT_EBE                                          = 5,
	DRCAT_SPORT                                        = 6,
	DRCAT_END                                          = 7
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbTrboxType
enum class EBrgDbTrboxType : uint8_t
{
	TBTP_SMALL                                         = 0,
	TBTP_MEDIUM                                        = 1,
	TBTP_LARGE                                         = 2,
	TBTP_SPM                                           = 3,
	TBTP_SPL                                           = 4,
	TBTP_END                                           = 5
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbTrBoxRewardType
enum class EBrgDbTrBoxRewardType : uint8_t
{
	TBRWD_MONEY                                        = 0,
	TBRWD_PART                                         = 1,
	TBRWD_PART_HEAD                                    = 2,
	TBRWD_PART_ARM                                     = 3,
	TBRWD_PART_BODY                                    = 4,
	TBRWD_PART_LEGS                                    = 5,
	TBRWD_ITEM                                         = 6,
	TBRWD_END                                          = 7
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbTrAppearance
enum class EBrgDbTrAppearance : uint8_t
{
	TBAP_FACE_DOWN                                     = 0,
	TBAP_LEAN                                          = 1,
	TBAP_CONTENT                                       = 2,
	TBAP_END                                           = 3
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbGender
enum class EBrgDbGender : uint8_t
{
	GENDER_MALE                                        = 0,
	GENDER_FEMALE                                      = 1,
	GENDER_END                                         = 2
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbGrip
enum class EBrgDbGrip : uint8_t
{
	GRIP_NONE                                          = 0,
	GRIP_SINGLE                                        = 1,
	GRIP_DOUBLE                                        = 2,
	GRIP_END                                           = 3
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbCurveType
enum class EBrgDbCurveType : uint8_t
{
	CV_LINEAR                                          = 0,
	CV_SIN                                             = 1,
	CV_1_COS                                           = 2,
	CV_END                                             = 3
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbEquipSite
enum class EBrgDbEquipSite : uint8_t
{
	EQSITE_HEAD                                        = 0,
	EQSITE_ARMR                                        = 1,
	EQSITE_ARML                                        = 2,
	EQSITE_BODY                                        = 3,
	EQSITE_LEGS                                        = 4,
	EQSITE_NONE                                        = 5,
	EQSITE_MASK                                        = 6,
	EQSITE_PANTS                                       = 7,
	EQSITE_END                                         = 8
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbPartSECategory
enum class EBrgDbPartSECategory : uint8_t
{
	PTSECAT_HEAD_CLOTH                                 = 0,
	PTSECAT_HEAD_METAL                                 = 1,
	PTSECAT_BODY_CLOTH                                 = 2,
	PTSECAT_BODY_METAL                                 = 3,
	PTSECAT_WP_WOOD                                    = 4,
	PTSECAT_WP_WOOD_METAL                              = 5,
	PTSECAT_WP_METAL_SWORD                             = 6,
	PTSECAT_WP_METAL_LIGHT                             = 7,
	PTSECAT_WP_METAL_HEAVY                             = 8,
	PTSECAT_WP_METAL_SOLID                             = 9,
	PTSECAT_WP_GLASS                                   = 10,
	PTSECAT_WP_PLASTC                                  = 11,
	PTSECAT_END                                        = 12
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbEscapeAttr
enum class EBrgDbEscapeAttr : uint8_t
{
	ESC_00                                             = 0,
	ESC_01                                             = 1,
	ESC_02                                             = 2,
	ESC_03                                             = 3,
	ESC_END                                            = 4
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbAtkAttr
enum class EBrgDbAtkAttr : uint8_t
{
	ATKATTR_NONE                                       = 0,
	ATKATTR_SLASH                                      = 1,
	ATKATTR_SHOOT                                      = 2,
	ATKATTR_HIT                                        = 3,
	ATKATTR_FIRE                                       = 4,
	ATKATTR_ELEC                                       = 5,
	ATKATTR_POISON                                     = 6,
	ATKATTR_END                                        = 7
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbMaterialAttr
enum class EBrgDbMaterialAttr : uint8_t
{
	MAT_00                                             = 0,
	MAT_01                                             = 1,
	MAT_02                                             = 2,
	MAT_END                                            = 3
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbWaterDropSE
enum class EBrgDbWaterDropSE : uint8_t
{
	WATERDROPSE_LIGHT                                  = 0,
	WATERDROPSE_HEAVY                                  = 1,
	WATERDROPSE_END                                    = 2
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbProductType
enum class EBrgDbProductType : uint8_t
{
	PRDTP_PART                                         = 0,
	PRDTP_FIXED_PRICE                                  = 1,
	PRDTP_ITEM                                         = 2,
	PRDTP_END                                          = 3
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgSkillType
enum class EBrgSkillType : uint8_t
{
	SKLTP_NONE                                         = 0,
	SKLTP_HPCUREUP                                     = 1,
	SKLTP_MONEYUP                                      = 2,
	SKLTP_EXPUP                                        = 3,
	SKLTP_DECDUR_DOWN                                  = 4,
	SKLTP_DEATH_PROOF                                  = 5,
	SKLTP_ATKDEFUP_HPMAX                               = 6,
	SKLTP_ATKDEFUP_HPLOW                               = 7,
	SKLTP_DMGUP_ELIFELOW                               = 8,
	SKLTP_DMGUP_ELIFEHIGH                              = 9,
	SKLTP_ATKUP_NODMG                                  = 10,
	SKLTP_ATK_CHARGED                                  = 11,
	SKLTP_LESDMG_FALLING                               = 12,
	SKLTP_NODMG_FALLING                                = 13,
	SKLTP_SPDUP                                        = 14,
	SKLTP_DODGEUP                                      = 15,
	SKLTP_HPUP                                         = 16,
	SKLTP_ATKUP                                        = 17,
	SKLTP_DEFUP                                        = 18,
	SKLTP_STMNUP                                       = 19,
	SKLTP_RGSPDUP                                      = 20,
	SKLTP_LESDMG_STEALTH                               = 21,
	SKLTP_WDMG_DOWN                                    = 22,
	SKLTP_HEADSHOTUP                                   = 23,
	SKLTP_NOWEP_ATKUP                                  = 24,
	SKLTP_WEP_SPDUP                                    = 25,
	SKLTP_WWEP_ATKUP                                   = 26,
	SKLTP_DIY_UP                                       = 27,
	SKLTP_MIL_UP                                       = 28,
	SKLTP_FAN_UP                                       = 29,
	SKLTP_SPO_UP                                       = 30,
	SKLTP_ATKDEFUP_SLASH                               = 31,
	SKLTP_ATKDEFUP_STRIKE                              = 32,
	SKLTP_ATKDEFUP_FIRE                                = 33,
	SKLTP_ATKDEFUP_ELECTRIC                            = 34,
	SKLTP_SEARCHUP_ITEM                                = 35,
	SKLTP_HARD_STAN                                    = 36,
	SKLTP_DRAIN                                        = 37,
	SKLTP_STEALTHUP                                    = 38,
	SKLTP_ATKUP_ANTI_HIGHLV                            = 39,
	SKLTP_CRIUP                                        = 40,
	SKLTP_ABPUP                                        = 41,
	SKLTP_DECFIRE                                      = 42,
	SKLTP_DECELEC                                      = 43,
	SKLTP_EV_DISCOUNT                                  = 44,
	SKLTP_SNOWWHITE                                    = 45,
	SKLTP_DISCOUNT_STR                                 = 46,
	SKLTP_DISCOUNT_DEX                                 = 47,
	SKLTP_DISCOUNT_VIT                                 = 48,
	SKLTP_DISCOUNT_HP                                  = 49,
	SKLTP_DISCOUNT_STM                                 = 50,
	SKLTP_DISCOUNT_LUK                                 = 51,
	SKLTP_ARRANGE_STATUP_DIY                           = 52,
	SKLTP_ARRANGE_STATUP_MIL                           = 53,
	SKLTP_ARRANGE_STATUP_FAN                           = 54,
	SKLTP_ARRANGE_STATUP_SPO                           = 55,
	SKLTP_ATKDEFUP_POISON                              = 56,
	SKLTP_SPIRIT_UP                                    = 57,
	SKLTP_END                                          = 58
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbPartEfficiency
enum class EBrgDbPartEfficiency : uint8_t
{
	PTEFC_STAMINA_CONSUME                              = 0,
	PTEFC_DURABILITY                                   = 1,
	PTEFC_ATK                                          = 2,
	PTEFC_SPEED                                        = 3,
	PTEFC_DEF                                          = 4,
	PTEFC_HUNGER_SPEED                                 = 5,
	PTEFC_SLEEP_SPEED                                  = 6,
	PTEFC_BODYHEAT_SPEED                               = 7,
	PTEFC_ATTR_DMG                                     = 8,
	PTEFC_ATTR_DMGTIME                                 = 9,
	PTEFC_END                                          = 10
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbPartClass
enum class EBrgDbPartClass : uint8_t
{
	PTCLASS_LOWEST                                     = 0,
	PTCLASS_LOWER                                      = 1,
	PTCLASS_HIGHER                                     = 2,
	PTCLASS_HIGHEST                                    = 3,
	PTCLASS_END                                        = 4
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbZombieEqType
enum class EBrgDbZombieEqType : uint8_t
{
	ZMBEQTP_NORMAL                                     = 0,
	ZMBEQTP_LONGRANGEWP                                = 1,
	ZMBEQTP_CUSTOM                                     = 2,
	ZMBEQTP_END                                        = 3
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbZombieAtkTargetType
enum class EBrgDbZombieAtkTargetType : uint8_t
{
	ZMBATTP_NORMAL                                     = 0,
	ZMBATTP_PLAYER                                     = 1,
	ZMBATTP_NONCOMBAT                                  = 2,
	ZMBATTP_END                                        = 3
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbZombieRewardType
enum class EBrgDbZombieRewardType : uint8_t
{
	ZMBRWDTP_NORMAL                                    = 0,
	ZMBRWDTP_PTTP_HEAD                                 = 1,
	ZMBRWDTP_PTTP_ARM                                  = 2,
	ZMBRWDTP_PTTP_ARMR                                 = 3,
	ZMBRWDTP_PTTP_ARML                                 = 4,
	ZMBRWDTP_PTTP_BODY                                 = 5,
	ZMBRWDTP_PTTP_LEGS                                 = 6,
	ZMBRWDTP_MSR                                       = 7,
	ZMBRWDTP_MONEY                                     = 8,
	ZMBRWDTP_END                                       = 9
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbZako
enum class EBrgDbZako : uint8_t
{
	ZAKO_SCRATCH                                       = 0,
	ZAKO_TURRET                                        = 1,
	ZAKO_HOVERING                                      = 2,
	ZAKO_TREASURE                                      = 3,
	ZAKO_BONE                                          = 4,
	ZAKO_REVERSAL                                      = 5,
	ZAKO_END                                           = 6
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbKillCategory
enum class EBrgDbKillCategory : uint8_t
{
	KILLCAT_NONE                                       = 0,
	KILLCAT_ZAN                                        = 1,
	KILLCAT_BOKU                                       = 2,
	KILLCAT_SHA                                        = 3,
	KILLCAT_TOTSU                                      = 4,
	KILLCAT_KATSU                                      = 5,
	KILLCAT_TOKU                                       = 6,
	KILLCAT_END                                        = 7
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbMoneyType
enum class EBrgDbMoneyType : uint8_t
{
	MONEYTP_S                                          = 0,
	MONEYTP_M                                          = 1,
	MONEYTP_L                                          = 2,
	MONEYTP_END                                        = 3
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbItemType
enum class EBrgDbItemType : uint8_t
{
	ITTP_MATERIAL                                      = 0,
	ITTP_RMAP                                          = 1,
	ITTP_WOOD                                          = 2,
	ITTP_BACK                                          = 3,
	ITTP_HEAL                                          = 4,
	ITTP_BIV                                           = 5,
	ITTP_END                                           = 6
};

// Enum BrgGameBase.BrgNetworkDeclEnum.EBrgDbAssetType
enum class EBrgDbAssetType : uint8_t
{
	ASSETTP_FJ                                         = 0,
	ASSETTP_FJ_L                                       = 1,
	ASSETTP_FJ_R                                       = 2,
	ASSETTP_FJ_L_ONLY                                  = 3,
	ASSETTP_FJ_R_ONLY                                  = 4,
	ASSETTP_AS                                         = 5,
	ASSETTP_AS_RVS                                     = 6,
	ASSETTP_AS_RVS02                                   = 7,
	ASSETTP_AS_L_ONLY                                  = 8,
	ASSETTP_AS_R_ONLY                                  = 9,
	ASSETTP_PRJTL                                      = 10,
	ASSETTP_AS_DOUBLE_L                                = 11,
	ASSETTP_AS_DOUBLE_R                                = 12,
	ASSETTP_END                                        = 13
};

// Enum BrgGameBase.BrgGameDefine.EBrgPartParamGrade
enum class EBrgPartParamGrade : uint8_t
{
	EBrgPartParamGrade_S                               = 0,
	EBrgPartParamGrade_A                               = 1,
	EBrgPartParamGrade_B                               = 2,
	EBrgPartParamGrade_C                               = 3,
	EBrgPartParamGrade_D                               = 4,
	EBrgPartParamGrade_END                             = 5
};

// Enum BrgGameBase.BrgGameDefine.EBrgFourForcemenType
enum class EBrgFourForcemenType : uint8_t
{
	EBrgFourForcemenType_WhiteSteel                    = 0,
	EBrgFourForcemenType_RedNapalm                     = 1,
	EBrgFourForcemenType_BlackThunder                  = 2,
	EBrgFourForcemenType_PaleWind                      = 3,
	EBrgFourForcemenType_END                           = 4
};

// Enum BrgGameBase.BrgGameDefine.EBrgEnemyClazz
enum class EBrgEnemyClazz : uint8_t
{
	EBrgEnemyClazz_None                                = 0,
	EBrgEnemyClazz_NormalLow                           = 1,
	EBrgEnemyClazz_NormalHigh                          = 2,
	EBrgEnemyClazz_EliteLow                            = 3,
	EBrgEnemyClazz_EliteHigh                           = 4,
	EBrgEnemyClazz_END                                 = 5
};

// Enum BrgGameBase.BrgGameDefine.EBrgPlayerEnemyType
enum class EBrgPlayerEnemyType : uint8_t
{
	EBrgPlayerEnemyType_Normal                         = 0,
	EBrgPlayerEnemyType_Chargers                       = 1,
	EBrgPlayerEnemyType_WarDogsLv1                     = 2,
	EBrgPlayerEnemyType_WarDogsLv2                     = 3,
	EBrgPlayerEnemyType_WarDogsLv3                     = 4,
	EBrgPlayerEnemyType_WarDogsLv4                     = 5,
	EBrgPlayerEnemyType_NMHLv1                         = 6,
	EBrgPlayerEnemyType_NMHLv2                         = 7,
	EBrgPlayerEnemyType_NMHLv3                         = 8,
	EBrgPlayerEnemyType_NMHLv4                         = 9,
	EBrgPlayerEnemyType_Max                            = 10
};

// Enum BrgGameBase.BrgGameDefine.ERefreshEquipPartMeshType
enum class ERefreshEquipPartMeshType : uint8_t
{
	ERefreshEquipPartMeshType_Normal                   = 0,
	ERefreshEquipPartMeshType_IgnoreBodyAndPartAlwaysLoad = 1,
	ERefreshEquipPartMeshType_BodyOnly                 = 2,
	ERefreshEquipPartMeshType_END                      = 3
};

// Enum BrgGameBase.BrgGameDefine.EBrgMushEffectType
enum class EBrgMushEffectType : uint8_t
{
	EBrgMushEffectType_None                            = 0,
	EBrgMushEffectType_Positive                        = 1,
	EBrgMushEffectType_Negative                        = 2,
	EBrgMushEffectType_END                             = 3
};

// Enum BrgGameBase.BrgGameDefine.EBrgBattleVictory
enum class EBrgBattleVictory : uint8_t
{
	EBrgBattleVictory_Win                              = 0,
	EBrgBattleVictory_Lose                             = 1,
	EBrgBattleVictory_Draw                             = 2,
	EBrgBattleVictory_END                              = 3
};

// Enum BrgGameBase.BrgGameDefine.EBrgTrophyID
enum class EBrgTrophyID : uint8_t
{
	EBrgTrophyID_BeatMaxSharp                          = 0,
	EBrgTrophyID_BeatColonelJackson                    = 1,
	EBrgTrophyID_BeatMrCrowley                         = 2,
	EBrgTrophyID_BeatTaroGunkanyama                    = 3,
	EBrgTrophyID_BeatMYBO100                           = 4,
	EBrgTrophyID_Dead100                               = 5,
	EBrgTrophyID_BeatJackals                           = 6,
	EBrgTrophyID_HomeDefense100                        = 7,
	EBrgTrophyID_Capture100                            = 8,
	EBrgTrophyID_BreakEquip500                         = 9,
	EBrgTrophyID_EatMushroom1000                       = 10,
	EBrgTrophyID_CollectAll                            = 11,
	EBrgTrophyID_DestroyOtherBase100                   = 12,
	EBrgTrophyID_BeatFourForcemen                      = 13,
	EBrgTrophyID_END                                   = 14
};

// Enum BrgGameBase.BrgGameDefine.EBrgHubStartMode
enum class EBrgHubStartMode : uint8_t
{
	EBrgHubStartMode_Normal                            = 0,
	EBrgHubStartMode_Escalator                         = 1,
	EBrgHubStartMode_Elevator                          = 2,
	EBrgHubStartMode_Die                               = 3,
	EBrgHubStartMode_Fort                              = 4,
	EBrgHubStartMode_ReturnItem                        = 5,
	EBrgHubStartMode_END                               = 6
};

// Enum BrgGameBase.BrgGameDefine.EBrgDebugSpawnEnemyType
enum class EBrgDebugSpawnEnemyType : uint8_t
{
	EBrgDebugSpawnEnemyType_Chara                      = 0,
	EBrgDebugSpawnEnemyType_Zombie                     = 1,
	EBrgDebugSpawnEnemyType_END                        = 2
};

// Enum BrgGameBase.BrgGameDefine.EBrgDebugEnemySpawnType
enum class EBrgDebugEnemySpawnType : uint8_t
{
	EBrgDebugEnemySpawnType_Normal                     = 0,
	EBrgDebugEnemySpawnType_Random_Equip               = 1,
	EBrgDebugEnemySpawnType_Sandbag                    = 2,
	EBrgDebugEnemySpawnType_END                        = 3
};

// Enum BrgGameBase.BrgGameDefine.EBrgPersonality
enum class EBrgPersonality : uint8_t
{
	EBrgPersonality_OwnPace                            = 0,
	EBrgPersonality_Touchy                             = 1,
	EBrgPersonality_Cowardly                           = 2,
	EBrgPersonality_Cautious                           = 3,
	EBrgPersonality_Max                                = 4
};

// Enum BrgGameBase.BrgGameDefine.EBrgHostileGroup
enum class EBrgHostileGroup : uint8_t
{
	EBrgHostileGroup_None                              = 0,
	EBrgHostileGroup_Player                            = 1,
	EBrgHostileGroup_Jackal                            = 2,
	EBrgHostileGroup_Max                               = 3
};

// Enum BrgGameBase.BrgGameDefine.EBrgHostileTargetType
enum class EBrgHostileTargetType : uint8_t
{
	EBrgHostileTargetType_All                          = 0,
	EBrgHostileTargetType_Player                       = 1,
	EBrgHostileTargetType_ExceptSameGroup              = 2,
	EBrgHostileTargetType_Confusion                    = 3,
	EBrgHostileTargetType_None                         = 4,
	EBrgHostileTargetType_Max                          = 5
};

// Enum BrgGameBase.BrgGameDefine.EBrgKnockbackType
enum class EBrgKnockbackType : uint8_t
{
	EBrgKnockbackType_Motion                           = 0,
	EBrgKnockbackType_Program                          = 1,
	EBrgKnockbackType_MotionProgram                    = 2,
	EBrgClimbLevel_Max                                 = 3,
	EBrgKnockbackType_END                              = 4
};

// Enum BrgGameBase.BrgGameDefine.EBrgVoiceType
enum class EBrgVoiceType : uint8_t
{
	EBrgVoiceType_Male01                               = 0,
	EBrgVoiceType_Male02                               = 1,
	EBrgVoiceType_Male03                               = 2,
	EBrgVoiceType_Male04                               = 3,
	EBrgVoiceType_Male05                               = 4,
	EBrgVoiceType_Male06                               = 5,
	EBrgVoiceType_Male07                               = 6,
	EBrgVoiceType_Male08                               = 7,
	EBrgVoiceType_Female01                             = 8,
	EBrgVoiceType_Female02                             = 9,
	EBrgVoiceType_Female03                             = 10,
	EBrgVoiceType_Female04                             = 11,
	EBrgVoiceType_Female05                             = 12,
	EBrgVoiceType_Female06                             = 13,
	EBrgVoiceType_Female07                             = 14,
	EBrgVoiceType_Female08                             = 15,
	EBrgVoiceType_Zombie01                             = 16,
	EBrgVoiceType_Zombie02                             = 17,
	EBrgVoiceType_Zombie03                             = 18,
	EBrgVoiceType_Zombie04                             = 19,
	EBrgVoiceType_Zombie05                             = 20,
	EBrgVoiceType_Zombie06                             = 21,
	EBrgVoiceType_Zombie07                             = 22,
	EBrgVoiceType_Zombie08                             = 23,
	EBrgVoiceType_JackalX                              = 24,
	EBrgVoiceType_JackalY                              = 25,
	EBrgVoiceType_JackalZ                              = 26,
	EBrgVoiceType_Hunk                                 = 27,
	EBrgVoiceType_Jindie                               = 28,
	EBrgVoiceType_Goto09                               = 29,
	EBrgVoiceType_U10                                  = 30,
	EBrgVoiceType_BossMax                              = 31,
	EBrgVoiceType_BossJackson                          = 32,
	EBrgVoiceType_BossCrowley                          = 33,
	EBrgVoiceType_BossGunkan                           = 34,
	EBrgVoiceType_BossZombie                           = 35,
	EBrgVoiceType_WhiteSteel                           = 36,
	EBrgVoiceType_RedNapalm                            = 37,
	EBrgVoiceType_BlackThunder                         = 38,
	EBrgVoiceType_PaleWind                             = 39,
	EBrgVoiceType_FrogHuman                            = 40,
	EBrgVoiceType_FrogAnimal                           = 41,
	EBrgVoiceType_Max                                  = 42
};

// Enum BrgGameBase.BrgGameDefine.EBrgGameStartType
enum class EBrgGameStartType : uint8_t
{
	EBrgGameStartType_NewGame                          = 0,
	EBrgGameStartType_ClearFloor                       = 1,
	EBrgGameStartType_MoveFloor                        = 2,
	EBrgGameStartType_TakeElevator                     = 3,
	EBrgGameStartType_LoadGame                         = 4,
	EBrgGameStartType_ResumeGame                       = 5,
	EBrgGameStartType_RelieveGame                      = 6,
	EBrgGameStartType_None                             = 7,
	EBrgGameStartType_Max                              = 8
};

// Enum BrgGameBase.BrgGameDefine.EBrgAIMode
enum class EBrgAIMode : uint8_t
{
	EBrgAIMode_Normal                                  = 0,
	EBrgAIMode_TutorialNormal                          = 1,
	EBrgAIMode_TutorialWeaponDrop                      = 2,
	EBrgAIMode_TutorialBoss                            = 3,
	EBrgAIMode_TutorialGore                            = 4,
	EBrgAIMode_Colosseum                               = 5,
	EBrgAIMode_END                                     = 6
};

// Enum BrgGameBase.BrgGameDefine.EBrgStartBehavior
enum class EBrgStartBehavior : uint8_t
{
	EBrgStartBehavior_Relax                            = 0,
	EBrgStartBehavior_Battle                           = 1,
	EBrgStartBehavior_Passive                          = 2,
	EBrgStartBehavior_Wander                           = 3,
	EBrgStartBehavior_Stop                             = 4,
	EBrgStartBehavior_Ragdoll                          = 5,
	EBrgStartBehavior_Search                           = 6,
	EBrgStartBehavior_CinemaEnd                        = 7,
	EBrgStartBehavior_Balloon                          = 8,
	EBrgStartBehavior_END                              = 9
};

// Enum BrgGameBase.BrgGameDefine.EBrgFootAxis
enum class EBrgFootAxis : uint8_t
{
	EBrgFootAxis_Right                                 = 0,
	EBrgFootAxis_Left                                  = 1,
	EBrgFootAxis_Max                                   = 2
};

// Enum BrgGameBase.BrgGameDefine.EBrgPartSpeciality
enum class EBrgPartSpeciality : uint8_t
{
	EBrgPartSpeciality_None                            = 0,
	EBrgPartSpeciality_NewColor                        = 1,
	EBrgPartSpeciality_Rage                            = 2,
	EBrgPartSpeciality_Heaven                          = 3,
	EBrgPartSpeciality_Death                           = 4,
	EBrgPartSpeciality_NMH                             = 5,
	EBrgPartSpeciality_Drain                           = 6,
	EBrgPartSpeciality_Max                             = 7
};

// Enum BrgGameBase.BrgGameDefine.EBrgAttackAttr
enum class EBrgAttackAttr : uint8_t
{
	EBrgAttackAttr_None                                = 0,
	EBrgAttackAttr_Slash                               = 1,
	EBrgAttackAttr_Blow                                = 2,
	EBrgAttackAttr_Shoot                               = 3,
	EBrgAttackAttr_Fire                                = 4,
	EBrgAttackAttr_Electric                            = 5,
	EBrgAttackAttr_Poison                              = 6,
	EBrgAttackAttr_Max                                 = 7
};

// Enum BrgGameBase.BrgGameDefine.EBrgArmWeaponType
enum class EBrgArmWeaponType : uint8_t
{
	EBrgArmWeaponType_EmptyHand                        = 0,
	EBrgArmWeaponType_BeamMachete                      = 1,
	EBrgArmWeaponType_ButterflyKnife                   = 2,
	EBrgArmWeaponType_BattleAxe                        = 3,
	EBrgArmWeaponType_CrossBow                         = 4,
	EBrgArmWeaponType_NailBat                          = 5,
	EBrgArmWeaponType_DiscSawKnuckle                   = 6,
	EBrgArmWeaponType_FlameRadiation                   = 7,
	EBrgArmWeaponType_Hammer                           = 8,
	EBrgArmWeaponType_Pecker                           = 9,
	EBrgArmWeaponType_Spear                            = 10,
	EBrgArmWeaponType_Katana                           = 11,
	EBrgArmWeaponType_Revolver                         = 12,
	EBrgArmWeaponType_StunRod                          = 13,
	EBrgArmWeaponType_ShotGun                          = 14,
	EBrgArmWeaponType_Mine                             = 15,
	EBrgArmWeaponType_Claw                             = 16,
	EBrgArmWeaponType_MorningStar                      = 17,
	EBrgArmWeaponType_SniperRifle                      = 18,
	EBrgArmWeaponType_Sabre                            = 19,
	EBrgArmWeaponType_FireRod                          = 20,
	EBrgArmWeaponType_AssaultRifle                     = 21,
	EBrgArmWeaponType_BoxingGlove                      = 22,
	EBrgArmWeaponType_PitchingMachine                  = 23,
	EBrgArmWeaponType_Sword                            = 24,
	EBrgArmWeaponType_Yoyo                             = 25,
	EBrgArmWeaponType_Fireworks                        = 26,
	EBrgArmWeaponType_Archery                          = 27,
	EBrgArmWeaponType_Bike                             = 28,
	EBrgArmWeaponType_NailGun                          = 29,
	EBrgArmWeaponType_ChainSaw                         = 30,
	EBrgArmWeaponType_Drill                            = 31,
	EBrgArmWeaponType_Bowling                          = 32,
	EBrgArmWeaponType_IceHockey                        = 33,
	EBrgArmWeaponType_Arcwelding                       = 34,
	EBrgArmWeaponType_Cleaver                          = 35,
	EBrgArmWeaponType_Iron                             = 36,
	EBrgArmWeaponType_ThunderRod                       = 37,
	EBrgArmWeaponType_Shovel                           = 38,
	EBrgArmWeaponType_FireBaton                        = 39,
	EBrgArmWeaponType_Sickle                           = 40,
	EBrgArmWeaponType_ThrowingKnife                    = 41,
	EBrgArmWeaponType_RocketLauncher                   = 42,
	EBrgArmWeaponType_BeamSword                        = 43,
	EBrgArmWeaponType_BeamYoyo                         = 44,
	EBrgArmWeaponType_BeamGun                          = 45,
	EBrgArmWeaponType_WhiteSteelHammer                 = 46,
	EBrgArmWeaponType_WhiteSteelClaw                   = 47,
	EBrgArmWeaponType_RedNapalmGun                     = 48,
	EBrgArmWeaponType_BlackThunderSword                = 49,
	EBrgArmWeaponType_BlackThunderMedusa               = 50,
	EBrgArmWeaponType_PaleWindBobsled                  = 51,
	EBrgArmWeaponType_Shishimai                        = 52,
	EBrgArmWeaponType_TaserGun                         = 53,
	EBrgArmWeaponType_SquareTimber                     = 54,
	EBrgArmWeaponType_LaserGun                         = 55,
	EBrgArmWeaponType_Umbrella                         = 56,
	EBrgArmWeaponType_FireExtinguisher                 = 57,
	EBrgArmWeaponType_Sand                             = 58,
	EBrgArmWeaponType_Shield                           = 59,
	EBrgArmWeaponType_GasolineTank                     = 60,
	EBrgArmWeaponType_Torch                            = 61,
	EBrgArmWeaponType_Bottle                           = 62,
	EBrgArmWeaponType_Food                             = 63,
	EBrgArmWeaponType_Medical                          = 64,
	EBrgArmWeaponType_Max                              = 65
};

// Enum BrgGameBase.BrgGameDefine.EBrgDropItemCreateType
enum class EBrgDropItemCreateType : uint8_t
{
	EBrgDropItemCreateType_Level                       = 0,
	EBrgDropItemCreateType_Player                      = 1,
	EBrgDropItemCreateType_Zombie                      = 2,
	EBrgDropItemCreateType_Beast                       = 3,
	EBrgDropItemCreateType_TreasureZakoTrBox           = 4,
	EBrgDropItemCreateType_END                         = 5
};

// Enum BrgGameBase.BrgGameDefine.EGamePadIcon
enum class EGamePadIcon : uint8_t
{
	EGamePadIcon_B                                     = 0,
	EGamePadIcon_A                                     = 1,
	EGamePadIcon_X                                     = 2,
	EGamePadIcon_Y                                     = 3,
	EGamePadIcon_L1                                    = 4,
	EGamePadIcon_R1                                    = 5,
	EGamePadIcon_L2                                    = 6,
	EGamePadIcon_R2                                    = 7,
	EGamePadIcon_L3                                    = 8,
	EGamePadIcon_R3                                    = 9,
	EGamePadIcon_DPAD                                  = 10,
	EGamePadIcon_LSTICK                                = 11,
	EGamePadIcon_RSTICK                                = 12,
	EGamePadIcon_LSTICK_LR                             = 13,
	EGamePadIcon_LSTICK_UD                             = 14,
	EGamePadIcon_RSTICK_LR                             = 15,
	EGamePadIcon_RSTICK_UD                             = 16,
	EGamePadIcon_START                                 = 17,
	EGamePadIcon_SELECT                                = 18,
	EGamePadIcon_MENU_SELECT                           = 19,
	EGamePadIcon_MENU_CANCEL                           = 20,
	EGamePadIcon_Num                                   = 21,
	EGamePadIcon_END                                   = 22
};

// Enum BrgGameBase.BrgGameDefine.EGamePadInput
enum class EGamePadInput : uint8_t
{
	EGamePadInput_Up                                   = 0,
	EGamePadInput_Down                                 = 1,
	EGamePadInput_Left                                 = 2,
	EGamePadInput_Right                                = 3,
	EGamePadInput_Select                               = 4,
	EGamePadInput_Cancel                               = 5,
	EGamePadInput_X                                    = 6,
	EGamePadInput_Y                                    = 7,
	EGamePadInput_L1                                   = 8,
	EGamePadInput_R1                                   = 9,
	EGamePadInput_L2                                   = 10,
	EGamePadInput_R2                                   = 11,
	EGamePadInput_L3                                   = 12,
	EGamePadInput_R3                                   = 13,
	EGamePadInput_Start                                = 14,
	EGamePadInput_Back                                 = 15,
	EGamePadInput_Num                                  = 16,
	EGamePadInput_END                                  = 17
};

// Enum BrgGameBase.BrgGameDefine.EBrgGameSpeedType
enum class EBrgGameSpeedType : uint8_t
{
	EBrgGameSpeedType_World                            = 0,
	EBrgGameSpeedType_PlayerOnly                       = 1,
	EBrgGameSpeedType_NpcOnly                          = 2,
	EBrgGameSpeedType_END                              = 3
};

// Enum BrgGameBase.BrgGameDefine.EBrgAttachTarget
enum class EBrgAttachTarget : uint8_t
{
	EBrgAttachTarget_Actor                             = 0,
	EBrgAttachTarget_Bone                              = 1,
	EBrgAttachTarget_Socket                            = 2,
	EBrgAttachTarget_END                               = 3
};

// Enum BrgGameBase.BrgGameDefine.EBrgUIPopUp_DamageColorType
enum class EBrgUIPopUp_DamageColorType : uint8_t
{
	EBrgUIPopUp_DamageColorType_Normal                 = 0,
	EBrgUIPopUp_DamageColorType_Small                  = 1,
	EBrgUIPopUp_DamageColorType_Big                    = 2,
	EBrgUIPopUp_DamageColorType_Guard                  = 3,
	EBrgUIPopUp_DamageColorType_END                    = 4
};

// Enum BrgGameBase.BrgGameDefine.EPhysMaterialEffectType
enum class EPhysMaterialEffectType : uint8_t
{
	EPhysMaterialEffectType_None                       = 0,
	EPhysMaterialEffectType_Run                        = 1,
	EPhysMaterialEffectType_Walk                       = 2,
	EPhysMaterialEffectType_Dash                       = 3,
	EPhysMaterialEffectType_Dodge                      = 4,
	EPhysMaterialEffectType_Slide                      = 5,
	EPhysMaterialEffectType_Scuff                      = 6,
	EPhysMaterialEffectType_Jump                       = 7,
	EPhysMaterialEffectType_Land                       = 8,
	EPhysMaterialEffectType_FallDown                   = 9,
	EPhysMaterialEffectType_Down                       = 10,
	EPhysMaterialEffectType_Knee                       = 11,
	EPhysMaterialEffectType_StandUp                    = 12,
	EPhysMaterialEffectType_Bullet                     = 13,
	EPhysMaterialEffectType_Shotgun                    = 14,
	EPhysMaterialEffectType_Sword                      = 15,
	EPhysMaterialEffectType_Fist                       = 16,
	EPhysMaterialEffectType_Impact                     = 17,
	EPhysMaterialEffectType_Hummer                     = 18,
	EPhysMaterialEffectType_CircleSaw                  = 19,
	EPhysMaterialEffectType_ChainSaw                   = 20,
	EPhysMaterialEffectType_Pickaxe                    = 21,
	EPhysMaterialEffectType_BigImpact                  = 22,
	EPhysMaterialEffectType_Explosion                  = 23,
	EPhysMaterialEffectType_TailImpact                 = 24,
	EPhysMaterialEffectType_TailIn                     = 25,
	EPhysMaterialEffectType_TailOut                    = 26,
	EPhysMaterialEffectType_BigSlide                   = 27,
	EPhysMaterialEffectType_Hover                      = 28,
	EPhysMaterialEffectType_Dig                        = 29,
	EPhysMaterialEffectType_Press                      = 30,
	EPhysMaterialEffectType_END                        = 31
};

// Enum BrgGameBase.BrgGameDefine.EPhysMatSEGeneralType
enum class EPhysMatSEGeneralType : uint8_t
{
	EPhysMatSEGeneralType_None                         = 0,
	EPhysMatSEGeneralType_MetalWalkLight               = 1,
	EPhysMatSEGeneralType_MetalWalkHeavy               = 2,
	EPhysMatSEGeneralType_MetalHandLight               = 3,
	EPhysMatSEGeneralType_MetalHandHeavy               = 4,
	EPhysMatSEGeneralType_MetalDownLight               = 5,
	EPhysMatSEGeneralType_MetalDownHeavy               = 6,
	EPhysMatSEGeneralType_MetalHitLight                = 7,
	EPhysMatSEGeneralType_MetalHitHeavy                = 8,
	EPhysMatSEGeneralType_RubberWalk                   = 9,
	EPhysMatSEGeneralType_RubberJump                   = 10,
	EPhysMatSEGeneralType_RubberLand                   = 11,
	EPhysMatSEGeneralType_RubberScuff                  = 12,
	EPhysMatSEGeneralType_RubberSlip                   = 13,
	EPhysMatSEGeneralType_PlasticWalk                  = 14,
	EPhysMatSEGeneralType_FleshWalkLight               = 15,
	EPhysMatSEGeneralType_FleshWalkMedium              = 16,
	EPhysMatSEGeneralType_FleshWalkHeavy               = 17,
	EPhysMatSEGeneralType_FleshWalkHeavyWet            = 18,
	EPhysMatSEGeneralType_FleshJumpLight               = 19,
	EPhysMatSEGeneralType_FleshJumpMedium              = 20,
	EPhysMatSEGeneralType_FleshJumpHeavy               = 21,
	EPhysMatSEGeneralType_FleshLandLight               = 22,
	EPhysMatSEGeneralType_FleshLandMedium              = 23,
	EPhysMatSEGeneralType_FleshLandHeavy               = 24,
	EPhysMatSEGeneralType_FleshDownLight               = 25,
	EPhysMatSEGeneralType_FleshDownMedium              = 26,
	EPhysMatSEGeneralType_FleshDownHeavy               = 27,
	EPhysMatSEGeneralType_FleshHitLight                = 28,
	EPhysMatSEGeneralType_FleshHitMedium               = 29,
	EPhysMatSEGeneralType_FleshHitHeavy                = 30,
	EPhysMatSEGeneralType_END                          = 31
};

// Enum BrgGameBase.BrgGameDefine.EPlayerFootMatType
enum class EPlayerFootMatType : uint8_t
{
	EPlayerFootMatType_Bara                            = 0,
	EPlayerFootMatType_Shoes                           = 1,
	EPlayerFootMatType_Skate                           = 2,
	EPlayerFootMatType_END                             = 3
};

// Enum BrgGameBase.BrgGameDefine.EPhysMatSEPartType
enum class EPhysMatSEPartType : uint8_t
{
	EPhysMatSEPartType_Drop                            = 0,
	EPhysMatSEPartType_END                             = 1
};

// Enum BrgGameBase.BrgGameDefine.EPhysMatSEWeaponType
enum class EPhysMatSEWeaponType : uint8_t
{
	EPhysMatSEWeaponType_Hit                           = 0,
	EPhysMatSEWeaponType_END                           = 1
};

// Enum BrgGameBase.BrgGameDefine.EPhysMatPlayerSEType
enum class EPhysMatPlayerSEType : uint8_t
{
	EPhysMatPlayerSEType_None                          = 0,
	EPhysMatPlayerSEType_Walk                          = 1,
	EPhysMatPlayerSEType_Dodge                         = 2,
	EPhysMatPlayerSEType_Slide                         = 3,
	EPhysMatPlayerSEType_Scuff                         = 4,
	EPhysMatPlayerSEType_Jump                          = 5,
	EPhysMatPlayerSEType_Land                          = 6,
	EPhysMatPlayerSEType_Down                          = 7,
	EPhysMatPlayerSEType_Knee                          = 8,
	EPhysMatPlayerSEType_StandUp                       = 9,
	EPhysMatPlayerSEType_END                           = 10
};

// Enum BrgGameBase.BrgGameDefine.EPhysMatSEKind
enum class EPhysMatSEKind : uint8_t
{
	EPhysMatSEKind_None                                = 0,
	EPhysMatSEKind_WeaponFist                          = 1,
	EPhysMatSEKind_WeaponMachete                       = 2,
	EPhysMatSEKind_WeaponButterflyKnife                = 3,
	EPhysMatSEKind_WeaponBattleAxe                     = 4,
	EPhysMatSEKind_WeaponCrossbow                      = 5,
	EPhysMatSEKind_WeaponSpikeBat                      = 6,
	EPhysMatSEKind_WeaponCircleCutter                  = 7,
	EPhysMatSEKind_WeaponFlamethrower                  = 8,
	EPhysMatSEKind_WeaponHammer                        = 9,
	EPhysMatSEKind_WeaponPickaxe                       = 10,
	EPhysMatSEKind_WeaponKatana                        = 11,
	EPhysMatSEKind_WeaponAssaultRifle                  = 12,
	EPhysMatSEKind_WeaponUmbrella                      = 13,
	EPhysMatSEKind_WeaponFireExtinguisher              = 14,
	EPhysMatSEKind_WeaponSand                          = 15,
	EPhysMatSEKind_WeaponSpear                         = 16,
	EPhysMatSEKind_WeaponShield                        = 17,
	EPhysMatSEKind_WeaponGasolineTank                  = 18,
	EPhysMatSEKind_WeaponRevolver                      = 19,
	EPhysMatSEKind_WeaponStunRod                       = 20,
	EPhysMatSEKind_WeaponShotGun                       = 21,
	EPhysMatSEKind_WeaponMine                          = 22,
	EPhysMatSEKind_WeaponClaw                          = 23,
	EPhysMatSEKind_WeaponTorch                         = 24,
	EPhysMatSEKind_WeaponMorningStar                   = 25,
	EPhysMatSEKind_WeaponSniperRifle                   = 26,
	EPhysMatSEKind_WeaponSabre                         = 27,
	EPhysMatSEKind_WeaponBottle                        = 28,
	EPhysMatSEKind_WeaponFireRod                       = 29,
	EPhysMatSEKind_WeaponBoxingGlove                   = 30,
	EPhysMatSEKind_WeaponPitchingMachine               = 31,
	EPhysMatSEKind_WeaponSword                         = 32,
	EPhysMatSEKind_WeaponYoyo                          = 33,
	EPhysMatSEKind_WeaponFireworks                     = 34,
	EPhysMatSEKind_WeaponArchery                       = 35,
	EPhysMatSEKind_WeaponBike                          = 36,
	EPhysMatSEKind_WeaponNailGun                       = 37,
	EPhysMatSEKind_WeaponChainSaw                      = 38,
	EPhysMatSEKind_WeaponDrill                         = 39,
	EPhysMatSEKind_WeaponBowling                       = 40,
	EPhysMatSEKind_WeaponIceHockey                     = 41,
	EPhysMatSEKind_WeaponArcwelding                    = 42,
	EPhysMatSEKind_WeaponCleaver                       = 43,
	EPhysMatSEKind_WeaponIron                          = 44,
	EPhysMatSEKind_WeaponThunderRod                    = 45,
	EPhysMatSEKind_WeaponShovel                        = 46,
	EPhysMatSEKind_WeaponFireBaton                     = 47,
	EPhysMatSEKind_WeaponSickle                        = 48,
	EPhysMatSEKind_WeaponThrowingKnife                 = 49,
	EPhysMatSEKind_WeaponRocketLauncher                = 50,
	EPhysMatSEKind_WeaponBeamSword                     = 51,
	EPhysMatSEKind_WeaponBeamYoyo                      = 52,
	EPhysMatSEKind_WeaponBeamGun                       = 53,
	EPhysMatSEKind_WeaponWhiteSteelHammer              = 54,
	EPhysMatSEKind_WeaponWhiteSteelClaw                = 55,
	EPhysMatSEKind_WeaponRedNapalmGun                  = 56,
	EPhysMatSEKind_WeaponBlackThunderSword             = 57,
	EPhysMatSEKind_WeaponBlackThunderMedusa            = 58,
	EPhysMatSEKind_WeaponPaleWindBobsled               = 59,
	EPhysMatSEKind_WeaponPaleWindBobsledBullet         = 60,
	EPhysMatSEKind_WeaponShishimai                     = 61,
	EPhysMatSEKind_WeaponTaserGun                      = 62,
	EPhysMatSEKind_WeaponSquareTimber                  = 63,
	EPhysMatSEKind_WeaponKite                          = 64,
	EPhysMatSEKind_WeaponCommonMetal                   = 65,
	EPhysMatSEKind_HitFleshLight                       = 66,
	EPhysMatSEKind_HitFleshMedium                      = 67,
	EPhysMatSEKind_HitFleshHeavy                       = 68,
	EPhysMatSEKind_PartHeadCloth                       = 69,
	EPhysMatSEKind_PartHeadMetal                       = 70,
	EPhysMatSEKind_PartBodyCloth                       = 71,
	EPhysMatSEKind_PartBodyMetal                       = 72,
	EPhysMatSEKind_PartWeaponWood                      = 73,
	EPhysMatSEKind_PartWeaponMetalSword                = 74,
	EPhysMatSEKind_PartWeaponMetalLight                = 75,
	EPhysMatSEKind_PartWeaponMetalHeavy                = 76,
	EPhysMatSEKind_PartWeaponGlass                     = 77,
	EPhysMatSEKind_PartWeaponPlastic                   = 78,
	EPhysMatSEKind_PartWeaponMetalSolid                = 79,
	EPhysMatSEKind_PartWeaponWoodMetal                 = 80,
	EPhysMatSEKind_END                                 = 81
};

// Enum BrgGameBase.BrgGameDefine.ELockonType
enum class ELockonType : uint8_t
{
	ELockonType_Hold                                   = 0,
	ELockonType_Toggle                                 = 1,
	ELockonType_Max                                    = 2
};

// Enum BrgGameBase.BrgGameDefine.EBrgTransitionState
enum class EBrgTransitionState : uint8_t
{
	EBrgTransitionState_In                             = 0,
	EBrgTransitionState_Loop                           = 1,
	EBrgTransitionState_Out                            = 2,
	EBrgTransitionState_Max                            = 3
};

// Enum BrgGameBase.BrgGameDefine.EBrgMotionChain
enum class EBrgMotionChain : uint8_t
{
	EBrgMotionChain_In                                 = 0,
	EBrgMotionChain_Loop                               = 1,
	EBrgMotionChain_Out                                = 2,
	EBrgMotionChain_None                               = 3,
	EBrgMotionChain_Max                                = 4
};

// Enum BrgGameBase.BrgGameDefine.EBrgDirCalcType
enum class EBrgDirCalcType : uint8_t
{
	EBrgDirCalcType_FourDirection                      = 0,
	EBrgDirCalcType_EightDirection                     = 1,
	EBrgDirCalcType_FrontBack                          = 2,
	EBrgDirCalcType_RightLeft                          = 3,
	EBrgDirCalcType_Front                              = 4,
	EBrgDirCalcType_Back                               = 5,
	EBrgDirCalcType_Right                              = 6,
	EBrgDirCalcType_Left                               = 7,
	EBrgDirCalcType_Max                                = 8
};

// Enum BrgGameBase.BrgGameDefine.EBrgLRDirType
enum class EBrgLRDirType : uint8_t
{
	EBrgLRDirType_Left                                 = 0,
	EBrgLRDirType_Right                                = 1,
	EBrgLRDirType_Max                                  = 2
};

// Enum BrgGameBase.BrgGameDefine.EBrgDirType
enum class EBrgDirType : uint8_t
{
	EBrgDirType_Front                                  = 0,
	EBrgDirType_Right                                  = 1,
	EBrgDirType_Back                                   = 2,
	EBrgDirType_Left                                   = 3,
	EBrgDirType_FrontRight                             = 4,
	EBrgDirType_BackRight                              = 5,
	EBrgDirType_BackLeft                               = 6,
	EBrgDirType_FrontLeft                              = 7,
	EBrgDirType_Max                                    = 8
};

// Enum BrgGameBase.BrgGameDefine.EBrgBoss4Mawashi
enum class EBrgBoss4Mawashi : uint8_t
{
	EBrgBoss4Mawashi_Player                            = 0,
	EBrgBoss4Mawashi_Senpou                            = 1,
	EBrgBoss4Mawashi_Jihou                             = 2,
	EBrgBoss4Mawashi_Tyuuken                           = 3,
	EBrgBoss4Mawashi_END                               = 4
};

// Enum BrgGameBase.BrgGameDefine.EBrgEquipPartMesh
enum class EBrgEquipPartMesh : uint8_t
{
	EBrgEquipPartMesh_Head                             = 0,
	EBrgEquipPartMesh_Arm_L                            = 1,
	EBrgEquipPartMesh_Arm_R                            = 2,
	EBrgEquipPartMesh_Arm_Socket_Hand_L                = 3,
	EBrgEquipPartMesh_Arm_Socket_Hand_R                = 4,
	EBrgEquipPartMesh_Arm_Socket_Elbow_L               = 5,
	EBrgEquipPartMesh_Arm_Socket_Elbow_R               = 6,
	EBrgEquipPartMesh_Arm_Projectile_L                 = 7,
	EBrgEquipPartMesh_Arm_Projectile_R                 = 8,
	EBrgEquipPartMesh_Body                             = 9,
	EBrgEquipPartMesh_Legs                             = 10,
	EBrgEquipPartMesh_Mask                             = 11,
	EBrgEquipPartMesh_Legs_Sub                         = 12,
	EBrgEquipPartMesh_Hair                             = 13,
	EBrgEquipPartMesh_BaseBody                         = 14,
	EBrgEquipPartMesh_Max                              = 15
};

// Enum BrgGameBase.BrgGameDefine.EBrgConfig
enum class EBrgConfig : uint8_t
{
	EBrgConfig_Camera_XAxis                            = 0,
	EBrgConfig_Camera_YAxis                            = 1,
	EBrgConfig_Camera_Mouse_Sens                       = 2,
	EBrgConfig_BGM_Volume                              = 3,
	EBrgConfig_SE_Volume                               = 4,
	EBrgConfig_Voice_Volume                            = 5,
	EBrgConfig_Radio                                   = 6,
	EBrgConfig_Pad_Volume                              = 7,
	EBrgConfig_Vibration                               = 8,
	EBrgConfig_Subtitle                                = 9,
	EBrgConfig_Brightness                              = 10,
	EBrgConfig_Format                                  = 11,
	EBrgConfig_Num                                     = 12,
	EBrgConfig_END                                     = 13
};

// Enum BrgGameBase.BrgGameDefine.EBrgPlayerMode
enum class EBrgPlayerMode : uint8_t
{
	EBrgPlayerMode_Peace                               = 0,
	EBrgPlayerMode_Battle                              = 1,
	EBrgPlayerMode_Stop                                = 2,
	EBrgPlayerMode_Walk                                = 3,
	EBrgPlayerMode_TargetWalk                          = 4,
	EBrgPlayerMode_Passive                             = 5,
	EBrgPlayerMode_Corpse                              = 6,
	EBrgPlayerMode_ReturnGame                          = 7,
	EBrgPlayerMode_END                                 = 8
};

// Enum BrgGameBase.BrgGameDefine.EBrgGameRegion
enum class EBrgGameRegion : uint8_t
{
	EBrgGameRegion_JP                                  = 0,
	EBrgGameRegion_US                                  = 1,
	EBrgGameRegion_EU                                  = 2,
	EBrgGameRegion_AS                                  = 3,
	EBrgGameRegion_Max                                 = 4
};

// Enum BrgGameBase.BrgGameDefine.EBrgGameMode
enum class EBrgGameMode : uint8_t
{
	EBrgGameMode_Exploration                           = 0,
	EBrgGameMode_Caution                               = 1,
	EBrgGameMode_Battle                                = 2,
	EBrgGameMode_Max                                   = 3
};

// Enum BrgGameBase.BrgGameInfoNativeBase.BrgPlatform
enum class EBrgPlatform : uint8_t
{
	BrgPlatform_PC                                     = 0,
	BrgPlatform_PS4                                    = 1,
	BrgPlatform_SteamPC                                = 2,
	BrgPlatform_END                                    = 3
};

// Enum BrgGameBase.BrgGameInfoNativeBase.MsgpackManagerErrorBehavior
enum class EMsgpackManagerErrorBehavior : uint8_t
{
	MsgpackManagerErrorBehavior_DoNothing              = 0,
	MsgpackManagerErrorBehavior_Warning                = 1,
	MsgpackManagerErrorBehavior_Halt                   = 2,
	MsgpackManagerErrorBehavior_END                    = 3
};

// Enum BrgGameBase.BrgHUDBase.EDrawXBasePos
enum class EDrawXBasePos : uint8_t
{
	EDrawXBasePos_Free                                 = 0,
	EDrawXBasePos_Left                                 = 1,
	EDrawXBasePos_Center                               = 2,
	EDrawXBasePos_Right                                = 3,
	EDrawXBasePos_END                                  = 4
};

// Enum BrgGameBase.BrgHUDBase.EScreenMode
enum class EScreenMode : uint8_t
{
	EScreenMode_1080p                                  = 0,
	EScreenMode_720p                                   = 1,
	EScreenMode_Num                                    = 2,
	EScreenMode_END                                    = 3
};

// Enum BrgGameBase.BrgHUDBase.EDrawYBasePos
enum class EDrawYBasePos : uint8_t
{
	EDrawYBasePos_Free                                 = 0,
	EDrawYBasePos_Top                                  = 1,
	EDrawYBasePos_Center                               = 2,
	EDrawYBasePos_Bottom                               = 3,
	EDrawYBasePos_END                                  = 4
};

// Enum BrgGameBase.BrgHUDBase.EBrgUIDrawCharType
enum class EBrgUIDrawCharType : uint8_t
{
	EBrgUIDrawCharType_Char                            = 0,
	EBrgUIDrawCharType_Char_SubFont                    = 1,
	EBrgUIDrawCharType_Icon                            = 2,
	EBrgUIDrawCharType_END                             = 3
};

// Enum BrgGameBase.BrgHUDBase.EBrgUIImageChar
enum class EBrgUIImageChar : uint8_t
{
	EBrgUIImageChar_R                                  = 0,
	EBrgUIImageChar_TM                                 = 1,
	EBrgUIImageChar_Num                                = 2,
	EBrgUIImageChar_END                                = 3
};

// Enum BrgGameBase.BrgHUDBase.EBrgUIDrawCharSubType
enum class EBrgUIDrawCharSubType : uint8_t
{
	EBrgUIDrawCharSubType_Other                        = 0,
	EBrgUIDrawCharSubType_EngUp                        = 1,
	EBrgUIDrawCharSubType_EngLow                       = 2,
	EBrgUIDrawCharSubType_Number                       = 3,
	EBrgUIDrawCharSubType_END                          = 4
};

// Enum BrgGameBase.BrgHUDBase.EBrgUIDrawCharIcon
enum class EBrgUIDrawCharIcon : uint8_t
{
	EBrgUIDrawCharIcon_Button_Triangle                 = 0,
	EBrgUIDrawCharIcon_Button_Circle                   = 1,
	EBrgUIDrawCharIcon_Button_Cross                    = 2,
	EBrgUIDrawCharIcon_Button_Square                   = 3,
	EBrgUIDrawCharIcon_Button_L1                       = 4,
	EBrgUIDrawCharIcon_Button_R1                       = 5,
	EBrgUIDrawCharIcon_Button_L2                       = 6,
	EBrgUIDrawCharIcon_Button_R2                       = 7,
	EBrgUIDrawCharIcon_Button_L3                       = 8,
	EBrgUIDrawCharIcon_Button_R3                       = 9,
	EBrgUIDrawCharIcon_DPAD_Left                       = 10,
	EBrgUIDrawCharIcon_DPAD_Right                      = 11,
	EBrgUIDrawCharIcon_DPAD_Up                         = 12,
	EBrgUIDrawCharIcon_DPAD_Down                       = 13,
	EBrgUIDrawCharIcon_DPAD                            = 14,
	EBrgUIDrawCharIcon_LStick                          = 15,
	EBrgUIDrawCharIcon_RStick                          = 16,
	EBrgUIDrawCharIcon_Button_Triangle_S               = 17,
	EBrgUIDrawCharIcon_Button_Circle_S                 = 18,
	EBrgUIDrawCharIcon_Button_Cross_S                  = 19,
	EBrgUIDrawCharIcon_Button_Square_S                 = 20,
	EBrgUIDrawCharIcon_Button_Triangle_S_Fix           = 21,
	EBrgUIDrawCharIcon_Button_Circle_S_Fix             = 22,
	EBrgUIDrawCharIcon_Button_Cross_S_Fix              = 23,
	EBrgUIDrawCharIcon_Button_Square_S_Fix             = 24,
	EBrgUIDrawCharIcon_Button_L1_S                     = 25,
	EBrgUIDrawCharIcon_Button_R1_S                     = 26,
	EBrgUIDrawCharIcon_Button_L2_S                     = 27,
	EBrgUIDrawCharIcon_Button_R2_S                     = 28,
	EBrgUIDrawCharIcon_Button_L3_S                     = 29,
	EBrgUIDrawCharIcon_Button_R3_S                     = 30,
	EBrgUIDrawCharIcon_DPAD_S                          = 31,
	EBrgUIDrawCharIcon_LStick_S                        = 32,
	EBrgUIDrawCharIcon_RStick_S                        = 33,
	EBrgUIDrawCharIcon_Button_Back_S                   = 34,
	EBrgUIDrawCharIcon_Button_Start_S                  = 35,
	EBrgUIDrawCharIcon_Key_Enter_S                     = 36,
	EBrgUIDrawCharIcon_Key_Throw_S                     = 37,
	EBrgUIDrawCharIcon_Key_ItemShiftL_S                = 38,
	EBrgUIDrawCharIcon_Key_ItemShiftR_S                = 39,
	EBrgUIDrawCharIcon_Key_Dash_S                      = 40,
	EBrgUIDrawCharIcon_Key_Interact_S                  = 41,
	EBrgUIDrawCharIcon_Key_Rage_S                      = 42,
	EBrgUIDrawCharIcon_Key_Eat_S                       = 43,
	EBrgUIDrawCharIcon_Key_AttackL_S                   = 44,
	EBrgUIDrawCharIcon_Key_AttackL_Sub_S               = 45,
	EBrgUIDrawCharIcon_Key_AttackR_S                   = 46,
	EBrgUIDrawCharIcon_Key_AttackR_Sub_S               = 47,
	EBrgUIDrawCharIcon_KillCoin                        = 48,
	EBrgUIDrawCharIcon_KillCoin_Flip                   = 49,
	EBrgUIDrawCharIcon_DeathMetal                      = 50,
	EBrgUIDrawCharIcon_DeathMetal_Flip                 = 51,
	EBrgUIDrawCharIcon_Spirit                          = 52,
	EBrgUIDrawCharIcon_RecyclePoint                    = 53,
	EBrgUIDrawCharIcon_Pass_Vip                        = 54,
	EBrgUIDrawCharIcon_Pass_1Day                       = 55,
	EBrgUIDrawCharIcon_Bloodnium                       = 56,
	EBrgUIDrawCharIcon_FighterIcon_BAL_Enma            = 57,
	EBrgUIDrawCharIcon_FighterIcon_BRE_Enma            = 58,
	EBrgUIDrawCharIcon_FighterIcon_DEF_Enma            = 59,
	EBrgUIDrawCharIcon_FighterIcon_TEC_Enma            = 60,
	EBrgUIDrawCharIcon_FighterIcon_SHT_Enma            = 61,
	EBrgUIDrawCharIcon_FighterIcon_COL_Enma            = 62,
	EBrgUIDrawCharIcon_FighterIcon_SKI_Enma            = 63,
	EBrgUIDrawCharIcon_FighterIcon_LUK_Enma            = 64,
	EBrgUIDrawCharIcon_TdmRank_None                    = 65,
	EBrgUIDrawCharIcon_TdmRank_Bronze                  = 66,
	EBrgUIDrawCharIcon_TdmRank_Silver                  = 67,
	EBrgUIDrawCharIcon_TdmRank_Gold                    = 68,
	EBrgUIDrawCharIcon_TdmRank_Platinum                = 69,
	EBrgUIDrawCharIcon_TdmRank_Diamond                 = 70,
	EBrgUIDrawCharIcon_LostBag_Copper                  = 71,
	EBrgUIDrawCharIcon_LostBag_Silver                  = 72,
	EBrgUIDrawCharIcon_LostBag_Gold                    = 73,
	EBrgUIDrawCharIcon_LostBag_Rainbow                 = 74,
	EBrgUIDrawCharIcon_LostBag_Platina                 = 75,
	EBrgUIDrawCharIcon_Num                             = 76,
	EBrgUIDrawCharIcon_END                             = 77
};

// Enum BrgGameBase.BrgUIImageBase.EMaterialEffect
enum class EMaterialEffect : uint8_t
{
	EMaterialEffect_Normal                             = 0,
	EMaterialEffect_AlphaClear                         = 1,
	EMaterialEffect_GraphBlend_Lerp                    = 2,
	EMaterialEffect_PreMulAlphaTex_GraphBlend_Lerp     = 3,
	EMaterialEffect_TexG_CommonRenderBlend             = 4,
	EMaterialEffect_TexR_VertexColorBlend              = 5,
	EMaterialEffect_IgnoreTexAlpha                     = 6,
	EMaterialEffect_IgnoreTexAlpha_Add                 = 7,
	EMaterialEffect_IgnoreTexAlpha_Mask                = 8,
	EMaterialEffect_IgnoreTexAlpha_Mask_OneMinus       = 9,
	EMaterialEffect_IgnoreTexAlpha_Mask_Add            = 10,
	EMaterialEffect_IgnoreTexAlpha_Mask_Add_OneMinus   = 11,
	EMaterialEffect_NormalTex_Modulate                 = 12,
	EMaterialEffect_NormalTex_Modulate_Mask            = 13,
	EMaterialEffect_NormalTex_Modulate_Mask_OneMinus   = 14,
	EMaterialEffect_NoTex_Modulate                     = 15,
	EMaterialEffect_NoTex_Modulate_Mask                = 16,
	EMaterialEffect_NoTex_Modulate_Mask_OneMinus       = 17,
	EMaterialEffect_MiniMapImage                       = 18,
	EMaterialEffect_MiniMapSpray                       = 19,
	EMaterialEffect_MiniMapMask                        = 20,
	EMaterialEffect_MiniMapCover                       = 21,
	EMaterialEffect_HUD                                = 22,
	EMaterialEffect_HUD_3D                             = 23,
	EMaterialEffect_GameOverDesaturate                 = 24,
	EMaterialEffect_SceneCaptureTexture                = 25,
	EMaterialEffect_Sticker_Standard                   = 26,
	EMaterialEffect_Sticker_Kira                       = 27,
	EMaterialEffect_CommonTopIconSpecial               = 28,
	EMaterialEffect_Num                                = 29,
	EMaterialEffect_END                                = 30
};

// Enum BrgGameBase.BrgUIImageBase.EMaterialAttr
enum class EMaterialAttr : uint8_t
{
	EMaterialAttr_UseMaskTex0                          = 0,
	EMaterialAttr_UseMaskTex1                          = 1,
	EMaterialAttr_Mask_OneMinus                        = 2,
	EMaterialAttr_AddBlendDraw                         = 3,
	EMaterialAttr_PreMulAlphaTex                       = 4,
	EMaterialAttr_IgnoreTexColor                       = 5,
	EMaterialAttr_3D                                   = 6,
	EMaterialAttr_Num                                  = 7,
	EMaterialAttr_END                                  = 8
};

// Enum BrgGameBase.BrgNetworkResponseInterface.BrgNetworkErrorType
enum class EBrgNetworkErrorType : uint8_t
{
	BrgNetworkErrorType_AppServer                      = 0,
	BrgNetworkErrorType_Library                        = 1,
	BrgNetworkErrorType_END                            = 2
};

// Enum BrgGameBase.BrgNetworkResponseInterface.BrgNetworkSaveLoadState
enum class EBrgNetworkSaveLoadState : uint8_t
{
	BrgNetworkSaveLoadState_None                       = 0,
	BrgNetworkSaveLoadState_RequestSave                = 1,
	BrgNetworkSaveLoadState_RequestLoad                = 2,
	BrgNetworkSaveLoadState_Processing                 = 3,
	BrgNetworkSaveLoadState_Done                       = 4,
	BrgNetworkSaveLoadState_Error                      = 5,
	BrgNetworkSaveLoadState_END                        = 6
};

// Enum BrgGameBase.BrgPartMesh.EBrgPartMeshComponentState
enum class EBrgPartMeshComponentState : uint8_t
{
	EBrgPartMeshComponentState_Idle                    = 0,
	EBrgPartMeshComponentState_Load                    = 1,
	EBrgPartMeshComponentState_Attach_Idle             = 2,
	EBrgPartMeshComponentState_Unload                  = 3,
	EBrgPartMeshComponentState_END                     = 4
};

// Enum BrgGameBase.BrgPartMesh.EBrgPartMeshComponentFadeOutState
enum class EBrgPartMeshComponentFadeOutState : uint8_t
{
	EBrgPartMeshComponentFadeOutState_Idle             = 0,
	EBrgPartMeshComponentFadeOutState_DeathColor       = 1,
	EBrgPartMeshComponentFadeOutState_DeathOpacity     = 2,
	EBrgPartMeshComponentFadeOutState_EndIdle          = 3,
	EBrgPartMeshComponentFadeOutState_END              = 4
};

// Enum BrgGameBase.BrgPartMesh.EBrgPartMeshConst
enum class EBrgPartMeshConst : uint8_t
{
	EBrgPartMeshConst_ZScale                           = 0,
	EBrgPartMeshConst_ZScale_StartTime                 = 1,
	EBrgPartMeshConst_ZScale_Time                      = 2,
	EBrgPartMeshConst_DeathColor_Time                  = 3,
	EBrgPartMeshConst_DeathOpacity_Time                = 4,
	EBrgPartMeshConst_DeathOpacity_Delay_Time          = 5,
	EBrgPartMeshConst_ItemDropDelay_Time               = 6,
	EBrgPartMeshConst_StartMushroomDelay_Time          = 7,
	EBrgPartMeshConst_DeathExplodeDelay_Time           = 8,
	EBrgPartMeshConst_PhysicsChange_Time               = 9,
	EBrgPartMeshConst_PhysicsStartDelay_Time           = 10,
	EBrgPartMeshConst_Head_Pawn_Z                      = 11,
	EBrgPartMeshConst_Arm_Pawn_Z                       = 12,
	EBrgPartMeshConst_Body_Pawn_Z                      = 13,
	EBrgPartMeshConst_Legs_Pawn_Z                      = 14,
	EBrgPartMeshConst_Back_Pawn_Z                      = 15,
	EBrgPartMeshConst_Num                              = 16,
	EBrgPartMeshConst_END                              = 17
};

// Enum BrgGameBase.BrgResourceLoadManager.EBrgResourceLoadManager_LoadMode
enum class EBrgResourceLoadManager_LoadMode : uint8_t
{
	EBrgResourceLoadManager_LoadMode_Coorperative      = 0,
	EBrgResourceLoadManager_LoadMode_Rush              = 1,
	EBrgResourceLoadManager_LoadMode_Burst             = 2,
	EBrgResourceLoadManager_LoadMode_END               = 3
};

// Enum BrgGameBase.BrgResourceLoadManager.EBrgResourceLoadManager_DataSetType
enum class EBrgResourceLoadManager_DataSetType : uint8_t
{
	EBrgResourceLoadManager_DataSetType_Font           = 0,
	EBrgResourceLoadManager_DataSetType_Texture2D      = 1,
	EBrgResourceLoadManager_DataSetType_Material       = 2,
	EBrgResourceLoadManager_DataSetType_MaterialInstanceConstant = 3,
	EBrgResourceLoadManager_DataSetType_SkeletalMesh   = 4,
	EBrgResourceLoadManager_DataSetType_StaticMesh     = 5,
	EBrgResourceLoadManager_DataSetType_PhysicsAsset   = 6,
	EBrgResourceLoadManager_DataSetType_AnimTree       = 7,
	EBrgResourceLoadManager_DataSetType_AnimSet        = 8,
	EBrgResourceLoadManager_DataSetType_ParticleSystem = 9,
	EBrgResourceLoadManager_DataSetType_SoundCue       = 10,
	EBrgResourceLoadManager_DataSetType_FracturedStaticMesh = 11,
	EBrgResourceLoadManager_DataSetType_Max            = 12
};

// Enum BrgGameBase.BrgUIAnim.EUIAnimType
enum class EUIAnimType : uint8_t
{
	EUIAnimType_Normal                                 = 0,
	EUIAnimType_Turn                                   = 1,
	EUIAnimType_END                                    = 2
};

// Enum BrgGameBase.BrgUIBlackSelectWindow.EBrgUIBlackSelectWindowState
enum class EBrgUIBlackSelectWindowState : uint8_t
{
	EBrgUIBlackSelectWindowState_Idle                  = 0,
	EBrgUIBlackSelectWindowState_Open                  = 1,
	EBrgUIBlackSelectWindowState_Select                = 2,
	EBrgUIBlackSelectWindowState_ItemOut               = 3,
	EBrgUIBlackSelectWindowState_Close                 = 4,
	EBrgUIBlackSelectWindowState_END                   = 5
};

// Enum BrgGameBase.BrgUIBlackWindow.EBrgUIBlackWindowState
enum class EBrgUIBlackWindowState : uint8_t
{
	EBrgUIBlackWindowState_Idle                        = 0,
	EBrgUIBlackWindowState_In                          = 1,
	EBrgUIBlackWindowState_InIdle                      = 2,
	EBrgUIBlackWindowState_Out                         = 3,
	EBrgUIBlackWindowState_END                         = 4
};

// Enum BrgGameBase.BrgUIBlackYesNoWindow.EBrgUIBlackYesNoWindowState
enum class EBrgUIBlackYesNoWindowState : uint8_t
{
	EBrgUIBlackYesNoWindowState_Idle                   = 0,
	EBrgUIBlackYesNoWindowState_Open                   = 1,
	EBrgUIBlackYesNoWindowState_Select                 = 2,
	EBrgUIBlackYesNoWindowState_ItemOut                = 3,
	EBrgUIBlackYesNoWindowState_Close                  = 4,
	EBrgUIBlackYesNoWindowState_END                    = 5
};

// Enum BrgGameBase.BrgUIBlackYesNoWindow.EBrgUIBlackYesNoWindowConst
enum class EBrgUIBlackYesNoWindowConst : uint8_t
{
	EBrgUIBlackYesNoWindowConst_WindowSizeX            = 0,
	EBrgUIBlackYesNoWindowConst_WindowSizeY            = 1,
	EBrgUIBlackYesNoWindowConst_MessageAddSizeX        = 2,
	EBrgUIBlackYesNoWindowConst_MessageY               = 3,
	EBrgUIBlackYesNoWindowConst_YesNoStrButtonX        = 4,
	EBrgUIBlackYesNoWindowConst_YesNoStrY              = 5,
	EBrgUIBlackYesNoWindowConst_YesNoButtonY           = 6,
	EBrgUIBlackYesNoWindowConst_Num                    = 7,
	EBrgUIBlackYesNoWindowConst_END                    = 8
};

// Enum BrgGameBase.BrgUIDebugGauge.EBrgUIDebugGaugeState
enum class EBrgUIDebugGaugeState : uint8_t
{
	EBrgUIDebugGaugeState_Idle                         = 0,
	EBrgUIDebugGaugeState_In                           = 1,
	EBrgUIDebugGaugeState_InIdle                       = 2,
	EBrgUIDebugGaugeState_Out                          = 3,
	EBrgUIDebugGaugeState_END                          = 4
};

// Enum BrgGameBase.BrgUIDebugMessage.EBrgUIDebugMessageState
enum class EBrgUIDebugMessageState : uint8_t
{
	EBrgUIDebugMessageState_Idle                       = 0,
	EBrgUIDebugMessageState_In                         = 1,
	EBrgUIDebugMessageState_InIdle                     = 2,
	EBrgUIDebugMessageState_ItemOut                    = 3,
	EBrgUIDebugMessageState_Out                        = 4,
	EBrgUIDebugMessageState_END                        = 5
};

// Enum BrgGameBase.BrgUIDebugMessage.EBrgUIDebugMessageConst
enum class EBrgUIDebugMessageConst : uint8_t
{
	EBrgUIDebugMessageConst_WindowAddSizeY             = 0,
	EBrgUIDebugMessageConst_MessageAddSizeX            = 1,
	EBrgUIDebugMessageConst_OneLineSizeY               = 2,
	EBrgUIDebugMessageConst_MessageY                   = 3,
	EBrgUIDebugMessageConst_Num                        = 4,
	EBrgUIDebugMessageConst_END                        = 5
};

// Enum BrgGameBase.BrgUIDebugSelectWindow.EBrgUIDebugSelectWindowState
enum class EBrgUIDebugSelectWindowState : uint8_t
{
	EBrgUIDebugSelectWindowState_Idle                  = 0,
	EBrgUIDebugSelectWindowState_In                    = 1,
	EBrgUIDebugSelectWindowState_ChoiceWait            = 2,
	EBrgUIDebugSelectWindowState_ItemOut               = 3,
	EBrgUIDebugSelectWindowState_Out                   = 4,
	EBrgUIDebugSelectWindowState_End                   = 5,
	EBrgUIDebugSelectWindowState_END                   = 6
};

// Enum BrgGameBase.BrgUIDebugSelectWindow.EBrgUIDebugSelectWindowConst
enum class EBrgUIDebugSelectWindowConst : uint8_t
{
	EBrgUIDebugSelectWindowConst_TopBottomSpace        = 0,
	EBrgUIDebugSelectWindowConst_LeftRightSpace        = 1,
	EBrgUIDebugSelectWindowConst_OneLineSizeY          = 2,
	EBrgUIDebugSelectWindowConst_OneUnitSpaceY         = 3,
	EBrgUIDebugSelectWindowConst_FontAddY              = 4,
	EBrgUIDebugSelectWindowConst_MessageWindowY        = 5,
	EBrgUIDebugSelectWindowConst_Num                   = 6,
	EBrgUIDebugSelectWindowConst_END                   = 7
};

// Enum BrgGameBase.BrgUIDebugString.EBrgUIDebugStringState
enum class EBrgUIDebugStringState : uint8_t
{
	EBrgUIDebugStringState_Idle                        = 0,
	EBrgUIDebugStringState_In                          = 1,
	EBrgUIDebugStringState_InIdle                      = 2,
	EBrgUIDebugStringState_Out                         = 3,
	EBrgUIDebugStringState_Change                      = 4,
	EBrgUIDebugStringState_END                         = 5
};

// Enum BrgGameBase.BrgUIDebugString.EBrgUIDebugStrState
enum class EBrgUIDebugStrState : uint8_t
{
	EBrgUIDebugStrState_Idle                           = 0,
	EBrgUIDebugStrState_In                             = 1,
	EBrgUIDebugStrState_InIdle                         = 2,
	EBrgUIDebugStrState_Out                            = 3,
	EBrgUIDebugStrState_END                            = 4
};

// Enum BrgGameBase.BrgUIDefine.EBrgUIMenu_CommonTop2_Icon
enum class EBrgUIMenu_CommonTop2_Icon : uint8_t
{
	EBrgUIMenu_CommonTop2_Icon_MyboDispatch            = 0,
	EBrgUIMenu_CommonTop2_Icon_MyboChange              = 1,
	EBrgUIMenu_CommonTop2_Icon_Extension               = 2,
	EBrgUIMenu_CommonTop2_Icon_TakeOut                 = 3,
	EBrgUIMenu_CommonTop2_Icon_Consign                 = 4,
	EBrgUIMenu_CommonTop2_Icon_StrengthEning           = 5,
	EBrgUIMenu_CommonTop2_Icon_Sell                    = 6,
	EBrgUIMenu_CommonTop2_Icon_Buy                     = 7,
	EBrgUIMenu_CommonTop2_Icon_Bloodnium               = 8,
	EBrgUIMenu_CommonTop2_Icon_RPExchange              = 9,
	EBrgUIMenu_CommonTop2_Icon_Recycle_Rmap            = 10,
	EBrgUIMenu_CommonTop2_Icon_Recycle_Decal           = 11,
	EBrgUIMenu_CommonTop2_Icon_LimitdItemList          = 12,
	EBrgUIMenu_CommonTop2_Icon_DHService               = 13,
	EBrgUIMenu_CommonTop2_Icon_Config                  = 14,
	EBrgUIMenu_CommonTop2_Icon_Config_Game             = 15,
	EBrgUIMenu_CommonTop2_Icon_Config_Graphic          = 16,
	EBrgUIMenu_CommonTop2_Icon_Config_Control          = 17,
	EBrgUIMenu_CommonTop2_Icon_Config_Control_Type     = 18,
	EBrgUIMenu_CommonTop2_Icon_Config_Control_Custom   = 19,
	EBrgUIMenu_CommonTop2_Icon_Config_Control_Key      = 20,
	EBrgUIMenu_CommonTop2_Icon_DeathBag                = 21,
	EBrgUIMenu_CommonTop2_Icon_CoinLocker              = 22,
	EBrgUIMenu_CommonTop2_Icon_EnmaTyou                = 23,
	EBrgUIMenu_CommonTop2_Icon_Infomation              = 24,
	EBrgUIMenu_CommonTop2_Icon_Return                  = 25,
	EBrgUIMenu_CommonTop2_Icon_ExitGame                = 26,
	EBrgUIMenu_CommonTop2_Icon_StickerBuy              = 27,
	EBrgUIMenu_CommonTop2_Icon_StickerSell             = 28,
	EBrgUIMenu_CommonTop2_Icon_StickerExchange         = 29,
	EBrgUIMenu_CommonTop2_Icon_StickerPut              = 30,
	EBrgUIMenu_CommonTop2_Icon_StickerGacha            = 31,
	EBrgUIMenu_CommonTop2_Icon_StickerGachaDeathMetal  = 32,
	EBrgUIMenu_CommonTop2_Icon_StickerGachaSpecial     = 33,
	EBrgUIMenu_CommonTop2_Icon_StickerGachaCollabo     = 34,
	EBrgUIMenu_CommonTop2_Icon_StickerGacha_List       = 35,
	EBrgUIMenu_CommonTop2_Icon_Prison_Escape           = 36,
	EBrgUIMenu_CommonTop2_Icon_Prison_Freezer          = 37,
	EBrgUIMenu_CommonTop2_Icon_Prison_Destruction      = 38,
	EBrgUIMenu_CommonTop2_Icon_FortTerminal_MyTeam     = 39,
	EBrgUIMenu_CommonTop2_Icon_FortTerminal_Fort       = 40,
	EBrgUIMenu_CommonTop2_Icon_FortTerminal_Raid       = 41,
	EBrgUIMenu_CommonTop2_Icon_FortTerminal_Report     = 42,
	EBrgUIMenu_CommonTop2_Icon_FortTerminal_Ranking    = 43,
	EBrgUIMenu_CommonTop2_Icon_FortTerminal_DefenseSetting = 44,
	EBrgUIMenu_CommonTop2_Icon_FortTerminal_Whistle    = 45,
	EBrgUIMenu_CommonTop2_Icon_FortTerminal_Facility   = 46,
	EBrgUIMenu_CommonTop2_Icon_FortTerminal_Custom     = 47,
	EBrgUIMenu_CommonTop2_Icon_FortTerminal_Simulate   = 48,
	EBrgUIMenu_CommonTop2_Icon_ArmorSkinTops           = 49,
	EBrgUIMenu_CommonTop2_Icon_Num                     = 50,
	EBrgUIMenu_CommonTop2_Icon_END                     = 51
};

// Enum BrgGameBase.BrgUIDefine.EBrgUIManager_DispItem
enum class EBrgUIManager_DispItem : uint8_t
{
	EBrgUIManager_DispItem_All                         = 0,
	EBrgUIManager_DispItem_Equip                       = 1,
	EBrgUIManager_DispItem_Arm                         = 2,
	EBrgUIManager_DispItem_Head                        = 3,
	EBrgUIManager_DispItem_Body                        = 4,
	EBrgUIManager_DispItem_Legs                        = 5,
	EBrgUIManager_DispItem_Food                        = 6,
	EBrgUIManager_DispItem_Item                        = 7,
	EBrgUIManager_DispItem_Material                    = 8,
	EBrgUIManager_DispItem_Num                         = 9,
	EBrgUIManager_DispItem_END                         = 10
};

// Enum BrgGameBase.BrgUIDefine.EBrgUIManager_SortTypeTypeSet
enum class EBrgUIManager_SortTypeTypeSet : uint8_t
{
	EBrgUIManager_SortTypeTypeSet_Normal               = 0,
	EBrgUIManager_SortTypeTypeSet_Buy                  = 1,
	EBrgUIManager_SortTypeTypeSet_CoinLocker           = 2,
	EBrgUIManager_SortTypeTypeSet_ArmorSkin            = 3,
	EBrgUIManager_SortTypeTypeSet_Num                  = 4,
	EBrgUIManager_SortTypeTypeSet_END                  = 5
};

// Enum BrgGameBase.BrgUIDefine.EBrgUIManager_SortType
enum class EBrgUIManager_SortType : uint8_t
{
	EBrgUIManager_SortType_None                        = 0,
	EBrgUIManager_SortType_GetTime_Up                  = 1,
	EBrgUIManager_SortType_GetTime_Down                = 2,
	EBrgUIManager_SortType_Part                        = 3,
	EBrgUIManager_SortType_Item                        = 4,
	EBrgUIManager_SortType_Rarity_Up                   = 5,
	EBrgUIManager_SortType_Rarity_Down                 = 6,
	EBrgUIManager_SortType_Reinforce                   = 7,
	EBrgUIManager_SortType_Num                         = 8,
	EBrgUIManager_SortType_END                         = 9
};

// Enum BrgGameBase.BrgUIFontLoader.EBrgUIFontLoaderState
enum class EBrgUIFontLoaderState : uint8_t
{
	EBrgUIFontLoaderState_Idle                         = 0,
	EBrgUIFontLoaderState_Load                         = 1,
	EBrgUIFontLoaderState_LoadIdle                     = 2,
	EBrgUIFontLoaderState_END                          = 3
};

// Enum BrgGameBase.BrgUIImage_Stream.ESetupMICParamType
enum class ESetupMICParamType : uint8_t
{
	ESetupMICParamType_Normal                          = 0,
	ESetupMICParamType_Effect                          = 1,
	ESetupMICParamType_Free                            = 2,
	ESetupMICParamType_Num                             = 3,
	ESetupMICParamType_END                             = 4
};

// Enum BrgGameBase.BrgUIImageMapInfoBase.EBrgUIIMageMapInfoType
enum class EBrgUIIMageMapInfoType : uint8_t
{
	EBrgUIIMageMapInfoType_Image                       = 0,
	EBrgUIIMageMapInfoType_Group                       = 1,
	EBrgUIIMageMapInfoType_END                         = 2
};

// Enum BrgGameBase.BrgUIManagerBase.EBrgUIManager_AccessType
enum class EBrgUIManager_AccessType : uint8_t
{
	EBrgUIManager_AccessType_KariShop                  = 0,
	EBrgUIManager_AccessType_PartShop                  = 1,
	EBrgUIManager_AccessType_SisterPartShop            = 2,
	EBrgUIManager_AccessType_DrinkMachine              = 3,
	EBrgUIManager_AccessType_BodyFreezer               = 4,
	EBrgUIManager_AccessType_FortAssault               = 5,
	EBrgUIManager_AccessType_FortAssaultButton         = 6,
	EBrgUIManager_AccessType_FortAssaultOut            = 7,
	EBrgUIManager_AccessType_ResultDrone               = 8,
	EBrgUIManager_AccessType_SkillExchange             = 9,
	EBrgUIManager_AccessType_SkillVendingMachine       = 10,
	EBrgUIManager_AccessType_Safe                      = 11,
	EBrgUIManager_AccessType_PresentBox                = 12,
	EBrgUIManager_AccessType_Valve                     = 13,
	EBrgUIManager_AccessType_Elevator2_Switch          = 14,
	EBrgUIManager_AccessType_Elevator2                 = 15,
	EBrgUIManager_AccessType_Escalator_Up              = 16,
	EBrgUIManager_AccessType_Escalator_Down            = 17,
	EBrgUIManager_AccessType_GameCenter                = 18,
	EBrgUIManager_AccessType_GameCenter_MainTitle      = 19,
	EBrgUIManager_AccessType_GameCenter_Shinigami      = 20,
	EBrgUIManager_AccessType_GameCenter_MotherValve    = 21,
	EBrgUIManager_AccessType_GameCenter_Meijin         = 22,
	EBrgUIManager_AccessType_GameCenter_Naomi          = 23,
	EBrgUIManager_AccessType_PausePoint                = 24,
	EBrgUIManager_AccessType_SkillSetupPoint           = 25,
	EBrgUIManager_AccessType_CoinLocker                = 26,
	EBrgUIManager_AccessType_DailyRewardBox            = 27,
	EBrgUIManager_AccessType_ItemVendingMachine        = 28,
	EBrgUIManager_AccessType_Prison                    = 29,
	EBrgUIManager_AccessType_FortTerminal              = 30,
	EBrgUIManager_AccessType_StampRallySheetExchanger  = 31,
	EBrgUIManager_AccessType_TreasureBox               = 32,
	EBrgUIManager_AccessType_ShowTent                  = 33,
	EBrgUIManager_AccessType_MushroomSoupShop          = 34,
	EBrgUIManager_AccessType_StampRallyPoint           = 35,
	EBrgUIManager_AccessType_Balloon                   = 36,
	EBrgUIManager_AccessType_Button                    = 37,
	EBrgUIManager_AccessType_SecuritySwitch            = 38,
	EBrgUIManager_AccessType_BossButton                = 39,
	EBrgUIManager_AccessType_VendingMachine            = 40,
	EBrgUIManager_AccessType_Poster                    = 41,
	EBrgUIManager_AccessType_DropItem                  = 42,
	EBrgUIManager_AccessType_Reception                 = 43,
	EBrgUIManager_AccessType_ReturnBaseMachine         = 44,
	EBrgUIManager_AccessType_DustShooter               = 45,
	EBrgUIManager_AccessType_DoorButton                = 46,
	EBrgUIManager_AccessType_SuperScope703             = 47,
	EBrgUIManager_AccessType_UncleDeathStatue          = 48,
	EBrgUIManager_AccessType_Num                       = 49,
	EBrgUIManager_AccessType_END                       = 50
};

// Enum BrgGameBase.BrgUIManagerBase.EBrgUIManager_RenderProcessType
enum class EBrgUIManager_RenderProcessType : uint8_t
{
	EBrgUIManager_RenderProcessType_Normal             = 0,
	EBrgUIManager_RenderProcessType_OffScreen          = 1,
	EBrgUIManager_RenderProcessType_FrontScreen        = 2,
	EBrgUIManager_RenderProcessType_END                = 3
};

// Enum BrgGameBase.BrgUIManagerBase.EBrgUIFont_Const
enum class EBrgUIFont_Const : uint8_t
{
	EBrgUIFont_Const_EditDraw                          = 0,
	EBrgUIFont_Const_LocIndex                          = 1,
	EBrgUIFont_Const_FontIndex                         = 2,
	EBrgUIFont_Const_DrawMode                          = 3,
	EBrgUIFont_Const_ImageCharIndex                    = 4,
	EBrgUIFont_Const_AdjustMaxCharHeight               = 5,
	EBrgUIFont_Const_OffsetX                           = 6,
	EBrgUIFont_Const_OffsetY                           = 7,
	EBrgUIFont_Const_ScaleX                            = 8,
	EBrgUIFont_Const_ScaleY                            = 9,
	EBrgUIFont_Const_AddOffsetX                        = 10,
	EBrgUIFont_Const_EngUp_OffsetX                     = 11,
	EBrgUIFont_Const_EngUp_OffsetY                     = 12,
	EBrgUIFont_Const_EngUp_ScaleX                      = 13,
	EBrgUIFont_Const_EngUp_ScaleY                      = 14,
	EBrgUIFont_Const_EngUp_AddOffsetX                  = 15,
	EBrgUIFont_Const_EngLow_OffsetX                    = 16,
	EBrgUIFont_Const_EngLow_OffsetY                    = 17,
	EBrgUIFont_Const_EngLow_ScaleX                     = 18,
	EBrgUIFont_Const_EngLow_ScaleY                     = 19,
	EBrgUIFont_Const_EngLow_AddOffsetX                 = 20,
	EBrgUIFont_Const_Number_OffsetX                    = 21,
	EBrgUIFont_Const_Number_OffsetY                    = 22,
	EBrgUIFont_Const_Number_ScaleX                     = 23,
	EBrgUIFont_Const_Number_ScaleY                     = 24,
	EBrgUIFont_Const_Number_AddOffsetX                 = 25,
	EBrgUIFont_Const_ImageCharOffsetX                  = 26,
	EBrgUIFont_Const_ImageCharOffsetY                  = 27,
	EBrgUIFont_Const_ImageCharScaleX                   = 28,
	EBrgUIFont_Const_ImageCharScaleY                   = 29,
	EBrgUIFont_Const_ImageCharNextOffsetX              = 30,
	EBrgUIFont_Const_Num                               = 31,
	EBrgUIFont_Const_END                               = 32
};

// Enum BrgGameBase.BrgUIManagerBase.EBrgUIFont
enum class EBrgUIFont : uint8_t
{
	EBrgUIFont_OCR                                     = 0,
	EBrgUIFont_OCR_Big                                 = 1,
	EBrgUIFont_MidashiGo                               = 2,
	EBrgUIFont_MidashiGo_Big                           = 3,
	EBrgUIFont_AnitoStdM                               = 4,
	EBrgUIFont_AnitoStdM_Big                           = 5,
	EBrgUIFont_NewCinemaA                              = 6,
	EBrgUIFont_NewRodinProB                            = 7,
	EBrgUIFont_NewRodinProEB                           = 8,
	EBrgUIFont_DotGothic12StdM                         = 9,
	EBrgUIFont_Num                                     = 10,
	EBrgUIFont_END                                     = 11
};

// Enum BrgGameBase.BrgUIManagerBase.EBrgUIManagerConst
enum class EBrgUIManagerConst : uint8_t
{
	EBrgUIManagerConst_TriangleSize                    = 0,
	EBrgUIManagerConst_TestTrianglePos1X               = 1,
	EBrgUIManagerConst_TestTrianglePos1Y               = 2,
	EBrgUIManagerConst_TestTrianglePos1Z               = 3,
	EBrgUIManagerConst_TestTrianglePos2X               = 4,
	EBrgUIManagerConst_TestTrianglePos2Y               = 5,
	EBrgUIManagerConst_TestTrianglePos2Z               = 6,
	EBrgUIManagerConst_TestTrianglePos3X               = 7,
	EBrgUIManagerConst_TestTrianglePos3Y               = 8,
	EBrgUIManagerConst_TestTrianglePos3Z               = 9,
	EBrgUIManagerConst_Test3DImagePos_X                = 10,
	EBrgUIManagerConst_Test3DImagePos_Y                = 11,
	EBrgUIManagerConst_MiniMapCamera_OuterHexSize      = 12,
	EBrgUIManagerConst_MiniMapCamera_X                 = 13,
	EBrgUIManagerConst_MiniMapCamera_Y                 = 14,
	EBrgUIManagerConst_MiniMapCamera_Z                 = 15,
	EBrgUIManagerConst_MiniMapCamera_Yaw               = 16,
	EBrgUIManagerConst_MiniMapCamera_Pitch             = 17,
	EBrgUIManagerConst_MiniMapCamera_Roll              = 18,
	EBrgUIManagerConst_MiniMapCamera_Zoom              = 19,
	EBrgUIManagerConst_LockOnIcon_Z                    = 20,
	EBrgUIManagerConst_StrIconImageOffsetBase_X        = 21,
	EBrgUIManagerConst_StrIconImageOffsetBase_Y        = 22,
	EBrgUIManagerConst_TouchPad_FlickMargin            = 23,
	EBrgUIManagerConst_StrIcon_Button_OffsetX          = 24,
	EBrgUIManagerConst_StrIcon_Button_OffsetY          = 25,
	EBrgUIManagerConst_StrIcon_Button_NextX            = 26,
	EBrgUIManagerConst_StrIcon_ButtonLR_OffsetX        = 27,
	EBrgUIManagerConst_StrIcon_ButtonLR_OffsetY        = 28,
	EBrgUIManagerConst_StrIcon_ButtonLR_NextX          = 29,
	EBrgUIManagerConst_StrIcon_ButtonS_OffsetX         = 30,
	EBrgUIManagerConst_StrIcon_ButtonS_OffsetY         = 31,
	EBrgUIManagerConst_StrIcon_ButtonS_NextX           = 32,
	EBrgUIManagerConst_StrIcon_ButtonLRS_OffsetX       = 33,
	EBrgUIManagerConst_StrIcon_ButtonLRS_OffsetY       = 34,
	EBrgUIManagerConst_StrIcon_ButtonLRS_NextX         = 35,
	EBrgUIManagerConst_StrIcon_Money_OffsetX           = 36,
	EBrgUIManagerConst_StrIcon_Money_OffsetY           = 37,
	EBrgUIManagerConst_StrIcon_Money_NextX             = 38,
	EBrgUIManagerConst_StrIcon_Pass_NextX              = 39,
	EBrgUIManagerConst_StrIcon_Fighter_Enma_OffsetX    = 40,
	EBrgUIManagerConst_StrIcon_Fighter_Enma_OffsetY    = 41,
	EBrgUIManagerConst_StrIcon_Fighter_Enma_NextX      = 42,
	EBrgUIManagerConst_StrIcon_TdmRank_OffsetX         = 43,
	EBrgUIManagerConst_StrIcon_TdmRank_OffsetY         = 44,
	EBrgUIManagerConst_StrIcon_TdmRank_NextX           = 45,
	EBrgUIManagerConst_StrIcon_LostBag_OffsetX         = 46,
	EBrgUIManagerConst_StrIcon_LostBag_OffsetY         = 47,
	EBrgUIManagerConst_StrIcon_LostBag_NextX           = 48,
	EBrgUIManagerConst_StrIcon_LostBag_Scale           = 49,
	EBrgUIManagerConst_StrIcon_LostBag_Copper_OffsetX  = 50,
	EBrgUIManagerConst_StrIcon_LostBag_Copper_OffsetY  = 51,
	EBrgUIManagerConst_StrIcon_LostBag_Copper_NextX    = 52,
	EBrgUIManagerConst_SubUIFont_Scale                 = 53,
	EBrgUIManagerConst_SubUIFont_OffsetX               = 54,
	EBrgUIManagerConst_SubUIFont_OffsetY               = 55,
	EBrgUIManagerConst_DebugParam                      = 56,
	EBrgUIManagerConst_END                             = 57
};

// Enum BrgGameBase.BrgUIManagerBase.EBrgUIFont_ConstIndex
enum class EBrgUIFont_ConstIndex : uint8_t
{
	EBrgUIFont_ConstIndex_INT                          = 0,
	EBrgUIFont_ConstIndex_CHN                          = 1,
	EBrgUIFont_ConstIndex_KOR                          = 2,
	EBrgUIFont_ConstIndex_KAN                          = 3,
	EBrgUIFont_ConstIndex_Num                          = 4,
	EBrgUIFont_ConstIndex_END                          = 5
};

// Enum BrgGameBase.BrgUIParamEditMenu.EUIParamEditMode
enum class EUIParamEditMode : uint8_t
{
	EUIParamEditMode_TypeSelect                        = 0,
	EUIParamEditMode_ParamSelect                       = 1,
	EUIParamEditMode_ParamEdit                         = 2,
	EUIParamEditMode_END                               = 3
};

// Enum BrgGameBase.BrgUIParticleManager.EUIParticle
enum class EUIParticle : uint8_t
{
	EUIParticle_Wave                                   = 0,
	EUIParticle_Num                                    = 1,
	EUIParticle_END                                    = 2
};

// Enum BrgGameBase.BrgUIResource_AreaMap.BrgUIResource_AreaMap_UseMaskType
enum class EBrgUIResource_AreaMap_UseMaskType : uint8_t
{
	BrgUIResource_AreaMap_UseMaskType_None             = 0,
	BrgUIResource_AreaMap_UseMaskType_UseMask          = 1,
	BrgUIResource_AreaMap_UseMaskType_UseMask_OneMinus = 2,
	BrgUIResource_AreaMap_UseMaskType_END              = 3
};

// Enum BrgGameBase.BrgUIResource_ButtonGuide.BrgUIResource_ButtonGuide_UseMaskType
enum class EBrgUIResource_ButtonGuide_UseMaskType : uint8_t
{
	BrgUIResource_ButtonGuide_UseMaskType_None         = 0,
	BrgUIResource_ButtonGuide_UseMaskType_UseMask      = 1,
	BrgUIResource_ButtonGuide_UseMaskType_UseMask_OneMinus = 2,
	BrgUIResource_ButtonGuide_UseMaskType_END          = 3
};

// Enum BrgGameBase.BrgUIResource_ButtonGuide_STM_v00.BrgUIResource_ButtonGuide_STM_UseMaskType
enum class EBrgUIResource_ButtonGuide_STM_UseMaskType : uint8_t
{
	BrgUIResource_ButtonGuide_STM_UseMaskType_None     = 0,
	BrgUIResource_ButtonGuide_STM_UseMaskType_UseMask  = 1,
	BrgUIResource_ButtonGuide_STM_UseMaskType_UseMask_OneMinus = 2,
	BrgUIResource_ButtonGuide_STM_UseMaskType_END      = 3
};

// Enum BrgGameBase.BrgUIResource_EnmaMenu_Memo_v00.BrgUIResource_EnmaMenu_Memo_UseMaskType
enum class EBrgUIResource_EnmaMenu_Memo_UseMaskType : uint8_t
{
	BrgUIResource_EnmaMenu_Memo_UseMaskType_None       = 0,
	BrgUIResource_EnmaMenu_Memo_UseMaskType_UseMask    = 1,
	BrgUIResource_EnmaMenu_Memo_UseMaskType_UseMask_OneMinus = 2,
	BrgUIResource_EnmaMenu_Memo_UseMaskType_END        = 3
};

// Enum BrgGameBase.BrgUIResource_EnmaMenuImageManager.EBrgSkillStickerImageSize
enum class EBrgSkillStickerImageSize : uint8_t
{
	EBrgSkillStickerImageSize_L                        = 0,
	EBrgSkillStickerImageSize_M                        = 1,
	EBrgSkillStickerImageSize_S                        = 2,
	EBrgSkillStickerImageSize_END                      = 3
};

// Enum BrgGameBase.BrgUIResource_HUD6.BrgUIResource_HUD6_UseMaskType
enum class EBrgUIResource_HUD6_UseMaskType : uint8_t
{
	BrgUIResource_HUD6_UseMaskType_None                = 0,
	BrgUIResource_HUD6_UseMaskType_UseMask             = 1,
	BrgUIResource_HUD6_UseMaskType_UseMask_OneMinus    = 2,
	BrgUIResource_HUD6_UseMaskType_END                 = 3
};

// Enum BrgGameBase.BrgUIResource_Icon_Info_v00.BrgUIResource_Icon_Info_v00_UseMaskType
enum class EBrgUIResource_Icon_Info_v00_UseMaskType : uint8_t
{
	BrgUIResource_Icon_Info_v00_UseMaskType_None       = 0,
	BrgUIResource_Icon_Info_v00_UseMaskType_UseMask    = 1,
	BrgUIResource_Icon_Info_v00_UseMaskType_UseMask_OneMinus = 2,
	BrgUIResource_Icon_Info_v00_UseMaskType_UseMask_Special = 3,
	BrgUIResource_Icon_Info_v00_UseMaskType_END        = 4
};

// Enum BrgGameBase.BrgUIResource_Icon_Info_v01.BrgUIResource_Icon_Info_v01_UseMaskType
enum class EBrgUIResource_Icon_Info_v01_UseMaskType : uint8_t
{
	BrgUIResource_Icon_Info_v01_UseMaskType_None       = 0,
	BrgUIResource_Icon_Info_v01_UseMaskType_UseMask    = 1,
	BrgUIResource_Icon_Info_v01_UseMaskType_UseMask_OneMinus = 2,
	BrgUIResource_Icon_Info_v01_UseMaskType_END        = 3
};

// Enum BrgGameBase.BrgUIResource_Icon_Info_v02.BrgUIResource_Icon_Info_v02_UseMaskType
enum class EBrgUIResource_Icon_Info_v02_UseMaskType : uint8_t
{
	BrgUIResource_Icon_Info_v02_UseMaskType_None       = 0,
	BrgUIResource_Icon_Info_v02_UseMaskType_UseMask    = 1,
	BrgUIResource_Icon_Info_v02_UseMaskType_UseMask_OneMinus = 2,
	BrgUIResource_Icon_Info_v02_UseMaskType_END        = 3
};

// Enum BrgGameBase.BrgUIResource_MiniGame_v00.BrgUIResource_MiniGame_v00_UseMaskType
enum class EBrgUIResource_MiniGame_v00_UseMaskType : uint8_t
{
	BrgUIResource_MiniGame_v00_UseMaskType_None        = 0,
	BrgUIResource_MiniGame_v00_UseMaskType_UseMask     = 1,
	BrgUIResource_MiniGame_v00_UseMaskType_END         = 2
};

// Enum BrgGameBase.BrgUIResource_OnMemory.EBrgUIHUD_ButtonDef
enum class EBrgUIHUD_ButtonDef : uint8_t
{
	EBrgUIHUD_ButtonDef_A                              = 0,
	EBrgUIHUD_ButtonDef_B                              = 1,
	EBrgUIHUD_ButtonDef_X                              = 2,
	EBrgUIHUD_ButtonDef_Y                              = 3,
	EBrgUIHUD_ButtonDef_L1                             = 4,
	EBrgUIHUD_ButtonDef_L2                             = 5,
	EBrgUIHUD_ButtonDef_L3                             = 6,
	EBrgUIHUD_ButtonDef_LStick                         = 7,
	EBrgUIHUD_ButtonDef_R1                             = 8,
	EBrgUIHUD_ButtonDef_R2                             = 9,
	EBrgUIHUD_ButtonDef_R3                             = 10,
	EBrgUIHUD_ButtonDef_RStick                         = 11,
	EBrgUIHUD_ButtonDef_Plus                           = 12,
	EBrgUIHUD_ButtonDef_Plus_Down                      = 13,
	EBrgUIHUD_ButtonDef_Plus_Up                        = 14,
	EBrgUIHUD_ButtonDef_Plus_LR                        = 15,
	EBrgUIHUD_ButtonDef_Back                           = 16,
	EBrgUIHUD_ButtonDef_Start                          = 17,
	EBrgUIHUD_ButtonDef_Num                            = 18,
	EBrgUIHUD_ButtonDef_END                            = 19
};

// Enum BrgGameBase.BrgUIResource_OnMemory.EBrgUIHUD_PlusButtonImageDef
enum class EBrgUIHUD_PlusButtonImageDef : uint8_t
{
	EBrgUIHUD_PlusButtonImageDef_Plus_Base             = 0,
	EBrgUIHUD_PlusButtonImageDef_Plus_Up               = 1,
	EBrgUIHUD_PlusButtonImageDef_Plus_Down             = 2,
	EBrgUIHUD_PlusButtonImageDef_Plus_Left             = 3,
	EBrgUIHUD_PlusButtonImageDef_Plus_Right            = 4,
	EBrgUIHUD_PlusButtonImageDef_Num                   = 5,
	EBrgUIHUD_PlusButtonImageDef_END                   = 6
};

// Enum BrgGameBase.BrgUIResource_OnMemory.EBrgUIHUD_ButtonDef_Ex
enum class EBrgUIHUD_ButtonDef_Ex : uint8_t
{
	EBrgUIHUD_ButtonDef_Ex_A_NoLine                    = 0,
	EBrgUIHUD_ButtonDef_Ex_B_NoLine                    = 1,
	EBrgUIHUD_ButtonDef_Ex_X_NoLine                    = 2,
	EBrgUIHUD_ButtonDef_Ex_Y_NoLine                    = 3,
	EBrgUIHUD_ButtonDef_Ex_Num                         = 4,
	EBrgUIHUD_ButtonDef_Ex_END                         = 5
};

// Enum BrgGameBase.BrgUIResource_Prison_v00.EBrgUIResource_PrisonMenu_Monitor_State
enum class EBrgUIResource_PrisonMenu_Monitor_State : uint8_t
{
	EBrgUIResource_PrisonMenu_Monitor_State_None       = 0,
	EBrgUIResource_PrisonMenu_Monitor_State_Conciliate = 1,
	EBrgUIResource_PrisonMenu_Monitor_State_End        = 2,
	EBrgUIResource_PrisonMenu_Monitor_State_END        = 3
};

// Enum BrgGameBase.BrgUIResource_RewardBox_v00.BrgUIResource_RewardBox_v00_UseMaskType
enum class EBrgUIResource_RewardBox_v00_UseMaskType : uint8_t
{
	BrgUIResource_RewardBox_v00_UseMaskType_None       = 0,
	BrgUIResource_RewardBox_v00_UseMaskType_UseMask    = 1,
	BrgUIResource_RewardBox_v00_UseMaskType_UseMask_OneMinus = 2,
	BrgUIResource_RewardBox_v00_UseMaskType_END        = 3
};

// Enum BrgGameBase.BrgUIResource_TeamEmblemIconImageManager.BrgUIResource_TeamEmblemIconImageSize
enum class EBrgUIResource_TeamEmblemIconImageSize : uint8_t
{
	BrgUIResource_TeamEmblemIconImageSize_Big          = 0,
	BrgUIResource_TeamEmblemIconImageSize_Small        = 1,
	BrgUIResource_TeamEmblemIconImageSize_END          = 2
};

// Enum BrgGameBase.BrgUIResource_Title_Notice.BrgUIResource_Title_Notice_UseMaskType
enum class EBrgUIResource_Title_Notice_UseMaskType : uint8_t
{
	BrgUIResource_Title_Notice_UseMaskType_None        = 0,
	BrgUIResource_Title_Notice_UseMaskType_UseMask_OneMinus = 1,
	BrgUIResource_Title_Notice_UseMaskType_END         = 2
};

// Enum BrgGameBase.BrgUISpriteAnim.ESpriteAnimMoveType
enum class ESpriteAnimMoveType : uint8_t
{
	ESAMT_Linear                                       = 0,
	ESAMT_Linear_Slowdown                              = 1,
	ESAMT_Linear_Acceleration                          = 2,
	ESAMT_Mul                                          = 3,
	ESAMT_Sin                                          = 4,
	ESAMT_Pow3_Up                                      = 5,
	ESAMT_Pow3_Down                                    = 6,
	ESAMT_Pow4_Up                                      = 7,
	ESAMT_Pow4_Down                                    = 8,
	ESAMT_BezierCurve                                  = 9,
	ESAMT_FlashClassicTween                            = 10,
	ESAMT_None                                         = 11,
	ESAMT_END                                          = 12
};

// Enum BrgGameBase.BrgUIStrSelectWindow.EBrgUIStrSelectWindowState
enum class EBrgUIStrSelectWindowState : uint8_t
{
	EBrgUIStrSelectWindowState_Idle                    = 0,
	EBrgUIStrSelectWindowState_Open                    = 1,
	EBrgUIStrSelectWindowState_Select                  = 2,
	EBrgUIStrSelectWindowState_Selected                = 3,
	EBrgUIStrSelectWindowState_ItemOut                 = 4,
	EBrgUIStrSelectWindowState_END                     = 5
};

// Enum BrgGameBase.BrgUITexture2DLoader.EBrgUITexture2DLoaderState
enum class EBrgUITexture2DLoaderState : uint8_t
{
	EBrgUITexture2DLoaderState_Idle                    = 0,
	EBrgUITexture2DLoaderState_Load                    = 1,
	EBrgUITexture2DLoaderState_LoadIdle                = 2,
	EBrgUITexture2DLoaderState_END                     = 3
};

// Enum BrgGameBase.BrgUtilityNativeBase.BrgUtilNative_ElapsedTimeType
enum class EBrgUtilNative_ElapsedTimeType : uint8_t
{
	BrgUtilNative_ElapsedTimeType_DaysAgo              = 0,
	BrgUtilNative_ElapsedTimeType_HoursAgo             = 1,
	BrgUtilNative_ElapsedTimeType_MinutesAgo           = 2,
	BrgUtilNative_ElapsedTimeType_SecondsAgo           = 3,
	BrgUtilNative_ElapsedTimeType_END                  = 4
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class BrgGameBase.BrgEmitterPool
// 0x0008 (0x02EC - 0x02F4)
class ABrgEmitterPool : public AEmitterPool
{
public:
	float                                              mDefaultMaxDrawDistance;                       // 0x02EC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mDefaultSecondsBeforeInactive;                 // 0x02F0 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgEmitterPool");
		}

		return uClassPointer;
	};

	class UParticleSystemComponent* eventSpawnEmitterMeshAttachment(class UParticleSystem* EmitterTemplate, class USkeletalMeshComponent* Mesh, struct FName AttachPointName, unsigned long bAttachToSocket, struct FVector RelativeLoc, struct FRotator RelativeRot);
	class UParticleSystemComponent* eventSpawnEmitter(class UParticleSystem* EmitterTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* AttachToActor, class AActor* InInstigator, int32_t MaxDLEPooledReuses, unsigned long bInheritScaleFromBase);
};

// Class BrgGameBase.BrgFloat64Utility
// 0x0000 (0x0060 - 0x0060)
class UBrgFloat64Utility : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgFloat64Utility");
		}

		return uClassPointer;
	};

	static struct FBrgFloat64 SubEq(struct FBrgFloat64 B, struct FBrgFloat64& A);
	static struct FBrgFloat64 AddEq(struct FBrgFloat64 B, struct FBrgFloat64& A);
	static struct FBrgFloat64 DivEq(struct FBrgFloat64 B, struct FBrgFloat64& A);
	static struct FBrgFloat64 MulEq(struct FBrgFloat64 B, struct FBrgFloat64& A);
	static bool NotEq(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static bool EqEq(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static bool GreaterEq(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static bool LessEq(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static bool Greater(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static bool Less(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Sub(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Add(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Mod(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Div(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Mul(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Minus_Pre(struct FBrgFloat64 A);
	static float F64toF(struct FBrgFloat64 Float64Num);
	static int32_t F64toI(struct FBrgFloat64 Float64Num, float MulNum);
	static class FString F64toA(struct FBrgFloat64 Float64Num);
	static struct FBrgFloat64 AtoF64(class FString Float64String);
	static struct FBrgFloat64 FtoF64(float Num);
	static struct FBrgFloat64 ItoF64(int32_t Num);
};

// Class BrgGameBase.BrgGameBaseDummy
// 0x0000 (0x0060 - 0x0060)
class UBrgGameBaseDummy : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgGameBaseDummy");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgGameDefine
// 0x0000 (0x0060 - 0x0060)
class UBrgGameDefine : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgGameDefine");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgGameEngineBase
// 0x0000 (0x0AB4 - 0x0AB4)
class UBrgGameEngineBase : public UGHM_GameEngine
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgGameEngineBase");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgGameInfoNativeBase
// 0x024C (0x05F0 - 0x083C)
class ABrgGameInfoNativeBase : public AGHM_GameInfo
{
public:
	uint8_t                                            mGameMode;                                     // 0x05F0 (0x0001) [0x0000000000000000]               
	uint8_t                                            mHubStartMode;                                 // 0x05F1 (0x0001) [0x0000000000000000]               
	uint8_t                                            MsgpackErrorBehaviour;                         // 0x05F2 (0x0001) [0x0000000000004000] (CPF_Config)  
	class FString                                      mReturnToHubEitemid;                           // 0x05F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mSkillSetupPointLocations;                     // 0x0604 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mCoinLockerLocations;                          // 0x0614 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mDailyRewardBoxLocations;                      // 0x0624 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mEscalatorLocations;                           // 0x0634 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mGameCenterLocations;                          // 0x0644 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mStampTableLocations;                          // 0x0654 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mBalloonLocations;                             // 0x0664 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mButtonLocations;                              // 0x0674 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mSecuritySwitchLocations;                      // 0x0684 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mBossButtonLocations;                          // 0x0694 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mMaterialLocations;                            // 0x06A4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mRMapLocations;                                // 0x06B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mMagazineLocations;                            // 0x06C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mVendingMachineLocations;                      // 0x06D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mReceptionLocations;                           // 0x06E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mBreakableObjectLocations;                     // 0x06F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mPartShopLocations;                            // 0x0704 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mSisterPartShopLocations;                      // 0x0714 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mDrinkMachineLocations;                        // 0x0724 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mBodyFreezerLocations;                         // 0x0734 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mFortAssaultLocations;                         // 0x0744 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mSkillExchangeLocations;                       // 0x0754 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mSkillVendingMachineLocations;                 // 0x0764 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mSafeLocations;                                // 0x0774 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mPresentBoxLocations;                          // 0x0784 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mElevator2Locations;                           // 0x0794 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mElevator2_SwitchLocations;                    // 0x07A4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FVector>                             mShowTentLocations;                            // 0x07B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgResourceLoadManager*                     mResourceLoadManager;                          // 0x07C4 (0x0008) [0x0000000000000000]               
	class UBrgLocalizedResourceManager*                mLocalizedResourceManager;                     // 0x07CC (0x0008) [0x0000000000000000]               
	class ABrgHUDBase*                                 mBrgHUDBase;                                   // 0x07D4 (0x0008) [0x0000000000000000]               
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x07DC (0x0008) [0x0000000000000000]               
	float                                              mDemoSkipUITime;                               // 0x07E4 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class UBrgNetworkManagerInterface*                 mNetworkManager_Object;                        // 0x07E8 (0x0008) [0x0000000000000000] 
	class UBrgNetworkManagerInterface*                 mNetworkManager_Interface;                     // 0x07F0 (0x0008) [0x0000000000000000]               
	class FString                                      mLangText;                                     // 0x07F8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      mLangSound;                                    // 0x0808 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              mItemOutlineMinWidth;                          // 0x0818 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              mItemOutlineMaxWidth;                          // 0x081C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              mItemOutlineMinDistance;                       // 0x0820 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              mItemOutlineMaxDistance;                       // 0x0824 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              mDefaultMaxDrawDistance;                       // 0x0828 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FBrgGoreMeshDamageSetting>           mGoreMeshDamageSettings;                       // 0x082C (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgGameInfoNativeBase");
		}

		return uClassPointer;
	};

	bool GetEmergencyMaintenance();
	void SetEmergencyMaintenance(unsigned long flag);
	bool GetUnderMaintenance();
	void SetUnderMaintenance(unsigned long flag);
	bool IsVITAController();
	static bool CheckResumeFromSuspend(int32_t statusExcpetionCode);
	class UBrgNetworkManagerBase* eventGetNetworkManagerBase();
	static bool IsInfinityMushroom(class FString emsrid);
	static bool IsDebugEntityId(class FString entityId);
	class FString GetServerEnvName();
	class FString GetClientTitleVersion();
	int32_t GetDataVersion();
	int32_t GetApiVersion();
	void SetDefaultPerformanceSetting(class UPrimitiveComponent* PC);
	class AGamePlayerController* GetGamePlayerCtrl();
	void SetLangSound(class FString lang);
	class FString GetLangSound();
	void SetLangText(class FString lang);
	class FString GetLangText();
	uint8_t GetPlatform();
};

// Class BrgGameBase.BrgGlobalPartInfo
// 0x0014 (0x0060 - 0x0074)
class UBrgGlobalPartInfo : public UObject
{
public:
	unsigned long                                      mUsePart2 : 1;                                 // 0x0060 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	unsigned long                                      mGlobalPartInfosEditMode : 1;                  // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray<struct FBrgGlobalPartInfoUnit>              mGlobalPartInfos;                              // 0x0064 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgGlobalPartInfo");
		}

		return uClassPointer;
	};

	bool GetGlobalPartInfo(struct FName inPtid, struct FBrgGlobalPartInfoUnit& inGlobalPartInfo);
	void Initialize();
};

// Class BrgGameBase.BrgHUDBase
// 0x0F80 (0x05C8 - 0x1548)
class ABrgHUDBase : public AGHM_HUD
{
public:
	uint8_t                                            mScreenMode;                                   // 0x05C8 (0x0001) [0x0000000000000000]               
	uint8_t                                            mUseMaterialEffect;                            // 0x05C9 (0x0001) [0x0000000000000000]               
	uint8_t                                            mDrawBasePosX;                                 // 0x05CA (0x0001) [0x0000000000000000]               
	uint8_t                                            mDrawBasePosY;                                 // 0x05CB (0x0001) [0x0000000000000000]               
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x05CC (0x0008) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0xC];                            // 0x05D4 (0x000C) MISSED OFFSET
	struct FMatrix                                     mViewMatrix;                                   // 0x05E0 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     mProjectionMatrix;                             // 0x0620 (0x0040) [0x0000000000000000]               
	int32_t                                            mDrawWaitFrame;                                // 0x0660 (0x0004) [0x0000000000000000]               
	class UBrgUIImage*                                 mWhiteImage;                                   // 0x0664 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mLineImage;                                    // 0x066C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mLine2Image;                                   // 0x0674 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mLine3Image;                                   // 0x067C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mAlphaClearImage;                              // 0x0684 (0x0008) [0x0000000000000000]               
	unsigned long                                      mStrIconSetup : 1;                             // 0x068C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mEnableDrawTransformMatrix : 1;                // 0x068C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mSetDrawArea : 1;                              // 0x068C (0x0004) [0x0000000000000000] [0x00000004] 
	struct FBrgUIDrawCharIconInfo                      mStrIconInfo[0x4C];                            // 0x0690 (0x0BE0) [0x0000000000000000]               
	class UBrgUIFont*                                  mSubUIFont;                                    // 0x1270 (0x0008) [0x0000000000000000]               
	float                                              mSubUIFontScale;                               // 0x1278 (0x0004) [0x0000000000000000]               
	int32_t                                            mSubUIFontOffsetX;                             // 0x127C (0x0004) [0x0000000000000000]               
	int32_t                                            mSubUIFontOffsetY;                             // 0x1280 (0x0004) [0x0000000000000000]               
	class UBrgRenderPrimitive2DSet*                    mTargetRenderPrimitive2DSet;                   // 0x1284 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mSetDrawTarget;                                // 0x128C (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mSetDrawBaseTarget;                            // 0x1294 (0x0008) [0x0000000000000000]               
	float                                              mRenderScalingX;                               // 0x129C (0x0004) [0x0000000000000000]               
	float                                              mRenderScalingY;                               // 0x12A0 (0x0004) [0x0000000000000000]               
	int32_t                                            mRenderTargetSizeX;                            // 0x12A4 (0x0004) [0x0000000000000000]               
	int32_t                                            mRenderTargetSizeY;                            // 0x12A8 (0x0004) [0x0000000000000000]               
	class UBrgUIImageBase*                             mUseImageBase;                                 // 0x12AC (0x0008) [0x0000000000000000]               
	int32_t                                            mUseMaterialIndex;                             // 0x12B4 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   mUseFreeMIC;                                   // 0x12B8 (0x0008) [0x0000000000000000]               
	struct FColor                                      mDrawColor[0x4];                               // 0x12C0 (0x0010) [0x0000000000000000]               
	struct FLinearColor                                mDrawLinearColor[0x4];                         // 0x12D0 (0x0040) [0x0000000000000000]               
	float                                              mGlobalBright;                                 // 0x1310 (0x0004) [0x0000000000000000]               
	struct FMatrix3x3CT                                mDrawTransformMatrix;                          // 0x1314 (0x0018) [0x0000000000000000]               
	int32_t                                            mUseMaskScreenNo;                              // 0x132C (0x0004) [0x0000000000000000]               
	class UTexture*                                    mMaskScreenTexture;                            // 0x1330 (0x0008) [0x0000000000000000]               
	float                                              mMaskScreenTextureScreenPositionX;             // 0x1338 (0x0004) [0x0000000000000000]               
	float                                              mMaskScreenTextureScreenPositionY;             // 0x133C (0x0004) [0x0000000000000000]               
	float                                              mDrawAreaX1;                                   // 0x1340 (0x0004) [0x0000000000000000]               
	float                                              mDrawAreaY1;                                   // 0x1344 (0x0004) [0x0000000000000000]               
	float                                              mDrawAreaX2;                                   // 0x1348 (0x0004) [0x0000000000000000]               
	float                                              mDrawAreaY2;                                   // 0x134C (0x0004) [0x0000000000000000]               
	float                                              mEffectFadeAreaX1;                             // 0x1350 (0x0004) [0x0000000000000000]               
	float                                              mEffectFadeAreaY1;                             // 0x1354 (0x0004) [0x0000000000000000]               
	float                                              mEffectFadeAreaX2;                             // 0x1358 (0x0004) [0x0000000000000000]               
	float                                              mEffectFadeAreaY2;                             // 0x135C (0x0004) [0x0000000000000000]               
	float                                              mEffectFadeAreaXSizeInvert;                    // 0x1360 (0x0004) [0x0000000000000000]               
	float                                              mEffectFadeAreaYSizeInvert;                    // 0x1364 (0x0004) [0x0000000000000000]               
	int32_t                                            mPixelScaleI[0x2];                             // 0x1368 (0x0008) [0x0000000000000000]               
	float                                              mPixelScaleF[0x2];                             // 0x1370 (0x0008) [0x0000000000000000]               
	float                                              mPixelScaleInvF[0x2];                          // 0x1378 (0x0008) [0x0000000000000000]               
	float                                              mScreenScaleX;                                 // 0x1380 (0x0004) [0x0000000000000000]               
	float                                              mScreenScaleY;                                 // 0x1384 (0x0004) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex;               // 0x1388 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_Mask;          // 0x1390 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_Mask_OneMinus; // 0x1398 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_Add;           // 0x13A0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_Add_Mask;      // 0x13A8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_Add_Mask_OneMinus;// 0x13B0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_PreAlphaTex;             // 0x13B8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_PreAlphaTex_Mask;        // 0x13C0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_PreAlphaTex_Mask_OneMinus;// 0x13C8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_PreAlphaTex_Add;         // 0x13D0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_PreAlphaTex_Add_Mask;    // 0x13D8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_PreAlphaTex_Add_Mask_OneMinus;// 0x13E0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreColorTex;          // 0x13E8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreColorTex_Mask;     // 0x13F0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreColorTex_Mask_OneMinus;// 0x13F8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreColorTex_Add;      // 0x1400 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreColorTex_Add_Mask; // 0x1408 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreColorTex_Add_Mask_OneMinus;// 0x1410 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_3D;            // 0x1418 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_Add_3D;        // 0x1420 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_PreAlphaTex_3D;          // 0x1428 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_PreAlphaTex_Add_3D;      // 0x1430 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreColorTex_3D;       // 0x1438 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreColorTex_Add_3D;   // 0x1440 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_AlphaClear;              // 0x1448 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_GrBlend_Lerp;  // 0x1450 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_PreAlphaTex_GrBlend_Lerp;// 0x1458 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_TexG_CmnRenderBlend;     // 0x1460 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_TexR_VtxColorBlend;      // 0x1468 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreAlphaTex;          // 0x1470 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreAlphaTex_Add;      // 0x1478 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreAlphaTex_Mask;     // 0x1480 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreAlphaTex_Mask_OneMinus;// 0x1488 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreAlphaTex_Add_Mask; // 0x1490 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_IgnoreAlphaTex_Add_Mask_OneMinus;// 0x1498 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_Modulate;      // 0x14A0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_Modulate_Mask; // 0x14A8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NormalTex_Modulate_Mask_OneMinus;// 0x14B0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NoTex_Modulate;          // 0x14B8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NoTex_Modulate_Mask;     // 0x14C0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_NoTex_Modulate_Mask_OneMinus;// 0x14C8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_MiniMapImage;            // 0x14D0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_MiniMapSpray;            // 0x14D8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_MiniMapMask;             // 0x14E0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_MiniMapCover;            // 0x14E8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_HUD;                     // 0x14F0 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_HUD_3D;                  // 0x14F8 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_GameOverDesaturate;      // 0x1500 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_SceneCaptureTexture;     // 0x1508 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_Sticker_Standard;        // 0x1510 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_Sticker_Kira;            // 0x1518 (0x0008) [0x0000000000000000]               
	class UMaterial*                                   mCommonMaterial_MT_UI_CommonTopIconSpecial;    // 0x1520 (0x0008) [0x0000000000000000]               
	TArray<class FString>                              mCharColor;                                    // 0x1528 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FColor>                              mCharColorData;                                // 0x1538 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgHUDBase");
		}

		return uClassPointer;
	};

	void Draw_Box_Rel(float X1, float Y1, float X2, float Y2);
	void UseRenderInfoRedner();
	void EndRender();
	void PostRenderInitialize();
	void RenderPrimitive();
	void DrawShadowedText(float X, float Y, class FString Str, uint8_t R, uint8_t G, uint8_t B, float Scale, unsigned long IsRight);
	static void SetDisplayGamma(float Gamma);
	static struct FColor ColorLerp(struct FColor inA, struct FColor inB, float inAlpha);
	static struct FColor AnalyseColorString(class FString inColorString);
	static void BrgFormatStringToBrgUIDrawCharInfo(class FString inSrc, TArray<struct FBrgUIDrawCharInfo>& inDest);
	static void AnalyseDoubleAtMarkString(class FString inSrc, TArray<class FString>& inDest);
	static void AnalyseLFString(class FString inSrc, TArray<class FString>& inDest);
	static class FString AddSpaceCharString(class FString SrcString, int32_t CharNum);
	static class FString Number64bitString(int32_t HighNumber, int32_t LowNumber);
	static class FString NumberString(int32_t Number);
	static class FString GetWithSpaceNumberStr(int32_t Number, int32_t Keta);
	static class FString GetWithZeroNumberStr(int32_t Number, int32_t Keta);
	static void TimeString3(uint64_t SecTime, class FString& Day, class FString& Hour, class FString& Min, class FString& Sec);
	static void TimeString2(float SecTime, class FString& Day, class FString& Hour, class FString& Min, class FString& Sec, class FString& Milli);
	static class FString TimeString(uint64_t SecTime);
	static class FString ItoA_Plus(int32_t Num);
	static struct FVector ScreenPixelScaleProject(class UCanvas* inCanvas, struct FVector InLocation);
	static struct FVector Project(class UCanvas* inCanvas, struct FVector InLocation);
	static float GetScreenPixelSizeToWorldSize(class UCanvas* inCanvas, struct FVector inWorldLocation, float inPixelSize);
	static int32_t GetScreenPixelScale();
	void SetupWhiteTexMIC(struct FBrgUIMaterialAttr& inMaterialAttr);
	void GetScreenImageSize(int32_t& InX, int32_t& InY);
	void GetScreenImage(class UTextureRenderTarget2D* inDestTexture);
	float Get_Font_DrawHeight(class UBrgUIFont* DrawFont, float ScaleY);
	float Get_Chara_NextAddX(class UBrgUIFont* DrawFont, class FString Chara, float ScaleX);
	float Draw_NumberEasy(float X, float Y, int32_t DrawNum, class UBrgUIFont* DrawFont, unsigned long PosConvInt, unsigned long IsDraw);
	float Draw_StrEasy(float X, float Y, class FString DrawStr, class UBrgUIFont* DrawFont, unsigned long PosConvInt, unsigned long IsDraw);
	float Draw_Number(float X, float Y, uint8_t xposBase, uint8_t yposBase, float rot_cx, float rot_cy, float Rot, float ScaleX, float ScaleY, int32_t DrawNum, class UBrgUIFont* DrawFont, unsigned long PosConvInt, unsigned long IsDraw, float UseDrawWidth, float& DrawWidth, float& DrawHeight);
	float Draw_BrgStr(float X, float Y, uint8_t xposBase, uint8_t yposBase, float rot_cx, float rot_cy, float Rot, float ScaleX, float ScaleY, TArray<struct FBrgUIDrawCharInfo> DrawStr, class UBrgUIFont* DrawFont, unsigned long PosConvInt, unsigned long IsDraw, float UseDrawWidth, float& DrawWidth, float& DrawHeight);
	float Draw_Str(float X, float Y, uint8_t xposBase, uint8_t yposBase, float rot_cx, float rot_cy, float Rot, float ScaleX, float ScaleY, class FString DrawStr, class UBrgUIFont* DrawFont, unsigned long PosConvInt, unsigned long IsDraw, float UseDrawWidth, float& DrawWidth, float& DrawHeight);
	void Draw_GradTB(float X1, float Y1, float X2, float Y2);
	void Draw_GradLR(float X1, float Y1, float X2, float Y2);
	void Draw_NAA_Triangle(float X1, float Y1, float X2, float Y2, float X3, float Y3);
	void Draw_Triangle(float X1, float Y1, float X2, float Y2, float X3, float Y3);
	void Draw_CircleGaugeMask(float X, float Y, float R, float angle_start, float angle_end);
	void Draw_GradCircle(float X, float Y, float r1, float r2, float r3, float r4, int32_t posnum);
	void Draw_Circle(float X, float Y, float R, int32_t posnum);
	void Draw_CircleLine(float X, float Y, float R, float Width, int32_t posnum, uint8_t widthBase);
	void Draw_BezierLine(float p1_x, float p1_y, float s1_x, float s1_y, float s2_x, float s2_y, float p2_x, float p2_y, int32_t pos_num, float Width, uint8_t widthBase);
	void Draw_Line(float X1, float Y1, float X2, float Y2, float Width, uint8_t posBase);
	void Draw_LineBox(float X1, float Y1, float X2, float Y2, float Width, uint8_t posBase);
	void Draw_Box(float X1, float Y1, float X2, float Y2);
	void Draw_NAA_Box(float X1, float Y1, float X2, float Y2);
	void Draw_GaugeBTImageWithStartEnd(float X, float Y, float StartRate, float EndRate, class UBrgUIImage* DrawImage);
	void Draw_GaugeTBImage(float X, float Y, float Rate, class UBrgUIImage* DrawImage);
	void Draw_GaugeBTImage(float X, float Y, float Rate, class UBrgUIImage* DrawImage);
	void Draw_GaugeLRImageWithStartEnd(float X, float Y, float StartRate, float EndRate, class UBrgUIImage* DrawImage);
	void Draw_GaugeRLImage(float X, float Y, float Rate, class UBrgUIImage* DrawImage);
	void Draw_GaugeLRImage(float X, float Y, float Rate, class UBrgUIImage* DrawImage);
	void Draw_Vertex2D_TriangleList(TArray<struct FBrgUIDrawVertex2D> vertex2D, class UBrgUIImage* DrawImage);
	void Draw_TransformImageRect(float X, float Y, struct FMatrix3x3CT Mat, float ix, float iy, float iw, float ih, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_RotImageRectSimple(float screenRotCenterX, float screenRotCenterY, float imageRotCenterX, float imageRotCenterY, float Rot, float ScaleX, float ScaleY, float ix, float iy, float iw, float ih, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_RotImageRect(uint8_t xBase, uint8_t yBase, float X, float Y, uint8_t cxBase, uint8_t cyBase, float CX, float CY, float Rot, float ScaleX, float ScaleY, float ix, float iy, float iw, float ih, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_TriangleImageRect(float X1, float Y1, float X2, float Y2, float X3, float Y3, float ix, float iy, float iw, float ih, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_ModiImageRect(float X1, float Y1, float X2, float Y2, float X3, float Y3, float x4, float y4, float ix, float iy, float iw, float ih, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_ExtImageRect(float X1, float Y1, float X2, float Y2, float ix, float iy, float iw, float ih, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_ImageRect(float X, float Y, float ix, float iy, float iw, float ih, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_TransformImage(float X, float Y, struct FMatrix3x3CT Mat, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_RotImageSimple(float screenRotCenterX, float screenRotCenterY, float imageRotCenterX, float imageRotCenterY, float Rot, float ScaleX, float ScaleY, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_RotImage(uint8_t xBase, uint8_t yBase, float X, float Y, uint8_t cxBase, uint8_t cyBase, float CX, float CY, float Rot, float ScaleX, float ScaleY, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_TriangleImage(float X1, float Y1, float X2, float Y2, float X3, float Y3, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_ModiImage(float X1, float Y1, float X2, float Y2, float X3, float Y3, float x4, float y4, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_ExtImage(float X1, float Y1, float X2, float Y2, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_Image(float X, float Y, class UBrgUIImage* DrawImage, unsigned long Hreverse, unsigned long Vreverse);
	void ResetDrawTransformMatrix();
	void SetDrawTransformMatrix(struct FMatrix3x3CT Mat);
	void SetEffectFadeArea(float X1, float Y1, float X2, float Y2);
	void ResetDrawArea();
	void SetDrawArea(float X1, float Y1, float X2, float Y2);
	void SetDrawBasePos(uint8_t XBasePos, uint8_t YBasePos);
	void SetDrawColor(uint8_t R, uint8_t G, uint8_t B, uint8_t A, int32_t ColorIndex);
	void SetGlobalBright(float inBright);
	void Clear(uint8_t R, uint8_t G, uint8_t B, uint8_t A);
	void SetUseMaskScreen(int32_t inUseMaskScreenNo, class UTexture* inMaskScreenTexture, float inMaskScreenTextureScreenPositionX, float inMaskScreenTextureScreenPositionY);
	void ResetDrawTarget();
	void SetDrawTargetToMask(int32_t inTargetMaskScreen);
	void SetDrawTarget(class UTextureRenderTarget2D* RenderTarget);
	void ResetDrawBaseTarget();
	void SetDrawBaseTarget(class UTextureRenderTarget2D* RenderTarget);
	void DrawRenderPrimitive2DSet(class UBrgRenderPrimitive2DSet* inRenderPrimitive2DSet);
	void RecordRenderPrimitive2DSet_End();
	void RecordRenderPrimitive2DSet_Begin(class UBrgRenderPrimitive2DSet* inRenderPrimitive2DSet);
	void InitializeNative();
};

// Class BrgGameBase.BrgInt64Utility
// 0x0000 (0x0060 - 0x0060)
class UBrgInt64Utility : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgInt64Utility");
		}

		return uClassPointer;
	};

	static struct FBrgUInt64 Dec_U(struct FBrgUInt64& A);
	static struct FBrgUInt64 Inc_U(struct FBrgUInt64& A);
	static struct FBrgUInt64 Dec_Pre_U(struct FBrgUInt64& A);
	static struct FBrgUInt64 Inc_Pre_U(struct FBrgUInt64& A);
	static struct FBrgUInt64 SubEq_U(struct FBrgUInt64 B, struct FBrgUInt64& A);
	static struct FBrgUInt64 AddEq_U(struct FBrgUInt64 B, struct FBrgUInt64& A);
	static struct FBrgUInt64 DivEq_U(struct FBrgUInt64 B, struct FBrgUInt64& A);
	static struct FBrgUInt64 MulEq_U(struct FBrgUInt64 B, struct FBrgUInt64& A);
	static struct FBrgUInt64 Or_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Xor_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 And_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool NotEq_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool EqEq_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool GreaterEq_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool LessEq_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool Greater_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool Less_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 R_Shift_Unsigned_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 R_Shift_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 L_Shift_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Sub_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Add_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Mod_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Div_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Mul_U(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Complement_Pre_U(struct FBrgUInt64 A);
	static float UI64toF(struct FBrgUInt64 A);
	static int32_t UI64toI(struct FBrgUInt64 A);
	static class FString UI64toA(struct FBrgUInt64 UInt64Num, unsigned long Comma, unsigned long PlusChara, int32_t SpaceCharaNum, int32_t ZeroDigitNum);
	static struct FBrgUInt64 AtoUI64(class FString UInt64String);
	static struct FBrgUInt64 FtoUI64(float Num);
	static struct FBrgUInt64 ItoUI64(int32_t Num);
	static struct FBrgInt64 Dec(struct FBrgInt64& A);
	static struct FBrgInt64 InC(struct FBrgInt64& A);
	static struct FBrgInt64 Dec_Pre(struct FBrgInt64& A);
	static struct FBrgInt64 Inc_Pre(struct FBrgInt64& A);
	static struct FBrgInt64 SubEq(struct FBrgInt64 B, struct FBrgInt64& A);
	static struct FBrgInt64 AddEq(struct FBrgInt64 B, struct FBrgInt64& A);
	static struct FBrgInt64 DivEq(struct FBrgInt64 B, struct FBrgInt64& A);
	static struct FBrgInt64 MulEq(struct FBrgInt64 B, struct FBrgInt64& A);
	static struct FBrgInt64 Or(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Xor(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 And(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool NotEq(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool EqEq(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool GreaterEq(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool LessEq(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool Greater(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool Less(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 R_Shift_Unsigned(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 R_Shift(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 L_Shift(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Sub(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Add(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Mod(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Div(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Mul(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Minus_Pre(struct FBrgInt64 A);
	static struct FBrgInt64 Complement_Pre(struct FBrgInt64 A);
	static float I64toF(struct FBrgInt64 A);
	static int32_t I64toI(struct FBrgInt64 A);
	static class FString I64toA(struct FBrgInt64 Int64Num, unsigned long Comma, unsigned long PlusChara, int32_t SpaceCharaNum, int32_t ZeroDigitNum);
	static struct FBrgInt64 AtoI64(class FString Int64String);
	static struct FBrgInt64 FtoI64(float Num);
	static struct FBrgInt64 ItoI64(int32_t Num);
};

// Class BrgGameBase.BrgInterpActorSpawnable
// 0x0000 (0x0318 - 0x0318)
class ABrgInterpActorSpawnable : public AInterpActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgInterpActorSpawnable");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgJsonObjectFactory
// 0x0000 (0x0070 - 0x0070)
class UBrgJsonObjectFactory : public UJsonObjectFactory
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgJsonObjectFactory");
		}

		return uClassPointer;
	};

	class UJsonObject* CreateJsonObject();
};

// Class BrgGameBase.BrgJsonObjectManager
// 0x0090 (0x0060 - 0x00F0)
class UBrgJsonObjectManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            InitBulkCreateJsonObjectNum;                   // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            AddBulkCreateJsonObjectNum;                    // 0x006C (0x0004) [0x0000000000000000]               
	struct FMap_Mirror                                 mObjectMap;                                    // 0x0070 (0x0048) [0x0000000000001000] (CPF_Native)  
	TArray<class UJsonObject*>                         mObjects;                                      // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    mFreeObjectIndices;                            // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mAssignedObjectMax;                            // 0x00D8 (0x0004) [0x0000000000000000]               
	struct FPointer                                    mCriticalSection;                              // 0x00DC (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    mSyncEvent;                                    // 0x00E4 (0x0008) [0x0000000000001000] (CPF_Native)  
	unsigned long                                      CanBeTicked : 1;                               // 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgJsonObjectManager");
		}

		return uClassPointer;
	};

	static int32_t GetAssignedJsonObjectMax();
	static int32_t GetAssignedJsonObjectNum();
	static int32_t GetAllJsonObjectNum();
	static bool FreeJsonObject(class UJsonObject* Obj);
	static class UJsonObject* AssignJsonObject();
	static class UBrgJsonObjectManager* CreateInstance();
	int32_t FindAssignJsonObjectIndex();
};

// Class BrgGameBase.BrgLocalizedResourceManager
// 0x0054 (0x0060 - 0x00B4)
class UBrgLocalizedResourceManager : public UObject
{
public:
	class FString                                      mLangSound;                                    // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class USoundCue*>                           mSoundCues;                                    // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UAnimSet*>                            mAnimSets;                                     // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mLoadCount;                                    // 0x0090 (0x0004) [0x0000000000000000]               
	TArray<class FString>                              mSoundCueNames;                                // 0x0094 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              mAnimSetNames;                                 // 0x00A4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgLocalizedResourceManager");
		}

		return uClassPointer;
	};

	bool CheckLoadedLocalizedResource();
	int32_t eventGetLoadCount();
	void eventUpdateLoadCount();
	class UAnimSet* GetAnimSet(class FString AnimSetName);
	class USoundCue* GetSoundCue(class FString cueName);
	class USoundCue* PlaySoundCue(class FString cueName, class AActor* owningActor);
	bool eventUnregisterResources();
	bool UnregisterResourcesNT();
	bool eventRegisterResources(TArray<class USoundCue*> cues, TArray<class UAnimSet*> AnimSets);
	void RegisterLoadedResources();
	void UnloadResources(unsigned long Immediate);
	bool IsResourcesLoaded();
	void LoadResources(unsigned long isLoc);
	bool IsDone();
	void Initialize();
};

// Class BrgGameBase.BrgMaterialConstManager
// 0x0030 (0x0060 - 0x0090)
class UBrgMaterialConstManager : public UObject
{
public:
	TArray<class UMaterialInstanceConstant*>           mMtlInstConstArray;                            // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgMaterialParamEffect>             mMtlParamEffectArray;                          // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgMaterialVectorParamEffect>       mMtlVectorParamEffectArray;                    // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgMaterialConstManager");
		}

		return uClassPointer;
	};

	void Dump();
	bool VectorParamEffectTick(float DeltaTime, int32_t Index);
	bool ScalarParamEffectTick(float DeltaTime, int32_t Index);
	void Tick(float DeltaTime);
	void EndVectorParamEffectByName(class UMaterialInstanceConstant* MtlInstConst, struct FName ParamName, unsigned long ParamReset);
	void EndVectorParamEffect(class UMaterialInstanceConstant* MtlInstConst);
	void BeginVectorParamEffect(class UMaterialInstanceConstant* MtlInstConst, struct FName ParamName, struct FLinearColor StartParam, struct FLinearColor TargetParam, float Duration, float BlendInTime, float BlendOutTime, unsigned long bEndKeep, unsigned long bBlendPlayerTimeScale);
	void EndParamEffectByName(class UMaterialInstanceConstant* MtlInstConst, struct FName ParamName, unsigned long ParamReset);
	void EndParamEffect(class UMaterialInstanceConstant* MtlInstConst);
	void BeginParamEffect(class UMaterialInstanceConstant* MtlInstConst, struct FName ParamName, float StartParam, float TargetParam, float Duration, float BlendInTime, float BlendOutTime, unsigned long bEndKeep, unsigned long bBlendPlayerTimeScale);
	void RemoveMaterialInstConst(class UMaterialInstanceConstant* MtlInstConst);
	class UMaterialInstanceConstant* AddMaterialInstConst(class USkeletalMeshComponent* Mesh, struct FName MaterialName);
};

// Class BrgGameBase.BrgMaterialInstanceActor
// 0x0030 (0x027C - 0x02AC)
class ABrgMaterialInstanceActor : public AActor
{
public:
	class UMaterialInstance*                           mMaterialInstance;                             // 0x027C (0x0008) [0x0000000000000000]               
	TArray<struct FBrgMaterialParam>                   mMaterialParamArray;                           // 0x0284 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mDuration;                                     // 0x0294 (0x0004) [0x0000000000000000]               
	float                                              mBlendInTime;                                  // 0x0298 (0x0004) [0x0000000000000000]               
	float                                              mBlendOutTime;                                 // 0x029C (0x0004) [0x0000000000000000]               
	float                                              mTimeCnt;                                      // 0x02A0 (0x0004) [0x0000000000000000]               
	float                                              mCurrentRate;                                  // 0x02A4 (0x0004) [0x0000000000000000]               
	unsigned long                                      mbNotCreateInstance : 1;                       // 0x02A8 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgMaterialInstanceActor");
		}

		return uClassPointer;
	};

	void ReqOutBlend();
	void SetParamValue(float Rate);
	bool OverrideVectorEndParam(struct FName ParamName, struct FLinearColor VectorTargetValue);
	bool OverrideVectorStartParam(struct FName ParamName, struct FLinearColor VectorTargetValue);
	bool OverrideScalarEndParam(struct FName ParamName, float TargetValue);
	bool OverrideScalarStartParam(struct FName ParamName, float TargetValue);
	bool IsHaveParam(struct FName ParamName);
	void Finish();
	void Initialize(class UMaterialInterface* BaseMaterial, float Duration, float BlendInTime, float BlendOutTime, unsigned long bNotCreateInstance);
	void eventTick(float DeltaTime);
	void TickNative(float DeltaTime);
};

// Class BrgGameBase.BrgPostEffectMaterialInstanceActor
// 0x001C (0x02AC - 0x02C8)
class ABrgPostEffectMaterialInstanceActor : public ABrgMaterialInstanceActor
{
public:
	class UMaterialEffect*                             mOriginMaterialEffect;                         // 0x02AC (0x0008) [0x0000000000000000]               
	class UMaterialInterface*                          mOriginMaterialInterface;                      // 0x02B4 (0x0008) [0x0000000000000000]               
	class UMaterialInterface*                          mBaseMaterialInterface;                        // 0x02BC (0x0008) [0x0000000000000000]               
	unsigned long                                      mbFinishDisable : 1;                           // 0x02C4 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgPostEffectMaterialInstanceActor");
		}

		return uClassPointer;
	};

	void Finish();
	void SetMaterialParam(class UMaterialInstanceConstant* TargetMatInst);
	static class UMaterialEffect* GetPlayerPostEffectMaterialEffect(struct FName EffectName);
	static class ABrgPostEffectMaterialInstanceActor* CreatePostEffectMaterialInstanceActor(class AActor* InOwner, class UMaterialEffect* OriginMatEffect, class UMaterialInterface* BaseMat, float Duration, float BlendInTime, float BlendOutTime, unsigned long bNoCreateInstance);
};

// Class BrgGameBase.BrgMath
// 0x0000 (0x0060 - 0x0060)
class UBrgMath : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgMath");
		}

		return uClassPointer;
	};

	static struct FVector ClosestPoint_PointPlane(struct FVector Point, struct FVector PlanePos, struct FVector PlaneNormal);
	static float ClosestDist_PointPlane(struct FVector Point, struct FVector PlanePos, struct FVector PlaneNormal);
	static struct FRotator RotatorClampTwoPI(struct FRotator InRot);
	static struct FRotator RotatorSub(struct FRotator SrcRot, struct FRotator DstRot);
	static struct FRotator RotatorBlend(struct FRotator SrcRot, struct FRotator DstRot, float Rate);
	static void VectorRotationYaw(struct FVector InVec, int32_t Yaw, struct FVector& OutPos);
	static void VectorRotation(struct FVector InVec, int32_t Pitch, int32_t Yaw, int32_t Roll, struct FVector& OutPos);
};

// Class BrgGameBase.BrgMeshOutlineManager
// 0x2D018 (0x0060 - 0x2D078)
class UBrgMeshOutlineManager : public UObject
{
public:
	unsigned long                                      mGlobalVisible : 1;                            // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mMeshNum;                                      // 0x0064 (0x0004) [0x0000000000000000]               
	struct FBrgMeshOutlineInfo                         mMeshs[0x400];                                 // 0x0068 (0x2D000) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class ABrgGameInfoNativeBase*                      mGameInfoNativeBase;                           // 0x2D068 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   mOutlineMIC;                                   // 0x2D070 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgMeshOutlineManager");
		}

		return uClassPointer;
	};

	void TickProcess(float inDeltaTime);
	void SetGlobalVisible(unsigned long Invisible);
	class UStaticMeshComponent* GetOutlineStaticMeshComponent(int32_t InIndex);
	bool CheckValid(int32_t InIndex);
	bool GetVisible(int32_t InIndex);
	bool SetVisible(int32_t InIndex, unsigned long Invisible, unsigned long inAlwaysProcess);
	bool DelOutlineMesh(int32_t InIndex);
	int32_t SearchOutlineMesh(class AActor* inTargetActor, class UStaticMeshComponent* inStaticMC, class USkeletalMeshComponent* inSkeletalMC);
	int32_t AddOutlineMesh(class AActor* inTargetActor, class UStaticMeshComponent* inStaticMC, class USkeletalMeshComponent* inSkeletalMC);
	void Initialize();
};

// Class BrgGameBase.BrgNetworkCacheRequest
// 0x005C (0x0060 - 0x00BC)
class UBrgNetworkCacheRequest : public UObject
{
public:
	struct FMap_Mirror                                 RequestMap;                                    // 0x0060 (0x0048) [0x0000000000001000] (CPF_Native)  
	TArray<class UJsonObject*>                         Requests;                                      // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      CacheEnable : 1;                               // 0x00B8 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkCacheRequest");
		}

		return uClassPointer;
	};

	class UJsonObject* FindCacheRequest(class FString cacheApiName, class UJsonObject* jsonObj);
	bool RemoveCacheRequest(class FString cacheApiName);
	bool AddCacheRequest(class FString cacheApiName, class UJsonObject* jsonObj);
	void Update(float DeltaTime);
	bool GetCacheEnable();
	void SetCacheEnable(unsigned long flag);
	void Terminate();
	void Initialize();
};

// Class BrgGameBase.BrgNetworkDeclEnum
// 0x0000 (0x0060 - 0x0060)
class UBrgNetworkDeclEnum : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkDeclEnum");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgNetworkDeclStruct
// 0x0000 (0x0060 - 0x0060)
class UBrgNetworkDeclStruct : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkDeclStruct");
		}

		return uClassPointer;
	};

	static void SetBrgDbMasterLastfloorValue(struct FBrgDbMasterLastfloor Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterLastfloorValue(class UJsonObject* jsonObj, struct FBrgDbMasterLastfloor& outObj);
	static void SetBrgDbSaveDiePointParamValue(struct FBrgDbSaveDiePointParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSaveDiePointParamValue(class UJsonObject* jsonObj, struct FBrgDbSaveDiePointParam& outObj);
	static void SetBrgDbFortBreakBonusValue(struct FBrgDbFortBreakBonus Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortBreakBonusValue(class UJsonObject* jsonObj, struct FBrgDbFortBreakBonus& outObj);
	static void SetBrgDbTargetPointAllValue(struct FBrgDbTargetPointAll Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTargetPointAllValue(class UJsonObject* jsonObj, struct FBrgDbTargetPointAll& outObj);
	static void SetBrgDbBreakableObjTargetPointValue(struct FBrgDbBreakableObjTargetPoint Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBreakableObjTargetPointValue(class UJsonObject* jsonObj, struct FBrgDbBreakableObjTargetPoint& outObj);
	static void SetBrgDbTrboxTargetPointValue(struct FBrgDbTrboxTargetPoint Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTrboxTargetPointValue(class UJsonObject* jsonObj, struct FBrgDbTrboxTargetPoint& outObj);
	static void SetBrgDbItemTargetPointValue(struct FBrgDbItemTargetPoint Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbItemTargetPointValue(class UJsonObject* jsonObj, struct FBrgDbItemTargetPoint& outObj);
	static void SetBrgDbBeastTargetPointValue(struct FBrgDbBeastTargetPoint Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBeastTargetPointValue(class UJsonObject* jsonObj, struct FBrgDbBeastTargetPoint& outObj);
	static void SetBrgDbMushroomTargetPointValue(struct FBrgDbMushroomTargetPoint Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMushroomTargetPointValue(class UJsonObject* jsonObj, struct FBrgDbMushroomTargetPoint& outObj);
	static void SetBrgDbMbossTargetPointValue(struct FBrgDbMbossTargetPoint Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMbossTargetPointValue(class UJsonObject* jsonObj, struct FBrgDbMbossTargetPoint& outObj);
	static void SetBrgDbZakoTargetPointValue(struct FBrgDbZakoTargetPoint Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbZakoTargetPointValue(class UJsonObject* jsonObj, struct FBrgDbZakoTargetPoint& outObj);
	static void SetBrgDbZombieTargetPointValue(struct FBrgDbZombieTargetPoint Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbZombieTargetPointValue(class UJsonObject* jsonObj, struct FBrgDbZombieTargetPoint& outObj);
	static void SetBrgDbMasterZakoGenValue(struct FBrgDbMasterZakoGen Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterZakoGenValue(class UJsonObject* jsonObj, struct FBrgDbMasterZakoGen& outObj);
	static void SetBrgDbMasterBeastGenValue(struct FBrgDbMasterBeastGen Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterBeastGenValue(class UJsonObject* jsonObj, struct FBrgDbMasterBeastGen& outObj);
	static void SetBrgDbServerEnvListValue(struct FBrgDbServerEnvList Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbServerEnvListValue(class UJsonObject* jsonObj, struct FBrgDbServerEnvList& outObj);
	static void SetBrgDbServerEnvValue(struct FBrgDbServerEnv Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbServerEnvValue(class UJsonObject* jsonObj, struct FBrgDbServerEnv& outObj);
	static void SetBrgDbServerEnvUrlValue(struct FBrgDbServerEnvUrl Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbServerEnvUrlValue(class UJsonObject* jsonObj, struct FBrgDbServerEnvUrl& outObj);
	static void SetBrgDbLogoutParamValue(struct FBrgDbLogoutParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbLogoutParamValue(class UJsonObject* jsonObj, struct FBrgDbLogoutParam& outObj);
	static void SetBrgFrameRateSkipLogParamValue(struct FBrgFrameRateSkipLogParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgFrameRateSkipLogParamValue(class UJsonObject* jsonObj, struct FBrgFrameRateSkipLogParam& outObj);
	static void SetBrgFrameRateSkipInfoValue(struct FBrgFrameRateSkipInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgFrameRateSkipInfoValue(class UJsonObject* jsonObj, struct FBrgFrameRateSkipInfo& outObj);
	static void SetBrgFrameRateSkipObjectValue(struct FBrgFrameRateSkipObject Arg, class UJsonObject*& outJsonObj);
	static void GetBrgFrameRateSkipObjectValue(class UJsonObject* jsonObj, struct FBrgFrameRateSkipObject& outObj);
	static void SetBrgRecoverErrorParamValue(struct FBrgRecoverErrorParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgRecoverErrorParamValue(class UJsonObject* jsonObj, struct FBrgRecoverErrorParam& outObj);
	static void SetBrgDbUpdateUserInfoParamValue(struct FBrgDbUpdateUserInfoParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUpdateUserInfoParamValue(class UJsonObject* jsonObj, struct FBrgDbUpdateUserInfoParam& outObj);
	static void SetBrgDbInputUserNameParamValue(struct FBrgDbInputUserNameParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbInputUserNameParamValue(class UJsonObject* jsonObj, struct FBrgDbInputUserNameParam& outObj);
	static void SetBrgDbUpdateCharaNameParamValue(struct FBrgDbUpdateCharaNameParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUpdateCharaNameParamValue(class UJsonObject* jsonObj, struct FBrgDbUpdateCharaNameParam& outObj);
	static void SetBrgDbUserSpecAndSettingValue(struct FBrgDbUserSpecAndSetting Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserSpecAndSettingValue(class UJsonObject* jsonObj, struct FBrgDbUserSpecAndSetting& outObj);
	static void SetBrgDbSkillGroupValue(struct FBrgDbSkillGroup Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSkillGroupValue(class UJsonObject* jsonObj, struct FBrgDbSkillGroup& outObj);
	static void SetBrgDbSkillCategoryValue(struct FBrgDbSkillCategory Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSkillCategoryValue(class UJsonObject* jsonObj, struct FBrgDbSkillCategory& outObj);
	static void SetBrgDbTmpMsgValue(struct FBrgDbTmpMsg Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTmpMsgValue(class UJsonObject* jsonObj, struct FBrgDbTmpMsg& outObj);
	static void SetBrgDbScreenshotValue(struct FBrgDbScreenshot Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbScreenshotValue(class UJsonObject* jsonObj, struct FBrgDbScreenshot& outObj);
	static void SetBrgDbEndSpParamValue(struct FBrgDbEndSpParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbEndSpParamValue(class UJsonObject* jsonObj, struct FBrgDbEndSpParam& outObj);
	static void SetBrgDbRadioJingleValue(struct FBrgDbRadioJingle Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRadioJingleValue(class UJsonObject* jsonObj, struct FBrgDbRadioJingle& outObj);
	static void SetBrgDbRadioYotsuyamaValue(struct FBrgDbRadioYotsuyama Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRadioYotsuyamaValue(class UJsonObject* jsonObj, struct FBrgDbRadioYotsuyama& outObj);
	static void SetBrgDbRadioChannelValue(struct FBrgDbRadioChannel Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRadioChannelValue(class UJsonObject* jsonObj, struct FBrgDbRadioChannel& outObj);
	static void SetBrgDbRadioMusicValue(struct FBrgDbRadioMusic Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRadioMusicValue(class UJsonObject* jsonObj, struct FBrgDbRadioMusic& outObj);
	static void SetBrgDbMasterWhistleGenValue(struct FBrgDbMasterWhistleGen Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterWhistleGenValue(class UJsonObject* jsonObj, struct FBrgDbMasterWhistleGen& outObj);
	static void SetBrgDbMasterWhistleValue(struct FBrgDbMasterWhistle Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterWhistleValue(class UJsonObject* jsonObj, struct FBrgDbMasterWhistle& outObj);
	static void SetBrgDbPlaylogValue(struct FBrgDbPlaylog Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlaylogValue(class UJsonObject* jsonObj, struct FBrgDbPlaylog& outObj);
	static void SetBrgDbPlaylogFortValue(struct FBrgDbPlaylogFort Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlaylogFortValue(class UJsonObject* jsonObj, struct FBrgDbPlaylogFort& outObj);
	static void SetBrgDbPlaylogFighterValue(struct FBrgDbPlaylogFighter Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlaylogFighterValue(class UJsonObject* jsonObj, struct FBrgDbPlaylogFighter& outObj);
	static void SetBrgDbPlaylogMoneyValue(struct FBrgDbPlaylogMoney Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlaylogMoneyValue(class UJsonObject* jsonObj, struct FBrgDbPlaylogMoney& outObj);
	static void SetBrgDbPlaylogFamousValue(struct FBrgDbPlaylogFamous Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlaylogFamousValue(class UJsonObject* jsonObj, struct FBrgDbPlaylogFamous& outObj);
	static void SetBrgDbPlaylogKillValue(struct FBrgDbPlaylogKill Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlaylogKillValue(class UJsonObject* jsonObj, struct FBrgDbPlaylogKill& outObj);
	static void SetBrgDbPlaylogDiedValue(struct FBrgDbPlaylogDied Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlaylogDiedValue(class UJsonObject* jsonObj, struct FBrgDbPlaylogDied& outObj);
	static void SetBrgDbPlaylogCharaValue(struct FBrgDbPlaylogChara Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlaylogCharaValue(class UJsonObject* jsonObj, struct FBrgDbPlaylogChara& outObj);
	static void SetBrgDbPlaylogUserValue(struct FBrgDbPlaylogUser Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlaylogUserValue(class UJsonObject* jsonObj, struct FBrgDbPlaylogUser& outObj);
	static void SetBrgDbUpdateRevengeParamValue(struct FBrgDbUpdateRevengeParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUpdateRevengeParamValue(class UJsonObject* jsonObj, struct FBrgDbUpdateRevengeParam& outObj);
	static void SetBrgDbRevengeValue(struct FBrgDbRevenge Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRevengeValue(class UJsonObject* jsonObj, struct FBrgDbRevenge& outObj);
	static void SetBrgDbUpdateFriendParamValue(struct FBrgDbUpdateFriendParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUpdateFriendParamValue(class UJsonObject* jsonObj, struct FBrgDbUpdateFriendParam& outObj);
	static void SetBrgDbPSNFriendDiffValue(struct FBrgDbPSNFriendDiff Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPSNFriendDiffValue(class UJsonObject* jsonObj, struct FBrgDbPSNFriendDiff& outObj);
	static void SetBrgDbHunterResultValue(struct FBrgDbHunterResult Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbHunterResultValue(class UJsonObject* jsonObj, struct FBrgDbHunterResult& outObj);
	static void SetBrgDbHunterRewardValue(struct FBrgDbHunterReward Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbHunterRewardValue(class UJsonObject* jsonObj, struct FBrgDbHunterReward& outObj);
	static void SetBrgDbHunterResultTargetValue(struct FBrgDbHunterResultTarget Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbHunterResultTargetValue(class UJsonObject* jsonObj, struct FBrgDbHunterResultTarget& outObj);
	static void SetBrgDbHunterResultBaseValue(struct FBrgDbHunterResultBase Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbHunterResultBaseValue(class UJsonObject* jsonObj, struct FBrgDbHunterResultBase& outObj);
	static void SetBrgDbShowHunterResultParamValue(struct FBrgDbShowHunterResultParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbShowHunterResultParamValue(class UJsonObject* jsonObj, struct FBrgDbShowHunterResultParam& outObj);
	static void SetBrgDbRoastMushroomParamValue(struct FBrgDbRoastMushroomParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRoastMushroomParamValue(class UJsonObject* jsonObj, struct FBrgDbRoastMushroomParam& outObj);
	static void SetBrgDbFortterminalParamValue(struct FBrgDbFortterminalParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortterminalParamValue(class UJsonObject* jsonObj, struct FBrgDbFortterminalParam& outObj);
	static void SetBrgDbUpdateFortSettingParamValue(struct FBrgDbUpdateFortSettingParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUpdateFortSettingParamValue(class UJsonObject* jsonObj, struct FBrgDbUpdateFortSettingParam& outObj);
	static void SetBrgDbGetAssaultFortResultParamValue(struct FBrgDbGetAssaultFortResultParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbGetAssaultFortResultParamValue(class UJsonObject* jsonObj, struct FBrgDbGetAssaultFortResultParam& outObj);
	static void SetBrgDbAssaultFortResultParamValue(struct FBrgDbAssaultFortResultParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAssaultFortResultParamValue(class UJsonObject* jsonObj, struct FBrgDbAssaultFortResultParam& outObj);
	static void SetBrgDbAssaultFortParamValue(struct FBrgDbAssaultFortParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAssaultFortParamValue(class UJsonObject* jsonObj, struct FBrgDbAssaultFortParam& outObj);
	static void SetBrgDbSendHunterParamValue(struct FBrgDbSendHunterParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSendHunterParamValue(class UJsonObject* jsonObj, struct FBrgDbSendHunterParam& outObj);
	static void SetBrgDbSkillGachaResultValue(struct FBrgDbSkillGachaResult Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSkillGachaResultValue(class UJsonObject* jsonObj, struct FBrgDbSkillGachaResult& outObj);
	static void SetBrgDbGachaValue(struct FBrgDbGacha Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbGachaValue(class UJsonObject* jsonObj, struct FBrgDbGacha& outObj);
	static void SetBrgDbGachaContentValue(struct FBrgDbGachaContent Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbGachaContentValue(class UJsonObject* jsonObj, struct FBrgDbGachaContent& outObj);
	static void SetBrgDbUserBoxGachaValue(struct FBrgDbUserBoxGacha Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserBoxGachaValue(class UJsonObject* jsonObj, struct FBrgDbUserBoxGacha& outObj);
	static void SetBrgDbUserBoxGachaContentValue(struct FBrgDbUserBoxGachaContent Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserBoxGachaContentValue(class UJsonObject* jsonObj, struct FBrgDbUserBoxGachaContent& outObj);
	static void SetBrgDbResetBoxGachaParamValue(struct FBrgDbResetBoxGachaParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbResetBoxGachaParamValue(class UJsonObject* jsonObj, struct FBrgDbResetBoxGachaParam& outObj);
	static void SetBrgDbSkillGachaParamValue(struct FBrgDbSkillGachaParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSkillGachaParamValue(class UJsonObject* jsonObj, struct FBrgDbSkillGachaParam& outObj);
	static void SetBrgDbUseSafeParamValue(struct FBrgDbUseSafeParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUseSafeParamValue(class UJsonObject* jsonObj, struct FBrgDbUseSafeParam& outObj);
	static void SetBrgDbReduceWaitingParamValue(struct FBrgDbReduceWaitingParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbReduceWaitingParamValue(class UJsonObject* jsonObj, struct FBrgDbReduceWaitingParam& outObj);
	static void SetBrgDbOrderQuestsParamValue(struct FBrgDbOrderQuestsParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbOrderQuestsParamValue(class UJsonObject* jsonObj, struct FBrgDbOrderQuestsParam& outObj);
	static void SetBrgDbGetQuestsParamValue(struct FBrgDbGetQuestsParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbGetQuestsParamValue(class UJsonObject* jsonObj, struct FBrgDbGetQuestsParam& outObj);
	static void SetBrgDbQuestValue(struct FBrgDbQuest Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbQuestValue(class UJsonObject* jsonObj, struct FBrgDbQuest& outObj);
	static void SetBrgDbMasterQuestCategoryValue(struct FBrgDbMasterQuestCategory Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterQuestCategoryValue(class UJsonObject* jsonObj, struct FBrgDbMasterQuestCategory& outObj);
	static void SetBrgDbMasterQuestValue(struct FBrgDbMasterQuest Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterQuestValue(class UJsonObject* jsonObj, struct FBrgDbMasterQuest& outObj);
	static void SetBrgDbMasterZombieParamValue(struct FBrgDbMasterZombieParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterZombieParamValue(class UJsonObject* jsonObj, struct FBrgDbMasterZombieParam& outObj);
	static void SetBrgDbUpdateHubCustomizeParamValue(struct FBrgDbUpdateHubCustomizeParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUpdateHubCustomizeParamValue(class UJsonObject* jsonObj, struct FBrgDbUpdateHubCustomizeParam& outObj);
	static void SetBrgDbChangeTeamParamValue(struct FBrgDbChangeTeamParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbChangeTeamParamValue(class UJsonObject* jsonObj, struct FBrgDbChangeTeamParam& outObj);
	static void SetBrgDbAssaultFortResultValue(struct FBrgDbAssaultFortResult Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAssaultFortResultValue(class UJsonObject* jsonObj, struct FBrgDbAssaultFortResult& outObj);
	static void SetBrgDbAssaultFortResultDetailValue(struct FBrgDbAssaultFortResultDetail Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAssaultFortResultDetailValue(class UJsonObject* jsonObj, struct FBrgDbAssaultFortResultDetail& outObj);
	static void SetBrgDbFortTakeoutCharaValue(struct FBrgDbFortTakeoutChara Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortTakeoutCharaValue(class UJsonObject* jsonObj, struct FBrgDbFortTakeoutChara& outObj);
	static void SetBrgDbAssaultFortResultOldValue(struct FBrgDbAssaultFortResultOld Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAssaultFortResultOldValue(class UJsonObject* jsonObj, struct FBrgDbAssaultFortResultOld& outObj);
	static void SetBrgDbFortValue(struct FBrgDbFort Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortValue(class UJsonObject* jsonObj, struct FBrgDbFort& outObj);
	static void SetBrgDbFortWaveValue(struct FBrgDbFortWave Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortWaveValue(class UJsonObject* jsonObj, struct FBrgDbFortWave& outObj);
	static void SetBrgDbZombieOrderValue(struct FBrgDbZombieOrder Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbZombieOrderValue(class UJsonObject* jsonObj, struct FBrgDbZombieOrder& outObj);
	static void SetBrgDbAssaultFeeAllValue(struct FBrgDbAssaultFeeAll Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAssaultFeeAllValue(class UJsonObject* jsonObj, struct FBrgDbAssaultFeeAll& outObj);
	static void SetBrgDbAssaultFortCountAllValue(struct FBrgDbAssaultFortCountAll Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAssaultFortCountAllValue(class UJsonObject* jsonObj, struct FBrgDbAssaultFortCountAll& outObj);
	static void SetBrgDbFortDestAllValue(struct FBrgDbFortDestAll Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortDestAllValue(class UJsonObject* jsonObj, struct FBrgDbFortDestAll& outObj);
	static void SetBrgDbFortDestAllOldValue(struct FBrgDbFortDestAllOld Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortDestAllOldValue(class UJsonObject* jsonObj, struct FBrgDbFortDestAllOld& outObj);
	static void SetBrgDbAssaultFortCountValue(struct FBrgDbAssaultFortCount Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAssaultFortCountValue(class UJsonObject* jsonObj, struct FBrgDbAssaultFortCount& outObj);
	static void SetBrgDbDeffenceFortHubStateValue(struct FBrgDbDeffenceFortHubState Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDeffenceFortHubStateValue(class UJsonObject* jsonObj, struct FBrgDbDeffenceFortHubState& outObj);
	static void SetBrgDbRescueDestValue(struct FBrgDbRescueDest Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRescueDestValue(class UJsonObject* jsonObj, struct FBrgDbRescueDest& outObj);
	static void SetBrgDbRescueLogValue(struct FBrgDbRescueLog Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRescueLogValue(class UJsonObject* jsonObj, struct FBrgDbRescueLog& outObj);
	static void SetBrgDbFortDestValue(struct FBrgDbFortDest Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortDestValue(class UJsonObject* jsonObj, struct FBrgDbFortDest& outObj);
	static void SetBrgDbFortDestOldValue(struct FBrgDbFortDestOld Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortDestOldValue(class UJsonObject* jsonObj, struct FBrgDbFortDestOld& outObj);
	static void SetBrgDbHunterDestAllValue(struct FBrgDbHunterDestAll Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbHunterDestAllValue(class UJsonObject* jsonObj, struct FBrgDbHunterDestAll& outObj);
	static void SetBrgDbHunterDestValue(struct FBrgDbHunterDest Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbHunterDestValue(class UJsonObject* jsonObj, struct FBrgDbHunterDest& outObj);
	static void SetBrgDbReceiveDeathboxParamValue(struct FBrgDbReceiveDeathboxParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbReceiveDeathboxParamValue(class UJsonObject* jsonObj, struct FBrgDbReceiveDeathboxParam& outObj);
	static void SetBrgDbOperatePresentParamValue(struct FBrgDbOperatePresentParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbOperatePresentParamValue(class UJsonObject* jsonObj, struct FBrgDbOperatePresentParam& outObj);
	static void SetBrgDbOperatePresentHistoryValue(struct FBrgDbOperatePresentHistory Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbOperatePresentHistoryValue(class UJsonObject* jsonObj, struct FBrgDbOperatePresentHistory& outObj);
	static void SetBrgDbReceivePresentParamValue(struct FBrgDbReceivePresentParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbReceivePresentParamValue(class UJsonObject* jsonObj, struct FBrgDbReceivePresentParam& outObj);
	static void SetBrgDbUserConfigMenuValue(struct FBrgDbUserConfigMenu Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserConfigMenuValue(class UJsonObject* jsonObj, struct FBrgDbUserConfigMenu& outObj);
	static void SetBrgDbUserConfigValue(struct FBrgDbUserConfig Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserConfigValue(class UJsonObject* jsonObj, struct FBrgDbUserConfig& outObj);
	static void SetBrgDbGetLocdatParamValue(struct FBrgDbGetLocdatParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbGetLocdatParamValue(class UJsonObject* jsonObj, struct FBrgDbGetLocdatParam& outObj);
	static void SetBrgDbVipPurchaseParamValue(struct FBrgDbVipPurchaseParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbVipPurchaseParamValue(class UJsonObject* jsonObj, struct FBrgDbVipPurchaseParam& outObj);
	static void SetBrgDbUserVipConfigParamValue(struct FBrgDbUserVipConfigParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserVipConfigParamValue(class UJsonObject* jsonObj, struct FBrgDbUserVipConfigParam& outObj);
	static void SetBrgDbUserVipUseParamValue(struct FBrgDbUserVipUseParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserVipUseParamValue(class UJsonObject* jsonObj, struct FBrgDbUserVipUseParam& outObj);
	static void SetBrgDbOpenDialogParamValue(struct FBrgDbOpenDialogParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbOpenDialogParamValue(class UJsonObject* jsonObj, struct FBrgDbOpenDialogParam& outObj);
	static void SetBrgDbUpdateMedalParamValue(struct FBrgDbUpdateMedalParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUpdateMedalParamValue(class UJsonObject* jsonObj, struct FBrgDbUpdateMedalParam& outObj);
	static void SetBrgDbDistributeBodyLvlParamValue(struct FBrgDbDistributeBodyLvlParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDistributeBodyLvlParamValue(class UJsonObject* jsonObj, struct FBrgDbDistributeBodyLvlParam& outObj);
	static void SetBrgDbAccessPrisonParamValue(struct FBrgDbAccessPrisonParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAccessPrisonParamValue(class UJsonObject* jsonObj, struct FBrgDbAccessPrisonParam& outObj);
	static void SetBrgDbFreezeAbducteeParamValue(struct FBrgDbFreezeAbducteeParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFreezeAbducteeParamValue(class UJsonObject* jsonObj, struct FBrgDbFreezeAbducteeParam& outObj);
	static void SetBrgDbReleaseAbducteeParamValue(struct FBrgDbReleaseAbducteeParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbReleaseAbducteeParamValue(class UJsonObject* jsonObj, struct FBrgDbReleaseAbducteeParam& outObj);
	static void SetBrgDbPurchaseBodyParamValue(struct FBrgDbPurchaseBodyParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPurchaseBodyParamValue(class UJsonObject* jsonObj, struct FBrgDbPurchaseBodyParam& outObj);
	static void SetBrgDbSelectBodyParamValue(struct FBrgDbSelectBodyParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSelectBodyParamValue(class UJsonObject* jsonObj, struct FBrgDbSelectBodyParam& outObj);
	static void SetBrgDbPayRansomParamValue(struct FBrgDbPayRansomParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPayRansomParamValue(class UJsonObject* jsonObj, struct FBrgDbPayRansomParam& outObj);
	static void SetBrgDbDestroyCharaParamValue(struct FBrgDbDestroyCharaParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDestroyCharaParamValue(class UJsonObject* jsonObj, struct FBrgDbDestroyCharaParam& outObj);
	static void SetBrgDbSelectCharaParamValue(struct FBrgDbSelectCharaParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSelectCharaParamValue(class UJsonObject* jsonObj, struct FBrgDbSelectCharaParam& outObj);
	static void SetBrgDbForsakeAbducteeParamValue(struct FBrgDbForsakeAbducteeParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbForsakeAbducteeParamValue(class UJsonObject* jsonObj, struct FBrgDbForsakeAbducteeParam& outObj);
	static void SetBrgDbForsakeParamValue(struct FBrgDbForsakeParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbForsakeParamValue(class UJsonObject* jsonObj, struct FBrgDbForsakeParam& outObj);
	static void SetBrgDbRecoveryParamValue(struct FBrgDbRecoveryParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRecoveryParamValue(class UJsonObject* jsonObj, struct FBrgDbRecoveryParam& outObj);
	static void SetBrgDbCancelHunterParamValue(struct FBrgDbCancelHunterParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbCancelHunterParamValue(class UJsonObject* jsonObj, struct FBrgDbCancelHunterParam& outObj);
	static void SetBrgDbSalvageParamValue(struct FBrgDbSalvageParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSalvageParamValue(class UJsonObject* jsonObj, struct FBrgDbSalvageParam& outObj);
	static void SetBrgDbDbgStartHubParamValue(struct FBrgDbDbgStartHubParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDbgStartHubParamValue(class UJsonObject* jsonObj, struct FBrgDbDbgStartHubParam& outObj);
	static void SetBrgDbStartHubParamValue(struct FBrgDbStartHubParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbStartHubParamValue(class UJsonObject* jsonObj, struct FBrgDbStartHubParam& outObj);
	static void SetBrgDbMasterHubCustomizeValue(struct FBrgDbMasterHubCustomize Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterHubCustomizeValue(class UJsonObject* jsonObj, struct FBrgDbMasterHubCustomize& outObj);
	static void SetBrgDbBloodniumValue(struct FBrgDbBloodnium Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBloodniumValue(class UJsonObject* jsonObj, struct FBrgDbBloodnium& outObj);
	static void SetBrgDbUserHubCustomizeValue(struct FBrgDbUserHubCustomize Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserHubCustomizeValue(class UJsonObject* jsonObj, struct FBrgDbUserHubCustomize& outObj);
	static void SetBrgDbHubCustomizeLogValue(struct FBrgDbHubCustomizeLog Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbHubCustomizeLogValue(class UJsonObject* jsonObj, struct FBrgDbHubCustomizeLog& outObj);
	static void SetBrgDbAreaTemplateInfoValue(struct FBrgDbAreaTemplateInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaTemplateInfoValue(class UJsonObject* jsonObj, struct FBrgDbAreaTemplateInfo& outObj);
	static void SetBrgDbAreaInfoValue(struct FBrgDbAreaInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaInfoValue(class UJsonObject* jsonObj, struct FBrgDbAreaInfo& outObj);
	static void SetBrgDbAreaSettingValue(struct FBrgDbAreaSetting Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaSettingValue(class UJsonObject* jsonObj, struct FBrgDbAreaSetting& outObj);
	static void SetBrgDbAreaSettingReplaceUnitValue(struct FBrgDbAreaSettingReplaceUnit Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaSettingReplaceUnitValue(class UJsonObject* jsonObj, struct FBrgDbAreaSettingReplaceUnit& outObj);
	static void SetBrgDbAreaSettingConditionValue(struct FBrgDbAreaSettingCondition Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaSettingConditionValue(class UJsonObject* jsonObj, struct FBrgDbAreaSettingCondition& outObj);
	static void SetBrgDbAreaUnitValue(struct FBrgDbAreaUnit Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaUnitValue(class UJsonObject* jsonObj, struct FBrgDbAreaUnit& outObj);
	static void SetBrgDbAreaCandidateValue(struct FBrgDbAreaCandidate Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaCandidateValue(class UJsonObject* jsonObj, struct FBrgDbAreaCandidate& outObj);
	static void SetBrgDbAreaTemplateValue(struct FBrgDbAreaTemplate Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaTemplateValue(class UJsonObject* jsonObj, struct FBrgDbAreaTemplate& outObj);
	static void SetBrgDbAreaConnectRepeatStraightValue(struct FBrgDbAreaConnectRepeatStraight Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaConnectRepeatStraightValue(class UJsonObject* jsonObj, struct FBrgDbAreaConnectRepeatStraight& outObj);
	static void SetBrgDbAreaConnectValue(struct FBrgDbAreaConnect Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaConnectValue(class UJsonObject* jsonObj, struct FBrgDbAreaConnect& outObj);
	static void SetBrgDbAreaConnectFlagOffsetValue(struct FBrgDbAreaConnectFlagOffset Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaConnectFlagOffsetValue(class UJsonObject* jsonObj, struct FBrgDbAreaConnectFlagOffset& outObj);
	static void SetBrgDbAreaConnectEscalatorValue(struct FBrgDbAreaConnectEscalator Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaConnectEscalatorValue(class UJsonObject* jsonObj, struct FBrgDbAreaConnectEscalator& outObj);
	static void SetBrgDbScentenceInfoValue(struct FBrgDbScentenceInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbScentenceInfoValue(class UJsonObject* jsonObj, struct FBrgDbScentenceInfo& outObj);
	static void SetBrgDbSentenceValue(struct FBrgDbSentence Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSentenceValue(class UJsonObject* jsonObj, struct FBrgDbSentence& outObj);
	static void SetTest_structValue(struct Ftest_struct Arg, class UJsonObject*& outJsonObj);
	static void GetTest_structValue(class UJsonObject* jsonObj, struct Ftest_struct& outObj);
	static void SetTest_struct2Value(struct Ftest_struct2 Arg, class UJsonObject*& outJsonObj);
	static void GetTest_struct2Value(class UJsonObject* jsonObj, struct Ftest_struct2& outObj);
	static void SetBrgDbMsglogValue(struct FBrgDbMsglog Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMsglogValue(class UJsonObject* jsonObj, struct FBrgDbMsglog& outObj);
	static void SetBrgDbMsgValue(struct FBrgDbMsg Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMsgValue(class UJsonObject* jsonObj, struct FBrgDbMsg& outObj);
	static void SetBrgDbPresentValue(struct FBrgDbPresent Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPresentValue(class UJsonObject* jsonObj, struct FBrgDbPresent& outObj);
	static void SetBrgDbPresentItemValue(struct FBrgDbPresentItem Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPresentItemValue(class UJsonObject* jsonObj, struct FBrgDbPresentItem& outObj);
	static void SetBrgDbLogElementValue(struct FBrgDbLogElement Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbLogElementValue(class UJsonObject* jsonObj, struct FBrgDbLogElement& outObj);
	static void SetBrgDbGrimPeaperMenuValue(struct FBrgDbGrimPeaperMenu Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbGrimPeaperMenuValue(class UJsonObject* jsonObj, struct FBrgDbGrimPeaperMenu& outObj);
	static void SetBrgDbPlayLogMenuValue(struct FBrgDbPlayLogMenu Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlayLogMenuValue(class UJsonObject* jsonObj, struct FBrgDbPlayLogMenu& outObj);
	static void SetBrgDbSubtitleInfoValue(struct FBrgDbSubtitleInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSubtitleInfoValue(class UJsonObject* jsonObj, struct FBrgDbSubtitleInfo& outObj);
	static void SetBrgDbSubtitlePkgValue(struct FBrgDbSubtitlePkg Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSubtitlePkgValue(class UJsonObject* jsonObj, struct FBrgDbSubtitlePkg& outObj);
	static void SetBrgDbSubtitleWavValue(struct FBrgDbSubtitleWav Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSubtitleWavValue(class UJsonObject* jsonObj, struct FBrgDbSubtitleWav& outObj);
	static void SetBrgDbSubtitleValue(struct FBrgDbSubtitle Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSubtitleValue(class UJsonObject* jsonObj, struct FBrgDbSubtitle& outObj);
	static void SetBrgDbLocInfoValue(struct FBrgDbLocInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbLocInfoValue(class UJsonObject* jsonObj, struct FBrgDbLocInfo& outObj);
	static void SetBrgDbLocSectionValue(struct FBrgDbLocSection Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbLocSectionValue(class UJsonObject* jsonObj, struct FBrgDbLocSection& outObj);
	static void SetBrgDbLocTextValue(struct FBrgDbLocText Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbLocTextValue(class UJsonObject* jsonObj, struct FBrgDbLocText& outObj);
	static void SetBrgDbDbgMoveFloorParamValue(struct FBrgDbDbgMoveFloorParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDbgMoveFloorParamValue(class UJsonObject* jsonObj, struct FBrgDbDbgMoveFloorParam& outObj);
	static void SetBrgDbMoveFloorParamValue(struct FBrgDbMoveFloorParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMoveFloorParamValue(class UJsonObject* jsonObj, struct FBrgDbMoveFloorParam& outObj);
	static void SetBrgDbDbgTakeElevatorParamValue(struct FBrgDbDbgTakeElevatorParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDbgTakeElevatorParamValue(class UJsonObject* jsonObj, struct FBrgDbDbgTakeElevatorParam& outObj);
	static void SetBrgDbTakeElevatorParamValue(struct FBrgDbTakeElevatorParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTakeElevatorParamValue(class UJsonObject* jsonObj, struct FBrgDbTakeElevatorParam& outObj);
	static void SetBrgDbEndBetParamValue(struct FBrgDbEndBetParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbEndBetParamValue(class UJsonObject* jsonObj, struct FBrgDbEndBetParam& outObj);
	static void SetBrgDbStartBetParamValue(struct FBrgDbStartBetParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbStartBetParamValue(class UJsonObject* jsonObj, struct FBrgDbStartBetParam& outObj);
	static void SetBrgDbEnterGateParamValue(struct FBrgDbEnterGateParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbEnterGateParamValue(class UJsonObject* jsonObj, struct FBrgDbEnterGateParam& outObj);
	static void SetBrgDbChangeCashParamValue(struct FBrgDbChangeCashParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbChangeCashParamValue(class UJsonObject* jsonObj, struct FBrgDbChangeCashParam& outObj);
	static void SetBrgDbContinueParamValue(struct FBrgDbContinueParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbContinueParamValue(class UJsonObject* jsonObj, struct FBrgDbContinueParam& outObj);
	static void SetBrgDbBlendMushroomSoupParamValue(struct FBrgDbBlendMushroomSoupParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBlendMushroomSoupParamValue(class UJsonObject* jsonObj, struct FBrgDbBlendMushroomSoupParam& outObj);
	static void SetBrgDbExpandDeathBagParamValue(struct FBrgDbExpandDeathBagParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbExpandDeathBagParamValue(class UJsonObject* jsonObj, struct FBrgDbExpandDeathBagParam& outObj);
	static void SetBrgDbUseDustshooterParamValue(struct FBrgDbUseDustshooterParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUseDustshooterParamValue(class UJsonObject* jsonObj, struct FBrgDbUseDustshooterParam& outObj);
	static void SetBrgDbExpandCoinLockerParamValue(struct FBrgDbExpandCoinLockerParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbExpandCoinLockerParamValue(class UJsonObject* jsonObj, struct FBrgDbExpandCoinLockerParam& outObj);
	static void SetBrgDbDrawCoinLockerParamValue(struct FBrgDbDrawCoinLockerParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDrawCoinLockerParamValue(class UJsonObject* jsonObj, struct FBrgDbDrawCoinLockerParam& outObj);
	static void SetBrgDbSortCoinLockerParamValue(struct FBrgDbSortCoinLockerParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSortCoinLockerParamValue(class UJsonObject* jsonObj, struct FBrgDbSortCoinLockerParam& outObj);
	static void SetBrgDbDeposCoinLockerParamValue(struct FBrgDbDeposCoinLockerParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDeposCoinLockerParamValue(class UJsonObject* jsonObj, struct FBrgDbDeposCoinLockerParam& outObj);
	static void SetBrgDbEqSkillParamValue(struct FBrgDbEqSkillParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbEqSkillParamValue(class UJsonObject* jsonObj, struct FBrgDbEqSkillParam& outObj);
	static void SetBrgDbOpSkillParamValue(struct FBrgDbOpSkillParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbOpSkillParamValue(class UJsonObject* jsonObj, struct FBrgDbOpSkillParam& outObj);
	static void SetBrgDbEnhancePartInfoValue(struct FBrgDbEnhancePartInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbEnhancePartInfoValue(class UJsonObject* jsonObj, struct FBrgDbEnhancePartInfo& outObj);
	static void SetBrgDbEnhancePartValue(struct FBrgDbEnhancePart Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbEnhancePartValue(class UJsonObject* jsonObj, struct FBrgDbEnhancePart& outObj);
	static void SetBrgDbEnhancePartParamValue(struct FBrgDbEnhancePartParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbEnhancePartParamValue(class UJsonObject* jsonObj, struct FBrgDbEnhancePartParam& outObj);
	static void SetBrgDbRepairPartInfoValue(struct FBrgDbRepairPartInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRepairPartInfoValue(class UJsonObject* jsonObj, struct FBrgDbRepairPartInfo& outObj);
	static void SetBrgDbRepairPartValue(struct FBrgDbRepairPart Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRepairPartValue(class UJsonObject* jsonObj, struct FBrgDbRepairPart& outObj);
	static void SetBrgDbRepairPartParamValue(struct FBrgDbRepairPartParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRepairPartParamValue(class UJsonObject* jsonObj, struct FBrgDbRepairPartParam& outObj);
	static void SetBrgDbSellMushroomValue(struct FBrgDbSellMushroom Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSellMushroomValue(class UJsonObject* jsonObj, struct FBrgDbSellMushroom& outObj);
	static void SetBrgDbMushroomShopValue(struct FBrgDbMushroomShop Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMushroomShopValue(class UJsonObject* jsonObj, struct FBrgDbMushroomShop& outObj);
	static void SetBrgDbSellMushroomParamValue(struct FBrgDbSellMushroomParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSellMushroomParamValue(class UJsonObject* jsonObj, struct FBrgDbSellMushroomParam& outObj);
	static void SetBrgDbSellPartValue(struct FBrgDbSellPart Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSellPartValue(class UJsonObject* jsonObj, struct FBrgDbSellPart& outObj);
	static void SetBrgDbSellPartParamValue(struct FBrgDbSellPartParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSellPartParamValue(class UJsonObject* jsonObj, struct FBrgDbSellPartParam& outObj);
	static void SetBrgDbPurchaseParamValue(struct FBrgDbPurchaseParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPurchaseParamValue(class UJsonObject* jsonObj, struct FBrgDbPurchaseParam& outObj);
	static void SetBrgDbShopPriceInfoValue(struct FBrgDbShopPriceInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbShopPriceInfoValue(class UJsonObject* jsonObj, struct FBrgDbShopPriceInfo& outObj);
	static void SetBrgDbShopPsMushroomPriceValue(struct FBrgDbShopPsMushroomPrice Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbShopPsMushroomPriceValue(class UJsonObject* jsonObj, struct FBrgDbShopPsMushroomPrice& outObj);
	static void SetBrgDbShopPsPartPriceValue(struct FBrgDbShopPsPartPrice Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbShopPsPartPriceValue(class UJsonObject* jsonObj, struct FBrgDbShopPsPartPrice& outObj);
	static void SetBrgDbShopPriceInfoParamValue(struct FBrgDbShopPriceInfoParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbShopPriceInfoParamValue(class UJsonObject* jsonObj, struct FBrgDbShopPriceInfoParam& outObj);
	static void SetBrgDbPauseGameParamValue(struct FBrgDbPauseGameParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPauseGameParamValue(class UJsonObject* jsonObj, struct FBrgDbPauseGameParam& outObj);
	static void SetBrgDbAreaMapFlagValue(struct FBrgDbAreaMapFlag Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAreaMapFlagValue(class UJsonObject* jsonObj, struct FBrgDbAreaMapFlag& outObj);
	static void SetBrgDbSaveGameParamValue(struct FBrgDbSaveGameParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSaveGameParamValue(class UJsonObject* jsonObj, struct FBrgDbSaveGameParam& outObj);
	static void SetBrgDbGetListValue(struct FBrgDbGetList Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbGetListValue(class UJsonObject* jsonObj, struct FBrgDbGetList& outObj);
	static void SetBrgDbSaveDataValue(struct FBrgDbSaveData Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSaveDataValue(class UJsonObject* jsonObj, struct FBrgDbSaveData& outObj);
	static void SetBrgDbClearFloorValue(struct FBrgDbClearFloor Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbClearFloorValue(class UJsonObject* jsonObj, struct FBrgDbClearFloor& outObj);
	static void SetBrgDbDbgStartFloorValue(struct FBrgDbDbgStartFloor Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDbgStartFloorValue(class UJsonObject* jsonObj, struct FBrgDbDbgStartFloor& outObj);
	static void SetBrgDbStartFloorValue(struct FBrgDbStartFloor Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbStartFloorValue(class UJsonObject* jsonObj, struct FBrgDbStartFloor& outObj);
	static void SetBrgDbFloorAreaValue(struct FBrgDbFloorArea Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorAreaValue(class UJsonObject* jsonObj, struct FBrgDbFloorArea& outObj);
	static void SetBrgDbFloorValue(struct FBrgDbFloor Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorValue(class UJsonObject* jsonObj, struct FBrgDbFloor& outObj);
	static void SetBrgDbFloorRefEscalatorInfoValue(struct FBrgDbFloorRefEscalatorInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorRefEscalatorInfoValue(class UJsonObject* jsonObj, struct FBrgDbFloorRefEscalatorInfo& outObj);
	static void SetBrgDbFloorRefEscalatorValue(struct FBrgDbFloorRefEscalator Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorRefEscalatorValue(class UJsonObject* jsonObj, struct FBrgDbFloorRefEscalator& outObj);
	static void SetBrgDbDebugFloorParamValue(struct FBrgDbDebugFloorParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDebugFloorParamValue(class UJsonObject* jsonObj, struct FBrgDbDebugFloorParam& outObj);
	static void SetBrgDbFloorVendingMachineValue(struct FBrgDbFloorVendingMachine Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorVendingMachineValue(class UJsonObject* jsonObj, struct FBrgDbFloorVendingMachine& outObj);
	static void SetBrgDbVendingMachineEntityValue(struct FBrgDbVendingMachineEntity Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbVendingMachineEntityValue(class UJsonObject* jsonObj, struct FBrgDbVendingMachineEntity& outObj);
	static void SetBrgDbFloorDustshooterValue(struct FBrgDbFloorDustshooter Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorDustshooterValue(class UJsonObject* jsonObj, struct FBrgDbFloorDustshooter& outObj);
	static void SetBrgDbFloorGateValue(struct FBrgDbFloorGate Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorGateValue(class UJsonObject* jsonObj, struct FBrgDbFloorGate& outObj);
	static void SetBrgDbFloorBreakableObjValue(struct FBrgDbFloorBreakableObj Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorBreakableObjValue(class UJsonObject* jsonObj, struct FBrgDbFloorBreakableObj& outObj);
	static void SetBrgDbBreakableObjEntityValue(struct FBrgDbBreakableObjEntity Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBreakableObjEntityValue(class UJsonObject* jsonObj, struct FBrgDbBreakableObjEntity& outObj);
	static void SetBrgDbFloorSkillBenchValue(struct FBrgDbFloorSkillBench Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorSkillBenchValue(class UJsonObject* jsonObj, struct FBrgDbFloorSkillBench& outObj);
	static void SetBrgDbFloorCoinLockerValue(struct FBrgDbFloorCoinLocker Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorCoinLockerValue(class UJsonObject* jsonObj, struct FBrgDbFloorCoinLocker& outObj);
	static void SetBrgDbFloorItemValue(struct FBrgDbFloorItem Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorItemValue(class UJsonObject* jsonObj, struct FBrgDbFloorItem& outObj);
	static void SetBrgDbFloorBeastValue(struct FBrgDbFloorBeast Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorBeastValue(class UJsonObject* jsonObj, struct FBrgDbFloorBeast& outObj);
	static void SetBrgDbBeastValue(struct FBrgDbBeast Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBeastValue(class UJsonObject* jsonObj, struct FBrgDbBeast& outObj);
	static void SetBrgDbBeastLevelValue(struct FBrgDbBeastLevel Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBeastLevelValue(class UJsonObject* jsonObj, struct FBrgDbBeastLevel& outObj);
	static void SetBrgDbBeastEfcValue(struct FBrgDbBeastEfc Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBeastEfcValue(class UJsonObject* jsonObj, struct FBrgDbBeastEfc& outObj);
	static void SetBrgDbFloorMushroomValue(struct FBrgDbFloorMushroom Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorMushroomValue(class UJsonObject* jsonObj, struct FBrgDbFloorMushroom& outObj);
	static void SetBrgDbMushroomValue(struct FBrgDbMushroom Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMushroomValue(class UJsonObject* jsonObj, struct FBrgDbMushroom& outObj);
	static void SetBrgDbMushroomEfcValue(struct FBrgDbMushroomEfc Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMushroomEfcValue(class UJsonObject* jsonObj, struct FBrgDbMushroomEfc& outObj);
	static void SetBrgDbMushroomEfcTypeValue(struct FBrgDbMushroomEfcType Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMushroomEfcTypeValue(class UJsonObject* jsonObj, struct FBrgDbMushroomEfcType& outObj);
	static void SetBrgDbMasterZakoValue(struct FBrgDbMasterZako Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterZakoValue(class UJsonObject* jsonObj, struct FBrgDbMasterZako& outObj);
	static void SetBrgDbFourforcemenValue(struct FBrgDbFourforcemen Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFourforcemenValue(class UJsonObject* jsonObj, struct FBrgDbFourforcemen& outObj);
	static void SetBrgDbMasterFourforcemenValue(struct FBrgDbMasterFourforcemen Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterFourforcemenValue(class UJsonObject* jsonObj, struct FBrgDbMasterFourforcemen& outObj);
	static void SetBrgDbMasterFourforcemenLevelValue(struct FBrgDbMasterFourforcemenLevel Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterFourforcemenLevelValue(class UJsonObject* jsonObj, struct FBrgDbMasterFourforcemenLevel& outObj);
	static void SetBrgDbMasterZakoLevelValue(struct FBrgDbMasterZakoLevel Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterZakoLevelValue(class UJsonObject* jsonObj, struct FBrgDbMasterZakoLevel& outObj);
	static void SetBrgDbZakoValue(struct FBrgDbZako Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbZakoValue(class UJsonObject* jsonObj, struct FBrgDbZako& outObj);
	static void SetBrgDbMasterMbossValue(struct FBrgDbMasterMboss Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterMbossValue(class UJsonObject* jsonObj, struct FBrgDbMasterMboss& outObj);
	static void SetBrgDbMasterMbossLevelValue(struct FBrgDbMasterMbossLevel Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterMbossLevelValue(class UJsonObject* jsonObj, struct FBrgDbMasterMbossLevel& outObj);
	static void SetBrgDbMbossValue(struct FBrgDbMboss Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMbossValue(class UJsonObject* jsonObj, struct FBrgDbMboss& outObj);
	static void SetBrgDbAIInfoValue(struct FBrgDbAIInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAIInfoValue(class UJsonObject* jsonObj, struct FBrgDbAIInfo& outObj);
	static void SetBrgDbZakoTrboxValue(struct FBrgDbZakoTrbox Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbZakoTrboxValue(class UJsonObject* jsonObj, struct FBrgDbZakoTrbox& outObj);
	static void SetBrgDbMbossRewardValue(struct FBrgDbMbossReward Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMbossRewardValue(class UJsonObject* jsonObj, struct FBrgDbMbossReward& outObj);
	static void SetBrgDbPurchaseValue(struct FBrgDbPurchase Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPurchaseValue(class UJsonObject* jsonObj, struct FBrgDbPurchase& outObj);
	static void SetBrgDbShopValue(struct FBrgDbShop Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbShopValue(class UJsonObject* jsonObj, struct FBrgDbShop& outObj);
	static void SetBrgDbProductValue(struct FBrgDbProduct Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbProductValue(class UJsonObject* jsonObj, struct FBrgDbProduct& outObj);
	static void SetBrgDbProductPriceValue(struct FBrgDbProductPrice Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbProductPriceValue(class UJsonObject* jsonObj, struct FBrgDbProductPrice& outObj);
	static void SetBrgDbProductPartValue(struct FBrgDbProductPart Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbProductPartValue(class UJsonObject* jsonObj, struct FBrgDbProductPart& outObj);
	static void SetBrgDbItemValue(struct FBrgDbItem Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbItemValue(class UJsonObject* jsonObj, struct FBrgDbItem& outObj);
	static void SetBrgDbDieValue(struct FBrgDbDie Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDieValue(class UJsonObject* jsonObj, struct FBrgDbDie& outObj);
	static void SetBrgDbTrBoxRewardItemValue(struct FBrgDbTrBoxRewardItem Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTrBoxRewardItemValue(class UJsonObject* jsonObj, struct FBrgDbTrBoxRewardItem& outObj);
	static void SetBrgDbTrBoxRewardPartValue(struct FBrgDbTrBoxRewardPart Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTrBoxRewardPartValue(class UJsonObject* jsonObj, struct FBrgDbTrBoxRewardPart& outObj);
	static void SetBrgDbTrBoxRewardMoneyValue(struct FBrgDbTrBoxRewardMoney Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTrBoxRewardMoneyValue(class UJsonObject* jsonObj, struct FBrgDbTrBoxRewardMoney& outObj);
	static void SetBrgDbFloorTrboxUpdateInfoValue(struct FBrgDbFloorTrboxUpdateInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorTrboxUpdateInfoValue(class UJsonObject* jsonObj, struct FBrgDbFloorTrboxUpdateInfo& outObj);
	static void SetBrgDbFloorMushroomUpdateInfoValue(struct FBrgDbFloorMushroomUpdateInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorMushroomUpdateInfoValue(class UJsonObject* jsonObj, struct FBrgDbFloorMushroomUpdateInfo& outObj);
	static void SetBrgDbBeastUpdateInfoValue(struct FBrgDbBeastUpdateInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBeastUpdateInfoValue(class UJsonObject* jsonObj, struct FBrgDbBeastUpdateInfo& outObj);
	static void SetBrgDbMbossUpdateInfoValue(struct FBrgDbMbossUpdateInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMbossUpdateInfoValue(class UJsonObject* jsonObj, struct FBrgDbMbossUpdateInfo& outObj);
	static void SetBrgDbJackalDiffValue(struct FBrgDbJackalDiff Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbJackalDiffValue(class UJsonObject* jsonObj, struct FBrgDbJackalDiff& outObj);
	static void SetBrgDbJackalValue(struct FBrgDbJackal Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbJackalValue(class UJsonObject* jsonObj, struct FBrgDbJackal& outObj);
	static void SetBrgDbZombieUpdateInfoValue(struct FBrgDbZombieUpdateInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbZombieUpdateInfoValue(class UJsonObject* jsonObj, struct FBrgDbZombieUpdateInfo& outObj);
	static void SetBrgDbZombieValue(struct FBrgDbZombie Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbZombieValue(class UJsonObject* jsonObj, struct FBrgDbZombie& outObj);
	static void SetBrgDbZombieMasterLvlValue(struct FBrgDbZombieMasterLvl Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbZombieMasterLvlValue(class UJsonObject* jsonObj, struct FBrgDbZombieMasterLvl& outObj);
	static void SetBrgDbZombieRewardValue(struct FBrgDbZombieReward Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbZombieRewardValue(class UJsonObject* jsonObj, struct FBrgDbZombieReward& outObj);
	static void SetBrgDbZombieRewardPartValue(struct FBrgDbZombieRewardPart Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbZombieRewardPartValue(class UJsonObject* jsonObj, struct FBrgDbZombieRewardPart& outObj);
	static void SetBrgDbUserValue(struct FBrgDbUser Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserValue(class UJsonObject* jsonObj, struct FBrgDbUser& outObj);
	static void SetBrgDbUserAutomaticshopWeeklyBuyableGoodsValue(struct FBrgDbUserAutomaticshopWeeklyBuyableGoods Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserAutomaticshopWeeklyBuyableGoodsValue(class UJsonObject* jsonObj, struct FBrgDbUserAutomaticshopWeeklyBuyableGoods& outObj);
	static void SetBrgDbUserSoulValue(struct FBrgDbUserSoul Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserSoulValue(class UJsonObject* jsonObj, struct FBrgDbUserSoul& outObj);
	static void SetBrgDbUserArmorSkinValue(struct FBrgDbUserArmorSkin Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserArmorSkinValue(class UJsonObject* jsonObj, struct FBrgDbUserArmorSkin& outObj);
	static void SetBrgDbUserQuickConfigValue(struct FBrgDbUserQuickConfig Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserQuickConfigValue(class UJsonObject* jsonObj, struct FBrgDbUserQuickConfig& outObj);
	static void SetBrgDbMedalValue(struct FBrgDbMedal Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMedalValue(class UJsonObject* jsonObj, struct FBrgDbMedal& outObj);
	static void SetBrgDbMedalExpireValue(struct FBrgDbMedalExpire Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMedalExpireValue(class UJsonObject* jsonObj, struct FBrgDbMedalExpire& outObj);
	static void SetBrgDbRadioValue(struct FBrgDbRadio Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRadioValue(class UJsonObject* jsonObj, struct FBrgDbRadio& outObj);
	static void SetBrgDbUserFlagValue(struct FBrgDbUserFlag Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserFlagValue(class UJsonObject* jsonObj, struct FBrgDbUserFlag& outObj);
	static void SetBrgDbFortTerminalAnnounceValue(struct FBrgDbFortTerminalAnnounce Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortTerminalAnnounceValue(class UJsonObject* jsonObj, struct FBrgDbFortTerminalAnnounce& outObj);
	static void SetBrgDbWarRewardsValue(struct FBrgDbWarRewards Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbWarRewardsValue(class UJsonObject* jsonObj, struct FBrgDbWarRewards& outObj);
	static void SetBrgDbRankingAllValue(struct FBrgDbRankingAll Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRankingAllValue(class UJsonObject* jsonObj, struct FBrgDbRankingAll& outObj);
	static void SetBrgDbMyTeamValue(struct FBrgDbMyTeam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMyTeamValue(class UJsonObject* jsonObj, struct FBrgDbMyTeam& outObj);
	static void SetBrgDbTdmSituationValue(struct FBrgDbTdmSituation Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTdmSituationValue(class UJsonObject* jsonObj, struct FBrgDbTdmSituation& outObj);
	static void SetBrgDbTeamAssaultCountValue(struct FBrgDbTeamAssaultCount Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTeamAssaultCountValue(class UJsonObject* jsonObj, struct FBrgDbTeamAssaultCount& outObj);
	static void SetBrgDbTerminalTeamValue(struct FBrgDbTerminalTeam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTerminalTeamValue(class UJsonObject* jsonObj, struct FBrgDbTerminalTeam& outObj);
	static void SetBrgDbTeamHateValue(struct FBrgDbTeamHate Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTeamHateValue(class UJsonObject* jsonObj, struct FBrgDbTeamHate& outObj);
	static void SetBrgDbTeamValue(struct FBrgDbTeam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTeamValue(class UJsonObject* jsonObj, struct FBrgDbTeam& outObj);
	static void SetBrgDbTeamOldValue(struct FBrgDbTeamOld Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTeamOldValue(class UJsonObject* jsonObj, struct FBrgDbTeamOld& outObj);
	static void SetBrgDbTeamMemberOldValue(struct FBrgDbTeamMemberOld Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTeamMemberOldValue(class UJsonObject* jsonObj, struct FBrgDbTeamMemberOld& outObj);
	static void SetBrgDbWarValue(struct FBrgDbWar Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbWarValue(class UJsonObject* jsonObj, struct FBrgDbWar& outObj);
	static void SetBrgDbWarPersonalLogValue(struct FBrgDbWarPersonalLog Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbWarPersonalLogValue(class UJsonObject* jsonObj, struct FBrgDbWarPersonalLog& outObj);
	static void SetBrgDbWarTeamValue(struct FBrgDbWarTeam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbWarTeamValue(class UJsonObject* jsonObj, struct FBrgDbWarTeam& outObj);
	static void SetBrgDbWarTeamMemberValue(struct FBrgDbWarTeamMember Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbWarTeamMemberValue(class UJsonObject* jsonObj, struct FBrgDbWarTeamMember& outObj);
	static void SetBrgDbTeamRankingValue(struct FBrgDbTeamRanking Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTeamRankingValue(class UJsonObject* jsonObj, struct FBrgDbTeamRanking& outObj);
	static void SetBrgDbRankingValue(struct FBrgDbRanking Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbRankingValue(class UJsonObject* jsonObj, struct FBrgDbRanking& outObj);
	static void SetBrgDbFortZombieSettingValue(struct FBrgDbFortZombieSetting Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortZombieSettingValue(class UJsonObject* jsonObj, struct FBrgDbFortZombieSetting& outObj);
	static void SetBrgDbUserPrisonValue(struct FBrgDbUserPrison Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserPrisonValue(class UJsonObject* jsonObj, struct FBrgDbUserPrison& outObj);
	static void SetBrgDbPrisonMessageValue(struct FBrgDbPrisonMessage Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPrisonMessageValue(class UJsonObject* jsonObj, struct FBrgDbPrisonMessage& outObj);
	static void SetBrgDbCharaSlotValue(struct FBrgDbCharaSlot Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbCharaSlotValue(class UJsonObject* jsonObj, struct FBrgDbCharaSlot& outObj);
	static void SetBrgDbHunterValue(struct FBrgDbHunter Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbHunterValue(class UJsonObject* jsonObj, struct FBrgDbHunter& outObj);
	static void SetBrgDbOtherUserValue(struct FBrgDbOtherUser Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbOtherUserValue(class UJsonObject* jsonObj, struct FBrgDbOtherUser& outObj);
	static void SetBrgDbUserKnownAreaValue(struct FBrgDbUserKnownArea Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserKnownAreaValue(class UJsonObject* jsonObj, struct FBrgDbUserKnownArea& outObj);
	static void SetBrgDbUserSkillRecoverValue(struct FBrgDbUserSkillRecover Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserSkillRecoverValue(class UJsonObject* jsonObj, struct FBrgDbUserSkillRecover& outObj);
	static void SetBrgDbUserMushroomShopHistoryValue(struct FBrgDbUserMushroomShopHistory Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserMushroomShopHistoryValue(class UJsonObject* jsonObj, struct FBrgDbUserMushroomShopHistory& outObj);
	static void SetBrgDbWhistleShopHistoryValue(struct FBrgDbWhistleShopHistory Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbWhistleShopHistoryValue(class UJsonObject* jsonObj, struct FBrgDbWhistleShopHistory& outObj);
	static void SetBrgDbFortShopHistoryValue(struct FBrgDbFortShopHistory Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFortShopHistoryValue(class UJsonObject* jsonObj, struct FBrgDbFortShopHistory& outObj);
	static void SetBrgDbUserBaseShopResultValue(struct FBrgDbUserBaseShopResult Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserBaseShopResultValue(class UJsonObject* jsonObj, struct FBrgDbUserBaseShopResult& outObj);
	static void SetBrgDbBaseShopProductValue(struct FBrgDbBaseShopProduct Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBaseShopProductValue(class UJsonObject* jsonObj, struct FBrgDbBaseShopProduct& outObj);
	static void SetBrgDbUserPartResearchValue(struct FBrgDbUserPartResearch Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserPartResearchValue(class UJsonObject* jsonObj, struct FBrgDbUserPartResearch& outObj);
	static void SetBrgDbMasterPartResearchValue(struct FBrgDbMasterPartResearch Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterPartResearchValue(class UJsonObject* jsonObj, struct FBrgDbMasterPartResearch& outObj);
	static void SetBrgDbUserShopHistoryValue(struct FBrgDbUserShopHistory Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserShopHistoryValue(class UJsonObject* jsonObj, struct FBrgDbUserShopHistory& outObj);
	static void SetBrgDbUserWaitingValue(struct FBrgDbUserWaiting Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserWaitingValue(class UJsonObject* jsonObj, struct FBrgDbUserWaiting& outObj);
	static void SetBrgDbResearchValue(struct FBrgDbResearch Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbResearchValue(class UJsonObject* jsonObj, struct FBrgDbResearch& outObj);
	static void SetBrgDbUserQuestValue(struct FBrgDbUserQuest Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserQuestValue(class UJsonObject* jsonObj, struct FBrgDbUserQuest& outObj);
	static void SetBrgDbQuestRewardValue(struct FBrgDbQuestReward Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbQuestRewardValue(class UJsonObject* jsonObj, struct FBrgDbQuestReward& outObj);
	static void SetBrgDbQuestRewardPartValue(struct FBrgDbQuestRewardPart Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbQuestRewardPartValue(class UJsonObject* jsonObj, struct FBrgDbQuestRewardPart& outObj);
	static void SetBrgDbConstStrValue(struct FBrgDbConstStr Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbConstStrValue(class UJsonObject* jsonObj, struct FBrgDbConstStr& outObj);
	static void SetBrgDbConstFloatValue(struct FBrgDbConstFloat Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbConstFloatValue(class UJsonObject* jsonObj, struct FBrgDbConstFloat& outObj);
	static void SetBrgDbConstIntValue(struct FBrgDbConstInt Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbConstIntValue(class UJsonObject* jsonObj, struct FBrgDbConstInt& outObj);
	static void SetBrgDbCharaDmgValue(struct FBrgDbCharaDmg Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbCharaDmgValue(class UJsonObject* jsonObj, struct FBrgDbCharaDmg& outObj);
	static void SetBrgDbInsurePtValue(struct FBrgDbInsurePt Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbInsurePtValue(class UJsonObject* jsonObj, struct FBrgDbInsurePt& outObj);
	static void SetBrgDbPsPartInsuredValue(struct FBrgDbPsPartInsured Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPsPartInsuredValue(class UJsonObject* jsonObj, struct FBrgDbPsPartInsured& outObj);
	static void SetBrgDbEqPartParamValue(struct FBrgDbEqPartParam Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbEqPartParamValue(class UJsonObject* jsonObj, struct FBrgDbEqPartParam& outObj);
	static void SetBrgDbDiedCharaValue(struct FBrgDbDiedChara Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDiedCharaValue(class UJsonObject* jsonObj, struct FBrgDbDiedChara& outObj);
	static void SetBrgDbCharaValue(struct FBrgDbChara Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbCharaValue(class UJsonObject* jsonObj, struct FBrgDbChara& outObj);
	static void SetBrgDbHunterRecordValue(struct FBrgDbHunterRecord Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbHunterRecordValue(class UJsonObject* jsonObj, struct FBrgDbHunterRecord& outObj);
	static void SetBrgDbHunterBattleSummaryValue(struct FBrgDbHunterBattleSummary Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbHunterBattleSummaryValue(class UJsonObject* jsonObj, struct FBrgDbHunterBattleSummary& outObj);
	static void SetBrgDbBodyBonusValue(struct FBrgDbBodyBonus Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBodyBonusValue(class UJsonObject* jsonObj, struct FBrgDbBodyBonus& outObj);
	static void SetBrgDbBodyLvlValue(struct FBrgDbBodyLvl Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBodyLvlValue(class UJsonObject* jsonObj, struct FBrgDbBodyLvl& outObj);
	static void SetBrgDbPosterValue(struct FBrgDbPoster Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPosterValue(class UJsonObject* jsonObj, struct FBrgDbPoster& outObj);
	static void SetBrgDbElevatorValue(struct FBrgDbElevator Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbElevatorValue(class UJsonObject* jsonObj, struct FBrgDbElevator& outObj);
	static void SetBrgDbElevatorStopFloorValue(struct FBrgDbElevatorStopFloor Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbElevatorStopFloorValue(class UJsonObject* jsonObj, struct FBrgDbElevatorStopFloor& outObj);
	static void SetBrgDbUserOpenElevatorStopFloorValue(struct FBrgDbUserOpenElevatorStopFloor Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserOpenElevatorStopFloorValue(class UJsonObject* jsonObj, struct FBrgDbUserOpenElevatorStopFloor& outObj);
	static void SetBrgDbSkillStickerValue(struct FBrgDbSkillSticker Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSkillStickerValue(class UJsonObject* jsonObj, struct FBrgDbSkillSticker& outObj);
	static void SetBrgDbPayMushroomValue(struct FBrgDbPayMushroom Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPayMushroomValue(class UJsonObject* jsonObj, struct FBrgDbPayMushroom& outObj);
	static void SetBrgDbPsPaidSkillMushroomValue(struct FBrgDbPsPaidSkillMushroom Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPsPaidSkillMushroomValue(class UJsonObject* jsonObj, struct FBrgDbPsPaidSkillMushroom& outObj);
	static void SetBrgDbSkillStickerInfoValue(struct FBrgDbSkillStickerInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSkillStickerInfoValue(class UJsonObject* jsonObj, struct FBrgDbSkillStickerInfo& outObj);
	static void SetBrgDbMushroomExChangeStikcerValue(struct FBrgDbMushroomExChangeStikcer Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMushroomExChangeStikcerValue(class UJsonObject* jsonObj, struct FBrgDbMushroomExChangeStikcer& outObj);
	static void SetBrgOnetimeAnnounceValue(struct FBrgOnetimeAnnounce Arg, class UJsonObject*& outJsonObj);
	static void GetBrgOnetimeAnnounceValue(class UJsonObject* jsonObj, struct FBrgOnetimeAnnounce& outObj);
	static void SetBrgLoadingAnnounceValue(struct FBrgLoadingAnnounce Arg, class UJsonObject*& outJsonObj);
	static void GetBrgLoadingAnnounceValue(class UJsonObject* jsonObj, struct FBrgLoadingAnnounce& outObj);
	static void SetBrgDbUserMailValue(struct FBrgDbUserMail Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserMailValue(class UJsonObject* jsonObj, struct FBrgDbUserMail& outObj);
	static void SetBrgDbUserVipValue(struct FBrgDbUserVip Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserVipValue(class UJsonObject* jsonObj, struct FBrgDbUserVip& outObj);
	static void SetBrgDbUserMagazineValue(struct FBrgDbUserMagazine Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserMagazineValue(class UJsonObject* jsonObj, struct FBrgDbUserMagazine& outObj);
	static void SetBrgDbFloorMagazineValue(struct FBrgDbFloorMagazine Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorMagazineValue(class UJsonObject* jsonObj, struct FBrgDbFloorMagazine& outObj);
	static void SetBrgDbUserStampRallyValue(struct FBrgDbUserStampRally Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserStampRallyValue(class UJsonObject* jsonObj, struct FBrgDbUserStampRally& outObj);
	static void SetBrgDbFloorStampRallyValue(struct FBrgDbFloorStampRally Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorStampRallyValue(class UJsonObject* jsonObj, struct FBrgDbFloorStampRally& outObj);
	static void SetBrgDbMushroomSoupEfcValue(struct FBrgDbMushroomSoupEfc Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMushroomSoupEfcValue(class UJsonObject* jsonObj, struct FBrgDbMushroomSoupEfc& outObj);
	static void SetBrgDbBeastBookValue(struct FBrgDbBeastBook Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBeastBookValue(class UJsonObject* jsonObj, struct FBrgDbBeastBook& outObj);
	static void SetBrgDbMushroomBookValue(struct FBrgDbMushroomBook Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMushroomBookValue(class UJsonObject* jsonObj, struct FBrgDbMushroomBook& outObj);
	static void SetBrgDbStatMushroomValue(struct FBrgDbStatMushroom Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbStatMushroomValue(class UJsonObject* jsonObj, struct FBrgDbStatMushroom& outObj);
	static void SetBrgDbStatMushroomEfcValue(struct FBrgDbStatMushroomEfc Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbStatMushroomEfcValue(class UJsonObject* jsonObj, struct FBrgDbStatMushroomEfc& outObj);
	static void SetBrgDbQuickUseArmValue(struct FBrgDbQuickUseArm Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbQuickUseArmValue(class UJsonObject* jsonObj, struct FBrgDbQuickUseArm& outObj);
	static void SetBrgDbQuickUseValue(struct FBrgDbQuickUse Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbQuickUseValue(class UJsonObject* jsonObj, struct FBrgDbQuickUse& outObj);
	static void SetBrgDbDeathBagValue(struct FBrgDbDeathBag Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDeathBagValue(class UJsonObject* jsonObj, struct FBrgDbDeathBag& outObj);
	static void SetBrgDbCoinLockerValue(struct FBrgDbCoinLocker Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbCoinLockerValue(class UJsonObject* jsonObj, struct FBrgDbCoinLocker& outObj);
	static void SetBrgDbAutomaticShopDiscountTermValue(struct FBrgDbAutomaticShopDiscountTerm Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAutomaticShopDiscountTermValue(class UJsonObject* jsonObj, struct FBrgDbAutomaticShopDiscountTerm& outObj);
	static void SetBrgDbMasterAutomaticshopLineupValue(struct FBrgDbMasterAutomaticshopLineup Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterAutomaticshopLineupValue(class UJsonObject* jsonObj, struct FBrgDbMasterAutomaticshopLineup& outObj);
	static void SetBrgDbUserPresentReceiveValue(struct FBrgDbUserPresentReceive Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserPresentReceiveValue(class UJsonObject* jsonObj, struct FBrgDbUserPresentReceive& outObj);
	static void SetBrgDbUserDeathboxValue(struct FBrgDbUserDeathbox Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserDeathboxValue(class UJsonObject* jsonObj, struct FBrgDbUserDeathbox& outObj);
	static void SetBrgDbUserPresentValue(struct FBrgDbUserPresent Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserPresentValue(class UJsonObject* jsonObj, struct FBrgDbUserPresent& outObj);
	static void SetBrgDbStorageSlotValue(struct FBrgDbStorageSlot Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbStorageSlotValue(class UJsonObject* jsonObj, struct FBrgDbStorageSlot& outObj);
	static void SetBrgDbUnlockedFighterValue(struct FBrgDbUnlockedFighter Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUnlockedFighterValue(class UJsonObject* jsonObj, struct FBrgDbUnlockedFighter& outObj);
	static void SetBrgDbGasmaskValue(struct FBrgDbGasmask Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbGasmaskValue(class UJsonObject* jsonObj, struct FBrgDbGasmask& outObj);
	static void SetBrgDbBodyDetailValue(struct FBrgDbBodyDetail Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBodyDetailValue(class UJsonObject* jsonObj, struct FBrgDbBodyDetail& outObj);
	static void SetBrgDbBodyValue(struct FBrgDbBody Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBodyValue(class UJsonObject* jsonObj, struct FBrgDbBody& outObj);
	static void SetBrgDbItemEntityValue(struct FBrgDbItemEntity Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbItemEntityValue(class UJsonObject* jsonObj, struct FBrgDbItemEntity& outObj);
	static void SetBrgDbBeastEntityValue(struct FBrgDbBeastEntity Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBeastEntityValue(class UJsonObject* jsonObj, struct FBrgDbBeastEntity& outObj);
	static void SetBrgDbMushroomEntityValue(struct FBrgDbMushroomEntity Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMushroomEntityValue(class UJsonObject* jsonObj, struct FBrgDbMushroomEntity& outObj);
	static void SetBrgDbStatValue(struct FBrgDbStat Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbStatValue(class UJsonObject* jsonObj, struct FBrgDbStat& outObj);
	static void SetBrgDbStatElementValue(struct FBrgDbStatElement Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbStatElementValue(class UJsonObject* jsonObj, struct FBrgDbStatElement& outObj);
	static void SetBrgDbActionLogValue(struct FBrgDbActionLog Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbActionLogValue(class UJsonObject* jsonObj, struct FBrgDbActionLog& outObj);
	static void SetBrgDbGameIntervalValue(struct FBrgDbGameInterval Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbGameIntervalValue(class UJsonObject* jsonObj, struct FBrgDbGameInterval& outObj);
	static void SetBrgDbGetZombieRewardValue(struct FBrgDbGetZombieReward Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbGetZombieRewardValue(class UJsonObject* jsonObj, struct FBrgDbGetZombieReward& outObj);
	static void SetBrgDbKilledZombieValue(struct FBrgDbKilledZombie Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbKilledZombieValue(class UJsonObject* jsonObj, struct FBrgDbKilledZombie& outObj);
	static void SetBrgDbTrBoxRewardValue(struct FBrgDbTrBoxReward Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbTrBoxRewardValue(class UJsonObject* jsonObj, struct FBrgDbTrBoxReward& outObj);
	static void SetBrgDbUserScreenshotValue(struct FBrgDbUserScreenshot Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserScreenshotValue(class UJsonObject* jsonObj, struct FBrgDbUserScreenshot& outObj);
	static void SetBrgDbEqSkillValue(struct FBrgDbEqSkill Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbEqSkillValue(class UJsonObject* jsonObj, struct FBrgDbEqSkill& outObj);
	static void SetBrgDbPsSkillValue(struct FBrgDbPsSkill Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPsSkillValue(class UJsonObject* jsonObj, struct FBrgDbPsSkill& outObj);
	static void SetBrgDbPsPartValue(struct FBrgDbPsPart Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPsPartValue(class UJsonObject* jsonObj, struct FBrgDbPsPart& outObj);
	static void SetBrgDbEqPartValue(struct FBrgDbEqPart Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbEqPartValue(class UJsonObject* jsonObj, struct FBrgDbEqPart& outObj);
	static void SetBrgDbMasterGateValue(struct FBrgDbMasterGate Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterGateValue(class UJsonObject* jsonObj, struct FBrgDbMasterGate& outObj);
	static void SetBrgDbBrObjValue(struct FBrgDbBrObj Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBrObjValue(class UJsonObject* jsonObj, struct FBrgDbBrObj& outObj);
	static void SetBrgDbPartArmTypeValue(struct FBrgDbPartArmType Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPartArmTypeValue(class UJsonObject* jsonObj, struct FBrgDbPartArmType& outObj);
	static void SetBrgDbPartAddEfcValue(struct FBrgDbPartAddEfc Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPartAddEfcValue(class UJsonObject* jsonObj, struct FBrgDbPartAddEfc& outObj);
	static void SetBrgDbPartArmValue(struct FBrgDbPartArm Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPartArmValue(class UJsonObject* jsonObj, struct FBrgDbPartArm& outObj);
	static void SetBrgDbPartValue(struct FBrgDbPart Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPartValue(class UJsonObject* jsonObj, struct FBrgDbPart& outObj);
	static void SetBrgDbAtkScaleValue(struct FBrgDbAtkScale Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAtkScaleValue(class UJsonObject* jsonObj, struct FBrgDbAtkScale& outObj);
	static void SetBrgDbParamOffsetValue(struct FBrgDbParamOffset Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbParamOffsetValue(class UJsonObject* jsonObj, struct FBrgDbParamOffset& outObj);
	static void SetBrgDbAtkAttrValue(struct FBrgDbAtkAttr Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAtkAttrValue(class UJsonObject* jsonObj, struct FBrgDbAtkAttr& outObj);
	static void SetBrgDbDefAttrValue(struct FBrgDbDefAttr Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbDefAttrValue(class UJsonObject* jsonObj, struct FBrgDbDefAttr& outObj);
	static void SetBrgDbAssetValue(struct FBrgDbAsset Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbAssetValue(class UJsonObject* jsonObj, struct FBrgDbAsset& outObj);
	static void SetBrgDbSkillMoveValue(struct FBrgDbSkillMove Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSkillMoveValue(class UJsonObject* jsonObj, struct FBrgDbSkillMove& outObj);
	static void SetBrgDbMasterSkillGachaCautionsValue(struct FBrgDbMasterSkillGachaCautions Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterSkillGachaCautionsValue(class UJsonObject* jsonObj, struct FBrgDbMasterSkillGachaCautions& outObj);
	static void SetBrgDbMasterTermsValue(struct FBrgDbMasterTerms Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterTermsValue(class UJsonObject* jsonObj, struct FBrgDbMasterTerms& outObj);
	static void SetBrgDbMasterEventScheduleValue(struct FBrgDbMasterEventSchedule Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterEventScheduleValue(class UJsonObject* jsonObj, struct FBrgDbMasterEventSchedule& outObj);
	static void SetBrgDbMasterCreditValue(struct FBrgDbMasterCredit Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterCreditValue(class UJsonObject* jsonObj, struct FBrgDbMasterCredit& outObj);
	static void SetBrgDbMasterMysterybagContentValue(struct FBrgDbMasterMysterybagContent Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterMysterybagContentValue(class UJsonObject* jsonObj, struct FBrgDbMasterMysterybagContent& outObj);
	static void SetBrgDbMasterWarRewardValue(struct FBrgDbMasterWarReward Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterWarRewardValue(class UJsonObject* jsonObj, struct FBrgDbMasterWarReward& outObj);
	static void SetBrgDbMasterTdmRankValue(struct FBrgDbMasterTdmRank Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterTdmRankValue(class UJsonObject* jsonObj, struct FBrgDbMasterTdmRank& outObj);
	static void SetBrgDbMasterFreezerValue(struct FBrgDbMasterFreezer Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterFreezerValue(class UJsonObject* jsonObj, struct FBrgDbMasterFreezer& outObj);
	static void SetBrgDbMasterPrisonValue(struct FBrgDbMasterPrison Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterPrisonValue(class UJsonObject* jsonObj, struct FBrgDbMasterPrison& outObj);
	static void SetBrgDbMasterSpiritTankLevelValue(struct FBrgDbMasterSpiritTankLevel Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterSpiritTankLevelValue(class UJsonObject* jsonObj, struct FBrgDbMasterSpiritTankLevel& outObj);
	static void SetBrgDbMasterSafeLevelValue(struct FBrgDbMasterSafeLevel Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterSafeLevelValue(class UJsonObject* jsonObj, struct FBrgDbMasterSafeLevel& outObj);
	static void SetBrgDbMasterPartEquipmentValue(struct FBrgDbMasterPartEquipment Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterPartEquipmentValue(class UJsonObject* jsonObj, struct FBrgDbMasterPartEquipment& outObj);
	static void SetBrgDbMasterHairDisplayValue(struct FBrgDbMasterHairDisplay Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterHairDisplayValue(class UJsonObject* jsonObj, struct FBrgDbMasterHairDisplay& outObj);
	static void SetBrgDbMasterWaitingReduceValue(struct FBrgDbMasterWaitingReduce Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterWaitingReduceValue(class UJsonObject* jsonObj, struct FBrgDbMasterWaitingReduce& outObj);
	static void SetBrgDbMasterSkillGachaValue(struct FBrgDbMasterSkillGacha Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterSkillGachaValue(class UJsonObject* jsonObj, struct FBrgDbMasterSkillGacha& outObj);
	static void SetBrgDbMasterMagazineValue(struct FBrgDbMasterMagazine Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterMagazineValue(class UJsonObject* jsonObj, struct FBrgDbMasterMagazine& outObj);
	static void SetBrgResearchStampInfoValue(struct FBrgResearchStampInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgResearchStampInfoValue(class UJsonObject* jsonObj, struct FBrgResearchStampInfo& outObj);
	static void SetBrgDbUserHvnTresureInfoValue(struct FBrgDbUserHvnTresureInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserHvnTresureInfoValue(class UJsonObject* jsonObj, struct FBrgDbUserHvnTresureInfo& outObj);
	static void SetBrgDbUserResearchStampValue(struct FBrgDbUserResearchStamp Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUserResearchStampValue(class UJsonObject* jsonObj, struct FBrgDbUserResearchStamp& outObj);
	static void SetBrgDbMasterLvlValue(struct FBrgDbMasterLvl Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterLvlValue(class UJsonObject* jsonObj, struct FBrgDbMasterLvl& outObj);
	static void SetBrgDbMasterAbpValue(struct FBrgDbMasterAbp Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterAbpValue(class UJsonObject* jsonObj, struct FBrgDbMasterAbp& outObj);
	static void SetBrgDbMasterLvlRewardTypeValue(struct FBrgDbMasterLvlRewardType Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterLvlRewardTypeValue(class UJsonObject* jsonObj, struct FBrgDbMasterLvlRewardType& outObj);
	static void SetBrgDbMasterLvlRewardValue(struct FBrgDbMasterLvlReward Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterLvlRewardValue(class UJsonObject* jsonObj, struct FBrgDbMasterLvlReward& outObj);
	static void SetBrgDbMasterEquipRankPointValue(struct FBrgDbMasterEquipRankPoint Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterEquipRankPointValue(class UJsonObject* jsonObj, struct FBrgDbMasterEquipRankPoint& outObj);
	static void SetBrgDbMasterPointRewardTypeValue(struct FBrgDbMasterPointRewardType Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterPointRewardTypeValue(class UJsonObject* jsonObj, struct FBrgDbMasterPointRewardType& outObj);
	static void SetBrgDbMasterPointRewardValue(struct FBrgDbMasterPointReward Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbMasterPointRewardValue(class UJsonObject* jsonObj, struct FBrgDbMasterPointReward& outObj);
	static void SetBrgDbSkillTypeValue(struct FBrgDbSkillType Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSkillTypeValue(class UJsonObject* jsonObj, struct FBrgDbSkillType& outObj);
	static void SetBrgDbSkillValue(struct FBrgDbSkill Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSkillValue(class UJsonObject* jsonObj, struct FBrgDbSkill& outObj);
	static void SetBrgDbOpenSkillMushroomValue(struct FBrgDbOpenSkillMushroom Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbOpenSkillMushroomValue(class UJsonObject* jsonObj, struct FBrgDbOpenSkillMushroom& outObj);
	static void SetBrgDbParamListTypeValue(struct FBrgDbParamListType Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbParamListTypeValue(class UJsonObject* jsonObj, struct FBrgDbParamListType& outObj);
	static void SetBrgDbParamListValue(struct FBrgDbParamList Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbParamListValue(class UJsonObject* jsonObj, struct FBrgDbParamList& outObj);
	static void SetBrgDbParamFloatValue(struct FBrgDbParamFloat Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbParamFloatValue(class UJsonObject* jsonObj, struct FBrgDbParamFloat& outObj);
	static void SetBrgDbParamIntValue(struct FBrgDbParamInt Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbParamIntValue(class UJsonObject* jsonObj, struct FBrgDbParamInt& outObj);
	static void SetBrgDbParamStrValue(struct FBrgDbParamStr Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbParamStrValue(class UJsonObject* jsonObj, struct FBrgDbParamStr& outObj);
	static void SetBrgDbBodyNameValue(struct FBrgDbBodyName Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBodyNameValue(class UJsonObject* jsonObj, struct FBrgDbBodyName& outObj);
	static void SetBrgDbBodyLimitBreakItemValue(struct FBrgDbBodyLimitBreakItem Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBodyLimitBreakItemValue(class UJsonObject* jsonObj, struct FBrgDbBodyLimitBreakItem& outObj);
	static void SetBrgDbBodyLvlStatusValue(struct FBrgDbBodyLvlStatus Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBodyLvlStatusValue(class UJsonObject* jsonObj, struct FBrgDbBodyLvlStatus& outObj);
	static void SetBrgDbBodyLvlExpGradeValue(struct FBrgDbBodyLvlExpGrade Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBodyLvlExpGradeValue(class UJsonObject* jsonObj, struct FBrgDbBodyLvlExpGrade& outObj);
	static void SetBrgDbBodyLvlExpValue(struct FBrgDbBodyLvlExp Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBodyLvlExpValue(class UJsonObject* jsonObj, struct FBrgDbBodyLvlExp& outObj);
	static void SetBrgDbPlayerStatusValue(struct FBrgDbPlayerStatus Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbPlayerStatusValue(class UJsonObject* jsonObj, struct FBrgDbPlayerStatus& outObj);
	static void SetBrgDbFloorStageUnitValue(struct FBrgDbFloorStageUnit Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbFloorStageUnitValue(class UJsonObject* jsonObj, struct FBrgDbFloorStageUnit& outObj);
	static void SetBrgDbUnitTargetPointListValue(struct FBrgDbUnitTargetPointList Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbUnitTargetPointListValue(class UJsonObject* jsonObj, struct FBrgDbUnitTargetPointList& outObj);
	static void SetBrgDbStageValue(struct FBrgDbStage Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbStageValue(class UJsonObject* jsonObj, struct FBrgDbStage& outObj);
	static void SetBrgDbStageUnitValue(struct FBrgDbStageUnit Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbStageUnitValue(class UJsonObject* jsonObj, struct FBrgDbStageUnit& outObj);
	static void SetBrgDbBuildInfoValue(struct FBrgDbBuildInfo Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbBuildInfoValue(class UJsonObject* jsonObj, struct FBrgDbBuildInfo& outObj);
	static void SetBrgDbSessionValue(struct FBrgDbSession Arg, class UJsonObject*& outJsonObj);
	static void GetBrgDbSessionValue(class UJsonObject* jsonObj, struct FBrgDbSession& outObj);
};

// Class BrgGameBase.BrgNetworkManagerBase
// 0x0104 (0x0060 - 0x0164)
class UBrgNetworkManagerBase : public UObject
{
public:
	class FString                                      CustomServerHostName;                          // 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      CustomServerHostName_Steam;                    // 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ServerHostName;                                // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AdditionalUrl;                                 // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      ConnectsToLocalServer : 1;                     // 0x00A0 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	unsigned long                                      IsGhmNetwrokServer : 1;                        // 0x00A0 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	unsigned long                                      DisableNetwork : 1;                            // 0x00A0 (0x0004) [0x0000000000004000] [0x00000004] (CPF_Config)
	unsigned long                                      mRequesting : 1;                               // 0x00A0 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            LogOutputRequestSizeLimit;                     // 0x00A4 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<class UBrgNetworkResponseInterface*>        mForceErrorResponses;                          // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgNetworkPendingRequest*>           mPendingRequests;                              // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mRequestTimer;                                 // 0x00C8 (0x0004) [0x0000000000000000]               
	TArray<class UBrgNetworkResponseInterface*>        mWaitingResponses;                             // 0x00CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgNetworkCacheRequest*                     mCacheRequest;                                 // 0x00DC (0x0008) [0x0000000000000000]               
	class FString                                      mRequestIdBase;                                // 0x00E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           mRequestIndex;                                 // 0x00F4 (0x0008) [0x0000000000000000]               
	uint64_t                                           mLastResponseTime;                             // 0x00FC (0x0008) [0x0000000000000000]               
	uint64_t                                           mLastResponseClientTimeSec;                    // 0x0104 (0x0008) [0x0000000000000000]               
	int32_t                                            mLastResponseClientTimeMsec;                   // 0x010C (0x0004) [0x0000000000000000]               
	uint64_t                                           mLastResponseServerTimeSec;                    // 0x0110 (0x0008) [0x0000000000000000]               
	int32_t                                            mLastResponseServerTimeMsec;                   // 0x0118 (0x0004) [0x0000000000000000]               
	class FString                                      mLastResponseApiName;                          // 0x011C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mLastResponseReqid;                            // 0x012C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mLastResponseServerNo;                         // 0x013C (0x0004) [0x0000000000000000]               
	uint64_t                                           mLastRequestStartTimeSec;                      // 0x0140 (0x0008) [0x0000000000000000]               
	int32_t                                            mLastRequestStartTimeMsec;                     // 0x0148 (0x0004) [0x0000000000000000]               
	int32_t                                            LocalHttpsPort;                                // 0x014C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            LocalHttpPort;                                 // 0x0150 (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      LocalServerHostName;                           // 0x0154 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkManagerBase");
		}

		return uClassPointer;
	};

	bool TestCommand(class FString Cmd, class FString param1, class FString param2);
	bool SetCookie(class FString URL, class FString cookieName, class FString cookieData);
	void eventFindApiInfo(class FString reqid, class FString& ApiName, float& Time, class FString& ErrorCode);
	void Render(class ABrgHUDBase* HUD);
	void Update(float DeltaTime);
	void UpdateWaitingResponse(float DeltaTime);
	bool AddWaitingResponse(class UBrgNetworkResponseInterface* res);
	void UpdateForceErrorResponse(float DeltaTime);
	int32_t GetForceErrorCodeNo(class UBrgNetworkResponseInterface* res);
	class FString GetForceErrorCodeCategory(class UBrgNetworkResponseInterface* res);
	bool AddForceErrorResponse(class UBrgNetworkResponseInterface* res);
	bool UpdatePendingRequests(float DeltaTime);
	bool CallPendingRequest(class UBrgNetworkPendingRequest* pendReq);
	bool StartRequestCallback(class UBrgNetworkPendingRequest* pendReq);
	bool SetRequestTime(class UJsonObject* reqContent);
	bool ResetLastResponseTime();
	bool SetLastResponseTime(uint64_t clientTimeSec, int32_t clientTimeMsec, uint64_t serverTimeSec, int32_t serverTimeMsec, class FString ApiName, class FString reqid, int32_t serverNo);
	bool RemovePendingRequest(class UHttpRequestInterface* req, unsigned long cacheExist);
	class FString CreateResponseHash(TArray<uint8_t>& Content);
	class FString CreateRequestHash(TArray<uint8_t>& Content);
	bool CreateRequest(class FString URL, class UBrgNetworkRequestContent* Content, class UBrgNetworkResponseInterface* res);
	class UBrgNetworkResponseInterface* Request(class UClass* responseClass, class UBrgNetworkRequestContent* Content);
	bool ResetRequestIdBase();
	bool SetRequestIdBase(class FString reqidbase);
	bool GenerateRequestId(class FString& reqid);
	class FString GetAdditionalUrl();
	void SetAdditionalUrl(class FString URL);
	bool ForceResponseError();
	int32_t GetLocalHttpPort();
	int32_t GetLocalHttpsPort();
	class FString GetServerHostName();
	uint64_t GetLastResponseTime();
	void Terminate();
	void Initialize();
	void InitializeNative();
};

// Class BrgGameBase.BrgNetworkManager
// 0x0008 (0x0164 - 0x016C)
class UBrgNetworkManager : public UBrgNetworkManagerBase
{
public:
	struct FPointer                                    VfTable_IBrgNetworkManagerInterface;           // 0x0164 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkManager");
		}

		return uClassPointer;
	};

	class UBrgNetworkResponseUpdaterevenge* RequestUpdaterevenge(struct FBrgDbUpdateRevengeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseTest* RequestTest(unsigned long bid, int32_t iid, float fid, class FString sid, struct Ftest_struct2 oid, TArray<unsigned long> bids, TArray<int32_t> iids, TArray<float> fids, TArray<class FString> sids, TArray<struct Ftest_struct2> oids);
	class UBrgNetworkResponseFramerateskiplog* RequestFramerateskiplog(struct FBrgFrameRateSkipLogParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseEndsp* RequestEndsp(struct FBrgDbEndSpParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseOrderquests* RequestOrderquests(struct FBrgDbOrderQuestsParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetquests* RequestGetquests(struct FBrgDbGetQuestsParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseBodies* RequestBodies(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseEndbet* RequestEndbet(struct FBrgDbEndBetParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseStartbet* RequestStartbet(struct FBrgDbStartBetParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseChangecash* RequestChangecash(struct FBrgDbChangeCashParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseVipconfig* RequestVipconfig(struct FBrgDbUserVipConfigParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseVipuse* RequestVipuse(struct FBrgDbUserVipUseParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseVippurchase* RequestVippurchase(struct FBrgDbVipPurchaseParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSaveitemlog* RequestSaveitemlog(struct FBrgDbSession ssn, TArray<struct FBrgDbMsglog> items, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponsePlaylog* RequestPlaylog(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGimreaper* RequestGimreaper(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetmsg* RequestGetmsg(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseArrival* RequestArrival(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRelievegame* RequestRelievegame(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseContinue* RequestContinue(struct FBrgDbContinueParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSavegame* RequestSavegame(struct FBrgDbSaveGameParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseResumegame* RequestResumegame(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponsePausegame* RequestPausegame(struct FBrgDbPauseGameParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseLoadgame* RequestLoadgame(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSavelasthubtime* RequestSavelasthubtime(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseReceivedeathbox* RequestReceivedeathbox(struct FBrgDbReceiveDeathboxParam rec, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseFreeze_abductee* RequestFreeze_abductee(struct FBrgDbFreezeAbducteeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRelease_abductee* RequestRelease_abductee(struct FBrgDbReleaseAbducteeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseAccess_prison* RequestAccess_prison(struct FBrgDbAccessPrisonParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRadio* RequestRadio(struct FBrgDbUserSoul soul, struct FBrgDbSession ssn);
	class UBrgNetworkResponseResetboxgacha* RequestResetboxgacha(struct FBrgDbResetBoxGachaParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSkillgacha* RequestSkillgacha(struct FBrgDbSkillGachaParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUsesafe* RequestUsesafe(struct FBrgDbUseSafeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseOperatepresent* RequestOperatepresent(struct FBrgDbOperatePresentParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseReceivepresent* RequestReceivepresent(struct FBrgDbReceivePresentParam rec, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponsePresents* RequestPresents(struct FBrgDbSession ssn, struct FBrgDbUserSoul soul, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_starthub* RequestDbg_starthub(struct FBrgDbDbgStartHubParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseStarthub* RequestStarthub(struct FBrgDbStartHubParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_tgtpntlist* RequestDbg_tgtpntlist();
	class UBrgNetworkResponseDbg_takeelv* RequestDbg_takeelv(struct FBrgDbDbgTakeElevatorParam elv, struct FBrgDbDebugFloorParam dbg, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_movefloor* RequestDbg_movefloor(struct FBrgDbDbgMoveFloorParam mv, struct FBrgDbDebugFloorParam dbg, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_clearfloor* RequestDbg_clearfloor(struct FBrgDbClearFloor clr, struct FBrgDbDebugFloorParam dbg, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_startfloor* RequestDbg_startfloor(struct FBrgDbDbgStartFloor Param, struct FBrgDbDebugFloorParam dbg, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRecovererror* RequestRecovererror(struct FBrgRecoverErrorParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUsedustshooter* RequestUsedustshooter(struct FBrgDbUseDustshooterParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseEntergate* RequestEntergate(struct FBrgDbEnterGateParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseTakeelv* RequestTakeelv(struct FBrgDbTakeElevatorParam elv, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseMovefloor* RequestMovefloor(struct FBrgDbMoveFloorParam mv, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseClearfloor* RequestClearfloor(struct FBrgDbClearFloor clr, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseStartfloor* RequestStartfloor(struct FBrgDbStartFloor Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseExpandcl* RequestExpandcl(struct FBrgDbExpandCoinLockerParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSortcl* RequestSortcl(struct FBrgDbSortCoinLockerParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDrawcl* RequestDrawcl(struct FBrgDbDrawCoinLockerParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDeposcl* RequestDeposcl(struct FBrgDbDeposCoinLockerParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseMushroomshop* RequestMushroomshop(TArray<struct FBrgDbUserMushroomShopHistory> shophistory, TArray<struct FBrgDbUserSkillRecover> skillrecover, struct FBrgDbMushroomShop Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetmushroomshop* RequestGetmushroomshop(struct FBrgDbUserSoul soul, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_resetskl* RequestDbg_resetskl(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseOpenskl* RequestOpenskl(struct FBrgDbOpSkillParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseEquipskl* RequestEquipskl(struct FBrgDbEqSkillParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetassaultfortresult* RequestGetassaultfortresult(struct FBrgDbGetAssaultFortResultParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdatehubcustomize* RequestUpdatehubcustomize(struct FBrgDbUpdateHubCustomizeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdatefortsetting* RequestUpdatefortsetting(struct FBrgDbUpdateFortSettingParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseChangeteam* RequestChangeteam(struct FBrgDbChangeTeamParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetteaminfo* RequestGetteaminfo(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetranking* RequestGetranking(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseWhistleshop* RequestWhistleshop(TArray<struct FBrgDbWhistleShopHistory> whistlehistory, struct FBrgDbUserSoul soul, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseFacilityshop* RequestFacilityshop(TArray<struct FBrgDbFortShopHistory> shophistory, struct FBrgDbUserSoul soul, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetfortdestall* RequestGetfortdestall(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseFortterminal* RequestFortterminal(struct FBrgDbFortterminalParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseImagetraining* RequestImagetraining(int32_t blow_num, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponsePayransom* RequestPayransom(struct FBrgDbPayRansomParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetfortdests* RequestGetfortdests(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseAssaultfortresult* RequestAssaultfortresult(struct FBrgDbAssaultFortResultParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseAssaultfort* RequestAssaultfort(struct FBrgDbAssaultFortParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseShowhunterresult* RequestShowhunterresult(struct FBrgDbShowHunterResultParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGethunterdests* RequestGethunterdests(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseCancelhunter* RequestCancelhunter(struct FBrgDbCancelHunterParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSendhunter* RequestSendhunter(struct FBrgDbSendHunterParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSavescreenshot* RequestSavescreenshot(struct FBrgDbScreenshot Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseTutorial* RequestTutorial(int32_t flag, struct FBrgDbUserSoul soul, struct FBrgDbSession ssn);
	class UBrgNetworkResponseUpdatefriend* RequestUpdatefriend(struct FBrgDbUpdateFriendParam Param, struct FBrgDbSession ssn);
	class UBrgNetworkResponsePurchasebody* RequestPurchasebody(struct FBrgDbPurchaseBodyParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSelectbody* RequestSelectbody(struct FBrgDbSelectBodyParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseConfigmenu* RequestConfigmenu(struct FBrgDbUserConfigMenu Param, struct FBrgDbUserSpecAndSetting specandsetting, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseConfig* RequestConfig(struct FBrgDbUserConfig Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdatemedal* RequestUpdatemedal(struct FBrgDbUpdateMedalParam Param, class FString Code, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseOpendialog* RequestOpendialog(struct FBrgDbOpenDialogParam Param, class FString Code, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDistributebodylvl* RequestDistributebodylvl(struct FBrgDbDistributeBodyLvlParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDestroychara* RequestDestroychara(struct FBrgDbDestroyCharaParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseForsake_abductee* RequestForsake_abductee(struct FBrgDbForsakeAbducteeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseForsake* RequestForsake(struct FBrgDbForsakeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSelectchara* RequestSelectchara(struct FBrgDbSelectCharaParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRecovery* RequestRecovery(struct FBrgDbRecoveryParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSalvage* RequestSalvage(struct FBrgDbSalvageParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseExpanddb* RequestExpanddb(struct FBrgDbExpandDeathBagParam Param, class FString Code, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSavediepoint* RequestSavediepoint(struct FBrgDbSaveDiePointParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDie* RequestDie(struct FBrgDbDie die, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseInputusername* RequestInputusername(struct FBrgDbInputUserNameParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdatecharaname* RequestUpdatecharaname(struct FBrgDbUpdateCharaNameParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdateuserinfo* RequestUpdateuserinfo(struct FBrgDbUpdateUserInfoParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetuserinfo* RequestGetuserinfo(class FString Code, struct FBrgDbUserSpecAndSetting specandsetting, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetparams* RequestGetparams(int32_t is_encrypted, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetlocdat* RequestGetlocdat(struct FBrgDbGetLocdatParam Param, int32_t is_encrypted, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseConversation* RequestConversation(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseReduce_waiting* RequestReduce_waiting(struct FBrgDbReduceWaitingParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRoastmushroom* RequestRoastmushroom(struct FBrgDbRoastMushroomParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetskillsticker* RequestGetskillsticker(struct FBrgDbUserSoul soul, TArray<struct FBrgDbSkillSticker> skills, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponsePaymushroom* RequestPaymushroom(struct FBrgDbUserSoul soul, TArray<struct FBrgDbPayMushroom> mushrooms, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdate_research* RequestUpdate_research(struct FBrgDbUserSoul soul, TArray<struct FBrgDbUserShopHistory> shophistory, TArray<struct FBrgDbUserBaseShopResult> shoppurchase, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetpartresearch* RequestGetpartresearch(struct FBrgDbUserSoul soul, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseBlendmsrsoup* RequestBlendmsrsoup(struct FBrgDbBlendMushroomSoupParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSellpt* RequestSellpt(struct FBrgDbSellPartParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSellmsr* RequestSellmsr(struct FBrgDbSellMushroomParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRepairpt* RequestRepairpt(struct FBrgDbRepairPartParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseInsurept* RequestInsurept(struct FBrgDbInsurePt Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetshopprice* RequestGetshopprice(struct FBrgDbShopPriceInfoParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseEnhancept* RequestEnhancept(struct FBrgDbEnhancePartParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseCharge* RequestCharge(struct FBrgDbPurchaseParam Param, class FString Code, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseTermsagree* RequestTermsagree(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRegusr* RequestRegusr(class FString uuid, class FString sid);
	class UBrgNetworkResponseLogout* RequestLogout(struct FBrgDbLogoutParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseLogins* RequestLogins(class FString Code, int32_t Size, class FString sid, int32_t consent);
	class UBrgNetworkResponseLoginp* RequestLoginp(class FString Code, int32_t Size, class FString sid, int32_t consent);
	class UBrgNetworkResponseLogin* RequestLogin(class FString Uid, class FString sid, class FString nm, int32_t consent);
	class UBrgNetworkResponseStart* RequestStart(int32_t Type, int32_t ver, class FString rg, class FString lang, class FString tsid, class FString Uid, struct FBrgDbBuildInfo bi);
	class UBrgNetworkResponseGetaccountinfop* RequestGetaccountinfop(class FString Code, int32_t Size, class FString sid);
	class UBrgNetworkResponseMigrations* RequestMigrations(class FString Code, int32_t Size, class FString sid);
	class UBrgNetworkResponseMigrationp* RequestMigrationp(class FString Code, int32_t Size, class FString sid);
	class UBrgNetworkResponseMigration* RequestMigration(class FString Uid, class FString sid, class FString nm);
	bool IsUpdatedServerEnvList();
	int32_t GetApiVersion();
};

// Class BrgGameBase.BrgNetworkManagerInterface
// 0x0000 (0x0060 - 0x0060)
class UBrgNetworkManagerInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkManagerInterface");
		}

		return uClassPointer;
	};

	class UBrgNetworkResponseUpdaterevenge* RequestUpdaterevenge(struct FBrgDbUpdateRevengeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseTest* RequestTest(unsigned long bid, int32_t iid, float fid, class FString sid, struct Ftest_struct2 oid, TArray<unsigned long> bids, TArray<int32_t> iids, TArray<float> fids, TArray<class FString> sids, TArray<struct Ftest_struct2> oids);
	class UBrgNetworkResponseFramerateskiplog* RequestFramerateskiplog(struct FBrgFrameRateSkipLogParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseEndsp* RequestEndsp(struct FBrgDbEndSpParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseOrderquests* RequestOrderquests(struct FBrgDbOrderQuestsParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetquests* RequestGetquests(struct FBrgDbGetQuestsParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseBodies* RequestBodies(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseEndbet* RequestEndbet(struct FBrgDbEndBetParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseStartbet* RequestStartbet(struct FBrgDbStartBetParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseChangecash* RequestChangecash(struct FBrgDbChangeCashParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseVipconfig* RequestVipconfig(struct FBrgDbUserVipConfigParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseVipuse* RequestVipuse(struct FBrgDbUserVipUseParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseVippurchase* RequestVippurchase(struct FBrgDbVipPurchaseParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSaveitemlog* RequestSaveitemlog(struct FBrgDbSession ssn, TArray<struct FBrgDbMsglog> items, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponsePlaylog* RequestPlaylog(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGimreaper* RequestGimreaper(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetmsg* RequestGetmsg(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseArrival* RequestArrival(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRelievegame* RequestRelievegame(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseContinue* RequestContinue(struct FBrgDbContinueParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSavegame* RequestSavegame(struct FBrgDbSaveGameParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseResumegame* RequestResumegame(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponsePausegame* RequestPausegame(struct FBrgDbPauseGameParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseLoadgame* RequestLoadgame(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSavelasthubtime* RequestSavelasthubtime(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseReceivedeathbox* RequestReceivedeathbox(struct FBrgDbReceiveDeathboxParam rec, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseFreeze_abductee* RequestFreeze_abductee(struct FBrgDbFreezeAbducteeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRelease_abductee* RequestRelease_abductee(struct FBrgDbReleaseAbducteeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseAccess_prison* RequestAccess_prison(struct FBrgDbAccessPrisonParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRadio* RequestRadio(struct FBrgDbUserSoul soul, struct FBrgDbSession ssn);
	class UBrgNetworkResponseResetboxgacha* RequestResetboxgacha(struct FBrgDbResetBoxGachaParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSkillgacha* RequestSkillgacha(struct FBrgDbSkillGachaParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUsesafe* RequestUsesafe(struct FBrgDbUseSafeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseOperatepresent* RequestOperatepresent(struct FBrgDbOperatePresentParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseReceivepresent* RequestReceivepresent(struct FBrgDbReceivePresentParam rec, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponsePresents* RequestPresents(struct FBrgDbSession ssn, struct FBrgDbUserSoul soul, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_starthub* RequestDbg_starthub(struct FBrgDbDbgStartHubParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseStarthub* RequestStarthub(struct FBrgDbStartHubParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_tgtpntlist* RequestDbg_tgtpntlist();
	class UBrgNetworkResponseDbg_takeelv* RequestDbg_takeelv(struct FBrgDbDbgTakeElevatorParam elv, struct FBrgDbDebugFloorParam dbg, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_movefloor* RequestDbg_movefloor(struct FBrgDbDbgMoveFloorParam mv, struct FBrgDbDebugFloorParam dbg, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_clearfloor* RequestDbg_clearfloor(struct FBrgDbClearFloor clr, struct FBrgDbDebugFloorParam dbg, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_startfloor* RequestDbg_startfloor(struct FBrgDbDbgStartFloor Param, struct FBrgDbDebugFloorParam dbg, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRecovererror* RequestRecovererror(struct FBrgRecoverErrorParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUsedustshooter* RequestUsedustshooter(struct FBrgDbUseDustshooterParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseEntergate* RequestEntergate(struct FBrgDbEnterGateParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseTakeelv* RequestTakeelv(struct FBrgDbTakeElevatorParam elv, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseMovefloor* RequestMovefloor(struct FBrgDbMoveFloorParam mv, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseClearfloor* RequestClearfloor(struct FBrgDbClearFloor clr, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseStartfloor* RequestStartfloor(struct FBrgDbStartFloor Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseExpandcl* RequestExpandcl(struct FBrgDbExpandCoinLockerParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSortcl* RequestSortcl(struct FBrgDbSortCoinLockerParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDrawcl* RequestDrawcl(struct FBrgDbDrawCoinLockerParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDeposcl* RequestDeposcl(struct FBrgDbDeposCoinLockerParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseMushroomshop* RequestMushroomshop(TArray<struct FBrgDbUserMushroomShopHistory> shophistory, TArray<struct FBrgDbUserSkillRecover> skillrecover, struct FBrgDbMushroomShop Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetmushroomshop* RequestGetmushroomshop(struct FBrgDbUserSoul soul, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDbg_resetskl* RequestDbg_resetskl(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseOpenskl* RequestOpenskl(struct FBrgDbOpSkillParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseEquipskl* RequestEquipskl(struct FBrgDbEqSkillParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetassaultfortresult* RequestGetassaultfortresult(struct FBrgDbGetAssaultFortResultParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdatehubcustomize* RequestUpdatehubcustomize(struct FBrgDbUpdateHubCustomizeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdatefortsetting* RequestUpdatefortsetting(struct FBrgDbUpdateFortSettingParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseChangeteam* RequestChangeteam(struct FBrgDbChangeTeamParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetteaminfo* RequestGetteaminfo(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetranking* RequestGetranking(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseWhistleshop* RequestWhistleshop(TArray<struct FBrgDbWhistleShopHistory> whistlehistory, struct FBrgDbUserSoul soul, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseFacilityshop* RequestFacilityshop(TArray<struct FBrgDbFortShopHistory> shophistory, struct FBrgDbUserSoul soul, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetfortdestall* RequestGetfortdestall(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseFortterminal* RequestFortterminal(struct FBrgDbFortterminalParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseImagetraining* RequestImagetraining(int32_t blow_num, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponsePayransom* RequestPayransom(struct FBrgDbPayRansomParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetfortdests* RequestGetfortdests(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseAssaultfortresult* RequestAssaultfortresult(struct FBrgDbAssaultFortResultParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseAssaultfort* RequestAssaultfort(struct FBrgDbAssaultFortParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseShowhunterresult* RequestShowhunterresult(struct FBrgDbShowHunterResultParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGethunterdests* RequestGethunterdests(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseCancelhunter* RequestCancelhunter(struct FBrgDbCancelHunterParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSendhunter* RequestSendhunter(struct FBrgDbSendHunterParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSavescreenshot* RequestSavescreenshot(struct FBrgDbScreenshot Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseTutorial* RequestTutorial(int32_t flag, struct FBrgDbUserSoul soul, struct FBrgDbSession ssn);
	class UBrgNetworkResponseUpdatefriend* RequestUpdatefriend(struct FBrgDbUpdateFriendParam Param, struct FBrgDbSession ssn);
	class UBrgNetworkResponsePurchasebody* RequestPurchasebody(struct FBrgDbPurchaseBodyParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSelectbody* RequestSelectbody(struct FBrgDbSelectBodyParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseConfigmenu* RequestConfigmenu(struct FBrgDbUserConfigMenu Param, struct FBrgDbUserSpecAndSetting specandsetting, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseConfig* RequestConfig(struct FBrgDbUserConfig Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdatemedal* RequestUpdatemedal(struct FBrgDbUpdateMedalParam Param, class FString Code, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseOpendialog* RequestOpendialog(struct FBrgDbOpenDialogParam Param, class FString Code, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDistributebodylvl* RequestDistributebodylvl(struct FBrgDbDistributeBodyLvlParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDestroychara* RequestDestroychara(struct FBrgDbDestroyCharaParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseForsake_abductee* RequestForsake_abductee(struct FBrgDbForsakeAbducteeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseForsake* RequestForsake(struct FBrgDbForsakeParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSelectchara* RequestSelectchara(struct FBrgDbSelectCharaParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRecovery* RequestRecovery(struct FBrgDbRecoveryParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSalvage* RequestSalvage(struct FBrgDbSalvageParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseExpanddb* RequestExpanddb(struct FBrgDbExpandDeathBagParam Param, class FString Code, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSavediepoint* RequestSavediepoint(struct FBrgDbSaveDiePointParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseDie* RequestDie(struct FBrgDbDie die, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseInputusername* RequestInputusername(struct FBrgDbInputUserNameParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdatecharaname* RequestUpdatecharaname(struct FBrgDbUpdateCharaNameParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdateuserinfo* RequestUpdateuserinfo(struct FBrgDbUpdateUserInfoParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetuserinfo* RequestGetuserinfo(class FString Code, struct FBrgDbUserSpecAndSetting specandsetting, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetparams* RequestGetparams(int32_t is_encrypted, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetlocdat* RequestGetlocdat(struct FBrgDbGetLocdatParam Param, int32_t is_encrypted, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseConversation* RequestConversation(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseReduce_waiting* RequestReduce_waiting(struct FBrgDbReduceWaitingParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRoastmushroom* RequestRoastmushroom(struct FBrgDbRoastMushroomParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetskillsticker* RequestGetskillsticker(struct FBrgDbUserSoul soul, TArray<struct FBrgDbSkillSticker> skills, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponsePaymushroom* RequestPaymushroom(struct FBrgDbUserSoul soul, TArray<struct FBrgDbPayMushroom> mushrooms, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseUpdate_research* RequestUpdate_research(struct FBrgDbUserSoul soul, TArray<struct FBrgDbUserShopHistory> shophistory, TArray<struct FBrgDbUserBaseShopResult> shoppurchase, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetpartresearch* RequestGetpartresearch(struct FBrgDbUserSoul soul, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseBlendmsrsoup* RequestBlendmsrsoup(struct FBrgDbBlendMushroomSoupParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSellpt* RequestSellpt(struct FBrgDbSellPartParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseSellmsr* RequestSellmsr(struct FBrgDbSellMushroomParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRepairpt* RequestRepairpt(struct FBrgDbRepairPartParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseInsurept* RequestInsurept(struct FBrgDbInsurePt Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseGetshopprice* RequestGetshopprice(struct FBrgDbShopPriceInfoParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseEnhancept* RequestEnhancept(struct FBrgDbEnhancePartParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseCharge* RequestCharge(struct FBrgDbPurchaseParam Param, class FString Code, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseTermsagree* RequestTermsagree(struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseRegusr* RequestRegusr(class FString uuid, class FString sid);
	class UBrgNetworkResponseLogout* RequestLogout(struct FBrgDbLogoutParam Param, struct FBrgDbSession ssn, TArray<struct FBrgDbPlaylog> playlog);
	class UBrgNetworkResponseLogins* RequestLogins(class FString Code, int32_t Size, class FString sid, int32_t consent);
	class UBrgNetworkResponseLoginp* RequestLoginp(class FString Code, int32_t Size, class FString sid, int32_t consent);
	class UBrgNetworkResponseLogin* RequestLogin(class FString Uid, class FString sid, class FString nm, int32_t consent);
	class UBrgNetworkResponseStart* RequestStart(int32_t Type, int32_t ver, class FString rg, class FString lang, class FString tsid, class FString Uid, struct FBrgDbBuildInfo bi);
	class UBrgNetworkResponseGetaccountinfop* RequestGetaccountinfop(class FString Code, int32_t Size, class FString sid);
	class UBrgNetworkResponseMigrations* RequestMigrations(class FString Code, int32_t Size, class FString sid);
	class UBrgNetworkResponseMigrationp* RequestMigrationp(class FString Code, int32_t Size, class FString sid);
	class UBrgNetworkResponseMigration* RequestMigration(class FString Uid, class FString sid, class FString nm);
	bool IsUpdatedServerEnvList();
	int32_t GetLocalHttpPort();
	int32_t GetLocalHttpsPort();
	class FString GetServerHostName();
	int32_t GetApiVersion();
	void Terminate();
	void Initialize();
};

// Class BrgGameBase.BrgNetworkRequestContent
// 0x0000 (0x0120 - 0x0120)
class UBrgNetworkRequestContent : public UJsonObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkRequestContent");
		}

		return uClassPointer;
	};

	class FString ToString();
	bool SetParamInt(class FString Key, int32_t Value);
	bool SetParam(class FString Key, class FString Value);
};

// Class BrgGameBase.BrgNetworkResponseInterface
// 0x00FC (0x0060 - 0x015C)
class UBrgNetworkResponseInterface : public UObject
{
public:
	class FString                                      ApiName;                                       // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ApiPath;                                       // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SchemeType;                                    // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bIsDone : 1;                                   // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsError : 1;                                  // 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanParseContent : 1;                          // 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bStartDecryptContent : 1;                      // 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bContentDecrypted : 1;                         // 0x0090 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bContentDecryptFailed : 1;                     // 0x0090 (0x0004) [0x0000000000000000] [0x00000020] 
	int32_t                                            StatusCode;                                    // 0x0094 (0x0004) [0x0000000000000000]               
	int32_t                                            ApiVersion;                                    // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            DataVersion;                                   // 0x009C (0x0004) [0x0000000000000000]               
	class FString                                      ErrorCode;                                     // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ErrorMessage;                                  // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ErrorParam;                                    // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            StatusExceptionCode;                           // 0x00D0 (0x0004) [0x0000000000000000]               
	class FString                                      AccountId;                                     // 0x00D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RequestID;                                     // 0x00E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ErrorType;                                     // 0x00F4 (0x0001) [0x0000000000000000]               
	uint8_t                                            SaveLoadState;                                 // 0x00F5 (0x0001) [0x0000000000000000]               
	int32_t                                            LibraryErrorCode;                              // 0x00F8 (0x0004) [0x0000000000000000]               
	class UJsonObject*                                 jsonObj;                                       // 0x00FC (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     GetResponseDelegates;                          // 0x0104 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     PreRequestDelegates;                           // 0x0114 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    DecryptContent;                                // 0x0124 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       RequestInterface;                              // 0x0134 (0x0008) [0x0000000000000000]               
	class UHttpResponseInterface*                      ResponseInterface;                             // 0x013C (0x0008) [0x0000000000000000]               
	float                                              ForceErrorTimer;                               // 0x0144 (0x0004) [0x0000000000000000]               
	int32_t                                            LogOutputResponseSizeLimit;                    // 0x0148 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnGetResponse__Delegate;                     // 0x014C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseInterface");
		}

		return uClassPointer;
	};

	void SetForceError();
	float GetForceErrorTimer();
	void SetForceErrorTimer(float Timer);
	bool CallPreRequestDelegate(class UHttpRequestInterface* OriginalRequest, class UHttpRequestContentInterface* Content, int32_t& errCode);
	void ClearPreRequestDelegate();
	void AddPreRequestDelegate(struct FScriptDelegate preReq);
	void CallGetResponseDelegate();
	void ClearGetResponseDelegate();
	void AddGetResponseDelegate(struct FScriptDelegate getres);
	class FString GetRequestURL(unsigned long isGhmlocalserver);
	class FString GetRequestURLNative(unsigned long isGhmlocalserver);
	void ClearDecodedContent();
	void CleanParam();
	class FString GetErrorParam();
	class FString GetRequestId();
	void SetRequestId(class FString reqid);
	class FString GetAccountId();
	int32_t GetDataVersion();
	int32_t GetApiVersion();
	int32_t GetLibraryErrorCode();
	void SetLibraryErrorCode(int32_t Code);
	void SetErrorType(uint8_t Type);
	uint8_t GetErrorType();
	class UJsonObject* GetDecodedContent();
	int32_t GetStatusCode();
	int32_t GetStatusExceptionCode();
	void SetErrorMessage(class FString msg);
	void SetErrorCodeByCategoryAndNumber(class FString Category, int32_t No);
	void SetErrorCode(class FString Code);
	class FString GetErrorCodeAndMessage();
	class FString GetErrorMessage();
	class FString GetShortErrorCode();
	class FString GetErrorCode();
	class FString GetApiName();
	bool IsSuccess();
	bool IsError();
	bool IsDone();
	void UnlockCriticalSection();
	void LockCriticalSection();
	uint8_t GetSaveLoadState();
	void SetSaveLoadState(uint8_t State);
	bool GetContentDecryptFailed();
	void SetContentDecryptFailed(unsigned long flag);
	bool GetContentDecrypted();
	void SetContentDecrypted(unsigned long flag);
	class FString GetDecryptContentAsString();
	bool GetStartDecryptContent();
	bool StartDecryptContentOffline(TArray<uint8_t>& cntnt);
	bool StartDecryptContent();
	int32_t GetContentSize();
	bool GetContent(TArray<uint8_t>& cntnt);
	void SetCanParseContent(unsigned long flag);
	bool CanParseContent();
	bool NeedsParseContent();
	bool HasResponse();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
	bool OnPreRequest(class UHttpRequestInterface* OriginalRequest, class UHttpRequestContentInterface* Content, int32_t& errCode);
	void OnGetResponse(class UBrgNetworkResponseInterface* res);
};

// Class BrgGameBase.BrgNetworkResponseAccess_prison
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseAccess_prison : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserPrison>                    mPrison;                                       // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseAccess_prison");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseArrival
// 0x0010 (0x015C - 0x016C)
class UBrgNetworkResponseArrival : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseArrival");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseAssaultfort
// 0x0678 (0x015C - 0x07D4)
class UBrgNetworkResponseAssaultfort : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbFort                                  mFort;                                         // 0x05D8 (0x01DC) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDeathbox;                                     // 0x07B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x07C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseAssaultfort");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseAssaultfortresult
// 0x05A4 (0x015C - 0x0700)
class UBrgNetworkResponseAssaultfortresult : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbAssaultFortResultDetail               mRes;                                          // 0x05D8 (0x0118) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x06F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseAssaultfortresult");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseBlendmsrsoup
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseBlendmsrsoup : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbMushroomSoupEfc>               mEfcs;                                         // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x016C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseBlendmsrsoup");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseBodies
// 0x0030 (0x015C - 0x018C)
class UBrgNetworkResponseBodies : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbBody>                          mBodies;                                       // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbGasmask>                       mGasmasks;                                     // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x017C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseBodies");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseCancelhunter
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseCancelhunter : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseCancelhunter");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseChangecash
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseChangecash : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseChangecash");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseChangeteam
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseChangeteam : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserPrison>                    mPrison;                                       // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseChangeteam");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseCharge
// 0x04A4 (0x015C - 0x0600)
class UBrgNetworkResponseCharge : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbPurchase                              mPurchase;                                     // 0x015C (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0174 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseCharge");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseClearfloor
// 0x06C0 (0x015C - 0x081C)
class UBrgNetworkResponseClearfloor : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0390 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseClearfloor");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseConfig
// 0x0020 (0x015C - 0x017C)
class UBrgNetworkResponseConfig : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUserConfig                            mConfig;                                       // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseConfig");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseConfigmenu
// 0x0000 (0x015C - 0x015C)
class UBrgNetworkResponseConfigmenu : public UBrgNetworkResponseInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseConfigmenu");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseContinue
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseContinue : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseContinue");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseConversation
// 0x0020 (0x015C - 0x017C)
class UBrgNetworkResponseConversation : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbScentenceInfo>                 mSinarios;                                     // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseConversation");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDbg_clearfloor
// 0x06C0 (0x015C - 0x081C)
class UBrgNetworkResponseDbg_clearfloor : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0390 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDbg_clearfloor");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDbg_movefloor
// 0x06E0 (0x015C - 0x083C)
class UBrgNetworkResponseDbg_movefloor : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0390 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbTmpMsg>                        mMsgs;                                         // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDeathbox;                                     // 0x081C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x082C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDbg_movefloor");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDbg_resetskl
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseDbg_resetskl : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDbg_resetskl");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDbg_startfloor
// 0x06E0 (0x015C - 0x083C)
class UBrgNetworkResponseDbg_startfloor : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0390 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbTmpMsg>                        mMsgs;                                         // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDeathbox;                                     // 0x081C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x082C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDbg_startfloor");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDbg_starthub
// 0x053C (0x015C - 0x0698)
class UBrgNetworkResponseDbg_starthub : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbAreaTemplateInfo                      mTmplinfo;                                     // 0x05D8 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbTmpMsg>                        mMsgs;                                         // 0x0628 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbAssaultFortResultOld>          mDeffrtres;                                    // 0x0638 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbRescueLog>                     mRescuelog;                                    // 0x0648 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbWar>                           mWarres;                                       // 0x0658 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mHitchart;                                     // 0x0668 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserDeathbox>                  mDeathbox;                                     // 0x0678 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0688 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDbg_starthub");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDbg_takeelv
// 0x06D0 (0x015C - 0x082C)
class UBrgNetworkResponseDbg_takeelv : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0390 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDeathbox;                                     // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x081C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDbg_takeelv");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDbg_tgtpntlist
// 0x02A0 (0x015C - 0x03FC)
class UBrgNetworkResponseDbg_tgtpntlist : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbMasterBeastGen>                mBstgen;                                       // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterZakoGen>                 mZakogen;                                      // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbTargetPointAll                        mMet;                                          // 0x017C (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbTargetPointAll                        mAms;                                          // 0x01FC (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbTargetPointAll                        mRft;                                          // 0x027C (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbTargetPointAll                        mArc;                                          // 0x02FC (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbTargetPointAll                        mHzm;                                          // 0x037C (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDbg_tgtpntlist");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDeposcl
// 0x04DC (0x015C - 0x0638)
class UBrgNetworkResponseDeposcl : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbCoinLocker                            mCl;                                           // 0x05E8 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDeposcl");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDestroychara
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseDestroychara : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDestroychara");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDie
// 0x04D4 (0x015C - 0x0630)
class UBrgNetworkResponseDie : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbBloodnium                             mBld_result;                                   // 0x05D8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0620 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDie");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDistributebodylvl
// 0x04DC (0x015C - 0x0638)
class UBrgNetworkResponseDistributebodylvl : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbCoinLocker                            mCl;                                           // 0x05D8 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0628 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDistributebodylvl");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseDrawcl
// 0x04DC (0x015C - 0x0638)
class UBrgNetworkResponseDrawcl : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbCoinLocker                            mCl;                                           // 0x05E8 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDrawcl");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseEndbet
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseEndbet : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseEndbet");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseEndsp
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseEndsp : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseEndsp");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseEnhancept
// 0x04A0 (0x015C - 0x05FC)
class UBrgNetworkResponseEnhancept : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbEnhancePartInfo                       mEnhance;                                      // 0x015C (0x0014) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0170 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseEnhancept");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseEntergate
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseEntergate : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseEntergate");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseEquipskl
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseEquipskl : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseEquipskl");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseExpandcl
// 0x04DC (0x015C - 0x0638)
class UBrgNetworkResponseExpandcl : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbCoinLocker                            mCl;                                           // 0x05E8 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseExpandcl");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseExpanddb
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseExpanddb : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseExpanddb");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseFacilityshop
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseFacilityshop : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserPrison>                    mPrison;                                       // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseFacilityshop");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseForsake
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseForsake : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseForsake");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseForsake_abductee
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseForsake_abductee : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseForsake_abductee");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseFortterminal
// 0x05A4 (0x015C - 0x0700)
class UBrgNetworkResponseFortterminal : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbTdmSituation>                  mSituation;                                    // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbTerminalTeam>                  mTeams;                                        // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMyTeam                                mMyteam;                                       // 0x017C (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbFortZombieSetting>             mFortsetting;                                  // 0x01BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbAssaultFortResult>             mDeffortres;                                   // 0x01CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbAssaultFortResult>             mAsltfortres;                                  // 0x01DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbWar>                           mWarlogs;                                      // 0x01EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbFortTerminalAnnounce                  mAnnounce;                                     // 0x01FC (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0254 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserPrison>                    mPrison;                                       // 0x06D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           mNextresettime;                                // 0x06E0 (0x0008) [0x0000000000000000]               
	int32_t                                            mPeriod;                                       // 0x06E8 (0x0004) [0x0000000000000000]               
	int32_t                                            mPeriodlen;                                    // 0x06EC (0x0004) [0x0000000000000000]               
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x06F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseFortterminal");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseFramerateskiplog
// 0x0010 (0x015C - 0x016C)
class UBrgNetworkResponseFramerateskiplog : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseFramerateskiplog");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseFreeze_abductee
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseFreeze_abductee : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserPrison>                    mPrison;                                       // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseFreeze_abductee");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetaccountinfop
// 0x0030 (0x015C - 0x018C)
class UBrgNetworkResponseGetaccountinfop : public UBrgNetworkResponseInterface
{
public:
	class FString                                      mAcid;                                         // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mPaid_medal;                                   // 0x016C (0x0004) [0x0000000000000000]               
	int32_t                                            mFree_medal;                                   // 0x0170 (0x0004) [0x0000000000000000]               
	int32_t                                            mPaid_money;                                   // 0x0174 (0x0004) [0x0000000000000000]               
	int32_t                                            mFree_money;                                   // 0x0178 (0x0004) [0x0000000000000000]               
	class FString                                      mInquiry_code;                                 // 0x017C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetaccountinfop");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetassaultfortresult
// 0x0548 (0x015C - 0x06A4)
class UBrgNetworkResponseGetassaultfortresult : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbAssaultFortResult                     mFortresult;                                   // 0x05D8 (0x00BC) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0694 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetassaultfortresult");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetfortdestall
// 0x0074 (0x015C - 0x01D0)
class UBrgNetworkResponseGetfortdestall : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFortDestAll                           mDests;                                        // 0x015C (0x0064) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetfortdestall");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetfortdests
// 0x011C (0x015C - 0x0278)
class UBrgNetworkResponseGetfortdests : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFortDestAllOld                        mDests;                                        // 0x015C (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbWar                                   mWar;                                          // 0x019C (0x0034) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbTeamOld                               mTeam;                                         // 0x01D0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbTeamHate>                      mHates;                                        // 0x0218 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbAssaultFortResultOld>          mDeffrtres;                                    // 0x0228 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbAssaultFortCountAll                   mAvcnts;                                       // 0x0238 (0x0020) [0x0000000000000000]               
	struct FBrgDbAssaultFeeAll                         mFees;                                         // 0x0258 (0x0010) [0x0000000000000000]               
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0268 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetfortdests");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGethunterdests
// 0x0050 (0x015C - 0x01AC)
class UBrgNetworkResponseGethunterdests : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbHunterDestAll                         mDests;                                        // 0x015C (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x019C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGethunterdests");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetlocdat
// 0x0030 (0x015C - 0x018C)
class UBrgNetworkResponseGetlocdat : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbLocInfo                               mLoc;                                          // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbSubtitleInfo                          mSbt;                                          // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x017C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetlocdat");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetmsg
// 0x0020 (0x015C - 0x017C)
class UBrgNetworkResponseGetmsg : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbMsg>                           mMsgs;                                         // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetmsg");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetmushroomshop
// 0x04DC (0x015C - 0x0638)
class UBrgNetworkResponseGetmushroomshop : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbSkillSticker>                  mShop;                                         // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbSkillSticker>                  mShop_exchange;                                // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserBoxGacha>                  mBoxgachas;                                    // 0x05F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbGacha>                         mGachas;                                       // 0x0608 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterSkillGachaCautions>      mCautions;                                     // 0x0618 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0628 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetmushroomshop");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetparams
// 0x04F0 (0x015C - 0x064C)
class UBrgNetworkResponseGetparams : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbStage>                         mStgs;                                         // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbFloorArea>                     mFlrareas;                                     // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlayerStatus>                  mPlsts;                                        // 0x017C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbBody>                          mBodies;                                       // 0x018C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbBodyDetail>                    mBody_detail;                                  // 0x019C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbBodyName>                      mBody_names;                                   // 0x01AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbGasmask>                       mGasmask;                                      // 0x01BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbBodyLvlStatus>                 mBodylvlsts;                                   // 0x01CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbBodyLvlExpGrade>               mBodylvlexpgrade;                              // 0x01DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbBodyLimitBreakItem>            mBodylimitbreakitem;                           // 0x01EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbSkillMove>                     mSklmvs;                                       // 0x01FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbSkill>                         mSkls;                                         // 0x020C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbSkillType>                     mSkltps;                                       // 0x021C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbConstInt>                      mConst_ints;                                   // 0x022C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbConstFloat>                    mConst_floats;                                 // 0x023C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbConstStr>                      mConst_strs;                                   // 0x024C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbAsset>                         mAssets;                                       // 0x025C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPart>                          mPts;                                          // 0x026C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPartArm>                       mPtarms;                                       // 0x027C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPartArmType>                   mPtarmtps;                                     // 0x028C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbAtkScale>                      mAtkscls;                                      // 0x029C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbBrObj>                         mBos;                                          // 0x02AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterGate>                    mGates;                                        // 0x02BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMushroom>                      mMsrs;                                         // 0x02CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMushroomEfc>                   mMsrefcs;                                      // 0x02DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMushroomEfcType>               mMsrefctps;                                    // 0x02EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbBeast>                         mBsts;                                         // 0x02FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbBeastEfc>                      mBstefcs;                                      // 0x030C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbItem>                          mItems;                                        // 0x031C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterMboss>                   mMbss;                                         // 0x032C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterFourforcemen>            mFourforcemen;                                 // 0x033C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterZako>                    mZako;                                         // 0x034C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbParamListType>                 mPtls;                                         // 0x035C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbProductPrice>                  mPrdprcs;                                      // 0x036C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterAutomaticshopLineup>     mAutomaticShopLineup;                          // 0x037C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbAutomaticShopDiscountTerm>     mAutomaticShopDiscountTerm;                    // 0x038C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mFlrstamps;                                    // 0x039C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterMagazine>                mMagazines;                                    // 0x03AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterPointReward>             mMstpntrwd;                                    // 0x03BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterPointRewardType>         mMstpntrwdtp;                                  // 0x03CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterEquipRankPoint>          mPartsrankp;                                   // 0x03DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterLvlReward>               mMstlvlrwd;                                    // 0x03EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterLvlRewardType>           mMstlvlrwdtp;                                  // 0x03FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterAbp>                     mEnmyabp;                                      // 0x040C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterAbp>                     mStgabp;                                       // 0x041C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbResearch>                      mResearch;                                     // 0x042C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterPartResearch>            mPartresearch;                                 // 0x043C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbElevator>                      mElvs;                                         // 0x044C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbJackal>                        mJkls;                                         // 0x045C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbBodyLvlStatus>                 mJklbodylvlsts;                                // 0x046C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterQuest>                   mQuests;                                       // 0x047C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterQuestCategory>           mQuestcategory;                                // 0x048C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterZombieParam>             mZmbparams;                                    // 0x049C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x04AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterWhistle>                 mWhistles;                                     // 0x04BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterWhistleGen>              mWhistle_gens;                                 // 0x04CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbRadioMusic>                    mRadio_music;                                  // 0x04DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbRadioChannel>                  mRadio_channel;                                // 0x04EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbRadioYotsuyama>                mRadio_yotsuyama;                              // 0x04FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbRadioJingle>                   mRadio_jingle;                                 // 0x050C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbSkillCategory>                 mSkill_category;                               // 0x051C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbSkillGroup>                    mSkill_group;                                  // 0x052C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mGameflg;                                      // 0x053C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterSkillGacha>              mSkill_gachas;                                 // 0x054C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterWaitingReduce>           mWaiting_reduce;                               // 0x055C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterHairDisplay>             mHair_display;                                 // 0x056C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterPartEquipment>           mPart_equipment;                               // 0x057C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterSafeLevel>               mSafe;                                         // 0x058C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterSpiritTankLevel>         mSpirit_tank;                                  // 0x059C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterPrison>                  mPrison;                                       // 0x05AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterFreezer>                 mFreezer;                                      // 0x05BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterHubCustomize>            mHubcustomize;                                 // 0x05CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterTdmRank>                 mTdmrank;                                      // 0x05DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterWarReward>               mWarrwd;                                       // 0x05EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterMysterybagContent>       mMysterybagcontents;                           // 0x05FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbFortBreakBonus>                mFortbreakbonus;                               // 0x060C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterCredit>                  mCredit;                                       // 0x061C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterEventSchedule>           mEventschedule;                                // 0x062C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterLastfloor>               mLastfloor;                                    // 0x063C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetparams");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetpartresearch
// 0x04B4 (0x015C - 0x0610)
class UBrgNetworkResponseGetpartresearch : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserPartResearch>              mUser_research;                                // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mBuyable_count;                                // 0x05E8 (0x0004) [0x0000000000000000]               
	int32_t                                            mBuyable_count_limit;                          // 0x05EC (0x0004) [0x0000000000000000]               
	TArray<struct FBrgResearchStampInfo>               mResearch_stamp_info;                          // 0x05F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0600 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetpartresearch");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetquests
// 0x04CC (0x015C - 0x0628)
class UBrgNetworkResponseGetquests : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserQuest>                     mAll_quests;                                   // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbQuest>                         mQuests;                                       // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mCleared_qids;                                 // 0x05F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mCanceled_qids;                                // 0x0608 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0618 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetquests");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetranking
// 0x00D0 (0x015C - 0x022C)
class UBrgNetworkResponseGetranking : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbRankingAll                            mRankingall;                                   // 0x015C (0x00C0) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x021C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetranking");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetshopprice
// 0x04B0 (0x015C - 0x060C)
class UBrgNetworkResponseGetshopprice : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbShopPriceInfo                         mInfo;                                         // 0x015C (0x0024) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0180 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetshopprice");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetskillsticker
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseGetskillsticker : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetskillsticker");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetteaminfo
// 0x0050 (0x015C - 0x01AC)
class UBrgNetworkResponseGetteaminfo : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbMyTeam                                mMyteam;                                       // 0x015C (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x019C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetteaminfo");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGetuserinfo
// 0x053C (0x015C - 0x0698)
class UBrgNetworkResponseGetuserinfo : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserPartResearch>              mUser_research;                                // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUserConfigMenu                        mUser_config_menu;                             // 0x05E8 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0608 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mHitchart;                                     // 0x0618 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgLoadingAnnounce>                 mLoading_announces;                            // 0x0628 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbCoinLocker                            mCl;                                           // 0x0638 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserQuest>                     mAll_quests;                                   // 0x0688 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGetuserinfo");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseGimreaper
// 0x0020 (0x015C - 0x017C)
class UBrgNetworkResponseGimreaper : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbGrimPeaperMenu>                mMenu;                                         // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseGimreaper");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseImagetraining
// 0x0490 (0x015C - 0x05EC)
class UBrgNetworkResponseImagetraining : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mIs_defending;                                 // 0x05D8 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseImagetraining");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseInputusername
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseInputusername : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseInputusername");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseInsurept
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseInsurept : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseInsurept");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseLoadgame
// 0x06C0 (0x015C - 0x081C)
class UBrgNetworkResponseLoadgame : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0390 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseLoadgame");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseLogin
// 0x0004 (0x015C - 0x0160)
class UBrgNetworkResponseLogin : public UBrgNetworkResponseInterface
{
public:
	int32_t                                            mIs_normal_end;                                // 0x015C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseLogin");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseLoginp
// 0x0024 (0x015C - 0x0180)
class UBrgNetworkResponseLoginp : public UBrgNetworkResponseInterface
{
public:
	class FString                                      mUid;                                          // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPsid;                                         // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mIs_normal_end;                                // 0x017C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseLoginp");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseLogins
// 0x0034 (0x015C - 0x0190)
class UBrgNetworkResponseLogins : public UBrgNetworkResponseInterface
{
public:
	class FString                                      mUid;                                          // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPsid;                                         // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mIs_normal_end;                                // 0x017C (0x0004) [0x0000000000000000]               
	class FString                                      mRegion;                                       // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseLogins");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseLogout
// 0x0000 (0x015C - 0x015C)
class UBrgNetworkResponseLogout : public UBrgNetworkResponseInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseLogout");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseMigration
// 0x0014 (0x015C - 0x0170)
class UBrgNetworkResponseMigration : public UBrgNetworkResponseInterface
{
public:
	unsigned long                                      mSuccess : 1;                                  // 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mUserExists : 1;                               // 0x015C (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      mData;                                         // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseMigration");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseMigrationp
// 0x0014 (0x015C - 0x0170)
class UBrgNetworkResponseMigrationp : public UBrgNetworkResponseInterface
{
public:
	unsigned long                                      mSuccess : 1;                                  // 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mUserExists : 1;                               // 0x015C (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      mData;                                         // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseMigrationp");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseMigrations
// 0x0014 (0x015C - 0x0170)
class UBrgNetworkResponseMigrations : public UBrgNetworkResponseInterface
{
public:
	unsigned long                                      mSuccess : 1;                                  // 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mUserExists : 1;                               // 0x015C (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      mData;                                         // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseMigrations");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseMovefloor
// 0x06E0 (0x015C - 0x083C)
class UBrgNetworkResponseMovefloor : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0390 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbTmpMsg>                        mMsgs;                                         // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbRescueLog>                     mRescuelog;                                    // 0x081C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x082C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseMovefloor");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseMushroomshop
// 0x04DC (0x015C - 0x0638)
class UBrgNetworkResponseMushroomshop : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbCoinLocker                            mCl;                                           // 0x05E8 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseMushroomshop");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseOpendialog
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseOpendialog : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseOpendialog");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseOpenskl
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseOpenskl : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseOpenskl");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseOperatepresent
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseOperatepresent : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbUserPresent>                   mPresents;                                     // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x016C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseOperatepresent");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseOrderquests
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseOrderquests : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserQuest>                     mAll_quests;                                   // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseOrderquests");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponsePausegame
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponsePausegame : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponsePausegame");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponsePaymushroom
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponsePaymushroom : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponsePaymushroom");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponsePayransom
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponsePayransom : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponsePayransom");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponsePlaylog
// 0x0030 (0x015C - 0x018C)
class UBrgNetworkResponsePlaylog : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbPlayLogMenu>                   mMenu;                                         // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbLogElement>                    mElements;                                     // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x017C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponsePlaylog");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponsePresents
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponsePresents : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserPresent>                   mPresents;                                     // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponsePresents");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponsePurchasebody
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponsePurchasebody : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponsePurchasebody");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseRadio
// 0x047C (0x015C - 0x05D8)
class UBrgNetworkResponseRadio : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseRadio");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseReceivedeathbox
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseReceivedeathbox : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbUserDeathbox>                  mDeathbox;                                     // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x016C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseReceivedeathbox");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseReceivepresent
// 0x04BC (0x015C - 0x0618)
class UBrgNetworkResponseReceivepresent : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbUserPresent>                   mPresents;                                     // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUserPresentReceive                    mReceive;                                      // 0x016C (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x018C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0608 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseReceivepresent");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseRecovererror
// 0x0000 (0x015C - 0x015C)
class UBrgNetworkResponseRecovererror : public UBrgNetworkResponseInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseRecovererror");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseRecovery
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseRecovery : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseRecovery");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseReduce_waiting
// 0x04A0 (0x015C - 0x05FC)
class UBrgNetworkResponseReduce_waiting : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserPrison>                    mPrison;                                       // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mUsed_medal;                                   // 0x05E8 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseReduce_waiting");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseRegusr
// 0x0030 (0x015C - 0x018C)
class UBrgNetworkResponseRegusr : public UBrgNetworkResponseInterface
{
public:
	class FString                                      mUid;                                          // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mKey;                                          // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPsid;                                         // 0x017C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseRegusr");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseRelease_abductee
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseRelease_abductee : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserPrison>                    mPrison;                                       // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseRelease_abductee");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseRelievegame
// 0x0720 (0x015C - 0x087C)
class UBrgNetworkResponseRelievegame : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbAreaTemplateInfo                      mTmplinfo;                                     // 0x0390 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x03E0 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mRelief_point;                                 // 0x085C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x086C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseRelievegame");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseRepairpt
// 0x04A0 (0x015C - 0x05FC)
class UBrgNetworkResponseRepairpt : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbRepairPartInfo                        mRepair;                                       // 0x015C (0x0014) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0170 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseRepairpt");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseResetboxgacha
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseResetboxgacha : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserBoxGacha>                  mBoxgachas;                                    // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseResetboxgacha");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseResumegame
// 0x0750 (0x015C - 0x08AC)
class UBrgNetworkResponseResumegame : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbAreaTemplateInfo                      mTmplinfo;                                     // 0x0390 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x03E0 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<float>                                      mPos;                                          // 0x085C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbAreaMapFlag>                   mAreamapflags;                                 // 0x086C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbSaveData>                      mSavedata;                                     // 0x087C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbGetList>                       mGetlist;                                      // 0x088C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x089C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseResumegame");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseRoastmushroom
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseRoastmushroom : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseRoastmushroom");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSalvage
// 0x0240 (0x015C - 0x039C)
class UBrgNetworkResponseSalvage : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbChara                                 mChr;                                          // 0x015C (0x0220) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbDiedChara>                     mDchrs;                                        // 0x037C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x038C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSalvage");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSavediepoint
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseSavediepoint : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSavediepoint");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSavegame
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseSavegame : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSavegame");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSaveitemlog
// 0x0010 (0x015C - 0x016C)
class UBrgNetworkResponseSaveitemlog : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSaveitemlog");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSavelasthubtime
// 0x0010 (0x015C - 0x016C)
class UBrgNetworkResponseSavelasthubtime : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSavelasthubtime");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSavescreenshot
// 0x0010 (0x015C - 0x016C)
class UBrgNetworkResponseSavescreenshot : public UBrgNetworkResponseInterface
{
public:
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSavescreenshot");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSelectbody
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseSelectbody : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSelectbody");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSelectchara
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseSelectchara : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSelectchara");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSellmsr
// 0x0490 (0x015C - 0x05EC)
class UBrgNetworkResponseSellmsr : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbSellMushroom                          mSell;                                         // 0x015C (0x0004) [0x0000000000000000]               
	struct FBrgDbUser                                  mUser;                                         // 0x0160 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSellmsr");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSellpt
// 0x0490 (0x015C - 0x05EC)
class UBrgNetworkResponseSellpt : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbSellPart                              mSell;                                         // 0x015C (0x0004) [0x0000000000000000]               
	struct FBrgDbUser                                  mUser;                                         // 0x0160 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSellpt");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSendhunter
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseSendhunter : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSendhunter");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseShowhunterresult
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseShowhunterresult : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbHunterResult>                  mResults;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseShowhunterresult");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSkillgacha
// 0x04AC (0x015C - 0x0608)
class UBrgNetworkResponseSkillgacha : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserBoxGacha>                  mBoxgachas;                                    // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbSkillGachaResult                      mResult;                                       // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSkillgacha");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseSortcl
// 0x04DC (0x015C - 0x0638)
class UBrgNetworkResponseSortcl : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbCoinLocker                            mCl;                                           // 0x05E8 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseSortcl");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseStart
// 0x0080 (0x015C - 0x01DC)
class UBrgNetworkResponseStart : public UBrgNetworkResponseInterface
{
public:
	class FString                                      mCnt;                                          // 0x015C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mApi;                                          // 0x016C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mPsid;                                         // 0x017C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbMasterTerms                           mTerms;                                        // 0x018C (0x0040) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbMasterTerms>                   mTermslist;                                    // 0x01CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseStart");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseStartbet
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseStartbet : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseStartbet");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseStartfloor
// 0x06F0 (0x015C - 0x084C)
class UBrgNetworkResponseStartfloor : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0390 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbRescueLog>                     mRescuelog;                                    // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbTmpMsg>                        mMsgs;                                         // 0x081C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDeathbox;                                     // 0x082C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x083C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseStartfloor");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseStarthub
// 0x0634 (0x015C - 0x0790)
class UBrgNetworkResponseStarthub : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mIs_imagetraining;                             // 0x05D8 (0x0004) [0x0000000000000000]               
	int32_t                                            mIs_defending;                                 // 0x05DC (0x0004) [0x0000000000000000]               
	int32_t                                            mIs_new_quest;                                 // 0x05E0 (0x0004) [0x0000000000000000]               
	int32_t                                            mReplica_money;                                // 0x05E4 (0x0004) [0x0000000000000000]               
	int32_t                                            mReplica_spirit;                               // 0x05E8 (0x0004) [0x0000000000000000]               
	int32_t                                            mReplica_bloodnium_point;                      // 0x05EC (0x0004) [0x0000000000000000]               
	TArray<struct FBrgDbUserPrison>                    mPrison;                                       // 0x05F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbAreaTemplateInfo                      mTmplinfo;                                     // 0x0600 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbTmpMsg>                        mMsgs;                                         // 0x0650 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbDeffenceFortHubState                  mDefstate;                                     // 0x0660 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mFortkun;                                      // 0x06C0 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgDbWar>                           mWars;                                         // 0x06C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbTeam>                          mTeams;                                        // 0x06D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserDeathbox>                  mDeathbox;                                     // 0x06E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mHitchart;                                     // 0x06F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgLoadingAnnounce>                 mLoading_announces;                            // 0x0704 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgOnetimeAnnounce>                 mOnetime_announces;                            // 0x0714 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserHubCustomize>              mHubcustomize;                                 // 0x0724 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbBloodnium                             mBld_result;                                   // 0x0734 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mDel_old_quest;                                // 0x077C (0x0004) [0x0000000000000000]               
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x0780 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseStarthub");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseTakeelv
// 0x06F0 (0x015C - 0x084C)
class UBrgNetworkResponseTakeelv : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbFloor                                 mFlr;                                          // 0x015C (0x0234) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbUser                                  mUser;                                         // 0x0390 (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbTmpMsg>                        mMsgs;                                         // 0x080C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbRescueLog>                     mRescuelog;                                    // 0x081C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDeathbox;                                     // 0x082C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x083C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseTakeelv");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseTermsagree
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseTermsagree : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseTermsagree");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseTest
// 0x0084 (0x015C - 0x01E0)
class UBrgNetworkResponseTest : public UBrgNetworkResponseInterface
{
public:
	unsigned long                                      mBresult : 1;                                  // 0x015C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mIresult;                                      // 0x0160 (0x0004) [0x0000000000000000]               
	float                                              mFresult;                                      // 0x0164 (0x0004) [0x0000000000000000]               
	class FString                                      mSresult;                                      // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct Ftest_struct2                               mOresult;                                      // 0x0178 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<unsigned long>                              mBresults;                                     // 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    mIresults;                                     // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<float>                                      mFresults;                                     // 0x01B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mSresults;                                     // 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct Ftest_struct2>                       mOresults;                                     // 0x01D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseTest");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseTutorial
// 0x0000 (0x015C - 0x015C)
class UBrgNetworkResponseTutorial : public UBrgNetworkResponseInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseTutorial");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseUpdate_research
// 0x04DC (0x015C - 0x0638)
class UBrgNetworkResponseUpdate_research : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgDbCoinLocker                            mCl;                                           // 0x05E8 (0x0050) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseUpdate_research");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseUpdatecharaname
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseUpdatecharaname : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseUpdatecharaname");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseUpdatefortsetting
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseUpdatefortsetting : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbFortZombieSetting>             mFortsetting;                                  // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseUpdatefortsetting");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseUpdatefriend
// 0x0004 (0x015C - 0x0160)
class UBrgNetworkResponseUpdatefriend : public UBrgNetworkResponseInterface
{
public:
	int32_t                                            mResult;                                       // 0x015C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseUpdatefriend");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseUpdatehubcustomize
// 0x049C (0x015C - 0x05F8)
class UBrgNetworkResponseUpdatehubcustomize : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbUserHubCustomize>              mHubcustomize;                                 // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseUpdatehubcustomize");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseUpdatemedal
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseUpdatemedal : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseUpdatemedal");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseUpdaterevenge
// 0x0000 (0x015C - 0x015C)
class UBrgNetworkResponseUpdaterevenge : public UBrgNetworkResponseInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseUpdaterevenge");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseUpdateuserinfo
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseUpdateuserinfo : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseUpdateuserinfo");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseUsedustshooter
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseUsedustshooter : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseUsedustshooter");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseUsesafe
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseUsesafe : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseUsesafe");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseVipconfig
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseVipconfig : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseVipconfig");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseVippurchase
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseVippurchase : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseVippurchase");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseVipuse
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseVipuse : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseVipuse");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgNetworkResponseWhistleshop
// 0x048C (0x015C - 0x05E8)
class UBrgNetworkResponseWhistleshop : public UBrgNetworkResponseInterface
{
public:
	struct FBrgDbUser                                  mUser;                                         // 0x015C (0x047C) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgDbPlaylog>                       mPlaylog;                                      // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseWhistleshop");
		}

		return uClassPointer;
	};

	void CleanParam();
	void OnProcessRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
};

// Class BrgGameBase.BrgParamMove
// 0x0000 (0x0060 - 0x0060)
class UBrgParamMove : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgParamMove");
		}

		return uClassPointer;
	};

	static void VisibleAlphaProcess(unsigned long Visible, float DeltaTime, float InAlphaSpeed, float OutAlphaSpeed, float& Alpha);
	static void ProcessD(float DeltaTime, struct FParamMoveDataD& Data);
	static void Process(float DeltaTime, struct FParamMoveData& Data);
	static void InitializeLoopOneParamD(uint8_t Type, struct FBrgFloat64 MinParam, struct FBrgFloat64 MaxParam, struct FBrgFloat64 StartRate, struct FBrgFloat64 ParamMoveSpeed, struct FBrgFloat64 Param, struct FParamMoveDataD& Data);
	static void InitializeLoopOneParam(uint8_t Type, float MinParam, float MaxParam, float StartRate, float ParamMoveSpeed, float Param, struct FParamMoveData& Data);
	static void InitializeLoop(uint8_t Type, struct FVector MinParam, struct FVector MaxParam, float StartRate, float ParamMoveSpeed, float Param, struct FParamMoveData& Data);
	static void InitializeOneParamD(uint8_t Type, struct FBrgFloat64 StartParam, struct FBrgFloat64 TargetParam, unsigned long EndStart, struct FBrgFloat64 Param, struct FParamMoveDataD& Data);
	static void InitializeOneParam(uint8_t Type, float StartParam, float TargetParam, unsigned long EndStart, float Param, struct FParamMoveData& Data);
	static void Initialize(uint8_t Type, struct FVector StartParam, struct FVector TargetParam, unsigned long EndStart, float Param, struct FParamMoveData& Data);
	static void GlobalInitialize();
};

// Class BrgGameBase.BrgPartMesh
// 0x0844 (0x0060 - 0x08A4)
class UBrgPartMesh : public UObject
{
public:
	unsigned long                                      mVisible : 1;                                  // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mHiddenType2 : 1;                              // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mCastShadow : 1;                               // 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mDropItemVisible : 1;                          // 0x0060 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mbHideHood : 1;                                // 0x0060 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mChangeAttachTarget : 1;                       // 0x0060 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mNewAttachTargetActorLightChannelValid : 1;    // 0x0060 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mbNewAttachSocket : 1;                         // 0x0060 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      mDirectMaterialParameterChange : 1;            // 0x0060 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      mChangeAttachSocket : 1;                       // 0x0060 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      mDisableMaterialFadeIn : 1;                    // 0x0060 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      mbBlockPawnMovement : 1;                       // 0x0060 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      mbCheckSkipPhysicsAnimEquip : 1;               // 0x0060 (0x0004) [0x0000000000000000] [0x00001000] 
	class FString                                      mName;                                         // 0x0064 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mState;                                        // 0x0074 (0x0001) [0x0000000000000000]               
	uint8_t                                            mCollisionChannel;                             // 0x0075 (0x0001) [0x0000000000000000]               
	uint8_t                                            mSubDeathOpacityVisible[0x2];                  // 0x0076 (0x0002) [0x0000000000000000]               
	uint8_t                                            mSceneDepthPriorityGroup;                      // 0x0078 (0x0001) [0x0000000000000000]               
	uint8_t                                            mNewCollisionChannel;                          // 0x0079 (0x0001) [0x0000000000000000]               
	class APawn*                                       mAttachTargetPawn;                             // 0x007C (0x0008) [0x0000000000000000]               
	class AActor*                                      mAttachTargetActor;                            // 0x0084 (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      mAttachTargetSkeletalMeshComponent;            // 0x008C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDynamicLightEnvironmentComponent*           mAttachTargetActorLightEnvironment;            // 0x0094 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FLightingChannelContainer                   mAttachTargetActorLightChannel;                // 0x009C (0x0004) [0x0000000000000000]               
	struct FBrgPartMeshData                            mData[0x2];                                    // 0x00A0 (0x05D8) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	int32_t                                            mNowIndex;                                     // 0x0678 (0x0004) [0x0000000000000000]               
	int32_t                                            mDeathOpacityTarget;                           // 0x067C (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mDropItemVisibleAlpha;                         // 0x0680 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mSubDeathOpacityVisibleAlpha[0x2];             // 0x06EC (0x00D8) [0x0000000000000000]               
	struct FParamMoveData                              mHoodVisibleAlpha;                             // 0x07C4 (0x006C) [0x0000000000000000]               
	class ABrgGameInfoNativeBase*                      mGameInfoNativeBase;                           // 0x0830 (0x0008) [0x0000000000000000]               
	class UBrgUIParamEditMenuParam*                    mConstParam;                                   // 0x0838 (0x0008) [0x0000000000000000]               
	class UBrgResourceLoadManager*                     mResourceLoadManager;                          // 0x0840 (0x0008) [0x0000000000000000]               
	struct FVector                                     mCameraLocation;                               // 0x0848 (0x000C) [0x0000000000000000]               
	class APawn*                                       mNewAttachTargetPawn;                          // 0x0854 (0x0008) [0x0000000000000000]               
	class AActor*                                      mNewAttachTargetActor;                         // 0x085C (0x0008) [0x0000000000000000]               
	class USkeletalMeshComponent*                      mNewAttachTargetSkeletalMeshComponent;         // 0x0864 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDynamicLightEnvironmentComponent*           mNewAttachTargetActorLightEnvironment;         // 0x086C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FLightingChannelContainer                   mNewAttachTargetActorLightChannel;             // 0x0874 (0x0004) [0x0000000000000000]               
	struct FName                                       mNewAttachSocketName;                          // 0x0878 (0x0008) [0x0000000000000000]               
	int32_t                                            mAlwaysMaterialParamSetCount;                  // 0x0880 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   mOutlineMIC;                                   // 0x0884 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             mCrashBottlePS;                                // 0x088C (0x0008) [0x0000000000000000]               
	struct FVector                                     mBackLocation;                                 // 0x0894 (0x000C) [0x0000000000000000]               
	float                                              mSkipPhysicsAnimSpeedEquip;                    // 0x08A0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgPartMesh");
		}

		return uClassPointer;
	};

	void RefreshMaterialInstanceRef();
	bool SetMaterial(int32_t MaterialIndex, class UMaterialInstanceConstant* MIC);
	bool GetSkipUpdatePhysicsAnim();
	void SetSkipUpdatePhysicsAnim(unsigned long InFlg);
	float GetSkipPhysicsAnimSpeedEquip();
	bool GetCheckSkipPhysicsAnimEquipFlg();
	void SetSkipPhysicsAnim(unsigned long InFlg, float InSkipSpeed);
	void SetSkipPhysicsAnimSpeedEquip(float InSkipSpeed);
	void SetSkipPhysicsAnimFlg(unsigned long InFlg);
	void SetBlockPawnMovement(unsigned long NewFlag);
	void CreateMyceliumCoveredMeshComponent(class USkeletalMesh* OverriedSkeletalMesh, class UPhysicsAsset* OverriedPhysicsAsset, class USkeletalMeshComponent* OverriedSkeletalMeshComponent);
	void TickMyceliumCovered(float inDeltaTime);
	void TickOutline(float inDeltaTime);
	void TickProcess_DuringAsyncWork(float inDeltaTime);
	void TickProcess_PreAsyncWork(float inDeltaTime);
	void TickProcess(float inDeltaTime);
	void SetMeshMaterialInstanceVectorParameterValue(int32_t InIndex, struct FName ParameterName, struct FLinearColor& Value);
	void SetMeshMaterialInstanceTextureParameterValue(int32_t InIndex, struct FName ParameterName, class UTexture* Value);
	void SetMeshMaterialInstanceScalarParameterValue(int32_t InIndex, struct FName ParameterName, float Value);
	void SetMeshCastShadow(int32_t InIndex, unsigned long inCastShadow);
	void SetMeshVisible(int32_t InIndex, unsigned long Invisible);
	void SetDamagedMeshState(int32_t InIndex, unsigned long inDamaged);
	void SetPartialEmissiveColorIntensityOffMesh(int32_t InIndex);
	bool SetUseMeshDropItemEffect(int32_t InIndex, unsigned long inUseFlag);
	void StartDeathOpacityMesh(int32_t InIndex, float inFadeTime, unsigned long inAfterDetach, unsigned long inIsFadeIn);
	void StartDeathColorMesh(int32_t InIndex);
	void StartZScaleMesh(int32_t InIndex);
	void SetUseRoastMaterialMesh(int32_t InIndex);
	static void AllUnFixed(class USkeletalMeshComponent* InMesh);
	static void UnfixBones(class USkeletalMeshComponent* inDestMesh, class USkeletalMeshComponent* inSrcMesh);
	void StartFracturedStaticMeshActorMesh(int32_t InIndex, struct FVector InLocation, struct FRotator InRotation, struct FVector inBreakDir);
	void AllPhysicsMesh(int32_t InIndex);
	void PhysicsReSetupMesh(int32_t InIndex);
	void AttachMesh(int32_t InIndex);
	void ChangeAttachTargetSocketMesh(int32_t InIndex);
	void ChangeAttachTargetMesh(int32_t InIndex);
	void DetachMesh(int32_t InIndex);
	class USkeletalMeshComponent* GetMyceliumCoveredMeshComponent();
	class USkeletalMeshComponent* GetMeshComponent();
	class UPhysicsAsset* GetPhysicsAsset();
	class UMaterialInstanceConstant* GetRoastMaterialInstanceConstant(int32_t matIndex);
	class UStaticMesh* GetStaticMesh();
	class USkeletalMesh* GetMesh();
	bool CheckIdle();
	uint8_t GetState();
	void SetPartialEmissiveColorIntensityOff();
	bool SetUseDropItemEffect(unsigned long inUseFlag);
	void ResetAttachMesh();
	void SetSceneDepthPriorityGroup(uint8_t inGroup);
	void SetMaterialInstanceVectorParameterValue(struct FName ParameterName, struct FLinearColor& Value);
	void SetMaterialInstanceTextureParameterValue(struct FName ParameterName, class UTexture* Value);
	void SetMaterialInstanceScalarParameterValue(struct FName ParameterName, float Value);
	void SetCastShadow(unsigned long inCastShadow);
	bool GetVisible();
	void SetVisible(unsigned long Invisible);
	void SetDamagedState(unsigned long inDamaged);
	void PhysicsReSetup();
	void SetDropItemVisible(unsigned long Invisible);
	void SetHideHood(unsigned long inHide, float inFadeTime, float inStartParam);
	void SetSubDeathOpacity(unsigned long Invisible, float inFadeTime, int32_t InIndex, float inStartParam);
	void StartDeathOpacity(float inFadeTime, unsigned long inAfterDetach, unsigned long inIsFadeIn);
	void StartDeathColor();
	void StartZScale();
	void SetUseRoastMaterial();
	void StartFracturedStaticMeshActor(struct FVector InLocation, struct FRotator InRotation, struct FVector inBreakDir);
	void PhysicsDrop();
	void UnloadMesh();
	bool LoadMesh(class FString inMeshPath, class FString inPhysicsAssetPath, class FString inAnimSetPath, class FString inAnimTreePath, unsigned long inIsAttachSocket, struct FName inAttachSocketName, class FString inFracturedStaticMeshPath, class FString inStaticMeshPath, unsigned long inUseSkeletalMeshComponent, unsigned long inAlwaysLoad, unsigned long inPostAsyncTickGroupOverride, class FString inOutlineMeshPath, TArray<class FString> inRoastMaterialInstanceConstantPath, float inFadeInDeathOpacityStartParam, float inFadeInDeathOpacityTime, unsigned long inImmediate);
	void ChangeAttachSocket(struct FName inAttachSocketName);
	void ChangeAttachTarget(class APawn* inAttachTargetPawn, class AActor* inAttachTargetActor, class USkeletalMeshComponent* inAttachTargetSkeletalMeshComponent, class UDynamicLightEnvironmentComponent* inAttachTargetActorLightEnvironment, uint8_t inCollisionChannel);
	void SetChangeAttachTargetLightChannel(struct FLightingChannelContainer inAttachTargetActorLightChannel);
	void SetDeathOpacityTarget(int32_t TargetNumber);
	void CancelMaterialFadeIn();
	void SetEnableMaterialFadeIn(unsigned long inEnable);
	void SetInitializeLightChannel(struct FLightingChannelContainer inAttachTargetActorLightChannel);
	void SetName(class FString InName);
	void Initialize(class APawn* inAttachTargetPawn, class AActor* inAttachTargetActor, class USkeletalMeshComponent* inAttachTargetSkeletalMeshComponent, class UDynamicLightEnvironmentComponent* inAttachTargetActorLightEnvironment, uint8_t inCollisionChannel, unsigned long inHiddenType2);
};

// Class BrgGameBase.BrgPerformanceManager
// 0x0030 (0x0060 - 0x0090)
class UBrgPerformanceManager : public UObject
{
public:
	unsigned long                                      mbActive : 1;                                  // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      mbManageEnemiesShadow : 1;                     // 0x0060 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      mbManageObjects : 1;                           // 0x0060 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	int32_t                                            mEnemyShadowLimitNum;                          // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mRandomGenerateObjectActiveRange;              // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            mFOVMarginAngle;                               // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              mAlwaysActiveDist;                             // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     mPlayerLocation;                               // 0x0074 (0x000C) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	TArray<struct FImportantActorInfo>                 mImportantActors;                              // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgPerformanceManager");
		}

		return uClassPointer;
	};

	bool IsInImportantActorZone(float TestRadius, struct FVector& TestLocation);
	void RemoveImportantActor(class AActor* ImportantActor);
	void AddImportantActor(class AActor* ImportantActor, float ZoneRadius);
	void SetObjects(unsigned long bNewActive);
	void SetEnemiesShadow(unsigned long bNewActive);
	void ResetObjects();
	void ResetEnemiesShadow();
	void SetActive(unsigned long bNewActive);
	void TickDuringAsyncWork(float DeltaTime, class ABrgGameInfoNativeBase* GameInfo);
	void TickMushroomShop(float DeltaTime, class ABrgGameInfoNativeBase* GameInfo);
	void TickRandomGenerateObjects(float DeltaTime, class ABrgGameInfoNativeBase* GameInfo);
	void TickEnemiesShadow(float DeltaTime, class ABrgGameInfoNativeBase* GameInfo);
	void TickEnemies(float DeltaTime, class ABrgGameInfoNativeBase* GameInfo);
	void Tick(float DeltaTime, class ABrgGameInfoNativeBase* GameInfo);
};

// Class BrgGameBase.BrgRenderPrimitive2DSet
// 0x0030 (0x0060 - 0x0090)
class UBrgRenderPrimitive2DSet : public UObject
{
public:
	int32_t                                            mRenderPrimitiveCount;                         // 0x0060 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgOneRenderPrimitiveInfo>          mRenderPrimitiveInfos;                         // 0x0064 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgRenderPrimitive2DSetVertexBuffer> mVertexBuffers;                                // 0x0074 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mUseVertexBufferIndex;                         // 0x0084 (0x0004) [0x0000000000000000]               
	int32_t                                            mUseStartVertexCount;                          // 0x0088 (0x0004) [0x0000000000000000]               
	int32_t                                            mUseNowVertexCount;                            // 0x008C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgRenderPrimitive2DSet");
		}

		return uClassPointer;
	};

	static class UBrgRenderPrimitive2DSet* Create(int32_t inMaxDrawNum, int32_t inMaxVertexNum);
};

// Class BrgGameBase.BrgResourceLoadManager
// 0x02F0 (0x0060 - 0x0350)
class UBrgResourceLoadManager : public UObject
{
public:
	class UClass*                                      mFontClass;                                    // 0x0060 (0x0008) [0x0000000000000000]               
	class UClass*                                      mTexture2DClass;                               // 0x0068 (0x0008) [0x0000000000000000]               
	class UClass*                                      mMaterialClass;                                // 0x0070 (0x0008) [0x0000000000000000]               
	class UClass*                                      mMaterialInstanceConstantClass;                // 0x0078 (0x0008) [0x0000000000000000]               
	class UClass*                                      mSkeletalMeshClass;                            // 0x0080 (0x0008) [0x0000000000000000]               
	class UClass*                                      mStaticMeshClass;                              // 0x0088 (0x0008) [0x0000000000000000]               
	class UClass*                                      mPhysicsAssetClass;                            // 0x0090 (0x0008) [0x0000000000000000]               
	class UClass*                                      mAnimTreeClass;                                // 0x0098 (0x0008) [0x0000000000000000]               
	class UClass*                                      mAnimSetClass;                                 // 0x00A0 (0x0008) [0x0000000000000000]               
	class UClass*                                      mParticleSystemClass;                          // 0x00A8 (0x0008) [0x0000000000000000]               
	class UClass*                                      mSoundCueClass;                                // 0x00B0 (0x0008) [0x0000000000000000]               
	class UClass*                                      mFracturedStaticMeshClass;                     // 0x00B8 (0x0008) [0x0000000000000000]               
	class UClass*                                      mTextureMovieClass;                            // 0x00C0 (0x0008) [0x0000000000000000]               
	TArray<class UBrgResourceLoadManager_PackageData*> mPackageDataArray;                             // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgResourceLoadManager_PackageData*> mPackageDataArray_Loading;                     // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgResourceLoadManager_PackageData*> mPackageDataArray_LoadAfterDelete;             // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mFileNotFound_FilePaths;                       // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mNotFound_ObjectPaths;                         // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mPackageDataLoadDelay;                         // 0x0118 (0x0004) [0x0000000000000000]               
	float                                              mPackageDataLoadDelayCounter;                  // 0x011C (0x0004) [0x0000000000000000]               
	float                                              mPackageDataLoadUseTime;                       // 0x0120 (0x0004) [0x0000000000000000]               
	int32_t                                            mFrameCount;                                   // 0x0124 (0x0004) [0x0000000000000000]               
	int32_t                                            mStaticLoadObjectCount;                        // 0x0128 (0x0004) [0x0000000000000000]               
	struct FBrgObjectDataSet                           mFontDataSet;                                  // 0x012C (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mTexture2DDataSet;                             // 0x0154 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mMaterialDataSet;                              // 0x017C (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mMaterialInstanceConstantDataSet;              // 0x01A4 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mSkeletalMeshDataSet;                          // 0x01CC (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mStaticMeshDataSet;                            // 0x01F4 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mPhysicsAssetDataSet;                          // 0x021C (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mAnimTreeDataSet;                              // 0x0244 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mAnimSetDataSet;                               // 0x026C (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mParticleSystemDataSet;                        // 0x0294 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mSoundCueDataSet;                              // 0x02BC (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mFracturedStaticMeshDataSet;                   // 0x02E4 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgObjectDataSet                           mTextureMovieDataSet;                          // 0x030C (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mLoadMode;                                     // 0x0334 (0x0001) [0x0000000000000000]               
	struct FBrgResourceLoadManager_LoadModeProperty    mLoadModeProperty[0x3];                        // 0x0338 (0x0018) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgResourceLoadManager");
		}

		return uClassPointer;
	};

	void DebugRender(class ABrgHUDBase* inHUD);
	void DebugRenderParam(class ABrgHUDBase* inHUD, int32_t inDrawX, int32_t InDrawY, class FString inParamName, int32_t inLoadCount, int32_t inLoadingCount);
	class FString DebugGetLoadModeName(uint8_t loadMode);
	void DumpState();
	void DumpResources();
	void DumpResources_Mesh();
	void DumpInvalidResources();
	void Tick(float DeltaTime);
	void TextureMovieDataTick(float DeltaTime);
	class UTextureMovie* GetTextureMovie(class FString TextureMoviePath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void TextureMovieUnloadRequest(class UObject* OwnerObject, class FString TextureMoviePath, unsigned long isLoc);
	void TextureMovieLoadRequest(class UObject* OwnerObject, class FString TextureMoviePath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t TextureMovieRequest(class UObject* OwnerObject, class FString TextureMoviePath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	void FracturedStaticMeshDataTick(float DeltaTime);
	class UFracturedStaticMesh* GetFracturedStaticMesh(class FString FracturedStaticMeshPath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void FracturedStaticMeshUnloadRequest(class UObject* OwnerObject, class FString FracturedStaticMeshPath, unsigned long isLoc);
	void FracturedStaticMeshLoadRequest(class UObject* OwnerObject, class FString FracturedStaticMeshPath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t FracturedStaticMeshRequest(class UObject* OwnerObject, class FString FracturedStaticMeshPath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	bool AllSoundCueIsLoaded();
	void SoundCueDataTick(float DeltaTime);
	class USoundCue* GetSoundCue(class FString SoundCuePath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void SoundCueUnloadRequest(class UObject* OwnerObject, class FString SoundCuePath, unsigned long isLoc, unsigned long Immediate);
	void SoundCueLoadRequest(class UObject* OwnerObject, class FString SoundCuePath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t SoundCueRequest(class UObject* OwnerObject, class FString SoundCuePath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	void ParticleSystemDataTick(float DeltaTime);
	class UParticleSystem* GetParticleSystem(class FString ParticleSystemPath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void ParticleSystemUnloadRequest(class UObject* OwnerObject, class FString ParticleSystemPath, unsigned long isLoc);
	void ParticleSystemLoadRequest(class UObject* OwnerObject, class FString ParticleSystemPath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t ParticleSystemRequest(class UObject* OwnerObject, class FString ParticleSystemPath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	bool AllAnimSetIsLoaded();
	void AnimSetDataTick(float DeltaTime);
	class UAnimSet* GetAnimSet(class FString AnimSetPath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void AnimSetUnloadRequest(class UObject* OwnerObject, class FString AnimSetPath, unsigned long isLoc, unsigned long Immediate);
	void AnimSetLoadRequest(class UObject* OwnerObject, class FString AnimSetPath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t AnimSetRequest(class UObject* OwnerObject, class FString AnimSetPath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	void AnimTreeDataTick(float DeltaTime);
	class UAnimTree* GetAnimTree(class FString AnimTreePath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void AnimTreeUnloadRequest(class UObject* OwnerObject, class FString AnimTreePath, unsigned long isLoc);
	void AnimTreeLoadRequest(class UObject* OwnerObject, class FString AnimTreePath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t AnimTreeRequest(class UObject* OwnerObject, class FString AnimTreePath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	void PhysicsAssetDataTick(float DeltaTime);
	class UPhysicsAsset* GetPhysicsAsset(class FString PhysicsAssetPath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void PhysicsAssetUnloadRequest(class UObject* OwnerObject, class FString PhysicsAssetPath, unsigned long isLoc);
	void PhysicsAssetLoadRequest(class UObject* OwnerObject, class FString PhysicsAssetPath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t PhysicsAssetRequest(class UObject* OwnerObject, class FString PhysicsAssetPath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	void StaticMeshDataTick(float DeltaTime);
	class UStaticMesh* GetStaticMesh(class FString StaticMeshPath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void StaticMeshUnloadRequest(class UObject* OwnerObject, class FString StaticMeshPath, unsigned long isLoc);
	void StaticMeshLoadRequest(class UObject* OwnerObject, class FString StaticMeshPath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t StaticMeshRequest(class UObject* OwnerObject, class FString StaticMeshPath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	void SkeletalMeshDataTick(float DeltaTime);
	class USkeletalMesh* GetSkeletalMesh(class FString SkeletalMeshPath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void SkeletalMeshUnloadRequest(class UObject* OwnerObject, class FString SkeletalMeshPath, unsigned long isLoc);
	void SkeletalMeshLoadRequest(class UObject* OwnerObject, class FString SkeletalMeshPath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t SkeletalMeshRequest(class UObject* OwnerObject, class FString SkeletalMeshPath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	void MaterialInstanceConstantDataTick(float DeltaTime);
	class UMaterialInstanceConstant* GetMaterialInstanceConstant(class FString MaterialInstanceConstantPath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void MaterialInstanceConstantUnloadRequest(class UObject* OwnerObject, class FString MaterialInstanceConstantPath, unsigned long isLoc);
	void MaterialInstanceConstantLoadRequest(class UObject* OwnerObject, class FString MaterialInstanceConstantPath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t MaterialInstanceConstantRequest(class UObject* OwnerObject, class FString MaterialInstanceConstantPath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	void MaterialDataTick(float DeltaTime);
	class UMaterial* GetMaterial(class FString MaterialPath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void MaterialUnloadRequest(class UObject* OwnerObject, class FString MaterialPath, unsigned long isLoc);
	void MaterialLoadRequest(class UObject* OwnerObject, class FString MaterialPath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t MaterialRequest(class UObject* OwnerObject, class FString MaterialPath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	void Texture2DDataTick(float DeltaTime);
	class UTexture2D* GetTexture2D(class FString Texture2DPath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void Texture2DUnloadRequest(class UObject* OwnerObject, class FString Texture2DPath, unsigned long isLoc);
	void Texture2DLoadRequest(class UObject* OwnerObject, class FString Texture2DPath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t Texture2DRequest(class UObject* OwnerObject, class FString Texture2DPath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	void FontDataTick(float DeltaTime);
	class UFont* GetFont(class FString FontPath, unsigned long Immediate, unsigned long isLoc, int32_t& IsFileNotFound);
	void FontUnloadRequest(class UObject* OwnerObject, class FString FontPath, unsigned long isLoc);
	void FontLoadRequest(class UObject* OwnerObject, class FString FontPath, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut);
	int32_t FontRequest(class UObject* OwnerObject, class FString FontPath, unsigned long IsLoad, unsigned long IsLoadCompCheckOnly, unsigned long IsImmediate);
	bool AllObjectIsLoaded(struct FBrgObjectDataSet& ObjectDataSet);
	void ObjectDataTick(float DeltaTime, struct FBrgObjectDataSet& ObjectDataSet);
	class UObject* GetObjectW(struct FName ObjectPath, unsigned long Immediate, unsigned long isLoc, struct FBrgObjectDataSet& ObjectDataSet, int32_t& IsFileNotFound);
	void ResetNotFoundObjectInfo(struct FBrgObjectDataSet& ObjectDataSet);
	void ObjectUnloadRequest_NoneReference(struct FBrgObjectDataSet& ObjectDataSet);
	void ObjectUnloadRequest_Always(struct FBrgObjectDataSet& ObjectDataSet);
	void ObjectUnloadRequest_PackateName(struct FName PackageName, unsigned long IgnoreReferenceCount, struct FBrgObjectDataSet& ObjectDataSet);
	void ObjectUnloadRequest(struct FName ObjectPath, class UObject* OwnerObject, unsigned long isLoc, unsigned long Immediate, struct FBrgObjectDataSet& ObjectDataSet);
	void ObjectLoadRequest(class UClass* ObjectClass, struct FName ObjectPath, class UObject* OwnerObject, unsigned long Immediate, unsigned long isLoc, unsigned long NoNotFoundLogOut, struct FBrgObjectDataSet& ObjectDataSet);
	void PackageDataTick(float DeltaTime);
	void ResetNotFoundPackageInfo();
	void PackageAddToRoot();
	void PackageUnloadRequest_All();
	void PackageUnloadRequest_NoneReference();
	void PackageForceUnloadRequest(struct FName PackageName, unsigned long isLoc);
	void PackageUnlodeRequest(struct FName PackageName, unsigned long isLoc, unsigned long Immediate);
	int32_t GetLoadingPackageCount();
	bool CheckPackageLoad(struct FName PackageName, unsigned long isLoc, int32_t& IsFileNotFound);
	bool PackageLoadRequest(struct FName PackageName, unsigned long isLoc, unsigned long Immediate);
	void ResetFrameSkipReport();
	bool LoadPackageASyncNative_LOC(class UBrgResourceLoadManager_PackageData* inPackageData, struct FName PackageName);
	bool LoadPackageASyncNative(class UBrgResourceLoadManager_PackageData* inPackageData, struct FName PackageName);
	class UPackage* LoadPackageSyncNative_LOC(struct FName PackageName);
	class UPackage* LoadPackageSyncNative(struct FName PackageName);
	struct FBrgResourceLoadManager_LoadModeProperty GetCurrentLoadModeProperty();
	struct FBrgResourceLoadManager_LoadModeProperty GetLoadModeProperty(uint8_t loadMode);
	uint8_t GetLoadMode();
	void SetLoadMode(uint8_t loadMode);
	bool IsAllLoadFinished();
	void Terminate();
	void Initialize();
};

// Class BrgGameBase.BrgResourceLoadManager_PackageData
// 0x0018 (0x0060 - 0x0078)
class UBrgResourceLoadManager_PackageData : public UObject
{
public:
	int32_t                                            mReferenceCount;                               // 0x0060 (0x0004) [0x0000000000000000]               
	unsigned long                                      mASyncLoading : 1;                             // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mASyncLoaded : 1;                              // 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mASyncLoadAfterDeleteRequest : 1;              // 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mIsLoc : 1;                                    // 0x0064 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mFileNotFound : 1;                             // 0x0064 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FName                                       mPackageName;                                  // 0x0068 (0x0008) [0x0000000000000000]               
	class UPackage*                                    mPackage;                                      // 0x0070 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgResourceLoadManager_PackageData");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgTextureRenderTarget2D_UI
// 0x0000 (0x0164 - 0x0164)
class UBrgTextureRenderTarget2D_UI : public UTextureRenderTarget2D
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgTextureRenderTarget2D_UI");
		}

		return uClassPointer;
	};

	static class UBrgTextureRenderTarget2D_UI* eventCreateForSceneCapture(int32_t InSizeX, int32_t InSizeY);
	static class UTextureRenderTarget2D* eventCreate_(int32_t InSizeX, int32_t InSizeY, uint8_t InFormat, struct FColor InClearColor, unsigned long bOnlyRenderOnce);
};

// Class BrgGameBase.BrgTextureRenderTarget2D_UI_3D
// 0x0000 (0x0164 - 0x0164)
class UBrgTextureRenderTarget2D_UI_3D : public UTextureRenderTarget2D
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgTextureRenderTarget2D_UI_3D");
		}

		return uClassPointer;
	};

	static class UTextureRenderTarget2D* eventCreate_(int32_t InSizeX, int32_t InSizeY, uint8_t InFormat, struct FColor InClearColor, unsigned long bOnlyRenderOnce);
};

// Class BrgGameBase.BrgUIAnim
// 0x0030 (0x0060 - 0x0090)
class UBrgUIAnim : public UObject
{
public:
	uint8_t                                            mAnimType;                                     // 0x0060 (0x0001) [0x0000000000000000]               
	class UBrgUIImage*                                 mAnimImage;                                    // 0x0064 (0x0008) [0x0000000000000000]               
	int32_t                                            mXNum;                                         // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            mYNum;                                         // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            mTotalNum;                                     // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              mAnimWait;                                     // 0x0078 (0x0004) [0x0000000000000000]               
	unsigned long                                      mAnimRun : 1;                                  // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mAnimStopRequest : 1;                          // 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            mAnimStopNo;                                   // 0x0080 (0x0004) [0x0000000000000000]               
	int32_t                                            mAnimNo;                                       // 0x0084 (0x0004) [0x0000000000000000]               
	int32_t                                            mAnimNoDir;                                    // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              mAnimWaitCounter;                              // 0x008C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIAnim");
		}

		return uClassPointer;
	};

	void Draw_RotImage(class ABrgHUDBase* inHUDBase, uint8_t xBase, uint8_t yBase, float X, float Y, uint8_t cxBase, uint8_t cyBase, float CX, float CY, float Rot, float ScaleX, float ScaleY, unsigned long Reverse);
	void Process(float DeltaTime);
	void SetAnimNo(int32_t AnimNo);
	void StopAnim(int32_t EndAnimNo);
	void StartAnim(unsigned long ResetAnimNo);
	void Initialize(class UBrgUIImage* inAnimImage, int32_t inXNum, int32_t inYNum, int32_t inTotalNum, float inAnimWait, uint8_t inAnimType);
};

// Class BrgGameBase.BrgUIBaseBase
// 0x0008 (0x0060 - 0x0068)
class UBrgUIBaseBase : public UObject
{
public:
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x0060 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIBaseBase");
		}

		return uClassPointer;
	};

	void Draw_ExtImage_UseGuide(class UBrgUIImage* DrawImage, class UBrgUIImage* SrcGuideImage, class UBrgUIImage* DestGuideImage, float Scale, float X, float Y, unsigned long Hreverse, unsigned long Vreverse);
	void DrawEmblemIcon_UseImage(class UBrgUIImage* DrawImage, class UBrgUIImage* GuideImage, float OffsetX, float OffsetY);
	void DrawEmblemIcon_UseGuide(class FString EmblemID, class UBrgUIImage* GuideImage, float OffsetX, float OffsetY);
	void Draw_GaugeLRImageWithStartEnd_UseGuide(float StartRate, float EndRate, class UBrgUIImage* DrawImage, class UBrgUIImage* SrcGuideImage, class UBrgUIImage* DestGuideImage, float X, float Y, unsigned long inReverse);
	void Draw_GaugeLRImageWithStartEnd_UsePos(float StartRate, float EndRate, class UBrgUIImage* DrawImage, float X, float Y, unsigned long inReverse);
	void Draw_GaugeLRImage_UseGuide(float Rate, class UBrgUIImage* DrawImage, class UBrgUIImage* SrcGuideImage, class UBrgUIImage* DestGuideImage, float X, float Y, unsigned long inReverse);
	void Draw_GaugeLRImage_UsePos(float Rate, class UBrgUIImage* DrawImage, float X, float Y, unsigned long inReverse);
	void Draw_Image_UseGuide(class UBrgUIImage* DrawImage, class UBrgUIImage* SrcGuideImage, class UBrgUIImage* DestGuideImage, float X, float Y, unsigned long Hreverse, unsigned long Vreverse);
	void Draw_Image_UsePos(class UBrgUIImage* DrawImage, float X, float Y, unsigned long Hreverse, unsigned long Vreverse);
	class FString ItoA_Plus(int32_t Num);
	static class FString GetLocalizeText(class FString SectionPlusTextID, class FString AddString0, class FString AddString1, class FString AddString2, class FString AddString3, struct FBrgUILocalizeText& inLocalizeText);
	void eventInitialize_Event();
	void Initialize();
	static struct FBrgFloat64 SubtractEqual_BrgFloat64BrgFloat64(struct FBrgFloat64 B, struct FBrgFloat64& A);
	static struct FBrgFloat64 AddEqual_BrgFloat64BrgFloat64(struct FBrgFloat64 B, struct FBrgFloat64& A);
	static struct FBrgFloat64 DivideEqual_BrgFloat64BrgFloat64(struct FBrgFloat64 B, struct FBrgFloat64& A);
	static struct FBrgFloat64 MultiplyEqual_BrgFloat64BrgFloat64(struct FBrgFloat64 B, struct FBrgFloat64& A);
	static bool NotEqual_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static bool EqualEqual_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static bool GreaterEqual_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static bool LessEqual_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static bool Greater_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static bool Less_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Subtract_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Add_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Percent_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Divide_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Multiply_BrgFloat64BrgFloat64(struct FBrgFloat64 A, struct FBrgFloat64 B);
	static struct FBrgFloat64 Subtract_PreBrgFloat64(struct FBrgFloat64 A);
	static struct FBrgUInt64 SubtractSubtract_BrgUInt64(struct FBrgUInt64& A);
	static struct FBrgUInt64 AddAdd_BrgUInt64(struct FBrgUInt64& A);
	static struct FBrgUInt64 SubtractSubtract_PreBrgUInt64(struct FBrgUInt64& A);
	static struct FBrgUInt64 AddAdd_PreBrgUInt64(struct FBrgUInt64& A);
	static struct FBrgUInt64 SubtractEqual_BrgUInt64BrgUInt64(struct FBrgUInt64 B, struct FBrgUInt64& A);
	static struct FBrgUInt64 AddEqual_BrgUInt64BrgUInt64(struct FBrgUInt64 B, struct FBrgUInt64& A);
	static struct FBrgUInt64 DivideEqual_BrgUInt64BrgUInt64(struct FBrgUInt64 B, struct FBrgUInt64& A);
	static struct FBrgUInt64 MultiplyEqual_BrgUInt64BrgUInt64(struct FBrgUInt64 B, struct FBrgUInt64& A);
	static struct FBrgUInt64 Or_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Xor_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 And_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool NotEqual_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool EqualEqual_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool GreaterEqual_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool LessEqual_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool Greater_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static bool Less_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 GreaterGreaterGreater_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 GreaterGreater_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 LessLess_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Subtract_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Add_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Percent_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Divide_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Multiply_BrgUInt64BrgUInt64(struct FBrgUInt64 A, struct FBrgUInt64 B);
	static struct FBrgUInt64 Complement_PreBrgUInt64(struct FBrgUInt64 A);
	static struct FBrgInt64 SubtractSubtract_BrgInt64(struct FBrgInt64& A);
	static struct FBrgInt64 AddAdd_BrgInt64(struct FBrgInt64& A);
	static struct FBrgInt64 SubtractSubtract_PreBrgInt64(struct FBrgInt64& A);
	static struct FBrgInt64 AddAdd_PreBrgInt64(struct FBrgInt64& A);
	static struct FBrgInt64 SubtractEqual_BrgInt64BrgInt64(struct FBrgInt64 B, struct FBrgInt64& A);
	static struct FBrgInt64 AddEqual_BrgInt64BrgInt64(struct FBrgInt64 B, struct FBrgInt64& A);
	static struct FBrgInt64 DivideEqual_BrgInt64BrgInt64(struct FBrgInt64 B, struct FBrgInt64& A);
	static struct FBrgInt64 MultiplyEqual_BrgInt64BrgInt64(struct FBrgInt64 B, struct FBrgInt64& A);
	static struct FBrgInt64 Or_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Xor_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 And_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool NotEqual_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool EqualEqual_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool GreaterEqual_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool LessEqual_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool Greater_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static bool Less_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 GreaterGreaterGreater_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 GreaterGreater_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 LessLess_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Subtract_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Add_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Percent_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Divide_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Multiply_BrgInt64BrgInt64(struct FBrgInt64 A, struct FBrgInt64 B);
	static struct FBrgInt64 Subtract_PreBrgInt64(struct FBrgInt64 A);
	static struct FBrgInt64 Complement_PreBrgInt64(struct FBrgInt64 A);
};

// Class BrgGameBase.BrgUIParticleManager
// 0x0014 (0x0068 - 0x007C)
class UBrgUIParticleManager : public UBrgUIBaseBase
{
public:
	unsigned long                                      mConstParamEdit_Enable : 1;                    // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mConstParamEdit_Mode;                          // 0x006C (0x0001) [0x0000000000000000]               
	int32_t                                            mConstParamEdit_TargetEffectIndex;             // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            mConstParamEdit_TargetParamIndex;              // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            mConstParamEdit_TargetMaxMin;                  // 0x0078 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIParticleManager");
		}

		return uClassPointer;
	};

	void Initialize_NT();
	void EditRenderProcess(class ABrgHUDBase* inHUDBase);
	void RenderProcess_Type(class ABrgHUDBase* inHUDBase, uint8_t inParticleType);
	void RenderProcess(class ABrgHUDBase* inHUDBase);
	void TickProcess(float DeltaTime);
	void SetParticleRenderDisableFlag(int32_t inParticleIndex, unsigned long inDisableFlag);
	int32_t AddParticle(uint8_t inType, float InX, float InY, int32_t inParamI1, int32_t inParamI2, int32_t inParamI3, float inParamF1, float inParamF2, float inParamF3);
	void Initialize();
};

// Class BrgGameBase.BrgUIBlackSelectWindow
// 0x281C4 (0x0060 - 0x28224)
class UBrgUIBlackSelectWindow : public UObject
{
public:
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x0060 (0x0008) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x0068 (0x0001) [0x0000000000000000]               
	float                                              mCounter;                                      // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            mCounterI;                                     // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              mScale;                                        // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              mScalingBaseX;                                 // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              mScalingBaseY;                                 // 0x007C (0x0004) [0x0000000000000000]               
	float                                              mWindowX;                                      // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              mWindowY;                                      // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              mWindowSizeX;                                  // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              mWindowSizeY;                                  // 0x008C (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mWindowSize;                                   // 0x0090 (0x006C) [0x0000000000000000]               
	int32_t                                            mItemMaxNum;                                   // 0x00FC (0x0004) [0x0000000000000000]               
	int32_t                                            mItemNum;                                      // 0x0100 (0x0004) [0x0000000000000000]               
	struct FSUIBlackSelectItemInfo                     mItem[0x400];                                  // 0x0104 (0x28000) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FParamMoveData                              mItemAlpha;                                    // 0x28104 (0x006C) [0x0000000000000000]               
	TArray<struct FSUIBlackSelectItemSubString>        mSubStringInfos;                               // 0x28170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTitle;                                        // 0x28180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mOutTitle;                                     // 0x28190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mStartSelectItem;                              // 0x281A0 (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectItem;                                   // 0x281A4 (0x0004) [0x0000000000000000]               
	int32_t                                            mOldSelectItem;                                // 0x281A8 (0x0004) [0x0000000000000000]               
	int32_t                                            mTargetDispFirstItemIndex;                     // 0x281AC (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mDispFirstItemIndex;                           // 0x281B0 (0x006C) [0x0000000000000000]               
	unsigned long                                      mSelectEnable : 1;                             // 0x2821C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mSelectButtonDisable : 1;                      // 0x2821C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mCursorDisable : 1;                            // 0x2821C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mCancelDisable : 1;                            // 0x2821C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mCenterDraw : 1;                               // 0x2821C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mDrawSubLine : 1;                              // 0x2821C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mDrawInfoName : 1;                             // 0x2821C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mCancelRequest : 1;                            // 0x2821C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      mSelectChange : 1;                             // 0x2821C (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      mCancel : 1;                                   // 0x2821C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      mEnd : 1;                                      // 0x2821C (0x0004) [0x0000000000000000] [0x00000400] 
	float                                              mDrawBright;                                   // 0x28220 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIBlackSelectWindow");
		}

		return uClassPointer;
	};

	void TickProcess(float inDeltaTime);
	void RenderProcess(class ABrgHUDBase* inHUDBase);
	int32_t GetSelectIndex();
	bool CheckSelectDisable(int32_t InIndex);
	bool CheckEndStart();
	bool CheckEnd();
	bool CheckCancel();
	void Close();
	void SetCancelEnable(unsigned long inEnable);
	void SetCursorEnable(unsigned long inEnable);
	void SetSelectButtonEnable(unsigned long inEnable);
	void SetSelectEnable(unsigned long inEnable);
	void SetCenterDraw(unsigned long inCenterDraw);
	void SetDrawInfoName(unsigned long inDrawInfoName);
	void SetDrawSubLine(unsigned long inDrawSubLine);
	void SetSubStringInfos(TArray<struct FSUIBlackSelectItemSubString> inSubStringInfos);
	void SetOutTitle(class FString inOutTitle);
	void SetTitle(class FString inTitle);
	void SetDrawBright(float inDrawBright);
	void SetScale(float InScale);
	void SetSize(float InSizeX, float InSizeY);
	void SetPosition(float InX, float InY);
	void SetItem(TArray<struct FSUIBlackSelectItemInitInfo> inItems, int32_t inSelectIndex, TArray<struct FSUIBlackSelectItemSubString> inSubStringInfos);
	void GetItemMaxWidth(float& InSizeX, float& InSizeY);
	void Start(float inWindowX, float inWindowY, float inWindowSizeX, float inWindowSizeY, float inScalingBaseX, float inScalingBaseY, float InScale);
	void RefreshDispFirstIndex(unsigned long inLinear);
	void Initialize();
};

// Class BrgGameBase.BrgUIBlackWindow
// 0x0080 (0x0060 - 0x00E0)
class UBrgUIBlackWindow : public UObject
{
public:
	uint8_t                                            mState;                                        // 0x0060 (0x0001) [0x0000000000000000]               
	struct FParamMoveData                              mAlphaMoveData;                                // 0x0064 (0x006C) [0x0000000000000000]               
	int32_t                                            mCenterX;                                      // 0x00D0 (0x0004) [0x0000000000000000]               
	int32_t                                            mCenterY;                                      // 0x00D4 (0x0004) [0x0000000000000000]               
	int32_t                                            mSizeX;                                        // 0x00D8 (0x0004) [0x0000000000000000]               
	int32_t                                            mSizeY;                                        // 0x00DC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIBlackWindow");
		}

		return uClassPointer;
	};

	void TickProcess(float DeltaTime);
	void RenderProcess(class ABrgHUDBase* inHUDBase);
	static void DrawLineBox(class ABrgHUDBase* inHUDBase, float X1, float Y1, float X2, float Y2, unsigned long fill);
	bool CheckEnd();
	void SetVisible(unsigned long Invisible);
	void SetSize(int32_t InSizeX, int32_t InSizeY);
	void SetPosition(int32_t inLeftUpX, int32_t inLeftUpY);
	void Initialize(int32_t inLeftUpX, int32_t inLeftUpY, int32_t InSizeX, int32_t InSizeY);
};

// Class BrgGameBase.BrgUIBlackYesNoWindow
// 0x00C4 (0x0060 - 0x0124)
class UBrgUIBlackYesNoWindow : public UObject
{
public:
	uint8_t                                            mState;                                        // 0x0060 (0x0001) [0x0000000000000000]               
	float                                              mCounter;                                      // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            mCounterI;                                     // 0x0068 (0x0004) [0x0000000000000000]               
	class FString                                      mMessage;                                      // 0x006C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mWindowX;                                      // 0x007C (0x0004) [0x0000000000000000]               
	float                                              mWindowY;                                      // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              mWindowSizeX;                                  // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              mWindowSizeY;                                  // 0x0088 (0x0004) [0x0000000000000000]               
	class UBrgUIBlackWindow*                           mBlackWindow;                                  // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIDebugString*                           mStr_Message;                                  // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIDebugString*                           mStr_Yes;                                      // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIDebugString*                           mStr_No;                                       // 0x00A4 (0x0008) [0x0000000000000000]               
	struct FParamMoveData                              mButtonAlphaData;                              // 0x00AC (0x006C) [0x0000000000000000]               
	class UBrgUIParamEditMenuParam*                    mConstParam;                                   // 0x0118 (0x0008) [0x0000000000000000]               
	unsigned long                                      mIsYes : 1;                                    // 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mEnd : 1;                                      // 0x0120 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIBlackYesNoWindow");
		}

		return uClassPointer;
	};

	void TickProcess(float inDeltaTime);
	void RenderProcess(class ABrgHUDBase* inHUDBase);
	void SetStrVisible(unsigned long Invisible);
	void SetPosition(float InX, float InY);
	bool CheckEnd();
	void Start(class FString InMessage, class FString inYesStr, class FString inNoStr, float inWindowX, float inWindowY);
	void Initialize();
	void InitializeNative();
};

// Class BrgGameBase.BrgUIDebugMessage
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIDebugMessage : public UObject
{
public:
	uint8_t                                            mState;                                        // 0x0060 (0x0001) [0x0000000000000000]               
	float                                              mCounter;                                      // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            mCounterI;                                     // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              mWindowX;                                      // 0x006C (0x0004) [0x0000000000000000]               
	float                                              mWindowY;                                      // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              mWindowSizeX;                                  // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              mWindowSizeY;                                  // 0x0078 (0x0004) [0x0000000000000000]               
	class UBrgUIBlackWindow*                           mBlackWindow;                                  // 0x007C (0x0008) [0x0000000000000000]               
	TArray<class UBrgUIDebugString*>                   mStr_Message;                                  // 0x0084 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              mMessage;                                      // 0x0094 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIParamEditMenuParam*                    mConstParam;                                   // 0x00A4 (0x0008) [0x0000000000000000]               
	unsigned long                                      mCloseRequest : 1;                             // 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mEnd : 1;                                      // 0x00AC (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIDebugMessage");
		}

		return uClassPointer;
	};

	void TickProcess(float inDeltaTime);
	void RenderProcess(class ABrgHUDBase* inHUDBase);
	void SetStrVisible(unsigned long Invisible);
	int32_t GetLineNum();
	void SetPosition(float InX, float InY);
	bool CheckIdle();
	bool CheckEnd();
	void Close();
	void Start(class FString InMessage, float inWindowX, float inWindowY);
	void Initialize();
};

// Class BrgGameBase.BrgUIDebugSelectWindow
// 0x0078 (0x0060 - 0x00D8)
class UBrgUIDebugSelectWindow : public UObject
{
public:
	uint8_t                                            mState;                                        // 0x0060 (0x0001) [0x0000000000000000]               
	unsigned long                                      mStateFirst : 1;                               // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mCancel : 1;                                   // 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mCancelEnable : 1;                             // 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mDisableChoiceSound : 1;                       // 0x0064 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mCloseRequest : 1;                             // 0x0064 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mEnd : 1;                                      // 0x0064 (0x0004) [0x0000000000000000] [0x00000020] 
	class UBrgUIBlackWindow*                           mBlackWindow;                                  // 0x0068 (0x0008) [0x0000000000000000]               
	class UBrgUIDebugMessage*                          mDebugMessage;                                 // 0x0070 (0x0008) [0x0000000000000000]               
	class FString                                      mMessage;                                      // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mWindowX;                                      // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              mWindowY;                                      // 0x008C (0x0004) [0x0000000000000000]               
	float                                              mWindowSizeX;                                  // 0x0090 (0x0004) [0x0000000000000000]               
	float                                              mWindowSizeY;                                  // 0x0094 (0x0004) [0x0000000000000000]               
	float                                              mMaxStringWidth;                               // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            mSelectIndex;                                  // 0x009C (0x0004) [0x0000000000000000]               
	class UBrgUIParamEditMenuParam*                    mConstParam;                                   // 0x00A0 (0x0008) [0x0000000000000000]               
	class UBrgUIParamEditMenuParam*                    mDebugMessageConstParam;                       // 0x00A8 (0x0008) [0x0000000000000000]               
	TArray<struct FBrgUIDebugSelectString>             mSelectUnit;                                   // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class USoundCue*                                   mChoiceSoundCue;                               // 0x00C0 (0x0008) [0x0000000000000000]               
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x00C8 (0x0008) [0x0000000000000000]               
	class UGHM_SoundManager*                           mSoundManager;                                 // 0x00D0 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIDebugSelectWindow");
		}

		return uClassPointer;
	};

	void TickProcess(float inDeltaTime);
	void RenderProcess(class ABrgHUDBase* inHUDBase);
	void SetStrVisible(unsigned long Invisible);
	void SetSelectIndex(int32_t InIndex);
	void SetPosition(float InX, float InY);
	int32_t GetSelectIndex();
	int32_t CheckSelectIndexParam();
	bool CheckCancel();
	bool CheckEnd();
	bool CheckIdle();
	void Close();
	void Start(class FString InMessage, unsigned long inCancelEnable, float inWindowX, float inWindowY, unsigned long inDisableChoiceSound, class USoundCue* inChoiceSoundCue);
	void AddUnit(class FString InString, unsigned long inDisableSelect, int32_t inParam, unsigned long inCancelSE);
	void RefreshWindowSize();
	void AllDeleteUnit();
	void Initialize();
	void InitializeNative();
};

// Class BrgGameBase.BrgUIDebugString
// 0x00F8 (0x0060 - 0x0158)
class UBrgUIDebugString : public UObject
{
public:
	uint8_t                                            mState;                                        // 0x0060 (0x0001) [0x0000000000000000]               
	uint8_t                                            mDrawBasePosX;                                 // 0x0061 (0x0001) [0x0000000000000000]               
	uint8_t                                            mDrawBasePosY;                                 // 0x0062 (0x0001) [0x0000000000000000]               
	unsigned long                                      mVisible : 1;                                  // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mSubVisible : 1;                               // 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mIsSelect : 1;                                 // 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mColorDown : 1;                                // 0x0064 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mValidNextString : 1;                          // 0x0064 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mNextStringAnimation : 1;                      // 0x0064 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FParamMoveData                              mSelectAlpha;                                  // 0x0068 (0x006C) [0x0000000000000000]               
	int32_t                                            mDrawR;                                        // 0x00D4 (0x0004) [0x0000000000000000]               
	int32_t                                            mDrawG;                                        // 0x00D8 (0x0004) [0x0000000000000000]               
	int32_t                                            mDrawB;                                        // 0x00DC (0x0004) [0x0000000000000000]               
	int32_t                                            mDrawX;                                        // 0x00E0 (0x0004) [0x0000000000000000]               
	int32_t                                            mDrawY;                                        // 0x00E4 (0x0004) [0x0000000000000000]               
	struct FBrgUIDebugStr                              mString;                                       // 0x00E8 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgUIDebugStr                              mBackString;                                   // 0x0118 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mNextString;                                   // 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIDebugString");
		}

		return uClassPointer;
	};

	void Str_TickProcess(float inDeltaTime, struct FBrgUIDebugStr& InStr);
	float Str_RenderProcess(class ABrgHUDBase* inHUDBase, unsigned long IsDraw, struct FBrgUIDebugStr& InStr);
	static float GetDrawStringWidth(class FString InString, class ABrgHUDBase* inHUDBase);
	void Str_SetVisible(unsigned long Invisible, unsigned long inIsAnimation, struct FBrgUIDebugStr& InStr);
	bool Str_CheckIdle(struct FBrgUIDebugStr& InStr);
	void Str_Initialize(class FString InString, struct FBrgUIDebugStr& InStr);
	void TickProcess(float inDeltaTime);
	void RenderProcess(class ABrgHUDBase* inHUDBase);
	void RenderProcessWithSetPosition(class ABrgHUDBase* inHUDBase, int32_t inDrawX, int32_t InDrawY);
	void ChangeString_Number(int32_t inNumber, unsigned long inIsAnimation);
	void ChangeString(class FString inNewString, unsigned long inIsAnimation);
	void SetSelectState(unsigned long inIsSelect, unsigned long inAnimation);
	void RefreshVisible(unsigned long inIsAnimation);
	void SetSubVisible(unsigned long inIsVisible, unsigned long inIsAnimation);
	void SetVisible(unsigned long inIsVisible, unsigned long inIsAnimation);
	void SetPosition(int32_t inDrawX, int32_t InDrawY, uint8_t inBasePosX, uint8_t inBasePosY);
	void SetColorDown(unsigned long inColorDown);
	bool CheckIdle();
	void Initialize(class FString InString, uint8_t inBasePosX, uint8_t inBasePosY, int32_t inDrawX, int32_t InDrawY);
	static class UBrgUIDebugString* Create(class FString InString, uint8_t inBasePosX, uint8_t inBasePosY, int32_t inDrawX, int32_t InDrawY);
};

// Class BrgGameBase.BrgUIDefine
// 0x0000 (0x0060 - 0x0060)
class UBrgUIDefine : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIDefine");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgUIFont
// 0x00C8 (0x0060 - 0x0128)
class UBrgUIFont : public UObject
{
public:
	class UFont*                                       mFont;                                         // 0x0060 (0x0008) [0x0000000000000000]               
	unsigned long                                      mDisableDataOffsetX : 1;                       // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            mNewLineAddY;                                  // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            mAdjustMaxCharHeight;                          // 0x0070 (0x0004) [0x0000000000000000]               
	TArray<class UBrgUIImage*>                         mFontImageArray;                               // 0x0074 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mPixelScale;                                   // 0x0084 (0x0004) [0x0000000000000000]               
	TArray<struct FBrgUIFontImageCharInfo>             mImageCharInfos;                               // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgUIFontBaseParam                         mBaseParam;                                    // 0x0098 (0x0014) [0x0000000000000000]               
	struct FBrgUIFontBaseParam                         mSubBaseParam;                                 // 0x00AC (0x0014) [0x0000000000000000]               
	struct FBrgUIFontBaseParam                         mEngUpBaseParam;                               // 0x00C0 (0x0014) [0x0000000000000000]               
	struct FBrgUIFontBaseParam                         mEngLowBaseParam;                              // 0x00D4 (0x0014) [0x0000000000000000]               
	struct FBrgUIFontBaseParam                         mNumberBaseParam;                              // 0x00E8 (0x0014) [0x0000000000000000]               
	uint8_t                                            mUseMaterialEffect;                            // 0x00FC (0x0001) [0x0000000000000000]               
	int32_t                                            mUseMaterialIndex;                             // 0x0100 (0x0004) [0x0000000000000000]               
	class UTexture*                                    mMaskScreenTexture;                            // 0x0104 (0x0008) [0x0000000000000000]               
	float                                              mMaskScreenTextureScreenPositionX;             // 0x010C (0x0004) [0x0000000000000000]               
	float                                              mMaskScreenTextureScreenPositionY;             // 0x0110 (0x0004) [0x0000000000000000]               
	int32_t                                            mIconAddOffsetX;                               // 0x0114 (0x0004) [0x0000000000000000]               
	int32_t                                            mIconAddOffsetY;                               // 0x0118 (0x0004) [0x0000000000000000]               
	int32_t                                            mIconAddNextX;                                 // 0x011C (0x0004) [0x0000000000000000]               
	int32_t                                            mSubUIFontAddOffsetX;                          // 0x0120 (0x0004) [0x0000000000000000]               
	int32_t                                            mSubUIFontAddOffsetY;                          // 0x0124 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIFont");
		}

		return uClassPointer;
	};

	bool AddImageChara(struct FBrgUIFontImageCharInfo inImageCharInfo);
	bool GetCharInfo(class FString inChara, struct FBrgUIFontCharInfo& inCharInfo);
	static class UBrgUIFont* Create(class UFont* inUseFont, int32_t inPixelScale, class UTexture* inUseMaskScreenTexture, float inMaskScreenTexture_ScreenPositionX, float inMaskScreenTexture_ScreenPositionY, struct FBrgUIMaterialAttr& inMaterialAttr);
};

// Class BrgGameBase.BrgUIFontLoader
// 0x0038 (0x0060 - 0x0098)
class UBrgUIFontLoader : public UObject
{
public:
	uint8_t                                            mState;                                        // 0x0060 (0x0001) [0x0000000000000000]               
	class UFont*                                       mFont;                                         // 0x0064 (0x0008) [0x0000000000000000]               
	class UBrgUIFont*                                  mUIFont;                                       // 0x006C (0x0008) [0x0000000000000000]               
	class FString                                      mFontPath;                                     // 0x0074 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mPixelScale;                                   // 0x0084 (0x0004) [0x0000000000000000]               
	class UBrgResourceLoadManager*                     mResourceLoadManager;                          // 0x0088 (0x0008) [0x0000000000000000]               
	unsigned long                                      mLoadRequestState : 1;                         // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBrgUIMaterialAttr                          mMaterialAttr;                                 // 0x0094 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIFontLoader");
		}

		return uClassPointer;
	};

	int32_t Request(unsigned long inLoadState, unsigned long IsLoadCompCheckOnly);
	void TickProcess();
	void Initialize(class UBrgResourceLoadManager* inResourceLoadManager, class FString inFontPath, int32_t inPixelScale, struct FBrgUIMaterialAttr& inMaterialAttr);
	static class UBrgUIFontLoader* Create(class UBrgResourceLoadManager* inResourceLoadManager, class FString inFontPath, int32_t inPixelScale, struct FBrgUIMaterialAttr& inMaterialAttr);
};

// Class BrgGameBase.BrgUIFontRender
// 0x005C (0x0060 - 0x00BC)
class UBrgUIFontRender : public UObject
{
public:
	struct FBrgUIFontRenderState                       mState;                                        // 0x0060 (0x003C) [0x0000000000000000]               
	class ABrgHUDBase*                                 mHUDBase;                                      // 0x009C (0x0008) [0x0000000000000000]               
	int32_t                                            mPixelScale;                                   // 0x00A4 (0x0004) [0x0000000000000000]               
	uint8_t                                            mColorR;                                       // 0x00A8 (0x0001) [0x0000000000000000]               
	uint8_t                                            mColorG;                                       // 0x00A9 (0x0001) [0x0000000000000000]               
	uint8_t                                            mColorB;                                       // 0x00AA (0x0001) [0x0000000000000000]               
	uint8_t                                            mColorA;                                       // 0x00AB (0x0001) [0x0000000000000000]               
	uint8_t                                            mShadowColorR;                                 // 0x00AC (0x0001) [0x0000000000000000]               
	uint8_t                                            mShadowColorG;                                 // 0x00AD (0x0001) [0x0000000000000000]               
	uint8_t                                            mShadowColorB;                                 // 0x00AE (0x0001) [0x0000000000000000]               
	uint8_t                                            mShadowColorA;                                 // 0x00AF (0x0001) [0x0000000000000000]               
	unsigned long                                      mPosConvInt : 1;                               // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIs3D : 1;                                     // 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	class UBrgUIFont*                                  mTimeTxtFontDay;                               // 0x00B4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIFontRender");
		}

		return uClassPointer;
	};

	void SetColorByColor(struct FColor fontColor);
	void SetColor(uint8_t R, uint8_t G, uint8_t B, uint8_t A);
	float DrawShadowText_UseImgPos_KeepColor(class UBrgUIImage* inImage, class FString inDrawString, unsigned long inCenter, float inAddX, float inAddY, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawShadowText_UseImgPos(class UBrgUIImage* inImage, class FString inDrawString, unsigned long inCenter, float inAddX, float inAddY, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	void SetTimeTextDay(class UBrgUIFont* InFont);
	float GetDrawNumberWidthWithFontState(int32_t inDrawNumber, unsigned long inIsZero, int32_t inFigure, unsigned long inSigned, class FString inUnitString, struct FBrgUIFontRenderState& inFontStateint, float& DrawWidth, float& DrawHeight);
	float GetDrawTextWidthWithFontStateW(class FString Str, struct FBrgUIFontRenderState& inFontState, float& DrawWidth, float& DrawHeight);
	float GetDrawTextWidthW(class FString Str, float& DrawWidth, float& DrawHeight);
	float DrawNumberCenter_UseGuide(class UBrgUIImage* inImage, class UBrgUIImage* inSrcGuideImage, class UBrgUIImage* inDestGuideImage, int32_t inDrawNumber, float inAddX, float inAddY, unsigned long inIsZero, int32_t inFigure, unsigned long inSigned, class FString inUnitString, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawNumberCenter_UseImgPos(class UBrgUIImage* inImage, int32_t inDrawNumber, float inAddX, float inAddY, unsigned long inIsZero, int32_t inFigure, unsigned long inSigned, class FString inUnitString, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawNumberLeft_UseGuide(class UBrgUIImage* inImage, class UBrgUIImage* inSrcGuideImage, class UBrgUIImage* inDestGuideImage, int32_t inDrawNumber, float inAddX, float inAddY, unsigned long inIsZero, int32_t inFigure, unsigned long inSigned, class FString inUnitString, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawNumberLeft_UseImgPos(class UBrgUIImage* inImage, int32_t inDrawNumber, float inAddX, float inAddY, unsigned long inIsZero, int32_t inFigure, unsigned long inSigned, class FString inUnitString, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawNumber_UseGuide(class UBrgUIImage* inImage, class UBrgUIImage* inSrcGuideImage, class UBrgUIImage* inDestGuideImage, int32_t inDrawNumber, float inAddX, float inAddY, unsigned long inIsZero, int32_t inFigure, unsigned long inSigned, class FString inUnitString, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawNumber_UseImgPos(class UBrgUIImage* inImage, int32_t inDrawNumber, float inAddX, float inAddY, unsigned long inIsZero, int32_t inFigure, unsigned long inSigned, class FString inUnitString, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawTimeTextRight_UseGuide(class UBrgUIImage* inImage, class UBrgUIImage* inSrcGuideImage, class UBrgUIImage* inDestGuideImage, class FString inDrawDay, class FString inDrawHour, class FString inDrawMinute, float inColonOpacity, int32_t inDayStrOffsetY, float inAddX, float inAddY, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawTimeTextRight_UseImgPos(class UBrgUIImage* inImage, class FString inDrawDay, class FString inDrawHour, class FString inDrawMinute, float inColonOpacity, int32_t inDayStrOffsetY, float inAddX, float inAddY, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawTimeText_UseGuide(class UBrgUIImage* inImage, class UBrgUIImage* inSrcGuideImage, class UBrgUIImage* inDestGuideImage, class FString inDrawDay, class FString inDrawHour, class FString inDrawMinute, float inColonOpacity, int32_t inDayStrOffsetY, unsigned long inCenter, float inAddX, float inAddY, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawTimeText_UseImgPos(class UBrgUIImage* inImage, class FString inDrawDay, class FString inDrawHour, class FString inDrawMinute, float inColonOpacity, int32_t inDayStrOffsetY, unsigned long inCenter, float inAddX, float inAddY, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawTimeText(float X, float Y, class FString inDrawDay, class FString inDrawHour, class FString inDrawMinute, float inColonOpacity, int32_t inDayStrOffsetY, unsigned long IsRight, unsigned long IsCenter, unsigned long UseShadowColor, float ScalingWidth, unsigned long UseFullScalingWidth);
	float DrawTextRight_UseGuideW(class UBrgUIImage* inImage, class UBrgUIImage* inSrcGuideImage, class UBrgUIImage* inDestGuideImage, class FString inDrawString, float inAddX, float inAddY, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawTextRight_UseImgPosW(class UBrgUIImage* inImage, class FString inDrawString, float inAddX, float inAddY, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawText_UseGuideW(class UBrgUIImage* inImage, class UBrgUIImage* inSrcGuideImage, class UBrgUIImage* inDestGuideImage, class FString inDrawString, unsigned long inCenter, float inAddX, float inAddY, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	float DrawText_UseImgPosW(class UBrgUIImage* inImage, class FString inDrawString, unsigned long inCenter, float inAddX, float inAddY, unsigned long inAutoXScaling, unsigned long inUseFullSpace, struct FBrgUIFontRenderState& inFontState);
	void DrawShadowString(float X, float Y, class FString Str, unsigned long IsRight, unsigned long IsCenter, float ScalingWidth, unsigned long UseFullScalingWidth);
	float DrawNumber(float X, float Y, int32_t inDrawNumber, unsigned long inIsZero, int32_t inFigure, unsigned long inSigned, class FString inUnitString, unsigned long IsRight, unsigned long IsCenter, float ScalingWidth, unsigned long UseFullScalingWidth);
	float DrawTextW(float X, float Y, class FString Str, unsigned long IsRight, unsigned long IsCenter, unsigned long UseShadowColor, float ScalingWidth, unsigned long UseFullScalingWidth);
};

// Class BrgGameBase.BrgUIImage
// 0x006C (0x0060 - 0x00CC)
class UBrgUIImage : public UObject
{
public:
	uint8_t                                            mUseMaterialEffect;                            // 0x0060 (0x0001) [0x0000000000000000]               
	int32_t                                            mUseMaterialIndex;                             // 0x0064 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   mUseFreeMIC;                                   // 0x0068 (0x0008) [0x0000000000000000]               
	class UTexture*                                    mMaskScreenTexture;                            // 0x0070 (0x0008) [0x0000000000000000]               
	float                                              mMaskScreenTextureScreenPositionX;             // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              mMaskScreenTextureScreenPositionY;             // 0x007C (0x0004) [0x0000000000000000]               
	TArray<class UBrgUIImageBase*>                     mBaseData;                                     // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mUseX;                                         // 0x0090 (0x0004) [0x0000000000000000]               
	int32_t                                            mUseY;                                         // 0x0094 (0x0004) [0x0000000000000000]               
	int32_t                                            mUseSizeX;                                     // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            mUseSizeY;                                     // 0x009C (0x0004) [0x0000000000000000]               
	float                                              mUseU;                                         // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              mUseV;                                         // 0x00A4 (0x0004) [0x0000000000000000]               
	float                                              mUseSizeU;                                     // 0x00A8 (0x0004) [0x0000000000000000]               
	float                                              mUseSizeV;                                     // 0x00AC (0x0004) [0x0000000000000000]               
	int32_t                                            mImageMapInfoNo;                               // 0x00B0 (0x0004) [0x0000000000000000]               
	int32_t                                            mImageMapImageInfoNo;                          // 0x00B4 (0x0004) [0x0000000000000000]               
	int32_t                                            mImageMapScreenPosX;                           // 0x00B8 (0x0004) [0x0000000000000000]               
	int32_t                                            mImageMapScreenPosY;                           // 0x00BC (0x0004) [0x0000000000000000]               
	int32_t                                            mImageMapOpacity;                              // 0x00C0 (0x0004) [0x0000000000000000]               
	int32_t                                            mPosX;                                         // 0x00C4 (0x0004) [0x0000000000000000]               
	int32_t                                            mPosY;                                         // 0x00C8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImage");
		}

		return uClassPointer;
	};

	void Initialize(class UTexture* UseTexture, class UBrgUIImageBase* UseImageBase, int32_t UseX, int32_t UseY, int32_t UseSizeX, int32_t UseSizeY, int32_t PixelScale);
	static class UBrgUIImage* Create(class UTexture* UseTexture, class UBrgUIImageBase* UseImageBase, int32_t UseX, int32_t UseY, int32_t UseSizeX, int32_t UseSizeY, int32_t PixelScale);
	static class UBrgUIImage* CreateUseMapInfo(TArray<class UBrgUIImageBase*> inUseImageBase, int32_t inImageMapInfoNo, int32_t inImageMapImageInfoNo, int32_t inUseSizeX, int32_t inUseSizeY, int32_t inScreenPosX, int32_t inScreenPosY, int32_t inOpacity);
	bool SetupFreeMIC(class UMaterialInstanceConstant* inFreeMIC);
	bool SetupEffectMIC(uint8_t inMaterialEffect, class UTexture* inUseMaskScreenTexture, float inMaskScreenTexture_ScreenPositionX, float inMaskScreenTexture_ScreenPositionY);
	bool SetupMIC(class UTexture* inUseMaskScreenTexture, float inMaskScreenTexture_ScreenPositionX, float inMaskScreenTexture_ScreenPositionY, struct FBrgUIMaterialAttr& inMaterialAttr);
};

// Class BrgGameBase.BrgUIImage_Stream
// 0x0058 (0x00CC - 0x0124)
class UBrgUIImage_Stream : public UBrgUIImage
{
public:
	class FString                                      mImageKeyString;                               // 0x00CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mTexturePath;                                  // 0x00DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mLastUseTime[0x2];                             // 0x00EC (0x0008) [0x0000000000000000]               
	float                                              mLastUseTimeF;                                 // 0x00F4 (0x0004) [0x0000000000000000]               
	unsigned long                                      mLoaded : 1;                                   // 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mLoadRequest : 1;                              // 0x00F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mValidSetupMICParam : 1;                       // 0x00F8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mValidSetupEffectMICParam : 1;                 // 0x00F8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mValidSetupFreeMIC : 1;                        // 0x00F8 (0x0004) [0x0000000000000000] [0x00000010] 
	class UBrgUIResource_StreamImageManager*           mOwner;                                        // 0x00FC (0x0008) [0x0000000000000000]               
	uint8_t                                            mMICParamType;                                 // 0x0104 (0x0001) [0x0000000000000000]               
	uint8_t                                            mSetupEffectMICParam_MaterialEffect;           // 0x0105 (0x0001) [0x0000000000000000]               
	struct FBrgUIMaterialAttr                          mSetupMICParam_MaterialAttr;                   // 0x0108 (0x0004) [0x0000000000000000]               
	class UTexture*                                    mSetupMICParam_MaskScreenTexture;              // 0x010C (0x0008) [0x0000000000000000]               
	float                                              mSetupMICParam_MaskScreenTexture_ScreenPositionX;// 0x0114 (0x0004) [0x0000000000000000]               
	float                                              mSetupMICParam_MaskScreenTexture_ScreenPositionY;// 0x0118 (0x0004) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   mSetupFreeMICParam_FreeMIC;                    // 0x011C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImage_Stream");
		}

		return uClassPointer;
	};

	bool IsLoaded();
	void Unload();
	void Reload();
	bool SetupFreeMIC(class UMaterialInstanceConstant* inFreeMIC);
	bool SetupEffectMIC(uint8_t inMaterialEffect, class UTexture* inUseMaskScreenTexture, float inMaskScreenTexture_ScreenPositionX, float inMaskScreenTexture_ScreenPositionY);
	bool SetupMIC(class UTexture* inUseMaskScreenTexture, float inMaskScreenTexture_ScreenPositionX, float inMaskScreenTexture_ScreenPositionY, struct FBrgUIMaterialAttr& inMaterialAttr);
	static class UBrgUIImage_Stream* CreateStream(class FString inTexturePath);
};

// Class BrgGameBase.BrgUIImageBase
// 0x0518 (0x0060 - 0x0578)
class UBrgUIImageBase : public UObject
{
public:
	class UMaterialInstanceConstant*                   mNormalMIC[0x80];                              // 0x0060 (0x0400) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   mEffectMIC[0x1D];                              // 0x0460 (0x00E8) [0x0000000000000000]               
	class UTexture*                                    mMaskScreenTexture;                            // 0x0548 (0x0008) [0x0000000000000000]               
	int32_t                                            mMaskScreenTextureSizeX;                       // 0x0550 (0x0004) [0x0000000000000000]               
	int32_t                                            mMaskScreenTextureSizeY;                       // 0x0554 (0x0004) [0x0000000000000000]               
	float                                              mMaskScreenTextureInvSizeX;                    // 0x0558 (0x0004) [0x0000000000000000]               
	float                                              mMaskScreenTextureInvSizeY;                    // 0x055C (0x0004) [0x0000000000000000]               
	float                                              mMaskScreenTextureScreenPositionX;             // 0x0560 (0x0004) [0x0000000000000000]               
	float                                              mMaskScreenTextureScreenPositionY;             // 0x0564 (0x0004) [0x0000000000000000]               
	class UTexture*                                    mTexture;                                      // 0x0568 (0x0008) [0x0000000000000000]               
	int32_t                                            mTextureSizeX;                                 // 0x0570 (0x0004) [0x0000000000000000]               
	int32_t                                            mTextureSizeY;                                 // 0x0574 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageBase");
		}

		return uClassPointer;
	};

	void SetMaskScreenTexture(class UTexture* inMaskScreenTexture, float inScreenPositionX, float inScreenPositionY);
	bool SetupBaseMIC(int32_t inMaterialIndex, uint8_t inMaterialEffect);
	static int32_t GetMaterialIndex(struct FBrgUIMaterialAttr& inMaterialAttr);
	static class UBrgUIImageBase* Create(class UTexture* UseTexture, int32_t PixelScale);
};

// Class BrgGameBase.BrgUIImageMapInfo
// 0x0021 (0x0060 - 0x0081)
class UBrgUIImageMapInfo : public UObject
{
public:
	TArray<struct FImageMapInfo>                       mImageMapArray;                                // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FImageMapInfo>                       mImageMapArray_720p;                           // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            mScreenMode;                                   // 0x0080 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo");
		}

		return uClassPointer;
	};

	int32_t GetImageNo(int32_t inImageMapNo, class FString inImageName);
	int32_t GetImageMapNo(class FString inTextureUpackName, class FString inTexturePath);
	class UBrgUIImage* CreateImage_Index(TArray<class UBrgUIImageBase*> inBaseImage, int32_t inMapIndex, int32_t inImageIndex);
	class UBrgUIImage* CreateImage(TArray<class UBrgUIImageBase*> inBaseImage, class FString inTextureUpackName, class FString inTexturePath, class FString inImageName);
	bool Initialize(uint8_t inScreenMode);
};

// Class BrgGameBase.BrgUIImageMapInfoBase
// 0x0024 (0x0060 - 0x0084)
class UBrgUIImageMapInfoBase : public UObject
{
public:
	uint8_t                                            mType;                                         // 0x0060 (0x0001) [0x0000000000000000]               
	class FString                                      mName;                                         // 0x0064 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImageMapInfoBase*                      mParent;                                       // 0x0074 (0x0008) [0x0000000000000000]               
	int32_t                                            mMapIndex;                                     // 0x007C (0x0004) [0x0000000000000000]               
	int32_t                                            mImageInfoIndex;                               // 0x0080 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfoBase");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgUIImageMapInfoGroup
// 0x0010 (0x0084 - 0x0094)
class UBrgUIImageMapInfoGroup : public UBrgUIImageMapInfoBase
{
public:
	TArray<class UBrgUIImageMapInfoBase*>              mChild;                                        // 0x0084 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfoGroup");
		}

		return uClassPointer;
	};

	class UBrgUIImageMapInfoBase* GetObjectW(class FString inPath);
	class UBrgUIImageMapInfoImage* GetImage(class FString inPath);
	class UBrgUIImageMapInfoGroup* GetGroup(class FString inPath);
	class UBrgUIImage* GetUIImage(class FString inPath);
};

// Class BrgGameBase.BrgUIImageMapInfoImage
// 0x0008 (0x0084 - 0x008C)
class UBrgUIImageMapInfoImage : public UBrgUIImageMapInfoBase
{
public:
	class UBrgUIImage*                                 mImage;                                        // 0x0084 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfoImage");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgUIImageMapInfoSet
// 0x0034 (0x0060 - 0x0094)
class UBrgUIImageMapInfoSet : public UObject
{
public:
	class UBrgUIImageMapInfo*                          mImageMapInfo;                                 // 0x0060 (0x0008) [0x0000000000000000]               
	TArray<class UBrgUIImageBase*>                     mBaseImage;                                    // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImageMapInfoGroup*                     mTopGroup;                                     // 0x0078 (0x0008) [0x0000000000000000]               
	int32_t                                            mMapIndex;                                     // 0x0080 (0x0004) [0x0000000000000000]               
	TArray<class UBrgUIImageMapInfoBase*>              mInfoBaseArray;                                // 0x0084 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfoSet");
		}

		return uClassPointer;
	};

	class UBrgUIImageMapInfoBase* GetObjectW(class FString inPath);
	class UBrgUIImageMapInfoImage* GetImage(class FString inPath);
	class UBrgUIImageMapInfoGroup* GetGroup(class FString inPath);
	class UBrgUIImage* GetUIImage(class FString inPath);
	void SetupImageEffectMIC(TArray<class UBrgUIImageBase*> inBaseImage, uint8_t inMaterialEffect, class UTexture* inUseMaskScreenTexture, float inMaskScreenTexture_ScreenPositionX, float inMaskScreenTexture_ScreenPositionY);
	void SetupImage(TArray<class UBrgUIImageBase*> inBaseImage, class UTexture* inUseMaskScreenTexture, float inMaskScreenTexture_ScreenPositionX, float inMaskScreenTexture_ScreenPositionY, struct FBrgUIMaterialAttr& inMaterialAttr);
	void Initialize(class UBrgUIImageMapInfo* inImageMapInfo, int32_t inMapIndex);
	static class UBrgUIImageMapInfoSet* CreateImageMapInfoSet(class UBrgUIImageMapInfo* inImageMapInfo, class FString inTextureUpackName, class FString inTexturePath);
};

// Class BrgGameBase.BrgUIManagerBase
// 0x2784 (0x0060 - 0x27E4)
class UBrgUIManagerBase : public UObject
{
public:
	uint8_t                                            mScreenMode;                                   // 0x0060 (0x0001) [0x0000000000000000]               
	uint8_t                                            mRenderProcessType;                            // 0x0061 (0x0001) [0x0000000000000000]               
	uint8_t                                            mBuySortType;                                  // 0x0062 (0x0001) [0x0000000000000000]               
	uint8_t                                            mCoinLockerSortType;                           // 0x0063 (0x0001) [0x0000000000000000]               
	uint8_t                                            mPossessionItemSortType;                       // 0x0064 (0x0001) [0x0000000000000000]               
	uint8_t                                            mDeathBagSortType;                             // 0x0065 (0x0001) [0x0000000000000000]               
	uint8_t                                            mTopActiveAccessType;                          // 0x0066 (0x0001) [0x0000000000000000]               
	uint8_t                                            mEnableAccessFlag[0x31];                       // 0x0067 (0x0031) [0x0000000000000000]               
	uint8_t                                            mInputMouseTemp;                               // 0x0098 (0x0001) [0x0000000000000000]               
	class ABrgGameInfoNativeBase*                      mGameInfoNativeBase;                           // 0x009C (0x0008) [0x0000000000000000]               
	class ABrgHUDBase*                                 mHUDBase;                                      // 0x00A4 (0x0008) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mMaskScreenRenderTarget[0x3];                  // 0x00AC (0x0018) [0x0000000000000000]               
	class FString                                      mStringLanguage;                               // 0x00C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mFontConstParamTestString;                     // 0x00D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mFontConstParamTestString2;                    // 0x00E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBrgUIFont_ConstParam_Set                   mFontConstParamSets[0x4];                      // 0x00F4 (0x1720) [0x0000000000000000]               
	class UBrgUIParamEditMenuParam*                    mFontConstParam;                               // 0x1814 (0x0008) [0x0000000000000000]               
	int32_t                                            mFontConstParamBackup[0x1F];                   // 0x181C (0x007C) [0x0000000000000000]               
	class UBrgUIImage*                                 mImageChar[0x2];                               // 0x1898 (0x0010) [0x0000000000000000]               
	class UBrgUIParamEditMenuParam*                    mConstParam;                                   // 0x18A8 (0x0008) [0x0000000000000000]               
	class UBrgUIImageMapInfo*                          mImageMapInfo;                                 // 0x18B0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_ItemIconManager*              mItemIconManager;                              // 0x18B8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_TeamEmblemImageManager*       mTeamEmblemImageManager;                       // 0x18C0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_TeamEmblemIconImageManager*   mTeamEmblemIconImageManager;                   // 0x18C8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_PartTypeIconManager*          mPartTypeIconManager;                          // 0x18D0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_QuestPictureManager*          mQuestPictureManager;                          // 0x18D8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_EnmaMenuImageManager*         mEnmaMenuImageManager;                         // 0x18E0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_FighterIcon*                  mResourceFighterIcon;                          // 0x18E8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_FortIconImageManager*         mFortIconImageManager;                         // 0x18F0 (0x0008) [0x0000000000000000]               
	float                                              mMaskScreenInvSizeX;                           // 0x18F8 (0x0004) [0x0000000000000000]               
	float                                              mMaskScreenInvSizeY;                           // 0x18FC (0x0004) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mCommonRenderTarget;                           // 0x1900 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mCommonRenderTargetImage;                      // 0x1908 (0x0008) [0x0000000000000000]               
	class UBrgUIParamEditMenu*                         mParamEditMenu;                                // 0x1910 (0x0008) [0x0000000000000000]               
	int32_t                                            mDisableDrawArea;                              // 0x1918 (0x0004) [0x0000000000000000]               
	int32_t                                            mScreenWidth;                                  // 0x191C (0x0004) [0x0000000000000000]               
	int32_t                                            mScreenHeight;                                 // 0x1920 (0x0004) [0x0000000000000000]               
	int32_t                                            mScreenWidthHalf;                              // 0x1924 (0x0004) [0x0000000000000000]               
	int32_t                                            mScreenHeightHalf;                             // 0x1928 (0x0004) [0x0000000000000000]               
	int32_t                                            mNoneDrawLeftWidth;                            // 0x192C (0x0004) [0x0000000000000000]               
	int32_t                                            mNoneDrawRightWidth;                           // 0x1930 (0x0004) [0x0000000000000000]               
	int32_t                                            mNoneDrawTopHeight;                            // 0x1934 (0x0004) [0x0000000000000000]               
	int32_t                                            mNoneDrawBottomHeight;                         // 0x1938 (0x0004) [0x0000000000000000]               
	float                                              mNowAdjustX;                                   // 0x193C (0x0004) [0x0000000000000000]               
	float                                              mNowAdjustY;                                   // 0x1940 (0x0004) [0x0000000000000000]               
	class UBrgUIFont*                                  mDebugFont;                                    // 0x1944 (0x0008) [0x0000000000000000]               
	class UBrgUIFont*                                  mDebugFontJP;                                  // 0x194C (0x0008) [0x0000000000000000]               
	class UBrgUIFont*                                  mFont[0x40];                                   // 0x1954 (0x0200) [0x0000000000000000]               
	class UBrgUIFont*                                  mFont_Add[0x40];                               // 0x1B54 (0x0200) [0x0000000000000000]               
	class UBrgUIFont*                                  mFont_UseMask[0x40];                           // 0x1D54 (0x0200) [0x0000000000000000]               
	class UBrgUIFont*                                  mFont_UseMask_OneMinus[0x40];                  // 0x1F54 (0x0200) [0x0000000000000000]               
	unsigned long                                      mFontLoadEnd : 1;                              // 0x2154 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mSetupDbNoneId : 1;                            // 0x2154 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mbTouchPadPress : 1;                           // 0x2154 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mbTouchPadPressLeft : 1;                       // 0x2154 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mbTouchPadPressRight : 1;                      // 0x2154 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mbTouchPadEdgeLeft : 1;                        // 0x2154 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mbTouchPadEdgeRight : 1;                       // 0x2154 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mAlwaysHUDVisible : 1;                         // 0x2154 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      mHideNetworkDebugInfo : 1;                     // 0x2154 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      mBlackScreenVisible : 1;                       // 0x2154 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      mBackgroundVisible : 1;                        // 0x2154 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      mbKeyCtrol : 1;                                // 0x2154 (0x0004) [0x0000000000000000] [0x00000800] 
	int32_t                                            mFontLoadState;                                // 0x2158 (0x0004) [0x0000000000000000]               
	class FString                                      mFontPaths[0xA];                               // 0x215C (0x00A0) [0x0000000000400000] (CPF_NeedCtorLink)
	class UFont*                                       mFonts[0xA];                                   // 0x21FC (0x0050) [0x0000000000000000]               
	class FString                                      mDbPtNoneHeadId;                               // 0x224C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDbPtNoneArmId;                                // 0x225C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDbPtNoneBodyId;                               // 0x226C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      mDbPtNoneLegsId;                               // 0x227C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImageBase*                             mGamePadIconImageBase;                         // 0x228C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGamePadIconSrcGuide;                          // 0x2294 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mGamePadIconImage[0x15];                       // 0x229C (0x00A8) [0x0000000000000000]               
	class FString                                      mGamePadIconImagePath;                         // 0x2344 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mNowInput;                                     // 0x2354 (0x0004) [0x0000000000000000]               
	int32_t                                            mEdgeInput;                                    // 0x2358 (0x0004) [0x0000000000000000]               
	int32_t                                            mRepeatInput;                                  // 0x235C (0x0004) [0x0000000000000000]               
	int32_t                                            mInputPhase[0x10];                             // 0x2360 (0x0040) [0x0000000000000000]               
	float                                              mInputTime[0x10];                              // 0x23A0 (0x0040) [0x0000000000000000]               
	float                                              mInputTime2[0x10];                             // 0x23E0 (0x0040) [0x0000000000000000]               
	int32_t                                            mTouchPadInput;                                // 0x2420 (0x0004) [0x0000000000000000]               
	int32_t                                            mTouchPadEdgeInput;                            // 0x2424 (0x0004) [0x0000000000000000]               
	struct FVector                                     mTouchOld[0x5];                                // 0x2428 (0x003C) [0x0000000000000000]               
	struct FVector                                     mTouchOld2[0x5];                               // 0x2464 (0x003C) [0x0000000000000000]               
	struct FVector                                     mTouchOld3[0x5];                               // 0x24A0 (0x003C) [0x0000000000000000]               
	int32_t                                            mNowInputIgnoreStick;                          // 0x24DC (0x0004) [0x0000000000000000]               
	int32_t                                            mEdgeInputIgnoreStick;                         // 0x24E0 (0x0004) [0x0000000000000000]               
	int32_t                                            mRepeatInputIgnoreStick;                       // 0x24E4 (0x0004) [0x0000000000000000]               
	int32_t                                            mInputPhaseIgnoreStick[0x10];                  // 0x24E8 (0x0040) [0x0000000000000000]               
	float                                              mInputTimeIgnoreStick[0x10];                   // 0x2528 (0x0040) [0x0000000000000000]               
	float                                              mInputTime2IgnoreStick[0x10];                  // 0x2568 (0x0040) [0x0000000000000000]               
	class FString                                      mPausePointDbId;                               // 0x25A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mBlackScreenAlphaSpeed;                        // 0x25B8 (0x0004) [0x0000000000000000]               
	float                                              mBlackScreenAlpha;                             // 0x25BC (0x0004) [0x0000000000000000]               
	struct FColor                                      mBackgroundColor;                              // 0x25C0 (0x0004) [0x0000000000000000]               
	struct FParamMoveData                              mBackgroundColorPM;                            // 0x25C4 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mBackgroundColorAlphaPM;                       // 0x2630 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mBackgroundVisibleAlpha;                       // 0x269C (0x006C) [0x0000000000000000]               
	float                                              mNetworkAnimCounter;                           // 0x2708 (0x0004) [0x0000000000000000]               
	class USoundCue*                                   mMenuStartSC;                                  // 0x270C (0x0008) [0x0000000000000000]               
	class USoundCue*                                   mPopUpOKSC;                                    // 0x2714 (0x0008) [0x0000000000000000]               
	class USoundCue*                                   mAccessSC;                                     // 0x271C (0x0008) [0x0000000000000000]               
	class USoundCue*                                   mSystemWindow_Message_OpenSoundCue;            // 0x2724 (0x0008) [0x0000000000000000]               
	class USoundCue*                                   mSystemWindow_YesNo_OpenSoundCue;              // 0x272C (0x0008) [0x0000000000000000]               
	class USoundCue*                                   mMenuSelectSC;                                 // 0x2734 (0x0008) [0x0000000000000000]               
	class USoundCue*                                   mMenuOKSC;                                     // 0x273C (0x0008) [0x0000000000000000]               
	class USoundCue*                                   mMenuCancelSC;                                 // 0x2744 (0x0008) [0x0000000000000000]               
	class USoundCue*                                   mMenuNGSC;                                     // 0x274C (0x0008) [0x0000000000000000]               
	class USoundCue*                                   mMenuOutSC;                                    // 0x2754 (0x0008) [0x0000000000000000]               
	class USoundCue*                                   mMenuTrash;                                    // 0x275C (0x0008) [0x0000000000000000]               
	class UGHM_SoundManager*                           mSoundManager;                                 // 0x2764 (0x0008) [0x0000000000000000]               
	TArray<struct FBrgUIManagerSoundInfo>              mPlaySoundCueArray;                            // 0x276C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       mFNameNone;                                    // 0x277C (0x0008) [0x0000000000000000]               
	struct FName                                       mFNameDeathOpacity;                            // 0x2784 (0x0008) [0x0000000000000000]               
	struct FName                                       mFNameOutlineWidth;                            // 0x278C (0x0008) [0x0000000000000000]               
	struct FName                                       mFNameZ_Scale;                                 // 0x2794 (0x0008) [0x0000000000000000]               
	struct FName                                       mFNameZ_Scale_Intensity;                       // 0x279C (0x0008) [0x0000000000000000]               
	struct FName                                       mFNameDeathColor;                              // 0x27A4 (0x0008) [0x0000000000000000]               
	struct FName                                       mFNamePassiveState;                            // 0x27AC (0x0008) [0x0000000000000000]               
	struct FVector                                     mCameraPos;                                    // 0x27B4 (0x000C) [0x0000000000000000]               
	struct FVector                                     mCameraTargetPos;                              // 0x27C0 (0x000C) [0x0000000000000000]               
	class UBrgNetworkResponseEndsp*                    mNetworkResponseEndsp;                         // 0x27CC (0x0008) [0x0000000000000000]               
	class FString                                      mInputKeyTemp;                                 // 0x27D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIManagerBase");
		}

		return uClassPointer;
	};

	uint8_t GetInputMouse();
	void SetInputMouse(uint8_t mouse);
	class FString GetInputKey();
	bool IsKeyCtrol();
	void ResetKeyCtrol();
	void SetInputKey(class FString Key);
	void RefreshAdjustPos(class ABrgHUDBase* inHUD);
	void InputProcess(float DeltaTime);
	void InitializeNative();
	class FString GetResourcePath(class FString PackageName, class FString ResourcePath);
	float GetSafeAreaRate();
	void SetNoneDrawSize(class ABrgHUDBase* inHUD, int32_t LeftWidth, int32_t RightWidth, int32_t TopHeight, int32_t BottomHeight);
	static float GetGamePadRightStickInputAngle(float DeadZone);
	static float GetGamePadLeftStickInputAngle(float DeadZone);
	static void GetGamePadRightStickInput(float& DestX, float& DestY);
	static void GetGamePadLeftStickInput(float& DestX, float& DestY);
	int32_t GetGamePadRepeatInput(unsigned long IngoreStick);
	int32_t GetGamePadEdgeInput(unsigned long IngoreStick);
	static int32_t GetGamePadInput(unsigned long IngoreStick);
	static bool IsCircleTreatedAsYes(unsigned long isForced);
	static void InitCircleTreatedAsYes(unsigned long isForced);
	static class FString GetTextSecondToModifiedTime(int32_t iInSecond, int32_t maxDay);
	static class FString GetLocalizeTextST_P(class FString SectionPlusTextID, class FString AddString0, class FString AddString1, class FString AddString2, class FString AddString3, class FString AddString4, class FString AddString5);
	static class FString GetLocalizeTextArrayST(class FString SectionPlusTextID, TArray<class FString> AddString);
	static class FString GetLocalizeTextST(class FString SectionPlusTextID, class FString AddString0, class FString AddString1, class FString AddString2, class FString AddString3, class FString AddString4, class FString AddString5);
	void PlayStockSoundCue();
	void RemoveAndStopSoundCue(class USoundCue* InSoundCue, class APawn* inPawn);
	void AddPlaySoundCue(class USoundCue* InSoundCue, class APawn* inPawn);
	void AllClearEnableAccessFlag();
	void SetEnableAccessFlag(uint8_t inAccessType, unsigned long inEnable);
	void SetAlwaysHUDVisibleState(unsigned long Invisible);
	void SetRenderProcessType(uint8_t inRenderProcessType);
	void SetBackgroundVisible(unsigned long Invisible, float inChangeTime);
	void SetBackgroundAlpha(float inAlpha, float inChangeTime);
	void SetBackgroundColor(struct FColor InColor, float inChangeTime);
	void SetBlackScreenVisible(unsigned long Visible, float StartAlpha, float AlphaSpeed);
	bool CheckNonePartId(class FString Id);
};

// Class BrgGameBase.BrgUIMath
// 0x0000 (0x0060 - 0x0060)
class UBrgUIMath : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIMath");
		}

		return uClassPointer;
	};

	static void RectClip(float inClipLeftUpX, float inClipLeftUpY, float inClipRightDownX, float inClipRightDownY, float& inTargetLeftUpX, float& inTargetLeftUpY, float& inTargetRightDownX, float& inTargetRightDownY, float& inTargetLinkLeftUpX, float& inTargetLinkLeftUpY, float& inTargetLinkRightDownX, float& inTargetLinkRightDownY);
	static void Segment_Point_Analyse(struct FVector SegmentPos1, struct FVector SegmentPos2, struct FVector PointPos, struct FSegment_Point_Result& ResultParam);
	static void Segment_Segment_Analyse(struct FVector SegmentAPos1, struct FVector SegmentAPos2, struct FVector SegmentBPos1, struct FVector SegmentBPos2, struct FSegment_Segment_Result& ResultParam);
	static float GetFlashClassicTweenParam(float T, unsigned long Reverse);
	static struct FVector GetBezierParam(struct FVector Pos1, struct FVector SubPos1, struct FVector SubPos2, struct FVector Pos2, float T);
	static bool CheckHit2DRect(float Area1_X1, float Area1_Y1, float Area1_X2, float Area1_Y2, float Area2_X1, float Area2_Y1, float Area2_X2, float Area2_Y2);
	static int32_t GetDistMinPixelScaleNum(int32_t inNum);
	static int32_t GetDistMinDiv2And3Num(int32_t inNum);
	static int32_t GetPrevDiv2And3Num(int32_t inNum);
	static int32_t GetNextDiv2And3Num(int32_t inNum);
	static int32_t GetNextDiv2Num(int32_t inNum);
	static void Initialize();
	static float GetMinMaxF(float InMin, float InMax);
	static struct FVector VTransform(struct FVector SrcPos, struct FMatrix3x3CT& InMat);
	static struct FMatrix3x3CT MTranslate2(float TransX, float TransY);
	static struct FMatrix3x3CT MRot2(float Angle);
	static struct FMatrix3x3CT MScale2(float ScaleX, float ScaleY);
	static struct FMatrix3x3CT MIdent2();
	static struct FMatrix3x3CT MAdd2(struct FMatrix3x3CT& InMat1, struct FMatrix3x3CT& InMat2);
	static struct FMatrix3x3CT MMult2(struct FMatrix3x3CT& InMat1, struct FMatrix3x3CT& InMat2);
	static void MTranslate(float TransX, float TransY, struct FMatrix3x3CT& DestMat);
	static void MRot_(float Angle, struct FMatrix3x3CT& DestMat);
	static void MScale_(float ScaleX, float ScaleY, struct FMatrix3x3CT& DestMat);
	static void MIdent(struct FMatrix3x3CT& DestMat);
	static void MAdd(struct FMatrix3x3CT& InMat1, struct FMatrix3x3CT& InMat2, struct FMatrix3x3CT& DestMat);
	static void MMult(struct FMatrix3x3CT& InMat1, struct FMatrix3x3CT& InMat2, struct FMatrix3x3CT& DestMat);
};

// Class BrgGameBase.BrgUIParamEditMenu
// 0x0030 (0x0060 - 0x0090)
class UBrgUIParamEditMenu : public UObject
{
public:
	unsigned long                                      mParamEdit_Enable : 1;                         // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mParamEdit_Repeat : 1;                         // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mParamEdit_FirstRepeat : 1;                    // 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mParamEdit_SecondRepeat : 1;                   // 0x0060 (0x0004) [0x0000000000000000] [0x00000008] 
	uint8_t                                            mParamEdit_Mode;                               // 0x0064 (0x0001) [0x0000000000000000]               
	int32_t                                            mParamEdit_TargetTypeIndex;                    // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamEdit_TargetParamIndex;                   // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            mParamEdit_TargetMaxMin;                       // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              mParamEdit_RepeatCounter;                      // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              mParamEdit_RepeatCounter2;                     // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            mParamEdit_Input;                              // 0x007C (0x0004) [0x0000000000000000]               
	TArray<class UBrgUIParamEditMenuParam*>            mScriptParam;                                  // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIParamEditMenu");
		}

		return uClassPointer;
	};

	void RenderProcess(class ABrgHUDBase* inHUD);
	void TickProcess(float DeltaTime);
	void SubParamInfo(class UBrgUIParamEditMenuParam* inParam);
	void AddParamInfo(class UBrgUIParamEditMenuParam* inParam);
	void Initialize();
};

// Class BrgGameBase.BrgUIParamEditMenuParam
// 0x0020 (0x0060 - 0x0080)
class UBrgUIParamEditMenuParam : public UObject
{
public:
	class FString                                      mName;                                         // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUIParamUnitInfo>                    mParam;                                        // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIParamEditMenuParam");
		}

		return uClassPointer;
	};

	float GetMinMaxF(int32_t InIndex);
	float GetMaxF(int32_t InIndex);
	int32_t GetMaxI(int32_t InIndex);
	float GetMinF(int32_t InIndex);
	int32_t GetMinI(int32_t InIndex);
	float GetF(int32_t InIndex);
	int32_t GetI(int32_t InIndex);
	void ParamInit(int32_t InIndex, class FString inParamName, unsigned long inIsMinMax, int32_t inParamIntMin, int32_t inParamIntMax, float inParamScale);
	void Initialize(class FString InName, int32_t inParamNum);
};

// Class BrgGameBase.BrgUIParticlePetal
// 0x0000 (0x0060 - 0x0060)
class UBrgUIParticlePetal : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIParticlePetal");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgUIParticleWave
// 0x0000 (0x0060 - 0x0060)
class UBrgUIParticleWave : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIParticleWave");
		}

		return uClassPointer;
	};

	static void GetTestColor(int32_t No, uint8_t& R, uint8_t& G, uint8_t& B);
};

// Class BrgGameBase.BrgUIResource__OnMemoryBase
// 0x0028 (0x0060 - 0x0088)
class UBrgUIResource__OnMemoryBase : public UObject
{
public:
	unsigned long                                      mTerminate : 1;                                // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mLoadEnd : 1;                                  // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            mLoadWaitLastPackageIndex;                     // 0x0064 (0x0004) [0x0000000000000000]               
	TArray<class FString>                              mLoadWaitClassNames;                           // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgUIResource_Common*>               mResourceArray;                                // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource__OnMemoryBase");
		}

		return uClassPointer;
	};

	void Tick(float inDeltaTime);
	bool GetLoadWaitPackageName(TArray<class FString>& inClassName);
	bool CheckLoadEnd();
	void CreateResource();
	void eventTerminate();
	void eventInitialize();
};

// Class BrgGameBase.BrgUIResource_OnMemory
// 0x021C (0x0088 - 0x02A4)
class UBrgUIResource_OnMemory : public UBrgUIResource__OnMemoryBase
{
public:
	class UBrgUIResource_Common*                       mButtonResource;                               // 0x0088 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_HUD6*                         mHUD6Resource;                                 // 0x0090 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_HUD6*                         mHUD6Resource_UseMask;                         // 0x0098 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_HUD6*                         mHUD6Resource_UseMask_OneMinus;                // 0x00A0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_HUD6*                         mHUD6Resource_AddBlend;                        // 0x00A8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_PauseMenu_v01*                mPauseMenu_v01_Resource;                       // 0x00B0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_PauseMenu_v01*                mPauseMenu_v01_Resource_AddBlend;              // 0x00B8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_PauseMenu_v02_Shop*           mPauseMenu_v02_Shop_Resource;                  // 0x00C0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_PauseMenu_STM_v00*            mPauseMenu_STM_v00;                            // 0x00C8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_AreaMap*                      mAreaMapResource;                              // 0x00D0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_AreaMap*                      mAreaMapResource_UseMask;                      // 0x00D8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_AreaMap*                      mAreaMapResource_UseMask_OneMinus;             // 0x00E0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_MiniGame_v00*                 mMiniGameResource_v00;                         // 0x00E8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_MiniGame_v00*                 mMiniGameResource_v00_UseMask;                 // 0x00F0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_MiniGame_STM_v00*             mMiniGameResource_STM_v00;                     // 0x00F8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Title_First*                  mTitleFirstResource;                           // 0x0100 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_ElevatorMenu*                 mElevatorMenuResource;                         // 0x0108 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_StatusMenu*                   mStatusMenuResource;                           // 0x0110 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_ItemLMenu*                    mItemLMenuResource;                            // 0x0118 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Insurance*                    mInsuranceResource;                            // 0x0120 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_InsuranceMenu*                mInsuranceMenuResource;                        // 0x0128 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_InsuranceMenu_v00_00*         mInsuranceMenuResource_v00_00;                 // 0x0130 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Icon_MiniMap*                 mIcon_MiniMapResource;                         // 0x0138 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Icon_Network*                 mIcon_NetworkResource;                         // 0x0140 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Icon_Info_v00*                mIcon_Info_v00_Resource;                       // 0x0148 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Icon_Info_v00*                mIcon_Info_v00_Resource_AddBlend;              // 0x0150 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Icon_Info_v00*                mIcon_Info_v00_Resource_UseMask_OneMinus;      // 0x0158 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Icon_Info_v00*                mIcon_Info_v00_Resource_UseMask_Special;       // 0x0160 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Icon_Info_v01*                mIcon_Info_v01_Resource;                       // 0x0168 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Icon_Info_v01*                mIcon_Info_v01_Resource_UseMask_OneMinus;      // 0x0170 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Icon_Info_v02*                mIcon_Info_v02_Resource;                       // 0x0178 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Icon_Info_v02*                mIcon_Info_v02_Resource_UseMask_OneMinus;      // 0x0180 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Result_Floor_v02*             mResult_Floor_v02_MenuResource;                // 0x0188 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Result_Floor_Info_v00*        mResult_Floor_Info_v00_MenuResource;           // 0x0190 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_SystemWindow*                 mSystemWindowResource;                         // 0x0198 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_SkillSticker*                 mSkillStickerResource;                         // 0x01A0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_UncleDeath_Anim*              mUncleDeath_AnimResource;                      // 0x01A8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_FortMonitor*                  mFortMonitorResource;                          // 0x01B0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_FreeContinue*                 mFreeContinueResource;                         // 0x01B8 (0x0008) [0x0000000000000000]               
	unsigned long                                      mIsItemIconInfosInitialize : 1;                // 0x01C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsPtArmTypeIconInfosInitialize : 1;           // 0x01C0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mbInitializedButtonInfo : 1;                   // 0x01C0 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray<struct FBrgUIImageWithGuide>                mItemIconInfos;                                // 0x01C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUIImageWithGuide>                mPtArmTypeIconInfos;                           // 0x01D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUIImageWithGuide>                mPtArmTypeIconInfosSizeS;                      // 0x01E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgUIImage*>                         mSizeLButtonArray;                             // 0x01F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mSizeLButtonGuide;                             // 0x0204 (0x0008) [0x0000000000000000]               
	TArray<class UBrgUIImage*>                         mSizeSButtonArray;                             // 0x020C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mSizeSButtonGuide00;                           // 0x021C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mSizeSButtonGuide01;                           // 0x0224 (0x0008) [0x0000000000000000]               
	TArray<class UBrgUIImage*>                         mSizeXSButtonArray;                            // 0x022C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImage*                                 mSizeXSButtonGuide;                            // 0x023C (0x0008) [0x0000000000000000]               
	TArray<class UBrgUIImage*>                         mSizeLKeyArray;                                // 0x0244 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgUIImage*>                         mSizeSKeyArray;                                // 0x0254 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgUIImage*>                         mSizeXSKeyArray;                               // 0x0264 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgUIImage*>                         mSizeLMouseArray;                              // 0x0274 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgUIImage*>                         mSizeSMouseArray;                              // 0x0284 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgUIImage*>                         mSizeXSMouseArray;                             // 0x0294 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_OnMemory");
		}

		return uClassPointer;
	};

	bool IsPadCtrl();
	class FString GetUIKeyFromButtondef(uint8_t btn);
	class FString GetPlayerKeyFromButtonDef(uint8_t btn);
	void CheckKeyImageArray();
	int32_t GetKeyImageIndex(class FString Key);
	uint8_t GetButtonDefFromKeyConfig(uint8_t btn);
	uint8_t ConvertKeyConfigButtonDef(uint8_t btn);
	class UBrgUIImage* GetUIPlusButtonImage(uint8_t btn);
	class UBrgUIImage* GetMouseImageXS(uint8_t mouse);
	class UBrgUIImage* GetMouseImageS(uint8_t mouse);
	class UBrgUIImage* GetMouseImageL(uint8_t mouse);
	class UBrgUIImage* GetShiftKeyImageXSGuide();
	class UBrgUIImage* GetShiftKeyImageXS();
	class UBrgUIImage* GetKeyImageXSUI(uint8_t def, unsigned long fix);
	class UBrgUIImage* GetKeyImageXSPlayer(uint8_t def, unsigned long fix);
	class UBrgUIImage* GetKeyImageXS(class FString Key);
	class UBrgUIImage* GetKeyImageS(class FString Key);
	class UBrgUIImage* GetKeyImageL(class FString Key);
	class UBrgUIImage* GetButtonGuideXS();
	class UBrgUIImage* GetButtonImageXS(uint8_t btn, unsigned long fix);
	class UBrgUIImage* GetButtonGuideS01();
	class UBrgUIImage* GetButtonGuideS00();
	class UBrgUIImage* GetButtonImageSEx(uint8_t btn);
	class UBrgUIImage* GetButtonImageS(uint8_t btn, unsigned long fix);
	class UBrgUIImage* GetButtonGuideL();
	class UBrgUIImage* GetButtonImageLEx(uint8_t btn);
	class UBrgUIImage* GetButtonImageL(uint8_t btn, unsigned long fix);
	bool IsSetupButtonImage();
	bool GetPartTypeIcon(class FString inType, struct FBrgUIImageWithGuide& inImageWithGuide);
	void GetGradeStarIcon(struct FBrgUIImageWithGuide& inImageWithGuide);
	bool GetFighterTypeMiniIconImage_Enma(class FString inFighterTypeID, unsigned long inIsOn, struct FBrgUIImageWithGuide& inImageWithGuide);
	bool GetFighterTypeMiniIconImage(class FString inFighterTypeID, struct FBrgUIImageWithGuide& inImageWithGuide);
	bool GetStatEfcIcon(class FString inStatEfcIconId, struct FBrgUIImageWithGuide& inImageWithGuide);
	bool GetBstEfcIcon(class FString inBstEfcId, struct FBrgUIImageWithGuide& inImageWithGuide, struct FColor& inIconColor);
	bool GetMsrEfcIcon(class FString inMsrEfcId, struct FBrgUIImageWithGuide& inImageWithGuide, struct FColor& inIconColor);
	bool GetPtArmTypeIconImage(class FString inPtArmTypeId, TArray<struct FBrgUIImageWithGuide> inPtArmTypeIconInfos, struct FBrgUIImageWithGuide& inImageWithGuide);
	bool GetPtArmTypeIconInfos(class FString inGroupPath, TArray<struct FBrgDbPartArmType> inPtArmTypeList, TArray<struct FBrgUIImageWithGuide>& inPtArmTypeIconInfos);
	bool GetPtArmTypeIcon(class FString inPtArmTypeId, unsigned long inSize_S, struct FBrgUIImageWithGuide& inImageWithGuide);
	bool GetHvnTreasureIcon(struct FBrgUIImageWithGuide& inImageWithGuide);
	bool GetMsrIcon(struct FBrgUIImageWithGuide& inImageWithGuide);
	bool GetItemIcon(class FString inItemId, struct FBrgUIImageWithGuide& inImageWithGuide);
	void SetupSteamMouseImage();
	void SetupSteamKeyImage();
	void eventSetupSteamBtnImage();
	void eventSetupPS4BtnImage();
	void eventTerminate();
	void CreateResource();
};

// Class BrgGameBase.BrgUIResource_OnMemory_Hub
// 0x0180 (0x0088 - 0x0208)
class UBrgUIResource_OnMemory_Hub : public UBrgUIResource__OnMemoryBase
{
public:
	class UBrgUIResource_FreezerMenu_v01*              mFreezerMenuResource_v01;                      // 0x0088 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_MotherBarbs*                  mMotherBarbsResource;                          // 0x0090 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_NaomiQuests*                  mNaomiQuestsResource;                          // 0x0098 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_questmenu_STM_v00*            mNaomiQuestsResource_STM;                      // 0x00A0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Tips_v00*                     mTips_v00_Resource;                            // 0x00A8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_RadioMenu*                    mRadioMenuResource;                            // 0x00B0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_RewardBox_v00*                mRewardBoxResource_v00;                        // 0x00B8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_RewardBox_v00*                mRewardBoxResource_v00_UseMask_OneMinus;       // 0x00C0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_RewardBox_v01*                mRewardBoxResource_v01;                        // 0x00C8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Defense_v00*             mFort_Defense_v00_Resource;                    // 0x00D0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Facility_v00*            mFort_Facility_v00_Resource;                   // 0x00D8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Raid_v00*                mFort_Raid_v00_Resource;                       // 0x00E0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Ranking_v00*             mFort_Ranking_v00_Resource;                    // 0x00E8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_MyTeam_v00*              mFort_MyTeam_v00_Resource;                     // 0x00F0 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Raid_Info_v00*           mFort_Raid_Info_v00_Resource;                  // 0x00F8 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Report_v00*              mFort_Report_v00_Resource;                     // 0x0100 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_ReportDetail_v00*        mFort_ReportDetail_v00_Resource;               // 0x0108 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Result_v00*              mFort_Result_v00_Resource;                     // 0x0110 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Result_v01*              mFort_Result_v01_Resource;                     // 0x0118 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Result_v00_Lang*         mFort_Result_v00_Lang_Resource;                // 0x0120 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_TeamChange_v00*          mFort_TeamChange_v00_Resource;                 // 0x0128 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Top_v00*                 mFort_Top_v00_Resource;                        // 0x0130 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_RoomCustom_v00*          mFort_RoomCustom_v00_Resource;                 // 0x0138 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Fort_Whistle_v00*             mFort_Whistle_v00_Resource;                    // 0x0140 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Prison_v00*                   mPrison_v00_Resource;                          // 0x0148 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_StampEx_v00*                  mStampEx_v00_Resource;                         // 0x0150 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_Mushroom_v00*                 mMushroom_v00_Resource;                        // 0x0158 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_SystemWindow_v02*             mSystemWindow_v02Resource;                     // 0x0160 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_SystemWindow_v03*             mSystemWindow_v03Resource;                     // 0x0168 (0x0008) [0x0000000000000000]               
	class UBrgUIResource_InsuranceMenu_Cover_v00*      mInsuranceMenu_Cover_v00Resource;              // 0x0170 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_Top_Mask_v00;              // 0x0178 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_Top_Shot_v00;              // 0x0180 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_Top_Shot_v01;              // 0x0188 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_Top_Effect_v00;            // 0x0190 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_Top_Cursor_v00;            // 0x0198 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_Top_Base_D_v00;            // 0x01A0 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_Top_Base_D_v01;            // 0x01A8 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_Top_Base_U_v00;            // 0x01B0 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_Top_Base_U_v01;            // 0x01B8 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_TeamChange_Mask_v00;       // 0x01C0 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_Vendetta;                  // 0x01C8 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_MysteryBag_v00;            // 0x01D0 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_MysteryBag_v01;            // 0x01D8 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_MysteryBag_v02;            // 0x01E0 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_MysteryBag_v03;            // 0x01E8 (0x0008) [0x0000000000000000]               
	class UBrgUIImage_Stream*                          mUI_Fort_TX_UI_Fort_MysteryBag_v04;            // 0x01F0 (0x0008) [0x0000000000000000]               
	TArray<class FString>                              mEmblemIds;                                    // 0x01F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_OnMemory_Hub");
		}

		return uClassPointer;
	};

	void CreateResource();
	void CreateResourceNative();
	void UnloadFortIcon();
	void UnloadEmblem();
	void LoadEmblem();
	void eventTerminate();
};

// Class BrgGameBase.BrgUIResource_Common
// 0x002C (0x0060 - 0x008C)
class UBrgUIResource_Common : public UObject
{
public:
	unsigned long                                      mSetupImage : 1;                               // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mInitialize : 1;                               // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray<class UBrgUITexture2DLoader*>               mImageLoaders;                                 // 0x0064 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UBrgUIImageBase*>                     mUIBaseImages;                                 // 0x0074 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUIImageMapInfoSet*                       mImageMapInfoSet;                              // 0x0084 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Common");
		}

		return uClassPointer;
	};

	bool LoadProcess();
	void SetupImageCommon();
	void PrivateSetupImage();
	void eventSetupImage();
	bool SetImageLoadState(unsigned long IsLoad, unsigned long IsLoadCompCheckOnly);
	void Terminate();
	void SetupLoadImage(class FString inPackageName, class FString inImageName, int32_t inImageNum, class FString inUnrealPackageName, class FString inUnrealImageName);
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_AreaMap
// 0x0A64 (0x008C - 0x0AF0)
class UBrgUIResource_AreaMap : public UBrgUIResource_Common
{
public:
	uint8_t                                            mUseMask;                                      // 0x008C (0x0001) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg;                                         // 0x0090 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_areamap_v00__map_floor_all          l_map_floor_all;                               // 0x0098 (0x0188) [0x0000000000000000]               
	struct Fstx_ui_areamap_v00__map_valve_all          l_map_valve_all;                               // 0x0220 (0x08D0) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_AreaMap");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_ButtonGuide
// 0x01AC (0x008C - 0x0238)
class UBrgUIResource_ButtonGuide : public UBrgUIResource_Common
{
public:
	uint8_t                                            mUseMask;                                      // 0x008C (0x0001) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg;                                         // 0x0090 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_buttonguide_v00__buttonguide_all    l_buttonguide_all;                             // 0x0098 (0x01A0) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_ButtonGuide");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_ButtonGuide_STM_v00
// 0x1264 (0x008C - 0x12F0)
class UBrgUIResource_ButtonGuide_STM_v00 : public UBrgUIResource_Common
{
public:
	uint8_t                                            mUseMask;                                      // 0x008C (0x0001) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg;                                         // 0x0090 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_buttonguide_stm_v00__buttonguide_stm_v00_all l_buttonguide_stm_v00_all;                     // 0x0098 (0x0298) [0x0000000000000000]               
	struct Fstx_ui_buttonguide_stm_v00__buttonguide_stm_v01_all l_buttonguide_stm_v01_all;                     // 0x0330 (0x0FC0) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_ButtonGuide_STM_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_ElevatorMenu
// 0x0180 (0x008C - 0x020C)
class UBrgUIResource_ElevatorMenu : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_elevator_v00___bg                   l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_elevator_v00___guide_01             l__guide_01;                                   // 0x0094 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_elevator_v00__deathmetal_all        l_deathmetal_all;                              // 0x00AC (0x0020) [0x0000000000000000]               
	struct Fstx_ui_elevator_v00__coin_all              l_coin_all;                                    // 0x00CC (0x0020) [0x0000000000000000]               
	struct Fstx_ui_elevator_v00__scrollbar_all         l_scrollbar_all;                               // 0x00EC (0x0018) [0x0000000000000000]               
	struct Fstx_ui_elevator_v00__elevator_all          l_elevator_all;                                // 0x0104 (0x00D8) [0x0000000000000000]               
	struct Fstx_ui_elevator_v00__elevator_h_all        l_elevator_h_all;                              // 0x01DC (0x0030) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_ElevatorMenu");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Memo_v00
// 0x10C4 (0x008C - 0x1150)
class UBrgUIResource_EnmaMenu_Memo_v00 : public UBrgUIResource_Common
{
public:
	uint8_t                                            mUseMask;                                      // 0x008C (0x0001) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00___bg              l__bg;                                         // 0x0090 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__base_memo_all    l_base_memo_all;                               // 0x00A8 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__memo_help_all    l_memo_help_all;                               // 0x00B8 (0x0390) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__memo_quest_all   l_memo_quest_all;                              // 0x0448 (0x0280) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__memo_mail_all    l_memo_mail_all;                               // 0x06C8 (0x0178) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__memo_catalog_all l_memo_catalog_all;                            // 0x0840 (0x0178) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__memo_magazine_all l_memo_magazine_all;                           // 0x09B8 (0x0130) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__memo_sticker_all l_memo_sticker_all;                            // 0x0AE8 (0x01E0) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__memo_beast_all   l_memo_beast_all;                              // 0x0CC8 (0x01B8) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__memo_mushroom_all l_memo_mushroom_all;                           // 0x0E80 (0x0190) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__memo_masterlevell_all l_memo_masterlevell_all;                       // 0x1010 (0x0108) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__memo_fighter_all l_memo_fighter_all;                            // 0x1118 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_memo_v00__base_tape_all    l_base_tape_all;                               // 0x1140 (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Memo_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Menu_v00
// 0x00D0 (0x008C - 0x015C)
class UBrgUIResource_EnmaMenu_Menu_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_menu_v00__base_menu_all    l_base_menu_all;                               // 0x0094 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_menu_v00__postit_all       l_postit_all;                                  // 0x00AC (0x0070) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_menu_v00__cursol_all       l_cursol_all;                                  // 0x011C (0x0038) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_menu_all;                             // 0x0154 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Menu_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Menu_v01
// 0x0118 (0x008C - 0x01A4)
class UBrgUIResource_EnmaMenu_Menu_v01 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_menu_v01__menu_all         l_menu_all;                                    // 0x0094 (0x0078) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_menu_v01__menu_title_all   l_menu_title_all;                              // 0x010C (0x0098) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Menu_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Beast_v00
// 0x02E8 (0x008C - 0x0374)
class UBrgUIResource_EnmaMenu_Page_Beast_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_background;                             // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_beast_v00__scrollbar_all l_scrollbar_all;                               // 0x009C (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_beast_v00__base_masking_all l_base_masking_all;                            // 0x00C4 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_beast_v00__icon_postit_all l_icon_postit_all;                             // 0x00D4 (0x0278) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_beast_v00__icon_seal_all l_icon_seal_all;                               // 0x034C (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v00;                             // 0x035C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v01;                             // 0x0364 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x036C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Beast_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Catalog_v00
// 0x00C0 (0x008C - 0x014C)
class UBrgUIResource_EnmaMenu_Page_Catalog_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_background;                             // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_catalog_v00__base_masking_all l_base_masking_all;                            // 0x009C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_catalog_v00__icon_page_all l_icon_page_all;                               // 0x00AC (0x0080) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_icon_page_big;                        // 0x012C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v00;                             // 0x0134 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v01;                             // 0x013C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x0144 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Catalog_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Fighter_v00
// 0x07C0 (0x008C - 0x084C)
class UBrgUIResource_EnmaMenu_Page_Fighter_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_fighter_v00__scrollbar_all l_scrollbar_all;                               // 0x0094 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_fighter_v00__base_masking_all l_base_masking_all;                            // 0x00BC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_fighter_v00__2p_all   l_2p_all;                                      // 0x00CC (0x0190) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_fighter_v00__1p_all   l_1p_all;                                      // 0x025C (0x03A0) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_fighter_v00__icon_postit_all l_icon_postit_all;                             // 0x05FC (0x01D0) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_fighter_v00__icon_seal_all l_icon_seal_all;                               // 0x07CC (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_v01;                                    // 0x07DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_v00;                                    // 0x07E4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_fighter_v00__cursol_all l_cursol_all;                                  // 0x07EC (0x0058) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x0844 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Fighter_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Help_v00
// 0x0230 (0x008C - 0x02BC)
class UBrgUIResource_EnmaMenu_Page_Help_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_help_v00__scrollbar_all l_scrollbar_all;                               // 0x0094 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_help_v00__icon_postit_all l_icon_postit_all;                             // 0x00BC (0x00D0) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_help_v00__icon_new_all l_icon_new_all;                                // 0x018C (0x0078) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_help_v00__cursol_all  l_cursol_all;                                  // 0x0204 (0x0080) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_help_v00__base_masking_all l_base_masking_all;                            // 0x0284 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_help_v00__icon_seal_all l_icon_seal_all;                               // 0x0294 (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v00;                             // 0x02A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v01;                             // 0x02AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x02B4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Help_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Index_v00
// 0x0188 (0x008C - 0x0214)
class UBrgUIResource_EnmaMenu_Page_Index_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_background;                             // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_index_v00__icon_postit_all l_icon_postit_all;                             // 0x009C (0x0120) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_index_v00__cursol_all l_cursol_all;                                  // 0x01BC (0x0040) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page_v01;                        // 0x01FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page_v00;                        // 0x0204 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_tab_v00;                         // 0x020C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Index_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Magazine_v00
// 0x0170 (0x008C - 0x01FC)
class UBrgUIResource_EnmaMenu_Page_Magazine_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_background;                             // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_magazine_v00__base_masking_all l_base_masking_all;                            // 0x009C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_magazine_v00__icon_page_all l_icon_page_all;                               // 0x00AC (0x0110) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_magazine_v00__text_all l_text_all;                                    // 0x01BC (0x0020) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_icon_page_big;                        // 0x01DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v00;                             // 0x01E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v01;                             // 0x01EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x01F4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Magazine_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Mail_v00
// 0x0240 (0x008C - 0x02CC)
class UBrgUIResource_EnmaMenu_Page_Mail_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_mail_v00__scrollbar_all l_scrollbar_all;                               // 0x0094 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_mail_v00__icon_postit_all l_icon_postit_all;                             // 0x00BC (0x00E0) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_mail_v00__icon_new_all l_icon_new_all;                                // 0x019C (0x0078) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_mail_v00__base_masking_all l_base_masking_all;                            // 0x0214 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_mail_v00__cursol_all  l_cursol_all;                                  // 0x0224 (0x0080) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_mail_v00__icon_seal_all l_icon_seal_all;                               // 0x02A4 (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v00;                             // 0x02B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v01;                             // 0x02BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x02C4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Mail_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_MasterLevel_v00
// 0x03B8 (0x008C - 0x0444)
class UBrgUIResource_EnmaMenu_Page_MasterLevel_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_masterlevel_v00__scrollbar_all l_scrollbar_all;                               // 0x0094 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_masterlevel_v00__base_masking_all l_base_masking_all;                            // 0x00BC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_masterlevel_v00__icon_postit_all l_icon_postit_all;                             // 0x00CC (0x0350) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_masterlevel_v00__icon_seal_all l_icon_seal_all;                               // 0x041C (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v00;                             // 0x042C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v01;                             // 0x0434 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x043C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_MasterLevel_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Mushroom_v00
// 0x0320 (0x008C - 0x03AC)
class UBrgUIResource_EnmaMenu_Page_Mushroom_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_background;                             // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_mushroom_v00__scrollbar_all l_scrollbar_all;                               // 0x009C (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_mushroom_v00__base_masking_all l_base_masking_all;                            // 0x00C4 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_mushroom_v00__icon_postit_all l_icon_postit_all;                             // 0x00D4 (0x02B0) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_mushroom_v00__icon_seal_all l_icon_seal_all;                               // 0x0384 (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v00;                             // 0x0394 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v01;                             // 0x039C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x03A4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Mushroom_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Omoide_v00
// 0x00C8 (0x008C - 0x0154)
class UBrgUIResource_EnmaMenu_Page_Omoide_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_corkboard;                              // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_omoide_v00__scrollbar_all l_scrollbar_all;                               // 0x009C (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_omoide_v00__base_photo_all l_base_photo_all;                              // 0x00C4 (0x0078) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_omoide_v00__base_masking_all l_base_masking_all;                            // 0x013C (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x014C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Omoide_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Quest_v00
// 0x01E0 (0x008C - 0x026C)
class UBrgUIResource_EnmaMenu_Page_Quest_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_quest_v00__scrollbar_all l_scrollbar_all;                               // 0x0094 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_quest_v00__base_masking_all l_base_masking_all;                            // 0x00BC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_quest_v00__icon_postit_all l_icon_postit_all;                             // 0x00CC (0x0188) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v00;                             // 0x0254 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v01;                             // 0x025C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x0264 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Quest_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Senpai_v00
// 0x0208 (0x008C - 0x0294)
class UBrgUIResource_EnmaMenu_Page_Senpai_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_page2;                                  // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_senpai_v00__scrollbar_all l_scrollbar_all;                               // 0x009C (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_senpai_v00__entry_all l_entry_all;                                   // 0x00C4 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_senpai_v00__icon_line_all l_icon_line_all;                               // 0x00EC (0x0068) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_senpai_v00__text_all  l_text_all;                                    // 0x0154 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_senpai_v00__text_guide_all l_text_guide_all;                              // 0x0164 (0x0108) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_senpai_v00__base_masking_all l_base_masking_all;                            // 0x026C (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v00;                             // 0x027C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v01;                             // 0x0284 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x028C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Senpai_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Sticker_v00
// 0x0328 (0x008C - 0x03B4)
class UBrgUIResource_EnmaMenu_Page_Sticker_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__base_page;                                  // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_background;                             // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_sticker_v00__scrollbar_all l_scrollbar_all;                               // 0x009C (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_sticker_v00__base_masking_all l_base_masking_all;                            // 0x00C4 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_sticker_v00__icon_postit_all l_icon_postit_all;                             // 0x00D4 (0x02B8) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_page_sticker_v00__icon_seal_all l_icon_seal_all;                               // 0x038C (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v00;                             // 0x039C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_postit_v01;                             // 0x03A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x03AC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_Sticker_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Page_v00
// 0x0018 (0x008C - 0x00A4)
class UBrgUIResource_EnmaMenu_Page_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_page;                                   // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_page;                            // 0x009C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Page_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Paperdoll_v00
// 0x0098 (0x008C - 0x0124)
class UBrgUIResource_EnmaMenu_Paperdoll_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_paperdoll_v00;                               // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_paperdoll_v01;                               // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_glasses_v04;                                 // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_glasses_v03;                                 // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_glasses_v02;                                 // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_glasses_v01;                                 // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_glasses_v00;                                 // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_skateboard;                                  // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_pc;                                          // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_book;                                        // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_deathdrive;                                  // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_audio;                                       // 0x00EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_balloon;                                     // 0x00F4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_scythe;                                      // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_kiwako;                                      // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_meijin;                                      // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_yotsuyama;                                   // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_uncledeath;                                  // 0x011C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Paperdoll_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Stamp_Arrow
// 0x0040 (0x008C - 0x00CC)
class UBrgUIResource_EnmaMenu_Stamp_Arrow : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_enmamenu_stamp_arrow___bg           l__bg;                                         // 0x008C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_stamp_arrow__arrow_all     l_arrow_all;                                   // 0x009C (0x0030) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Stamp_Arrow");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Stamp_v00
// 0x02C8 (0x008C - 0x0354)
class UBrgUIResource_EnmaMenu_Stamp_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_enmamenu_stamp_v00__bg              l_bg;                                          // 0x008C (0x0028) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_stamp_v00__icon_stamp_all  l_icon_stamp_all;                              // 0x00B4 (0x01A0) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_stamp_v00__cloud_all       l_cloud_all;                                   // 0x0254 (0x0100) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Stamp_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Stamp_v01
// 0x0168 (0x008C - 0x01F4)
class UBrgUIResource_EnmaMenu_Stamp_v01 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_v00;                                    // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_stamp_v01__perfect_all     l_perfect_all;                                 // 0x009C (0x0050) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_stamp_v01__good            l_good;                                        // 0x00EC (0x0050) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_stamp_v01__miss            l_miss;                                        // 0x013C (0x0050) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_stamp_v01___guide_all      l__guide_all;                                  // 0x018C (0x0068) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Stamp_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_STM_Tab_v00
// 0x004C (0x008C - 0x00D8)
class UBrgUIResource_EnmaMenu_STM_Tab_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_stm_tab_v00__button_r_all  l_button_r_all;                                // 0x0094 (0x0020) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_stm_tab_v00__button_l_all  l_button_l_all;                                // 0x00B4 (0x0020) [0x0000000000000000]               
	unsigned long                                      mAddBlendDraw : 1;                             // 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_STM_Tab_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_Tab_v00
// 0x01A8 (0x008C - 0x0234)
class UBrgUIResource_EnmaMenu_Tab_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_tab_v00__base_tab_all      l_base_tab_all;                                // 0x0094 (0x0030) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_tab_v00__icon_tab_all      l_icon_tab_all;                                // 0x00C4 (0x0068) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_tab_v00__icon_new_all      l_icon_new_all;                                // 0x012C (0x0090) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_tab_v00__text_all          l_text_all;                                    // 0x01BC (0x0030) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_tab_v00___guide_tabtitle_all l__guide_tabtitle_all;                         // 0x01EC (0x0030) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_tab_v00;                         // 0x021C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_tab_v00__button_stm        l_button_stm;                                  // 0x0224 (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_Tab_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_EnmaMenu_v01
// 0x2428 (0x008C - 0x24B4)
class UBrgUIResource_EnmaMenu_v01 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_enmamenu_v01___bg                   l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_v01__mail_all              l_mail_all;                                    // 0x0094 (0x0508) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_v01__reference_mushroom_all l_reference_mushroom_all;                      // 0x059C (0x0638) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_v01__reference_menu_all    l_reference_menu_all;                          // 0x0BD4 (0x0050) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_v01__quest_all             l_quest_all;                                   // 0x0C24 (0x07D0) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_v01__mydata_senpai_all     l_mydata_senpai_all;                           // 0x13F4 (0x01D8) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_v01__mydata_masterlevel_all l_mydata_masterlevel_all;                      // 0x15CC (0x0E28) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_v01__mydata_menu_all       l_mydata_menu_all;                             // 0x23F4 (0x0070) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_ring;                                   // 0x2464 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_v01__cursol_all            l_cursol_all;                                  // 0x246C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_enmamenu_v01__guide_01              l_guide_01;                                    // 0x247C (0x0038) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenu_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Defense_v00
// 0x0470 (0x008C - 0x04FC)
class UBrgUIResource_Fort_Defense_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_defense_v00___bg                    l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_defense_v00__reinforce_all          l_reinforce_all;                               // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_defense_v00__setting_all            l_setting_all;                                 // 0x009C (0x01C0) [0x0000000000000000]               
	struct Fstx_ui_defense_v00__mydata_all             l_mydata_all;                                  // 0x025C (0x02A0) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Defense_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Facility_v00
// 0x0128 (0x008C - 0x01B4)
class UBrgUIResource_Fort_Facility_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_facility_v00___bg                   l__bg;                                         // 0x008C (0x0020) [0x0000000000000000]               
	struct Fstx_ui_facility_v00__upgrade_all           l_upgrade_all;                                 // 0x00AC (0x00F8) [0x0000000000000000]               
	struct Fstx_ui_facility_v00__mydata_all            l_mydata_all;                                  // 0x01A4 (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Facility_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_MyTeam_v00
// 0x02E8 (0x008C - 0x0374)
class UBrgUIResource_Fort_MyTeam_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_fort_myteam_v00___bg                l__bg;                                         // 0x008C (0x0058) [0x0000000000000000]               
	struct Fstx_ui_fort_myteam_v00__hate_all           l_hate_all;                                    // 0x00E4 (0x00D8) [0x0000000000000000]               
	struct Fstx_ui_fort_myteam_v00__team_all           l_team_all;                                    // 0x01BC (0x0080) [0x0000000000000000]               
	struct Fstx_ui_fort_myteam_v00__status_all         l_status_all;                                  // 0x023C (0x0078) [0x0000000000000000]               
	struct Fstx_ui_fort_myteam_v00__newplayerlist_all  l_newplayerlist_all;                           // 0x02B4 (0x0098) [0x0000000000000000]               
	struct Fstx_ui_fort_myteam_v00__setting_all        l_setting_all;                                 // 0x034C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_fort_myteam_v00__mydata_all         l_mydata_all;                                  // 0x035C (0x0018) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_MyTeam_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Raid_Info_v00
// 0x0080 (0x008C - 0x010C)
class UBrgUIResource_Fort_Raid_Info_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_fort_raid_info_v00___bg             l__bg;                                         // 0x008C (0x0018) [0x0000000000000000]               
	struct Fstx_ui_fort_raid_info_v00__fort_raid_v00   l_fort_raid_v00;                               // 0x00A4 (0x0050) [0x0000000000000000]               
	struct Fstx_ui_fort_raid_info_v00__map_floor_all   l_map_floor_all;                               // 0x00F4 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_fort_raid_info_v00__playerlist_all  l_playerlist_all;                              // 0x0104 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Raid_Info_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Raid_v00
// 0x0410 (0x008C - 0x049C)
class UBrgUIResource_Fort_Raid_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_raid_v00___bg                       l__bg;                                         // 0x008C (0x0020) [0x0000000000000000]               
	struct Fstx_ui_raid_v00__playerdata_v01            l_playerdata_v01;                              // 0x00AC (0x0030) [0x0000000000000000]               
	struct Fstx_ui_raid_v00__playerdata_v00            l_playerdata_v00;                              // 0x00DC (0x00B8) [0x0000000000000000]               
	struct Fstx_ui_raid_v00__cost_all                  l_cost_all;                                    // 0x0194 (0x0020) [0x0000000000000000]               
	struct Fstx_ui_raid_v00__playerlist_all            l_playerlist_all;                              // 0x01B4 (0x01C0) [0x0000000000000000]               
	struct Fstx_ui_raid_v00__newplayerlist_all         l_newplayerlist_all;                           // 0x0374 (0x0128) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Raid_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Ranking_v00
// 0x01F8 (0x008C - 0x0284)
class UBrgUIResource_Fort_Ranking_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_ranking_v00___bg                    l__bg;                                         // 0x008C (0x0020) [0x0000000000000000]               
	struct Fstx_ui_ranking_v00__setting_all            l_setting_all;                                 // 0x00AC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_ranking_v00__mydata_all             l_mydata_all;                                  // 0x00BC (0x0018) [0x0000000000000000]               
	struct Fstx_ui_ranking_v00__ranking_all            l_ranking_all;                                 // 0x00D4 (0x01B0) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Ranking_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Report_v00
// 0x0600 (0x008C - 0x068C)
class UBrgUIResource_Fort_Report_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_fort_report_v00___bg                l__bg;                                         // 0x008C (0x0058) [0x0000000000000000]               
	struct Fstx_ui_fort_report_v00__scrollbar_all      l_scrollbar_all;                               // 0x00E4 (0x0038) [0x0000000000000000]               
	struct Fstx_ui_fort_report_v00__report_dispute_all l_report_dispute_all;                          // 0x011C (0x0168) [0x0000000000000000]               
	struct Fstx_ui_fort_report_v00__result_dispute_all l_result_dispute_all;                          // 0x0284 (0x00F8) [0x0000000000000000]               
	struct Fstx_ui_fort_report_v00__report_raid_all    l_report_raid_all;                             // 0x037C (0x01F8) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_v00;                                    // 0x0574 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_v01;                                    // 0x057C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_report_v00__popup_all          l_popup_all;                                   // 0x0584 (0x0098) [0x0000000000000000]               
	struct Fstx_ui_fort_report_v00__sort_r             l_sort_r;                                      // 0x061C (0x0030) [0x0000000000000000]               
	struct Fstx_ui_fort_report_v00__mark_detail_all    l_mark_detail_all;                             // 0x064C (0x0040) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Report_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_ReportDetail_v00
// 0x0070 (0x008C - 0x00FC)
class UBrgUIResource_Fort_ReportDetail_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_fort_reportdetail_v00___bg          l__bg;                                         // 0x008C (0x0020) [0x0000000000000000]               
	struct Fstx_ui_fort_reportdetail_v00__map_result_all l_map_result_all;                              // 0x00AC (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_reportdetail_v00__result_all   l_result_all;                                  // 0x00B4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_reportdetail_v00__log_all      l_log_all;                                     // 0x00BC (0x0028) [0x0000000000000000]               
	struct Fstx_ui_fort_reportdetail_v00__chala_image_all l_chala_image_all;                             // 0x00E4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_reportdetail_v00__report_raid_all l_report_raid_all;                             // 0x00EC (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_ReportDetail_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Result_v00
// 0x0398 (0x008C - 0x0424)
class UBrgUIResource_Fort_Result_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_fort_result_v00___bg                l__bg;                                         // 0x008C (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_01;                                   // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__menu_title;                                 // 0x00A4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v00__letters_all        l_letters_all;                                 // 0x00AC (0x00C8) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v00__2p_all             l_2p_all;                                      // 0x0174 (0x00E0) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v00__1p_all             l_1p_all;                                      // 0x0254 (0x01D0) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Result_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Result_v00_Lang
// 0x0078 (0x008C - 0x0104)
class UBrgUIResource_Fort_Result_v00_Lang : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v00_int__image_failed_all l_image_failed_all;                            // 0x0094 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v00_int__image_success_all l_image_success_all;                           // 0x00AC (0x0018) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v00_int__image_time_all l_image_time_all;                              // 0x00C4 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v00_int__image_start_all l_image_start_all;                             // 0x00DC (0x0018) [0x0000000000000000]               
	class FString                                      mLangStr;                                      // 0x00F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Result_v00_Lang");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Result_v01
// 0x0170 (0x008C - 0x01FC)
class UBrgUIResource_Fort_Result_v01 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v01__reward_v00         l_reward_v00;                                  // 0x0094 (0x0030) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_v01;                             // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base_v00;                             // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_v00;                                    // 0x00D4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v01__icon_bag_all       l_icon_bag_all;                                // 0x00DC (0x0080) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v01__text_all           l_text_all;                                    // 0x015C (0x0080) [0x0000000000000000]               
	struct Fstx_ui_fort_result_v01___guide_icon_all    l__guide_icon_all;                             // 0x01DC (0x0020) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Result_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_RoomCustom_v00
// 0x0160 (0x008C - 0x01EC)
class UBrgUIResource_Fort_RoomCustom_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_roomcustom_v00__pattern_all    l_pattern_all;                                 // 0x0094 (0x0088) [0x0000000000000000]               
	struct Fstx_ui_fort_roomcustom_v00__set_all        l_set_all;                                     // 0x011C (0x0058) [0x0000000000000000]               
	struct Fstx_ui_fort_roomcustom_v00__thumbnail_all  l_thumbnail_all;                               // 0x0174 (0x0068) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_pattern_v00;                            // 0x01DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_set_v00;                                // 0x01E4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_RoomCustom_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_TeamChange_v00
// 0x0150 (0x008C - 0x01DC)
class UBrgUIResource_Fort_TeamChange_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_fort_teamchange_v00___bg            l__bg;                                         // 0x008C (0x0058) [0x0000000000000000]               
	struct Fstx_ui_fort_teamchange_v00__teamlist_all   l_teamlist_all;                                // 0x00E4 (0x00B8) [0x0000000000000000]               
	struct Fstx_ui_fort_teamchange_v00__areaforce_s_all l_areaforce_s_all;                             // 0x019C (0x0030) [0x0000000000000000]               
	struct Fstx_ui_fort_teamchange_v00__hate_all       l_hate_all;                                    // 0x01CC (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_teamchange_v00__team_all       l_team_all;                                    // 0x01D4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_TeamChange_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Top_v00
// 0x03E8 (0x008C - 0x0474)
class UBrgUIResource_Fort_Top_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_fort_top_v00___bg                   l__bg;                                         // 0x008C (0x0058) [0x0000000000000000]               
	struct Fstx_ui_fort_top_v00__areaforce_l_all       l_areaforce_l_all;                             // 0x00E4 (0x0080) [0x0000000000000000]               
	struct Fstx_ui_fort_top_v00__teamflag_all          l_teamflag_all;                                // 0x0164 (0x0020) [0x0000000000000000]               
	struct Fstx_ui_fort_top_v00__hate_all              l_hate_all;                                    // 0x0184 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_top_v00__team_all              l_team_all;                                    // 0x018C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_top_v00__battlerush_all        l_battlerush_all;                              // 0x0194 (0x0160) [0x0000000000000000]               
	struct Fstx_ui_fort_top_v00__rank_all              l_rank_all;                                    // 0x02F4 (0x0178) [0x0000000000000000]               
	class UBrgUIImage*                                 l_guide_report_raid_all;                       // 0x046C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Top_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Fort_Whistle_v00
// 0x0368 (0x008C - 0x03F4)
class UBrgUIResource_Fort_Whistle_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_fort_whistle_v00___bg               l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_whistle_v00__reinforce_all     l_reinforce_all;                               // 0x0094 (0x0228) [0x0000000000000000]               
	struct Fstx_ui_fort_whistle_v00__select_all        l_select_all;                                  // 0x02BC (0x0110) [0x0000000000000000]               
	struct Fstx_ui_fort_whistle_v00__scrollbar         l_scrollbar;                                   // 0x03CC (0x0028) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Fort_Whistle_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_FortMonitor
// 0x0088 (0x008C - 0x0114)
class UBrgUIResource_FortMonitor : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_myteam_v01;                             // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_myteam_v00;                             // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_others_v00;                             // 0x00A4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_fort_monitor_v00__text_all          l_text_all;                                    // 0x00AC (0x0058) [0x0000000000000000]               
	struct Fstx_ui_fort_monitor_v00___guide_teamflag_all l__guide_teamflag_all;                         // 0x0104 (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_FortMonitor");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_FreeContinue
// 0x0048 (0x008C - 0x00D4)
class UBrgUIResource_FreeContinue : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_base_v00;                                    // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_freecontinue_v00__balloon_all       l_balloon_all;                                 // 0x0094 (0x0030) [0x0000000000000000]               
	struct Fstx_ui_freecontinue_v00__title             l_title;                                       // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__buttonguide;                                // 0x00CC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_FreeContinue");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_FreezerMenu_STM_Name_v00
// 0x0034 (0x008C - 0x00C0)
class UBrgUIResource_FreezerMenu_STM_Name_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_freezermenu_stm_name_v00__name_all  l_name_all;                                    // 0x0094 (0x0028) [0x0000000000000000]               
	unsigned long                                      mAddBlendDraw : 1;                             // 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_FreezerMenu_STM_Name_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_FreezerMenu_v01
// 0x1088 (0x008C - 0x1114)
class UBrgUIResource_FreezerMenu_v01 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_freezermenu_v01___bg                l__bg;                                         // 0x008C (0x0020) [0x0000000000000000]               
	struct Fstx_ui_freezermenu_v01__result_all         l_result_all;                                  // 0x00AC (0x0430) [0x0000000000000000]               
	struct Fstx_ui_freezermenu_v01__confirm_all        l_confirm_all;                                 // 0x04DC (0x0108) [0x0000000000000000]               
	struct Fstx_ui_freezermenu_v01__fighter_list_all   l_fighter_list_all;                            // 0x05E4 (0x0240) [0x0000000000000000]               
	struct Fstx_ui_freezermenu_v01__top_all            l_top_all;                                     // 0x0824 (0x08E0) [0x0000000000000000]               
	struct Fstx_ui_freezermenu_v01__psn_resource_name_all l_psn_resource_name_all;                       // 0x1104 (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_FreezerMenu_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_HUD6
// 0x0B60 (0x008C - 0x0BEC)
class UBrgUIResource_HUD6 : public UBrgUIResource_Common
{
public:
	uint8_t                                            mUseMask;                                      // 0x008C (0x0001) [0x0000000000000000]               
	unsigned long                                      mAddBlendDraw : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	struct Fstx_ui_hud_base_status_v06___bg            l__bg;                                         // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_gauge_timecount_stm_v01;                     // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_gauge_timecount_stm_v00;                     // 0x00A4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__tutorial_all   l_tutorial_all;                                // 0x00AC (0x0028) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__button_action_all l_button_action_all;                           // 0x00D4 (0x0040) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__guide_goretical l_guide_goretical;                             // 0x0114 (0x0030) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__bossfinish_all l_bossfinish_all;                              // 0x0144 (0x0030) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_v01;                                     // 0x0174 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__equip_armour_all l_equip_armour_all;                            // 0x017C (0x00C0) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__info_enemy_all l_info_enemy_all;                              // 0x023C (0x0028) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__health_boss_all l_health_boss_all;                             // 0x0264 (0x0028) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_retile_v01;                             // 0x028C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_retile_v00;                             // 0x0294 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__status_enemypc_all l_status_enemypc_all;                          // 0x029C (0x0060) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__status_enemy_all l_status_enemy_all;                            // 0x02FC (0x0020) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__lockon_quick   l_lockon_quick;                                // 0x031C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__deathbox_all   l_deathbox_all;                                // 0x0324 (0x0028) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_v03;                                     // 0x034C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__subtitle_all   l_subtitle_all;                                // 0x0354 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__floor_info_all l_floor_info_all;                              // 0x0364 (0x0030) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__timecount_all  l_timecount_all;                               // 0x0394 (0x0068) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__point_all      l_point_all;                                   // 0x03FC (0x00A0) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__timecount_vip_all l_timecount_vip_all;                           // 0x049C (0x0020) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__locater        l_locater;                                     // 0x04BC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__message_all    l_message_all;                                 // 0x04CC (0x0068) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__floorname_all  l_floorname_all;                               // 0x0534 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__info_exp       l_info_exp;                                    // 0x053C (0x0018) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__info_abp       l_info_abp;                                    // 0x0554 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__info_critical  l_info_critical;                               // 0x056C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__info_guard     l_info_guard;                                  // 0x0574 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_v04;                                     // 0x057C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__info_all       l_info_all;                                    // 0x0584 (0x01A0) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_v05;                                     // 0x0724 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__skill_pc_all   l_skill_pc_all;                                // 0x072C (0x00D8) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__statas_all     l_statas_all;                                  // 0x0804 (0x00A0) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__ragegauge_all  l_ragegauge_all;                               // 0x08A4 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__health_all     l_health_all;                                  // 0x08BC (0x0050) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_v06;                                     // 0x090C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__item_all       l_item_all;                                    // 0x0914 (0x0118) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__stm            l_stm;                                         // 0x0A2C (0x0098) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_v07;                                     // 0x0AC4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_base_status_v06__equip_all      l_equip_all;                                   // 0x0ACC (0x0120) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_HUD6");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Icon_Info_v00
// 0x1710 (0x008C - 0x179C)
class UBrgUIResource_Icon_Info_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg_action;                                  // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__action_hud_item_all  l_action_hud_item_all;                         // 0x0094 (0x0250) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_info_item;                               // 0x02E4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__info_item_all        l_info_item_all;                               // 0x02EC (0x04D8) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_material;                                // 0x07C4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__material_item_all    l_material_item_all;                           // 0x07CC (0x0020) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__material_r_item_all  l_material_r_item_all;                         // 0x07EC (0x03A0) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__material_n_item_all  l_material_n_item_all;                         // 0x0B8C (0x0300) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_subtitle;                                // 0x0E8C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__memo_subtitle;                              // 0x0E94 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__skin_all             l_skin_all;                                    // 0x0E9C (0x0030) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__fighter_all          l_fighter_all;                                 // 0x0ECC (0x0030) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__prison_all           l_prison_all;                                  // 0x0EFC (0x0030) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__freezer_all          l_freezer_all;                                 // 0x0F2C (0x0220) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__rewardbox_item_all   l_rewardbox_item_all;                          // 0x114C (0x0170) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__sort_item_all        l_sort_item_all;                               // 0x12BC (0x0188) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__action_item_all      l_action_item_all;                             // 0x1444 (0x00F0) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__subtitle_item_all    l_subtitle_item_all;                           // 0x1534 (0x01A8) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg;                                         // 0x16DC (0x0008) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__mysterybag_all       l_mysterybag_all;                              // 0x16E4 (0x0060) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v00__hernia_all           l_hernia_all;                                  // 0x1744 (0x0050) [0x0000000000000000]               
	uint8_t                                            mUseMask;                                      // 0x1794 (0x0001) [0x0000000000000000]               
	unsigned long                                      mAddBlendDraw : 1;                             // 0x1798 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Icon_Info_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Icon_Info_v01
// 0x08D1 (0x008C - 0x095D)
class UBrgUIResource_Icon_Info_v01 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v01__stefcicon_all        l_stefcicon_all;                               // 0x0094 (0x0208) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v01__master_level2        l_master_level2;                               // 0x029C (0x0360) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v01__master_level         l_master_level;                                // 0x05FC (0x0360) [0x0000000000000000]               
	uint8_t                                            mUseMask;                                      // 0x095C (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Icon_Info_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Icon_Info_v02
// 0x0549 (0x008C - 0x05D5)
class UBrgUIResource_Icon_Info_v02 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v02__reinforce_all        l_reinforce_all;                               // 0x0094 (0x0090) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v02__ftypicon_enma_all    l_ftypicon_enma_all;                           // 0x0124 (0x0108) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v02__ftypicon_all         l_ftypicon_all;                                // 0x022C (0x0088) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v02__tdmicon_all          l_tdmicon_all;                                 // 0x02B4 (0x0138) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v02__resourceicon_all     l_resourceicon_all;                            // 0x03EC (0x0038) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v02__upgradeicon_all      l_upgradeicon_all;                             // 0x0424 (0x0048) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v02__tabicon_all          l_tabicon_all;                                 // 0x046C (0x00B8) [0x0000000000000000]               
	struct Fstx_ui_icon_info_v02__menuicon_all         l_menuicon_all;                                // 0x0524 (0x00A8) [0x0000000000000000]               
	class UBrgUIImage*                                 l__memo_yoshimura;                             // 0x05CC (0x0008) [0x0000000000000000]               
	uint8_t                                            mUseMask;                                      // 0x05D4 (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Icon_Info_v02");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Icon_MiniMap
// 0x0240 (0x008C - 0x02CC)
class UBrgUIResource_Icon_MiniMap : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v00       l_minimap_v00;                                 // 0x0094 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v01       l_minimap_v01;                                 // 0x00AC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v02       l_minimap_v02;                                 // 0x00BC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v03       l_minimap_v03;                                 // 0x00CC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v04       l_minimap_v04;                                 // 0x00DC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v05       l_minimap_v05;                                 // 0x00EC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v06       l_minimap_v06;                                 // 0x00FC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v07       l_minimap_v07;                                 // 0x010C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v08       l_minimap_v08;                                 // 0x011C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v10       l_minimap_v10;                                 // 0x012C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v11       l_minimap_v11;                                 // 0x013C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v12       l_minimap_v12;                                 // 0x014C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v13       l_minimap_v13;                                 // 0x015C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__minimap_v14       l_minimap_v14;                                 // 0x016C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_enemypc    l_result_enemypc;                              // 0x017C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_kill_v00   l_result_kill_v00;                             // 0x018C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_kill_v01   l_result_kill_v01;                             // 0x019C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_kill_v02   l_result_kill_v02;                             // 0x01AC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_kill_v03   l_result_kill_v03;                             // 0x01BC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_kill_v04   l_result_kill_v04;                             // 0x01CC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_kill_v05   l_result_kill_v05;                             // 0x01DC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_eat_v00    l_result_eat_v00;                              // 0x01EC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_eat_v01    l_result_eat_v01;                              // 0x01FC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_getitem_v00 l_result_getitem_v00;                          // 0x020C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_getitem_v01 l_result_getitem_v01;                          // 0x021C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_getitem_v02 l_result_getitem_v02;                          // 0x022C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_getitem_v03 l_result_getitem_v03;                          // 0x023C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_getequip_v00 l_result_getequip_v00;                         // 0x024C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_getequip_v01 l_result_getequip_v01;                         // 0x025C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_getequip_v02 l_result_getequip_v02;                         // 0x026C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_getequip_v03 l_result_getequip_v03;                         // 0x027C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_killcoin   l_result_killcoin;                             // 0x028C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_buy        l_result_buy;                                  // 0x029C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_break_v00  l_result_break_v00;                            // 0x02AC (0x0010) [0x0000000000000000]               
	struct Fstx_ui_icon_minimap_v00__result_break_v01  l_result_break_v01;                            // 0x02BC (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Icon_MiniMap");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Icon_Network
// 0x00F8 (0x008C - 0x0184)
class UBrgUIResource_Icon_Network : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_icon_network_v00___bg               l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v24;                            // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v00;                            // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v01;                            // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v02;                            // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v03;                            // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v04;                            // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v05;                            // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v06;                            // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v07;                            // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v08;                            // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v09;                            // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v10;                            // 0x00EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v11;                            // 0x00F4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v12;                            // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v13;                            // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v14;                            // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v15;                            // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v16;                            // 0x011C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v17;                            // 0x0124 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v18;                            // 0x012C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v19;                            // 0x0134 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v20;                            // 0x013C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v21;                            // 0x0144 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v22;                            // 0x014C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_network_v23;                            // 0x0154 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_icon_network2;                        // 0x015C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_icon_network;                         // 0x0164 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_text;                                 // 0x016C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim;                               // 0x0174 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mBlinkSpriteAnim;                              // 0x017C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Icon_Network");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Insurance
// 0x00A0 (0x008C - 0x012C)
class UBrgUIResource_Insurance : public UBrgUIResource_Common
{
public:
	class UBrgUITexture2DLoader*                       mFlipTexture[0xA];                             // 0x008C (0x0050) [0x0000000000000000]               
	class UBrgUIImage*                                 mFlipImage[0xA];                               // 0x00DC (0x0050) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Insurance");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	bool SetImageLoadState(unsigned long IsLoad, unsigned long IsLoadCompCheckOnly);
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_InsuranceMenu
// 0x0490 (0x008C - 0x051C)
class UBrgUIResource_InsuranceMenu : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_insurancemenu_v00___bg              l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_flip_v00;                               // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_insurancemenu_v00__flip_all         l_flip_all;                                    // 0x009C (0x01B8) [0x0000000000000000]               
	struct Fstx_ui_insurancemenu_v00__timelimit_all    l_timelimit_all;                               // 0x0254 (0x0090) [0x0000000000000000]               
	struct Fstx_ui_insurancemenu_v00__item_all         l_item_all;                                    // 0x02E4 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_insurancemenu_v00__balloon_w_all    l_balloon_w_all;                               // 0x030C (0x0078) [0x0000000000000000]               
	struct Fstx_ui_insurancemenu_v00__realization_all  l_realization_all;                             // 0x0384 (0x00B0) [0x0000000000000000]               
	struct Fstx_ui_insurancemenu_v00__vip_all          l_vip_all;                                     // 0x0434 (0x0078) [0x0000000000000000]               
	struct Fstx_ui_insurancemenu_v00__vipupdate_all    l_vipupdate_all;                               // 0x04AC (0x0048) [0x0000000000000000]               
	struct Fstx_ui_insurancemenu_v00__locker_all       l_locker_all;                                  // 0x04F4 (0x0028) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_InsuranceMenu");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_InsuranceMenu_Cover_v00
// 0x0098 (0x008C - 0x0124)
class UBrgUIResource_InsuranceMenu_Cover_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_insurancemenu_cover_v00___bg        l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_insurancemenu_cover_v00__cover_all  l_cover_all;                                   // 0x0094 (0x0090) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_InsuranceMenu_Cover_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_InsuranceMenu_v00_00
// 0x01E0 (0x008C - 0x026C)
class UBrgUIResource_InsuranceMenu_v00_00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_insurancemenu_v00_00__flip_all      l_flip_all;                                    // 0x008C (0x01B8) [0x0000000000000000]               
	struct Fstx_ui_insurancemenu_v00_00__item_all      l_item_all;                                    // 0x0244 (0x0028) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_InsuranceMenu_v00_00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_ItemIcon
// 0x0808 (0x008C - 0x0894)
class UBrgUIResource_ItemIcon : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_icon_item_v00__image_item_all       l_image_item_all;                              // 0x008C (0x07D8) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_frame_item;                           // 0x0864 (0x0008) [0x0000000000000000]               
	class UBrgUIImageMapInfoGroup*                     mArmGroup;                                     // 0x086C (0x0008) [0x0000000000000000]               
	class UBrgUIImageMapInfoGroup*                     mHeadGroup;                                    // 0x0874 (0x0008) [0x0000000000000000]               
	class UBrgUIImageMapInfoGroup*                     mTopsGroup;                                    // 0x087C (0x0008) [0x0000000000000000]               
	class UBrgUIImageMapInfoGroup*                     mBottomsGroup;                                 // 0x0884 (0x0008) [0x0000000000000000]               
	class UBrgUIImageMapInfoGroup*                     mMushroomGroup;                                // 0x088C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_ItemIcon");
		}

		return uClassPointer;
	};

	class UBrgUIImage* GetMushroomIconImage(class FString inMushroomID);
	class UBrgUIImage* GetPartIconImage(class FString inPartID);
	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_ItemIconS
// 0x0258 (0x008C - 0x02E4)
class UBrgUIResource_ItemIconS : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_icon_item_s_v00__image_item_s_all   l_image_item_s_all;                            // 0x008C (0x0248) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_frame_items;                          // 0x02D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImageMapInfoGroup*                     mArmGroup;                                     // 0x02DC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_ItemIconS");
		}

		return uClassPointer;
	};

	class UBrgUIImage* GetPartIconImage(class FString inPartID);
	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_ItemLMenu
// 0x0218 (0x008C - 0x02A4)
class UBrgUIResource_ItemLMenu : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_itemlmenu_v00__menu_all             l_menu_all;                                    // 0x0094 (0x0210) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_ItemLMenu");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Loading_v00
// 0x0098 (0x008C - 0x0124)
class UBrgUIResource_Loading_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_image_death_v16;                             // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v15;                             // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v14;                             // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v13;                             // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v12;                             // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v11;                             // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v10;                             // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v09;                             // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v08;                             // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v07;                             // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v06;                             // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v05;                             // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v04;                             // 0x00EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v03;                             // 0x00F4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v02;                             // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v01;                             // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v00;                             // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim;                               // 0x011C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Loading_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Loading_v00_Blue
// 0x0098 (0x008C - 0x0124)
class UBrgUIResource_Loading_v00_Blue : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_image_death_v16;                             // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v15;                             // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v14;                             // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v13;                             // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v12;                             // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v11;                             // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v10;                             // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v09;                             // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v08;                             // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v07;                             // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v06;                             // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v05;                             // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v04;                             // 0x00EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v03;                             // 0x00F4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v02;                             // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v01;                             // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v00;                             // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim;                               // 0x011C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Loading_v00_Blue");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Loading_v00_Bronze
// 0x0098 (0x008C - 0x0124)
class UBrgUIResource_Loading_v00_Bronze : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_image_death_v16;                             // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v15;                             // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v14;                             // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v13;                             // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v12;                             // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v11;                             // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v10;                             // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v09;                             // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v08;                             // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v07;                             // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v06;                             // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v05;                             // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v04;                             // 0x00EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v03;                             // 0x00F4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v02;                             // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v01;                             // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v00;                             // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim;                               // 0x011C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Loading_v00_Bronze");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Loading_v00_Gold
// 0x0098 (0x008C - 0x0124)
class UBrgUIResource_Loading_v00_Gold : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_image_death_v16;                             // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v15;                             // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v14;                             // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v13;                             // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v12;                             // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v11;                             // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v10;                             // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v09;                             // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v08;                             // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v07;                             // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v06;                             // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v05;                             // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v04;                             // 0x00EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v03;                             // 0x00F4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v02;                             // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v01;                             // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v00;                             // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim;                               // 0x011C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Loading_v00_Gold");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Loading_v00_Silver
// 0x0098 (0x008C - 0x0124)
class UBrgUIResource_Loading_v00_Silver : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_image_death_v16;                             // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v15;                             // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v14;                             // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v13;                             // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v12;                             // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v11;                             // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v10;                             // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v09;                             // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v08;                             // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v07;                             // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v06;                             // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v05;                             // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v04;                             // 0x00EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v03;                             // 0x00F4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v02;                             // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v01;                             // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_image_death_v00;                             // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim;                               // 0x011C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Loading_v00_Silver");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_MiniGame_STM_v00
// 0x0194 (0x008C - 0x0220)
class UBrgUIResource_MiniGame_STM_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_minigame_stm_v00___bg               l__bg;                                         // 0x008C (0x0018) [0x0000000000000000]               
	struct Fstx_ui_minigame_stm_v00__mark_all          l_mark_all;                                    // 0x00A4 (0x0120) [0x0000000000000000]               
	struct Fstx_ui_minigame_stm_v00__button_all        l_button_all;                                  // 0x01C4 (0x0058) [0x0000000000000000]               
	unsigned long                                      mAddBlendDraw : 1;                             // 0x021C (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_MiniGame_STM_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_MiniGame_v00
// 0x02D4 (0x008C - 0x0360)
class UBrgUIResource_MiniGame_v00 : public UBrgUIResource_Common
{
public:
	uint8_t                                            mUseMask;                                      // 0x008C (0x0001) [0x0000000000000000]               
	struct Fstx_ui_minigame_v00___bg                   l__bg;                                         // 0x0090 (0x0018) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_bg;                                     // 0x00A8 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_minigame_v00__line_all              l_line_all;                                    // 0x00B0 (0x0098) [0x0000000000000000]               
	struct Fstx_ui_minigame_v00__neon_left_all         l_neon_left_all;                               // 0x0148 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_minigame_v00__neon_right_all        l_neon_right_all;                              // 0x0160 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_minigame_v00__mark_all              l_mark_all;                                    // 0x0178 (0x0128) [0x0000000000000000]               
	struct Fstx_ui_minigame_v00__count                 l_count;                                       // 0x02A0 (0x0038) [0x0000000000000000]               
	struct Fstx_ui_minigame_v00__miss                  l_miss;                                        // 0x02D8 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_minigame_v00__good                  l_good;                                        // 0x02E8 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_minigame_v00__perfect               l_perfect;                                     // 0x02F8 (0x0038) [0x0000000000000000]               
	struct Fstx_ui_minigame_v00__button_all            l_button_all;                                  // 0x0330 (0x0030) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_MiniGame_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_MotherBarbs
// 0x0140 (0x008C - 0x01CC)
class UBrgUIResource_MotherBarbs : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_motherbarbs_v00___bg                l__bg;                                         // 0x008C (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_title_motherbarbs_off;                  // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_title_motherbarbs;                      // 0x00A4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_motherbarbs_v00__base_ravel_all     l_base_ravel_all;                              // 0x00AC (0x0120) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_MotherBarbs");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Mushroom_v00
// 0x0148 (0x008C - 0x01D4)
class UBrgUIResource_Mushroom_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg_v00;                                     // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_mushroom_v00__base_v02_all          l_base_v02_all;                                // 0x0094 (0x0050) [0x0000000000000000]               
	struct Fstx_ui_mushroom_v00__base_v01_all          l_base_v01_all;                                // 0x00E4 (0x0048) [0x0000000000000000]               
	struct Fstx_ui_mushroom_v00__base_v00_all          l_base_v00_all;                                // 0x012C (0x00A8) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Mushroom_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_NaomiQuests
// 0x0970 (0x008C - 0x09FC)
class UBrgUIResource_NaomiQuests : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_questmenu_v00___bg                  l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_questmenu_v00__desktop_all          l_desktop_all;                                 // 0x0094 (0x0030) [0x0000000000000000]               
	struct Fstx_ui_questmenu_v00__base_questlist_all   l_base_questlist_all;                          // 0x00C4 (0x0698) [0x0000000000000000]               
	struct Fstx_ui_questmenu_v00__base_summary_all     l_base_summary_all;                            // 0x075C (0x0120) [0x0000000000000000]               
	struct Fstx_ui_questmenu_v00__base_contents_all    l_base_contents_all;                           // 0x087C (0x0018) [0x0000000000000000]               
	class UBrgUIImage*                                 l_bg_black60;                                  // 0x0894 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_questmenu_v00__base_attachedfile_all l_base_attachedfile_all;                       // 0x089C (0x0038) [0x0000000000000000]               
	struct Fstx_ui_questmenu_v00__base_popup1_all      l_base_popup1_all;                             // 0x08D4 (0x0060) [0x0000000000000000]               
	struct Fstx_ui_questmenu_v00__base_popup2_all      l_base_popup2_all;                             // 0x0934 (0x0048) [0x0000000000000000]               
	struct Fstx_ui_questmenu_v00__base_popup3_all      l_base_popup3_all;                             // 0x097C (0x0048) [0x0000000000000000]               
	struct Fstx_ui_questmenu_v00__button               l_button;                                      // 0x09C4 (0x0030) [0x0000000000000000]               
	class UBrgUIImage*                                 l_scope_frame_v00;                             // 0x09F4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_NaomiQuests");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_OpeningLogo
// 0x0020 (0x008C - 0x00AC)
class UBrgUIResource_OpeningLogo : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_openinglogo_v00__companylogo_all    l_companylogo_all;                             // 0x008C (0x0020) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_OpeningLogo");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_PauseMenu_STM_v00
// 0x0664 (0x008C - 0x06F0)
class UBrgUIResource_PauseMenu_STM_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_stm_v00__graphic_all      l_graphic_all;                                 // 0x0094 (0x00B8) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_stm_v00__controller_all   l_controller_all;                              // 0x014C (0x0178) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_stm_v00__key_all          l_key_all;                                     // 0x02C4 (0x02F8) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_stm_v00__type_all         l_type_all;                                    // 0x05BC (0x0030) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_stm_v00__cursor_all       l_cursor_all;                                  // 0x05EC (0x0030) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_stm_v00__locater_all      l_locater_all;                                 // 0x061C (0x0090) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_stm_v00__pickup_all       l_pickup_all;                                  // 0x06AC (0x0040) [0x0000000000000000]               
	unsigned long                                      mAddBlendDraw : 1;                             // 0x06EC (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_PauseMenu_STM_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_PauseMenu_v01
// 0x27CC (0x008C - 0x2858)
class UBrgUIResource_PauseMenu_v01 : public UBrgUIResource_Common
{
public:
	unsigned long                                      mAddBlendDraw : 1;                             // 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	struct Fstx_ui_pausemenu_v01__card_all             l_card_all;                                    // 0x0090 (0x00D8) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__gameover_all         l_gameover_all;                                // 0x0168 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01___bg                  l__bg;                                         // 0x0178 (0x0030) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__menu_setting_v01     l_menu_setting_v01;                            // 0x01A8 (0x0040) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__menu_setting_v00     l_menu_setting_v00;                            // 0x01E8 (0x0200) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__fighter_shop_all     l_fighter_shop_all;                            // 0x03E8 (0x0220) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__fighter_select       l_fighter_select;                              // 0x0608 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__select_item_all      l_select_item_all;                             // 0x0620 (0x0B50) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_back;                                    // 0x1170 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__limited_all          l_limited_all;                                 // 0x1178 (0x0078) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__limitedlimit_all     l_limitedlimit_all;                            // 0x11F0 (0x0020) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__cursor_all           l_cursor_all;                                  // 0x1210 (0x0030) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__locater_all          l_locater_all;                                 // 0x1240 (0x0090) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bgbgbgbg;                                   // 0x12D0 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__list_all             l_list_all;                                    // 0x12D8 (0x01F0) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__info_all             l_info_all;                                    // 0x14C8 (0x0540) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__mushroom_all         l_mushroom_all;                                // 0x1A08 (0x05B8) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bgbg;                                       // 0x1FC0 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__menu_setup_all       l_menu_setup_all;                              // 0x1FC8 (0x0050) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__menu_strength_all    l_menu_strength_all;                           // 0x2018 (0x02D0) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__menu_thumbnail_all   l_menu_thumbnail_all;                          // 0x22E8 (0x02A0) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__capacity_all         l_capacity_all;                                // 0x2588 (0x0060) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__frame_thumbnail_all  l_frame_thumbnail_all;                         // 0x25E8 (0x01C8) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__dust_all             l_dust_all;                                    // 0x27B0 (0x0050) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__judge_all            l_judge_all;                                   // 0x2800 (0x0050) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v01__icon_guidebuttons_all l_icon_guidebuttons_all;                       // 0x2850 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_PauseMenu_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_PauseMenu_v02_Shop
// 0x00F8 (0x008C - 0x0184)
class UBrgUIResource_PauseMenu_v02_Shop : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_pausemenu_v02_shop__skilled_v00     l_skilled_v00;                                 // 0x008C (0x0088) [0x0000000000000000]               
	struct Fstx_ui_pausemenu_v02_shop__skilled_v01     l_skilled_v01;                                 // 0x0114 (0x0070) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_PauseMenu_v02_Shop");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Prison_v00
// 0x02E1 (0x008C - 0x036D)
class UBrgUIResource_Prison_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_prison_v00___bg                     l__bg;                                         // 0x008C (0x0020) [0x0000000000000000]               
	struct Fstx_ui_prison_v00__status_all              l_status_all;                                  // 0x00AC (0x0040) [0x0000000000000000]               
	struct Fstx_ui_prison_v00__fighter_all             l_fighter_all;                                 // 0x00EC (0x0090) [0x0000000000000000]               
	struct Fstx_ui_prison_v00__spirit_all              l_spirit_all;                                  // 0x017C (0x0028) [0x0000000000000000]               
	struct Fstx_ui_prison_v00__condition_all           l_condition_all;                               // 0x01A4 (0x0080) [0x0000000000000000]               
	struct Fstx_ui_prison_v00__monitor_all             l_monitor_all;                                 // 0x0224 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_prison_v00__fighter_info_all        l_fighter_info_all;                            // 0x0234 (0x0070) [0x0000000000000000]               
	struct Fstx_ui_prison_v00__menu_all                l_menu_all;                                    // 0x02A4 (0x00A0) [0x0000000000000000]               
	struct Fstx_ui_prison_v00__psn_resource_name_all   l_psn_resource_name_all;                       // 0x0344 (0x0010) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      mRenderTargetTexture;                          // 0x0354 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mRenderTargetTextureImage;                     // 0x035C (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   mMatInstConst;                                 // 0x0364 (0x0008) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x036C (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Prison_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void eventChangeMonitorImage(uint8_t _NextState);
	uint8_t GetMonitorImageState();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_questmenu_STM_v00
// 0x0064 (0x008C - 0x00F0)
class UBrgUIResource_questmenu_STM_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_questmenu_stm_v00___bg              l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_questmenu_stm_v00__button           l_button;                                      // 0x0094 (0x0058) [0x0000000000000000]               
	unsigned long                                      mAddBlendDraw : 1;                             // 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_questmenu_STM_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_RadioMenu
// 0x00E8 (0x008C - 0x0174)
class UBrgUIResource_RadioMenu : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_radiomenu_v00___bg                  l__bg;                                         // 0x008C (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_bg;                                     // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_power_on;                               // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_power_off;                              // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_light_on;                               // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_icon_light_off;                              // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_frame_over;                                  // 0x00C4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_radiomenu_v00__scrollbar_all        l_scrollbar_all;                               // 0x00CC (0x0028) [0x0000000000000000]               
	struct Fstx_ui_radiomenu_v00__icon_scull_all       l_icon_scull_all;                              // 0x00F4 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_radiomenu_v00__text_all             l_text_all;                                    // 0x0104 (0x0058) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_highlight;                              // 0x015C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_radiomenu_v00__mask_all             l_mask_all;                                    // 0x0164 (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_RadioMenu");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_ReachingMail_v00
// 0x0008 (0x008C - 0x0094)
class UBrgUIResource_ReachingMail_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__guide_memo_mail;                            // 0x008C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_ReachingMail_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Reception_v00
// 0x0144 (0x008C - 0x01D0)
class UBrgUIResource_Reception_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_base_bg_v03;                                 // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_reception_v00__noise_all            l_noise_all;                                   // 0x0094 (0x0030) [0x0000000000000000]               
	struct Fstx_ui_reception_v00__target_all           l_target_all;                                  // 0x00C4 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_reception_v00__logo_all             l_logo_all;                                    // 0x00EC (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_line_noise_v00;                              // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_line_noise_v01;                              // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_guide_line_noise;                            // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_bg_v01;                                 // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_bg_v00;                                 // 0x011C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_reception_v00__panel_all            l_panel_all;                                   // 0x0124 (0x0020) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_v01;                                    // 0x0144 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_reception_v00__check_all            l_check_all;                                   // 0x014C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_reception_v00__mission_all          l_mission_all;                                 // 0x0154 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_reception_v00__difficulty_all       l_difficulty_all;                              // 0x0164 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_reception_v00__price_all            l_price_all;                                   // 0x016C (0x0020) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_v00;                                    // 0x018C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_v02;                                    // 0x0194 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_panel_lightl_r;                              // 0x019C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_panel_lightl_l;                              // 0x01A4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_reception_v00__select_all           l_select_all;                                  // 0x01AC (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l_frame_line_v00;                              // 0x01BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_guide_mask;                                  // 0x01C4 (0x0008) [0x0000000000000000]               
	unsigned long                                      mAddBlendDraw : 1;                             // 0x01CC (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Reception_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Result_Floor_Info_v00
// 0x0018 (0x008C - 0x00A4)
class UBrgUIResource_Result_Floor_Info_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_result_floor_info_v00__info_all     l_info_all;                                    // 0x008C (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_banner_v00;                           // 0x009C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Result_Floor_Info_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Result_Floor_v02
// 0x0398 (0x008C - 0x0424)
class UBrgUIResource_Result_Floor_v02 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg_v00;                                     // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__bg_v01;                                     // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__death_v00;                                  // 0x009C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_result_floor_v02__next_all          l_next_all;                                    // 0x00A4 (0x0020) [0x0000000000000000]               
	struct Fstx_ui_result_floor_v02__map_result_all    l_map_result_all;                              // 0x00C4 (0x0070) [0x0000000000000000]               
	struct Fstx_ui_result_floor_v02__result51_all      l_result51_all;                                // 0x0134 (0x00F0) [0x0000000000000000]               
	struct Fstx_ui_result_floor_v02__resultnew_all     l_resultnew_all;                               // 0x0224 (0x0030) [0x0000000000000000]               
	struct Fstx_ui_result_floor_v02__lognew_all        l_lognew_all;                                  // 0x0254 (0x00A8) [0x0000000000000000]               
	struct Fstx_ui_result_floor_v02__result_all        l_result_all;                                  // 0x02FC (0x0028) [0x0000000000000000]               
	struct Fstx_ui_result_floor_v02__log_all           l_log_all;                                     // 0x0324 (0x00A8) [0x0000000000000000]               
	struct Fstx_ui_result_floor_v02__chala_image_all   l_chala_image_all;                             // 0x03CC (0x0058) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Result_Floor_v02");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_RewardBox_v00
// 0x01B4 (0x008C - 0x0240)
class UBrgUIResource_RewardBox_v00 : public UBrgUIResource_Common
{
public:
	uint8_t                                            mUseMask;                                      // 0x008C (0x0001) [0x0000000000000000]               
	struct Fstx_ui_rewardbox_v00___bg_all              l__bg_all;                                     // 0x0090 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_rewardbox_v00__info_reward_all      l_info_reward_all;                             // 0x00A0 (0x0060) [0x0000000000000000]               
	struct Fstx_ui_rewardbox_v00___guide_info_reward_all l__guide_info_reward_all;                      // 0x0100 (0x0090) [0x0000000000000000]               
	class UBrgUIImage*                                 l_mask_v00;                                    // 0x0190 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_rewardbox_v00__num_box              l_num_box;                                     // 0x0198 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_rewardbox_v00__scrollbar            l_scrollbar;                                   // 0x01C0 (0x0020) [0x0000000000000000]               
	struct Fstx_ui_rewardbox_v00__icon_sort_r_all      l_icon_sort_r_all;                             // 0x01E0 (0x0050) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_select_item_v00;                      // 0x0230 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_select_item_v01;                      // 0x0238 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_RewardBox_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_RewardBox_v01
// 0x0048 (0x008C - 0x00D4)
class UBrgUIResource_RewardBox_v01 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_rewardbox_v01___bg                  l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_rewardbox_v01__light_all            l_light_all;                                   // 0x0094 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_rewardbox_v01__star_all             l_star_all;                                    // 0x00A4 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_rewardbox_v01__star_d_all           l_star_d_all;                                  // 0x00B4 (0x0010) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_select_item_v00;                      // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_select_item_v01;                      // 0x00CC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_RewardBox_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_SkillSticker
// 0x00B0 (0x008C - 0x013C)
class UBrgUIResource_SkillSticker : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_skillsticker_v00__skill_e_all       l_skill_e_all;                                 // 0x0094 (0x0078) [0x0000000000000000]               
	struct Fstx_ui_skillsticker_v00__frame_thumbnail   l_frame_thumbnail;                             // 0x010C (0x0030) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_SkillSticker");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_StampEx_v00
// 0x0080 (0x008C - 0x010C)
class UBrgUIResource_StampEx_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_stampex_v00___bg                    l__bg;                                         // 0x008C (0x0020) [0x0000000000000000]               
	struct Fstx_ui_stampex_v00__stampcahnge_all        l_stampcahnge_all;                             // 0x00AC (0x0038) [0x0000000000000000]               
	struct Fstx_ui_stampex_v00__guide_all              l_guide_all;                                   // 0x00E4 (0x0028) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_StampEx_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_StatusMenu
// 0x0BB0 (0x008C - 0x0C3C)
class UBrgUIResource_StatusMenu : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_status_v00___bg_all                 l__bg_all;                                     // 0x008C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_status_v00__menu_top_v00            l_menu_top_v00;                                // 0x009C (0x07F8) [0x0000000000000000]               
	struct Fstx_ui_status_v00__status_exp_all          l_status_exp_all;                              // 0x0894 (0x0038) [0x0000000000000000]               
	struct Fstx_ui_status_v00__status_create_all       l_status_create_all;                           // 0x08CC (0x0148) [0x0000000000000000]               
	struct Fstx_ui_status_v00__result_drone_all        l_result_drone_all;                            // 0x0A14 (0x0048) [0x0000000000000000]               
	struct Fstx_ui_status_v00__status_steroid_all      l_status_steroid_all;                          // 0x0A5C (0x0170) [0x0000000000000000]               
	struct Fstx_ui_status_v00__status_createlimit      l_status_createlimit;                          // 0x0BCC (0x0070) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_StatusMenu");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_SystemWindow
// 0x00D0 (0x008C - 0x015C)
class UBrgUIResource_SystemWindow : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_systemwindow_v00__dead_all          l_dead_all;                                    // 0x008C (0x0048) [0x0000000000000000]               
	struct Fstx_ui_systemwindow_v00__disconnect_all    l_disconnect_all;                              // 0x00D4 (0x0058) [0x0000000000000000]               
	struct Fstx_ui_systemwindow_v00__window_all        l_window_all;                                  // 0x012C (0x0030) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_SystemWindow");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_SystemWindow_v01
// 0x0088 (0x008C - 0x0114)
class UBrgUIResource_SystemWindow_v01 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_v00;                                    // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_systemwindow_v01___text_all         l__text_all;                                   // 0x009C (0x0078) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_SystemWindow_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_SystemWindow_v02
// 0x0070 (0x008C - 0x00FC)
class UBrgUIResource_SystemWindow_v02 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_v00;                                    // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_systemwindow_v02__line_v01_all      l_line_v01_all;                                // 0x009C (0x0020) [0x0000000000000000]               
	struct Fstx_ui_systemwindow_v02___text_all         l__text_all;                                   // 0x00BC (0x0040) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_SystemWindow_v02");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_SystemWindow_v03
// 0x0080 (0x008C - 0x010C)
class UBrgUIResource_SystemWindow_v03 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_v00;                                    // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_base_v01;                                    // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_cursor_v00;                                  // 0x00A4 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_systemwindow_v03___text_all         l__text_all;                                   // 0x00AC (0x0060) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_SystemWindow_v03");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_TengokuMenu
// 0x00D0 (0x008C - 0x015C)
class UBrgUIResource_TengokuMenu : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_tengokumenu_v00___bg                l__bg;                                         // 0x008C (0x0010) [0x0000000000000000]               
	struct Fstx_ui_tengokumenu_v00__info_buff_all      l_info_buff_all;                               // 0x009C (0x0038) [0x0000000000000000]               
	struct Fstx_ui_tengokumenu_v00__info_belongings_all l_info_belongings_all;                         // 0x00D4 (0x0038) [0x0000000000000000]               
	struct Fstx_ui_tengokumenu_v00__info_floor_all     l_info_floor_all;                              // 0x010C (0x0050) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_TengokuMenu");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Tips_v00
// 0x0088 (0x008C - 0x0114)
class UBrgUIResource_Tips_v00 : public UBrgUIResource_Common
{
public:
	struct Fstx_ui_tips_v00___bg                       l__bg;                                         // 0x008C (0x0018) [0x0000000000000000]               
	struct Fstx_ui_tips_v00__base_all                  l_base_all;                                    // 0x00A4 (0x0068) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_base;                                 // 0x010C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Tips_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title
// 0x0100 (0x008C - 0x018C)
class UBrgUIResource_Title : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_bg_title_mask;                               // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_bg_title_t_mask;                             // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_frame_mask_04;                               // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_frame_mask_03;                               // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_frame_mask_02;                               // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_frame_mask_01;                               // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_frame_mask_00;                               // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_bg_title_v01;                                // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_bg_title_v02;                                // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_bg_title_t_v01;                              // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_bg_title_t_v02;                              // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_bg_title;                                    // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_bg_title_t;                                  // 0x00EC (0x0008) [0x0000000000000000]               
	struct Fstx_ui_title_vs_v00__text_all              l_text_all;                                    // 0x00F4 (0x0018) [0x0000000000000000]               
	struct Fstx_ui_title_vs_v00__button_push           l_button_push;                                 // 0x010C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_title_vs_v00__item_all              l_item_all;                                    // 0x0114 (0x0020) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_stm_v05;                              // 0x0134 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_stm_v04;                              // 0x013C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_stm_v03;                              // 0x0144 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_stm_v02;                              // 0x014C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_stm_v01;                              // 0x0154 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_stm_v00;                              // 0x015C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_v04;                                  // 0x0164 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_v03;                                  // 0x016C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_v02;                                  // 0x0174 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_v01;                                  // 0x017C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l__guide_v00;                                  // 0x0184 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_First
// 0x00A8 (0x008C - 0x0134)
class UBrgUIResource_Title_First : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_title_first_v00__hudsafety_all      l_hudsafety_all;                               // 0x0094 (0x0038) [0x0000000000000000]               
	struct Fstx_ui_title_first_v00__title_back_all     l_title_back_all;                              // 0x00CC (0x0018) [0x0000000000000000]               
	struct Fstx_ui_title_first_v00__brightness_all     l_brightness_all;                              // 0x00E4 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_title_first_v00__language_all       l_language_all;                                // 0x010C (0x0018) [0x0000000000000000]               
	struct Fstx_ui_title_first_v00__network_all        l_network_all;                                 // 0x0124 (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_First");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_Notice
// 0x0184 (0x008C - 0x0210)
class UBrgUIResource_Title_Notice : public UBrgUIResource_Common
{
public:
	uint8_t                                            mUseMask;                                      // 0x008C (0x0001) [0x0000000000000000]               
	struct Fstx_ui_title_notice_v00___bg               l__bg;                                         // 0x0090 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_title_notice_v00__notice_all        l_notice_all;                                  // 0x0098 (0x0080) [0x0000000000000000]               
	struct Fstx_ui_title_notice_v00__rule_all          l_rule_all;                                    // 0x0118 (0x0078) [0x0000000000000000]               
	struct Fstx_ui_title_notice_v00__gdpr_all          l_gdpr_all;                                    // 0x0190 (0x0080) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_Notice");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_Spring00_v00
// 0x00C0 (0x008C - 0x014C)
class UBrgUIResource_Title_Spring00_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_rabbit_00;                                   // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_rabbit_01;                                   // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_rabbit_02;                                   // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_rabbit_03;                                   // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_rabbit_04;                                   // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_rabbit_05;                                   // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_egg_00;                                      // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_egg_01;                                      // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_egg_02;                                      // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_egg_03;                                      // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_egg_04;                                      // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_egg_05;                                      // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_egg_06;                                      // 0x00EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_egg_07;                                      // 0x00F4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_egg_08;                                      // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_RabbitBG;                      // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_EggBG;                         // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_RabbitCursor;                  // 0x011C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_EggCursor;                     // 0x0124 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_EggCursorR;                    // 0x012C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_EggCursorL;                    // 0x0134 (0x0008) [0x0000000000000000]               
	float                                              mRabbitCursorLoopStartTime;                    // 0x013C (0x0004) [0x0000000000000000]               
	float                                              mEggCursorLoopStartTime;                       // 0x0140 (0x0004) [0x0000000000000000]               
	float                                              mEggRCursorLoopStartTime;                      // 0x0144 (0x0004) [0x0000000000000000]               
	float                                              mEggLCursorLoopStartTime;                      // 0x0148 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_Spring00_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_Spring00_v01
// 0x0008 (0x008C - 0x0094)
class UBrgUIResource_Title_Spring00_v01 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_cursor_pic_00;                               // 0x008C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_Spring00_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_VS_Autumn00_v01
// 0x0140 (0x008C - 0x01CC)
class UBrgUIResource_Title_VS_Autumn00_v01 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_title_vs_autumn00_v01__cover_all    l_cover_all;                                   // 0x0094 (0x0008) [0x0000000000000000]               
	struct Fstx_ui_title_vs_autumn00_v01__candle_all   l_candle_all;                                  // 0x009C (0x0028) [0x0000000000000000]               
	struct Fstx_ui_title_vs_autumn00_v01__l_pumpkin_all l_l_pumpkin_all;                               // 0x00C4 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_title_vs_autumn00_v01__r_pumpkin_all l_r_pumpkin_all;                               // 0x00D4 (0x0010) [0x0000000000000000]               
	struct Fstx_ui_title_vs_autumn00_v01__s_pumpkin_all l_s_pumpkin_all;                               // 0x00E4 (0x0028) [0x0000000000000000]               
	struct Fstx_ui_title_vs_autumn00_v01__cat_all      l_cat_all;                                     // 0x010C (0x0080) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x018C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_CoverCursor;                   // 0x0194 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_CatCursor;                     // 0x019C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_CandleCursor;                  // 0x01A4 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_PumpkinLCursor;                // 0x01AC (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_PumpkinRCursor;                // 0x01B4 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_PumpkinSCursor;                // 0x01BC (0x0008) [0x0000000000000000]               
	float                                              mPumpkinLCursorLoopStartTime;                  // 0x01C4 (0x0004) [0x0000000000000000]               
	float                                              mPumpkinRCursorLoopStartTime;                  // 0x01C8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_VS_Autumn00_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_VS_Autumn00_v02
// 0x0008 (0x008C - 0x0094)
class UBrgUIResource_Title_VS_Autumn00_v02 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_base_v00;                                    // 0x008C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_VS_Autumn00_v02");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_VS_Autumn00_v03
// 0x0040 (0x008C - 0x00CC)
class UBrgUIResource_Title_VS_Autumn00_v03 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_r_bat_v01;                                   // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_r_bat_v02;                                   // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_l_bat_v01;                                   // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_l_bat_v02;                                   // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_BatL_BG;                       // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_BatR_BG;                       // 0x00C4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_VS_Autumn00_v03");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_VS_Summer00_v00
// 0x0010 (0x008C - 0x009C)
class UBrgUIResource_Title_VS_Summer00_v00 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_bg_title;                                    // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_bg_title_t;                                  // 0x0094 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_VS_Summer00_v00");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_VS_Summer00_v01
// 0x0170 (0x008C - 0x01FC)
class UBrgUIResource_Title_VS_Summer00_v01 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_ball_01;                                     // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_ball_02;                                     // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_ball_03;                                     // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_ball_04;                                     // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_ball_05;                                     // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_ball_06;                                     // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_ball_07;                                     // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_ball_08;                                     // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_ball_09;                                     // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_ball;                                        // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_ball01;                                      // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fish_01;                                     // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fish_02;                                     // 0x00EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fish_03;                                     // 0x00F4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fish_04;                                     // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fish_05;                                     // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fish_06;                                     // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fish_07;                                     // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fish_08;                                     // 0x011C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fish_09;                                     // 0x0124 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fish;                                        // 0x012C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin_01;                                      // 0x0134 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin_02;                                      // 0x013C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin_03;                                      // 0x0144 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin_04;                                      // 0x014C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin_05;                                      // 0x0154 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin_06;                                      // 0x015C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin_07;                                      // 0x0164 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin_08;                                      // 0x016C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin_09;                                      // 0x0174 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin;                                         // 0x017C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin01;                                       // 0x0184 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin02;                                       // 0x018C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin03;                                       // 0x0194 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin04;                                       // 0x019C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin05;                                       // 0x01A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin06;                                       // 0x01AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_fin07;                                       // 0x01B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_arm_01;                                      // 0x01BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_arm_02;                                      // 0x01C4 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x01CC (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mSpriteAnim_BallCursor;                        // 0x01D4 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mSpriteAnim_FishCursorR;                       // 0x01DC (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mSpriteAnim_FishCursorL;                       // 0x01E4 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mSpriteAnim_FinCursor;                         // 0x01EC (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mSpriteAnim_ArmCursor;                         // 0x01F4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_VS_Summer00_v01");
		}

		return uClassPointer;
	};

	void AddKeyAnimSprite(class UBrgUISpriteAnim* SpriteAnim, float inLocalWaitTime, int32_t InX, int32_t InY, int32_t inImageNo, unsigned long inRLReverse, unsigned long inUDReverse);
	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_VS_Summer00_v02
// 0x0008 (0x008C - 0x0094)
class UBrgUIResource_Title_VS_Summer00_v02 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_base;                                        // 0x008C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_VS_Summer00_v02");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_VS_Winter00_v01
// 0x0050 (0x008C - 0x00DC)
class UBrgUIResource_Title_VS_Winter00_v01 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_skier_run;                                   // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_skier_on;                                    // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_skier_drop;                                  // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_tree_l_left;                                 // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_tree_l_right;                                // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_tree_l;                                      // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_tree_s;                                      // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_SkierCursor;                   // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_TreeCursor;                    // 0x00D4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_VS_Winter00_v01");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_VS_Winter00_v02
// 0x0008 (0x008C - 0x0094)
class UBrgUIResource_Title_VS_Winter00_v02 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_snow;                                        // 0x008C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_VS_Winter00_v02");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_VS_Winter00_v03
// 0x0038 (0x008C - 0x00C4)
class UBrgUIResource_Title_VS_Winter00_v03 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_snow_fx;                                     // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snow_fx01;                                   // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snow_fx02;                                   // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snow_fx03;                                   // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snow_fx04;                                   // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_SnowFXCursor;                  // 0x00BC (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_VS_Winter00_v03");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_Title_VS_Winter00_v04
// 0x00F0 (0x008C - 0x017C)
class UBrgUIResource_Title_VS_Winter00_v04 : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l_snowman_01;                                  // 0x008C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_02;                                  // 0x0094 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_03;                                  // 0x009C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_04;                                  // 0x00A4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_05;                                  // 0x00AC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_06;                                  // 0x00B4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_07;                                  // 0x00BC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_08;                                  // 0x00C4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_09;                                  // 0x00CC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman;                                     // 0x00D4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman01;                                   // 0x00DC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman02;                                   // 0x00E4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman03;                                   // 0x00EC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman04;                                   // 0x00F4 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman05;                                   // 0x00FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman06;                                   // 0x0104 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman07;                                   // 0x010C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman08;                                   // 0x0114 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman09;                                   // 0x011C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman10;                                   // 0x0124 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman11;                                   // 0x012C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman12;                                   // 0x0134 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman13;                                   // 0x013C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_loop_01;                             // 0x0144 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_loop_02;                             // 0x014C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 l_snowman_loop_03;                             // 0x0154 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mRootSpriteAnim;                               // 0x015C (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_SnowmanLCursor;                // 0x0164 (0x0008) [0x0000000000000000]               
	class UBrgUISpriteAnim*                            mLoopSpriteAnim_SnowmanRCursor;                // 0x016C (0x0008) [0x0000000000000000]               
	float                                              mSnowmanLCursorLoopStartTime;                  // 0x0174 (0x0004) [0x0000000000000000]               
	float                                              mSnowmanRCursorLoopStartTime;                  // 0x0178 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_Title_VS_Winter00_v04");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_UncleDeath_Anim
// 0x0038 (0x008C - 0x00C4)
class UBrgUIResource_UncleDeath_Anim : public UBrgUIResource_Common
{
public:
	class UBrgUIImage*                                 l__bg;                                         // 0x008C (0x0008) [0x0000000000000000]               
	struct Fstx_ui_hud_uncledeath_anim_v00__death_anim_all l_death_anim_all;                              // 0x0094 (0x0030) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_UncleDeath_Anim");
		}

		return uClassPointer;
	};

	void PrivateSetupImage();
	void PrivateSetupImageNative();
	void Initialize();
};

// Class BrgGameBase.BrgUIResource_StreamImageManager
// 0x009D (0x0060 - 0x00FD)
class UBrgUIResource_StreamImageManager : public UObject
{
public:
	int32_t                                            mMaxLoadNum;                                   // 0x0060 (0x0004) [0x0000000000000000]               
	struct FMap_Mirror                                 mStreamImageMap;                               // 0x0064 (0x0048) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 mLoadStreamImageMap;                           // 0x00AC (0x0048) [0x0000000000001000] (CPF_Native)  
	struct FBrgUIMaterialAttr                          mMaterialDefault;                              // 0x00F4 (0x0004) [0x0000000000000000]               
	unsigned long                                      mMaterialDefaultEnableEffect : 1;              // 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            mMaterialDefaultEffect;                        // 0x00FC (0x0001) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_StreamImageManager");
		}

		return uClassPointer;
	};

	bool IsAllLoaded();
	int32_t GetStreamImageMapNum();
	int32_t GetLoadStreamImageMapNum();
	class FString MakeImageKeyString(class FString inTexturePath, uint8_t inMaterialEffect);
	void UnloadOldImage(int32_t inNum, class UBrgUIImage_Stream* inStreamImage);
	void Reload(class UBrgUIImage_Stream* inStreamImage);
	void UnloadImage(class FString inTexturePath);
	class UBrgUIImage_Stream* GetImage(class FString inTexturePath);
	void UnloadAll();
	void ResetDefaultEffectMIC();
	void SetupDefaultEffectMIC(uint8_t inMaterialEffect);
	void SetupDefaultMIC(struct FBrgUIMaterialAttr& inMaterialAttr);
	void InitializeNT(int32_t inMaxLoadNum);
	void Initialize(int32_t inMaxLoadNum);
};

// Class BrgGameBase.BrgUIResource_EnmaMenuImageManager
// 0x00CB (0x00FD - 0x01C8)
class UBrgUIResource_EnmaMenuImageManager : public UBrgUIResource_StreamImageManager
{
public:
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x0100 (0x0008) [0x0000000000000000]               
	TArray<struct FName>                               mLoad_SkillStickerImage_SkillIDs;              // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    mLoad_SkillStickerImage_SkillStickerSizes;     // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mLoad_MasterLevelRwdIconImage_IconIDs;         // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mLoad_MushroomImage_MushroomIDs;               // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mLoad_MushroomArtImage_MushroomIDs;            // 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mLoad_BeastImage_BeastIDs;                     // 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mLoad_BeastArtImage_BeastIDs;                  // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mLoad_TalesFromTheBarbsIcon_ImageIDs;          // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mLoad_TalesFromTheBarbsImage_ImageIDs;         // 0x0188 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mLoad_CatalogIcon_ImageIDs;                    // 0x0198 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mLoad_CatalogImage_ImageIDs;                   // 0x01A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               mLoad_TutorialImage_ImageIDs;                  // 0x01B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_EnmaMenuImageManager");
		}

		return uClassPointer;
	};

	class FString GetTutorialLoadImagePath(class FString inImageID);
	class FString GetTutorialImagePath(class FString inImageID);
	void UnloadTutorialImage();
	class UBrgUIImage_Stream* GetTutorialImage(class FString inImageID);
	class FString GetCatalogLoadImagePath(class FString inImageID);
	class FString GetCatalogImagePath(class FString inImageID);
	void UnloadCatalogImage();
	class UBrgUIImage_Stream* GetCatalogImage(class FString inImageID);
	class FString GetCatalogLoadIconPath(class FString inImageID);
	class FString GetCatalogIconPath(class FString inImageID);
	void UnloadCatalogIcon();
	class UBrgUIImage_Stream* GetCatalogIcon(class FString inImageID);
	class FString GetTalesFromTheBarbsLoadImagePath(class FString inImageID);
	class FString GetTalesFromTheBarbsImagePath(class FString inImageID);
	void UnloadTalesFromTheBarbsImage();
	class UBrgUIImage_Stream* GetTalesFromTheBarbsImage(class FString inImageID);
	class FString GetTalesFromTheBarbsLoadIconPath(class FString inImageID);
	class FString GetTalesFromTheBarbsIconPath(class FString inImageID);
	void UnloadTalesFromTheBarbsIcon();
	class UBrgUIImage_Stream* GetTalesFromTheBarbsIcon(class FString inImageID);
	class FString GetBeastArtLoadImagePath(class FString inBeastID);
	class FString GetBeastArtImagePath(class FString inBeastID);
	void UnloadBeastArtImage();
	class UBrgUIImage_Stream* GetBeastArtImage(class FString inBeastID);
	class FString GetBeastLoadImagePath(class FString inBeastID);
	class FString GetBeastImagePath(class FString inBeastID);
	void UnloadBeastImage();
	class UBrgUIImage_Stream* GetBeastImage(class FString inBeastID);
	class FString GetMushroomArtLoadImagePath(class FString inMushroomID);
	class FString GetMushroomArtImagePath(class FString inMushroomID);
	void UnloadMushroomArtImage();
	class UBrgUIImage_Stream* GetMushroomArtImage(class FString inMushroomID);
	class FString GetMushroomLoadImagePath(class FString inMushroomID);
	class FString GetMushroomImagePath(class FString inMushroomID);
	void UnloadMushroomImage();
	class UBrgUIImage_Stream* GetMushroomImage(class FString inMushroomID);
	class FString GetMasterLevelRwdIconLoadImagePath(class FString inIconID);
	class FString GetMasterLevelRwdIconImagePath(class FString inIconID);
	void UnloadMasterLevelRwdIconImage();
	class UBrgUIImage_Stream* GetMasterLevelRwdIconImage(class FString inIconID);
	class FString GetSkillStickerLoadImagePath(class FString inSkillID, uint8_t inSkillStickerSize);
	class FString GetSkillStickerImagePath(class FString inSkillID, uint8_t inSkillStickerSize);
	void UnloadSkillStickerImage();
	class UBrgUIImage_Stream* GetSkillStickerImage(class FString inSkillID, uint8_t inSkillStickerSize);
	void Initialize(int32_t inMaxNum);
};

// Class BrgGameBase.BrgUIResource_FighterIcon
// 0x0003 (0x00FD - 0x0100)
class UBrgUIResource_FighterIcon : public UBrgUIResource_StreamImageManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_FighterIcon");
		}

		return uClassPointer;
	};

	class UBrgUIImage_Stream* GetFitghterBodyHiddenIcon();
	class UBrgUIImage_Stream* GetFitghterBodyIcon(class FString BodyId);
	void Initialize(int32_t inMaxNum);
};

// Class BrgGameBase.BrgUIResource_FortIconImageManager
// 0x000B (0x00FD - 0x0108)
class UBrgUIResource_FortIconImageManager : public UBrgUIResource_StreamImageManager
{
public:
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x0100 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_FortIconImageManager");
		}

		return uClassPointer;
	};

	class UBrgUIImage_Stream* GetWhistleIconImage(class FString inWhistleID);
	void Initialize(int32_t inMaxNum);
};

// Class BrgGameBase.BrgUIResource_ItemIconManager
// 0x000B (0x00FD - 0x0108)
class UBrgUIResource_ItemIconManager : public UBrgUIResource_StreamImageManager
{
public:
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x0100 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_ItemIconManager");
		}

		return uClassPointer;
	};

	class UBrgUIImage_Stream* GetFighterTypeIconSImage(class FString inFighterTypeID);
	class UBrgUIImage_Stream* GetItemIconImage(class FString inItemId);
	class UBrgUIImage_Stream* GetMushroomBeastIconImage(class FString inMushroomBeastID, unsigned long inRoast);
	class UBrgUIImage_Stream* GetMushroomIconImage(class FString inMushroomID, unsigned long inRoast);
	class UBrgUIImage_Stream* GetPartIconImage(class FString inPartID, unsigned long is_Lemitbreak, uint8_t inGender, unsigned long inLeftHand);
	void Initialize(int32_t inMaxNum);
};

// Class BrgGameBase.BrgUIResource_PartTypeIconManager
// 0x000B (0x00FD - 0x0108)
class UBrgUIResource_PartTypeIconManager : public UBrgUIResource_StreamImageManager
{
public:
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x0100 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_PartTypeIconManager");
		}

		return uClassPointer;
	};

	class FString GetPartTypeIconLoadImagePath(class FString inPartTypeID);
	class UBrgUIImage_Stream* GetPartTypeIconImage(class FString inPartTypeID);
	void Initialize(int32_t inMaxNum);
};

// Class BrgGameBase.BrgUIResource_QuestPictureManager
// 0x000B (0x00FD - 0x0108)
class UBrgUIResource_QuestPictureManager : public UBrgUIResource_StreamImageManager
{
public:
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x0100 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_QuestPictureManager");
		}

		return uClassPointer;
	};

	class UBrgUIImage_Stream* GetQuestImage(class FString inQuestImageName);
	void Initialize(int32_t inMaxNum);
};

// Class BrgGameBase.BrgUIResource_TeamEmblemIconImageManager
// 0x000B (0x00FD - 0x0108)
class UBrgUIResource_TeamEmblemIconImageManager : public UBrgUIResource_StreamImageManager
{
public:
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x0100 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_TeamEmblemIconImageManager");
		}

		return uClassPointer;
	};

	class UBrgUIImage_Stream* GetTeamEmblemIconImage(class FString inEmblemID, uint8_t inSize);
	void Initialize(int32_t inMaxNum);
};

// Class BrgGameBase.BrgUIResource_TeamEmblemImageManager
// 0x000B (0x00FD - 0x0108)
class UBrgUIResource_TeamEmblemImageManager : public UBrgUIResource_StreamImageManager
{
public:
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x0100 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIResource_TeamEmblemImageManager");
		}

		return uClassPointer;
	};

	class UBrgUIImage_Stream* GetTeamEmblemImage(class FString inEmblemID);
	void Initialize(int32_t inMaxNum);
};

// Class BrgGameBase.BrgUISprite
// 0x0038 (0x0060 - 0x0098)
class UBrgUISprite : public UObject
{
public:
	unsigned long                                      mPlay : 1;                                     // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mLoop : 1;                                     // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mFinished : 1;                                 // 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            mPlayAnimIndex;                                // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              mPlayTime;                                     // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              mCalcPlayTime;                                 // 0x006C (0x0004) [0x0000000000000000]               
	class UBrgUISpriteStatus*                          mStatus;                                       // 0x0070 (0x0008) [0x0000000000000000]               
	TArray<class UBrgUISpriteAnimPlayer*>              mAnimPlayers;                                  // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mRed;                                          // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              mGreen;                                        // 0x008C (0x0004) [0x0000000000000000]               
	float                                              mBlue;                                         // 0x0090 (0x0004) [0x0000000000000000]               
	float                                              mAlpha;                                        // 0x0094 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUISprite");
		}

		return uClassPointer;
	};

	void RenderProcess(class ABrgHUDBase* inHUDBase, float inDrawX, float InDrawY);
	void RefreshStatus();
	void TickProcess(float inDeltaTime);
	void SetColor(float inRed, float inGreen, float inBlue, float inAlpha);
	void SetTime(float inTime);
	void ReleasePause();
	void Pause();
	void Start(int32_t inAnimIndex, unsigned long inTopPosition);
	void SetLoop(unsigned long inLoop);
	bool IsFinished();
	void AddAnimInfo(class UBrgUISpriteAnim* inAnim);
	void Initialize();
};

// Class BrgGameBase.BrgUISpriteAnim
// 0x0038 (0x0060 - 0x0098)
class UBrgUISpriteAnim : public UObject
{
public:
	TArray<class UBrgUIImage*>                         mImages;                                       // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FBrgUISpriteAnimKey>                 mAnimInfo;                                     // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UBrgUISpriteAnim*                            mParent;                                       // 0x0080 (0x0008) [0x0000000000000000]               
	TArray<class UBrgUISpriteAnim*>                    mChilds;                                       // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUISpriteAnim");
		}

		return uClassPointer;
	};

	void AddKey(float inTime, uint8_t inNextMoveType, int32_t inImageNo, float inImageCenterX, float inImageCenterY, float inPosX, float inPosY, float inScaleX, float inScaleY, float inAngle, float inColorR, float inColorG, float inColorB, float inAlpha, unsigned long Invisible);
	float GetTotalTime();
	void AddImage(int32_t inImageNo, class UBrgUIImage* inImage);
	void Initialize(class UBrgUISpriteAnim* inParent);
};

// Class BrgGameBase.BrgUISpriteAnimPlayer
// 0x0068 (0x0060 - 0x00C8)
class UBrgUISpriteAnimPlayer : public UObject
{
public:
	class UBrgUISpriteAnim*                            mAnim;                                         // 0x0060 (0x0008) [0x0000000000000000]               
	int32_t                                            mKeyIndex;                                     // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              mKeyRate;                                      // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            mImageNo;                                      // 0x0070 (0x0004) [0x0000000000000000]               
	class UBrgUISpriteStatus*                          mStatus;                                       // 0x0074 (0x0008) [0x0000000000000000]               
	unsigned long                                      mVisible : 1;                                  // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mFixVisible : 1;                               // 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	class UBrgUISpriteAnimPlayer*                      mParent;                                       // 0x0080 (0x0008) [0x0000000000000000]               
	TArray<class UBrgUISpriteAnimPlayer*>              mChilds;                                       // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              mCalcTime;                                     // 0x0098 (0x0004) [0x0000000000000000]               
	struct FMatrix3x3CT                                mFixMatrix;                                    // 0x009C (0x0018) [0x0000000000000000]               
	float                                              mFixColorR;                                    // 0x00B4 (0x0004) [0x0000000000000000]               
	float                                              mFixColorG;                                    // 0x00B8 (0x0004) [0x0000000000000000]               
	float                                              mFixColorB;                                    // 0x00BC (0x0004) [0x0000000000000000]               
	float                                              mFixAlpha;                                     // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              mTotalTime;                                    // 0x00C4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUISpriteAnimPlayer");
		}

		return uClassPointer;
	};

	void RenderProcess(class ABrgHUDBase* inHUDBase, float inDrawX, float InDrawY, float inRed, float inGreen, float inBlue, float inAlpha);
	void SetTime(float inTime);
	float GetTotalTime();
	void Initialize(class UBrgUISpriteAnim* inAnim, class UBrgUISpriteAnimPlayer* inParentAnimPlayer);
};

// Class BrgGameBase.BrgUISpriteStatus
// 0x0044 (0x0060 - 0x00A4)
class UBrgUISpriteStatus : public UObject
{
public:
	float                                              mImageCenterX;                                 // 0x0060 (0x0004) [0x0000000000000000]               
	float                                              mImageCenterY;                                 // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              mPosX;                                         // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              mPosY;                                         // 0x006C (0x0004) [0x0000000000000000]               
	float                                              mScaleX;                                       // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              mScaleY;                                       // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              mAngle;                                        // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              mColorR;                                       // 0x007C (0x0004) [0x0000000000000000]               
	float                                              mColorG;                                       // 0x0080 (0x0004) [0x0000000000000000]               
	float                                              mColorB;                                       // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              mAlpha;                                        // 0x0088 (0x0004) [0x0000000000000000]               
	struct FMatrix3x3CT                                mCalcMatrix;                                   // 0x008C (0x0018) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUISpriteStatus");
		}

		return uClassPointer;
	};

	void RenderProcess(class ABrgHUDBase* inHUDBase, float inDrawX, float InDrawY);
	void CalcMatrix();
	void Initialize();
};

// Class BrgGameBase.BrgUIStrSelectWindow
// 0x01C4 (0x0060 - 0x0224)
class UBrgUIStrSelectWindow : public UObject
{
public:
	class UBrgUIManagerBase*                           mUIManagerBase;                                // 0x0060 (0x0008) [0x0000000000000000]               
	uint8_t                                            mState;                                        // 0x0068 (0x0001) [0x0000000000000000]               
	float                                              mStrXFromCenter;                               // 0x006C (0x0004) [0x0000000000000000]               
	float                                              mStrY;                                         // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              mFontScale;                                    // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              mFontYOffset;                                  // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            mItemNum;                                      // 0x007C (0x0004) [0x0000000000000000]               
	struct FSUIStrSelectItemInfo                       mItem[0x2];                                    // 0x0080 (0x00F8) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FParamMoveData                              mItemAlpha;                                    // 0x0178 (0x006C) [0x0000000000000000]               
	int32_t                                            mSelectItem;                                   // 0x01E4 (0x0004) [0x0000000000000000]               
	int32_t                                            mOldSelectItem;                                // 0x01E8 (0x0004) [0x0000000000000000]               
	unsigned long                                      mCancelDisable : 1;                            // 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mKeepSelectToOut : 1;                          // 0x01EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mCancelRequest : 1;                            // 0x01EC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mCancel : 1;                                   // 0x01EC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mEnd : 1;                                      // 0x01EC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mResourcesInitialized : 1;                     // 0x01EC (0x0004) [0x0000000000000000] [0x00000020] 
	int32_t                                            mKeepSelect[0x2];                              // 0x01F0 (0x0008) [0x0000000000000000]               
	float                                              mDrawBright;                                   // 0x01F8 (0x0004) [0x0000000000000000]               
	class UBrgUIResource_Title*                        mResource;                                     // 0x01FC (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mMenuEntryFrameIcon;                           // 0x0204 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mMenuEntryBackgroundIcon;                      // 0x020C (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mMenuEntrySourceGuide;                         // 0x0214 (0x0008) [0x0000000000000000]               
	class UBrgUIImage*                                 mMenuEntryDescriptionGuide;                    // 0x021C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIStrSelectWindow");
		}

		return uClassPointer;
	};

	void TickProcess(float inDeltaTime);
	void RenderProcess(class ABrgHUDBase* inHUDBase);
	int32_t GetSelectIndex();
	void KeepSelectToItemOut();
	bool CheckKeepSelectState();
	bool CheckEndStart();
	bool CheckEnd();
	bool CheckCancel();
	void Close();
	bool CheckKeepSelectFlag(int32_t Index);
	void SetKeepSelect(int32_t Index, unsigned long isKeepSelect);
	void SetCancelEnable(unsigned long inEnable);
	void SetStrFontYOffset(float inYOfs);
	void SetStrFontScale(float InScale);
	void SetStrYPos(float inStrYPos);
	void SetStrXFromCenter(float inStrXFromCenter);
	void Start(float inStrXFromCenter, float inStrY, float inFontScale, float inFontYOfs, int32_t inItemNum, class FString inItemName1, class FString inItemName2, int32_t inSelectIndex);
	void Terminate();
	bool LoadResource();
	void Initialize();
	void InitializeNative();
};

// Class BrgGameBase.BrgUITexture2DLoader
// 0x0034 (0x0060 - 0x0094)
class UBrgUITexture2DLoader : public UObject
{
public:
	uint8_t                                            mState;                                        // 0x0060 (0x0001) [0x0000000000000000]               
	class UTexture2D*                                  mTexture;                                      // 0x0064 (0x0008) [0x0000000000000000]               
	class UBrgUIImageBase*                             mImageBase;                                    // 0x006C (0x0008) [0x0000000000000000]               
	class FString                                      mTexturePath;                                  // 0x0074 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            mPixelScale;                                   // 0x0084 (0x0004) [0x0000000000000000]               
	class UBrgResourceLoadManager*                     mResourceLoadManager;                          // 0x0088 (0x0008) [0x0000000000000000]               
	unsigned long                                      mLoadRequestState : 1;                         // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUITexture2DLoader");
		}

		return uClassPointer;
	};

	int32_t Request(unsigned long inLoadState, unsigned long IsLoadCompCheckOnly);
	void TickProcess();
	void Initialize(class UBrgResourceLoadManager* inResourceLoadManager, class FString inTexturePath, int32_t inPixelScale);
	static class UBrgUITexture2DLoader* Create(class UBrgResourceLoadManager* inResourceLoadManager, class FString inTexturePath, int32_t inPixelScale);
};

// Class BrgGameBase.BrgUtilityNativeBase
// 0x0000 (0x0060 - 0x0060)
class UBrgUtilityNativeBase : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUtilityNativeBase");
		}

		return uClassPointer;
	};

	static class FString UUIDCreate();
	static void SetScreenShotEnable(unsigned long enableFlag);
	static void SetVideoRecordingEnable(unsigned long enableFlag);
	static void SetupSkillStickerRT(class UTextureRenderTarget2D* TargetRT, class UMaterialInstanceConstant* MIC);
	static bool UpdateSkillStickerRT(class UTextureRenderTarget2D* TargetRT, class UMaterialInstanceConstant* MIC, TArray<struct FBrgDbEqSkill>& DbEqSkills);
	static class UTextureRenderTarget2D* CreateSkillStickerRT();
	static void SaveString(class FString Path, class FString String);
	static void SaveBinary(class FString Path, TArray<uint8_t> Binary);
	static void SetTimeAdjustEnable(unsigned long flag);
	static uint64_t GetBaseUtcSecond();
	static void SetBaseUtcSecond(uint64_t Time);
	static void InitBaseUtcSecond();
	static uint64_t GetSystemUtcMilliSecond(int32_t& millisec);
	static uint64_t GetUtcMilliSecond(int32_t& millisec);
	static uint64_t GetUtcSecond();
	static class FString GetTimeStringSpaceDelimiter(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Min, int32_t Sec);
	static class FString GetTimeString(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Min, int32_t Sec);
	static void SecondsToLocalTime(uint64_t Time, int32_t& Year, int32_t& Month, int32_t& DayOfWeek, int32_t& Day, int32_t& Hour, int32_t& Min, int32_t& Sec);
	static float GetDeltaTime();
	static bool IsBinkMoviePlaying(class FString inMovieFileName);
	static void SetSelfShadow(class AActor* pActor, unsigned long bEnabledSelfShadow);
	static void RecalcShadowSetting(class AActor* pActor);
	static bool SKMC_GetSocketWorldLocationAndRotation(class USkeletalMeshComponent* SKMC, struct FName InSocketName, int32_t Space, struct FVector& OutLocation, struct FRotator& OutRotation);
	static bool PlayAnimSequenceByAnimNodeSequence(class USkeletalMeshComponent* SMC, class UAnimNodeSequence* aSeq, unsigned long bNoNotifies);
	static void GetLatestAnimNodeFindFirstByNodeBest(class UAnimNode* latestAnimNode, class UAnimNodeSequence*& latestAnimNodeSequence, class UAnimNodeBlendBase*& latestAnimNodeBlend);
	static class UAnimNodeSequence* GetMainAnimNodeSeq(class USkeletalMeshComponent* SMC);
	static class UParticleSystemComponent* CreateParticle(class UParticleSystem* ParticleSys, class AActor* inActor, class USkeletalMeshComponent* SkelMeshComp, uint8_t eCreateTarget, struct FName CreatePointName, unsigned long bAttach);
	static int32_t GetMaterialIndex(class USkeletalMeshComponent* MeshComp, struct FName MaterialName);
	static float GetDistanceSqPawnToPawn2D(class APawn* From, class APawn* to);
	static float GetDistancePawnToPawn2D(class APawn* From, class APawn* to);
	static float GetDistanceSqPawnToPawn(class APawn* From, class APawn* to);
	static float GetDistancePawnToPawn(class APawn* From, class APawn* to);
	static struct FVector GetMeshLocation(class APawn* P);
	static class FString GetWithZeroNumberStr(int32_t Number, int32_t digit);
	static TArray<uint8_t> Hex2Bin(class FString hexData);
	static class FString Bin2Hex(TArray<uint8_t> binData);
	static class FString EncodeBase64FromByteArray(TArray<uint8_t> Decoded);
	static TArray<uint8_t> DecodeBase64ToByteArray(class FString Encoded);
	static class FString EncodeBase64(class FString Decoded);
	static class FString DecodeBase64(class FString Encoded);
	static void SetMeshActive(class USkeletalMeshComponent* InMesh, unsigned long bActive, unsigned long bWithSetActorCollision);
	static void SetPCRBCollideWithChannels(class UPrimitiveComponent* inPC, unsigned long inFlag);
	static void SetLightChannel(class ULightComponent* LightComp, struct FLightingChannelContainer LightChannels);
	static float GetTargetRadAngle(struct FVector VecA, struct FVector VecB);
	static struct FQuat GetQuatNomalized(struct FQuat origQuat);
	static bool IsInViewCone(struct FVector ViewPos, struct FRotator ViewRot, float ViewAngle, float ViewDist, struct FVector TargetPos, unsigned long bCheckCollide, float& OutTargetDist, float& OutTargetAngle);
	static void CallDebugCmd(class FString Cmd);
	static void DebugMessageBox(class FString Message, class FString Title, unsigned long bOK);
	static void AssertMessageBox(class FString Message, class FString FuncName);
};

// Class BrgGameBase.MsgpackManager
// 0x0000 (0x0060 - 0x0060)
class UMsgpackManager : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.MsgpackManager");
		}

		return uClassPointer;
	};

	static class FString GetMsgPackErrorMessage();
	static void ClearMsgPackErrorMessage();
	static bool IsEnableMsgPack();
	static TArray<uint8_t> GetByteArray(class UJsonObject* jsonObj);
	static class UJsonObject* GetJsonObject(TArray<uint8_t> Decoded, int32_t& Sucsess);
};

// Class BrgGameBase.BrgEmitterSpawnable
// 0x0008 (0x0290 - 0x0298)
class ABrgEmitterSpawnable : public AEmitter
{
public:
	class UParticleSystem*                             ParticleTemplate;                              // 0x0290 (0x0008) [0x0000000100000020] (CPF_Net)     

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgEmitterSpawnable");
		}

		return uClassPointer;
	};

	void eventReplicatedEvent(struct FName VarName);
	void eventSetTemplate(class UParticleSystem* NewTemplate, unsigned long bDestroyOnFinish);
};

// Class BrgGameBase.BrgFracturedStaticMeshActor
// 0x000C (0x0310 - 0x031C)
class ABrgFracturedStaticMeshActor : public AFracturedStaticMeshActor_Spawnable
{
public:
	unsigned long                                      mbUseDeleteTime : 1;                           // 0x0310 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mDeleteTimer;                                  // 0x0314 (0x0004) [0x0000000000000000]               
	float                                              mFadeTime;                                     // 0x0318 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgFracturedStaticMeshActor");
		}

		return uClassPointer;
	};

	static class ABrgFracturedStaticMeshActor* CreateFractured(class UFracturedStaticMesh* InMesh, class APawn* InOwner, struct FVector CreatePos, struct FRotator CreateRot, struct FVector BreakDir, float Rate, float Power);
	void eventExplode();
	void eventTick(float DeltaTime);
	void eventPostBeginPlay();
};

// Class BrgGameBase.BrgNetworkPendingRequest
// 0x0018 (0x0060 - 0x0078)
class UBrgNetworkPendingRequest : public UObject
{
public:
	class UHttpRequestInterface*                       Request;                                       // 0x0060 (0x0008) [0x0000000000000000]               
	class UBrgNetworkRequestContent*                   Content;                                       // 0x0068 (0x0008) [0x0000000000000000]               
	class UBrgNetworkResponseInterface*                Response;                                      // 0x0070 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkPendingRequest");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgNetworkRequestContentInterface
// 0x0000 (0x0060 - 0x0060)
class UBrgNetworkRequestContentInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkRequestContentInterface");
		}

		return uClassPointer;
	};

	class FString ToString();
	bool SetParam(class FString Key, class FString Value);
};

// Class BrgGameBase.BrgNetworkResponseDummy
// 0x0000 (0x015C - 0x015C)
class UBrgNetworkResponseDummy : public UBrgNetworkResponseInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgNetworkResponseDummy");
		}

		return uClassPointer;
	};

};

// Class BrgGameBase.BrgUIDebugGauge
// 0x01C8 (0x0060 - 0x0228)
class UBrgUIDebugGauge : public UObject
{
public:
	uint8_t                                            mState;                                        // 0x0060 (0x0001) [0x0000000000000000]               
	struct FParamMoveData                              mAlphaMoveData;                                // 0x0064 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mGaugeParamMoveData;                           // 0x00D0 (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mSubGaugeParamMoveData;                        // 0x013C (0x006C) [0x0000000000000000]               
	struct FParamMoveData                              mSelectAlpha;                                  // 0x01A8 (0x006C) [0x0000000000000000]               
	int32_t                                            mLeftUpX;                                      // 0x0214 (0x0004) [0x0000000000000000]               
	int32_t                                            mLeftUpY;                                      // 0x0218 (0x0004) [0x0000000000000000]               
	int32_t                                            mSizeX;                                        // 0x021C (0x0004) [0x0000000000000000]               
	int32_t                                            mSizeY;                                        // 0x0220 (0x0004) [0x0000000000000000]               
	unsigned long                                      mIsSelect : 1;                                 // 0x0224 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIDebugGauge");
		}

		return uClassPointer;
	};

	void TickProcess(float DeltaTime);
	void RenderProcess(class ABrgHUDBase* inHUDBase);
	static void DrawLineBox(class ABrgHUDBase* inHUDBase, float X1, float Y1, float X2, float Y2, unsigned long fill);
	bool CheckEnd();
	void SetSelectState(unsigned long inIsSelect, unsigned long inAnimation);
	void SetVisible(unsigned long Invisible);
	void SetSubParam(float inParam);
	void SetParam(float inParam);
	void SetSize(int32_t InSizeX, int32_t InSizeY);
	void SetPosition(int32_t inLeftUpX, int32_t inLeftUpY);
	void Initialize(int32_t inLeftUpX, int32_t inLeftUpY, int32_t InSizeX, int32_t InSizeY);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_AreaMap_TX_UI_AreaMap_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_AreaMap_TX_UI_AreaMap_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_AreaMap_TX_UI_AreaMap_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_ButtonGuide_STM_TX_UI_ButtonGuide_STM_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_ButtonGuide_STM_TX_UI_ButtonGuide_STM_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_ButtonGuide_STM_TX_UI_ButtonGuide_STM_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_ButtonGuide_TX_UI_ButtonGuide_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_ButtonGuide_TX_UI_ButtonGuide_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_ButtonGuide_TX_UI_ButtonGuide_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_ElevatorMenu_TX_UI_Elevator_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_ElevatorMenu_TX_UI_Elevator_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_ElevatorMenu_TX_UI_Elevator_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_STM_TX_UI_EnmaMenu_STM_Memo_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_STM_TX_UI_EnmaMenu_STM_Memo_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_STM_TX_UI_EnmaMenu_STM_Memo_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_STM_TX_UI_EnmaMenu_STM_Tab_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_STM_TX_UI_EnmaMenu_STM_Tab_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_STM_TX_UI_EnmaMenu_STM_Tab_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Memo_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Memo_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Memo_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Menu_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Menu_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Menu_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Menu_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Menu_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Menu_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Beast_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Beast_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Beast_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Catalog_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Catalog_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Catalog_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Fighter_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Fighter_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Fighter_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Help_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Help_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Help_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Index_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Index_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Index_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Magazine_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Magazine_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Magazine_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Mail_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Mail_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Mail_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_MasterLevel_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_MasterLevel_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_MasterLevel_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Mushroom_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Mushroom_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Mushroom_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Omoide_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Omoide_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Omoide_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Quest_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Quest_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Quest_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Senpai_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Senpai_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Senpai_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Sticker_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Sticker_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_Sticker_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Page_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Paperdoll_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Paperdoll_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Paperdoll_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Stamp_Arrow
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Stamp_Arrow : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Stamp_Arrow");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Stamp_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Stamp_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Stamp_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Stamp_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Stamp_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Stamp_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Tab_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Tab_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_Tab_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v02
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v02 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v02");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v03
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v03 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v03");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v04
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v04 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_EnmaMenu_TX_UI_EnmaMenu_v04");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Defense_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Defense_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Defense_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Facility_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Facility_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Facility_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Monitor_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Monitor_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Monitor_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_MyTeam_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_MyTeam_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_MyTeam_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Raid_Info_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Raid_Info_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Raid_Info_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Report_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Report_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Report_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_ReportDetail_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_ReportDetail_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_ReportDetail_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_CHN
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_CHN : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_CHN");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_DEU
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_DEU : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_DEU");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_ESN
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_ESN : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_ESN");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_FRA
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_FRA : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_FRA");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_INT
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_INT : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_INT");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_ITA
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_ITA : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_ITA");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_JPN
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_JPN : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_JPN");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_KAN
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_KAN : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_KAN");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_KOR
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_KOR : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_KOR");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_PTB
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_PTB : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v00_PTB");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Result_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_RoomCustom_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_RoomCustom_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_RoomCustom_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_TeamChange_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_TeamChange_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_TeamChange_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Top_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Top_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Top_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Whistle_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Whistle_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Fort_Whistle_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Raid_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Raid_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Raid_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Ranking_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Fort_TX_UI_Ranking_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Fort_TX_UI_Ranking_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_FreeContinue_TX_UI_FreeContinue_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_FreeContinue_TX_UI_FreeContinue_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_FreeContinue_TX_UI_FreeContinue_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_FreezerMenu_STM_TX_UI_FreezerMenu_STM_Name_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_FreezerMenu_STM_TX_UI_FreezerMenu_STM_Name_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_FreezerMenu_STM_TX_UI_FreezerMenu_STM_Name_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_FreezerMenu_TX_UI_FreezerMenu_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_FreezerMenu_TX_UI_FreezerMenu_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_FreezerMenu_TX_UI_FreezerMenu_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_HUD_TX_UI_HUD_Base_Status_v06
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_HUD_TX_UI_HUD_Base_Status_v06 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_HUD_TX_UI_HUD_Base_Status_v06");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_HUD_UncleDeath_TX_UI_HUD_UncleDeath_Anim_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_HUD_UncleDeath_TX_UI_HUD_UncleDeath_Anim_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_HUD_UncleDeath_TX_UI_HUD_UncleDeath_Anim_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Info_TX_UI_Icon_Info_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Icon_Info_TX_UI_Icon_Info_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Info_TX_UI_Icon_Info_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Info_TX_UI_Icon_Info_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Icon_Info_TX_UI_Icon_Info_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Info_TX_UI_Icon_Info_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Info_TX_UI_Icon_Info_v02
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Icon_Info_TX_UI_Icon_Info_v02 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Info_TX_UI_Icon_Info_v02");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Item_TX_UI_Icon_Item_S_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Icon_Item_TX_UI_Icon_Item_S_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Item_TX_UI_Icon_Item_S_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Item_TX_UI_Icon_Item_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Icon_Item_TX_UI_Icon_Item_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Item_TX_UI_Icon_Item_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_MiniMap_TX_UI_Icon_MiniMap_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Icon_MiniMap_TX_UI_Icon_MiniMap_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_MiniMap_TX_UI_Icon_MiniMap_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Network_TX_UI_Icon_Network_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Icon_Network_TX_UI_Icon_Network_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Icon_Network_TX_UI_Icon_Network_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Insurance_TX_UI_Insurance_v00_JPN
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Insurance_TX_UI_Insurance_v00_JPN : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Insurance_TX_UI_Insurance_v00_JPN");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_InsuranceMenu_TX_UI_InsuranceMenu_Cover_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_InsuranceMenu_TX_UI_InsuranceMenu_Cover_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_InsuranceMenu_TX_UI_InsuranceMenu_Cover_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_InsuranceMenu_TX_UI_InsuranceMenu_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_InsuranceMenu_TX_UI_InsuranceMenu_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_InsuranceMenu_TX_UI_InsuranceMenu_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_InsuranceMenu_TX_UI_InsuranceMenu_v00_00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_InsuranceMenu_TX_UI_InsuranceMenu_v00_00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_InsuranceMenu_TX_UI_InsuranceMenu_v00_00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_ItemLMenu_TX_UI_ItemLMenu_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_ItemLMenu_TX_UI_ItemLMenu_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_ItemLMenu_TX_UI_ItemLMenu_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Blue
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Blue : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Blue");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Bronze
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Bronze : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Bronze");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Gold
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Gold : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Gold");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Silver
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Silver : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Loading_TX_UI_Loading_v00_Silver");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_LockerMenu_TX_UI_Locker_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_LockerMenu_TX_UI_Locker_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_LockerMenu_TX_UI_Locker_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_MiniGame_STM_TX_UI_MiniGame_STM_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_MiniGame_STM_TX_UI_MiniGame_STM_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_MiniGame_STM_TX_UI_MiniGame_STM_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_MiniGame_TX_UI_MiniGame_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_MiniGame_TX_UI_MiniGame_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_MiniGame_TX_UI_MiniGame_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_MotherBarbs_TX_UI_MotherBarbs_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_MotherBarbs_TX_UI_MotherBarbs_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_MotherBarbs_TX_UI_MotherBarbs_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Mushroom_TX_UI_Mushroom_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Mushroom_TX_UI_Mushroom_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Mushroom_TX_UI_Mushroom_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_OpeningLogo_TX_UI_OpeningLogo_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_OpeningLogo_TX_UI_OpeningLogo_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_OpeningLogo_TX_UI_OpeningLogo_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_PauseMenu_STM_TX_UI_PauseMenu_STM_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_PauseMenu_STM_TX_UI_PauseMenu_STM_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_PauseMenu_STM_TX_UI_PauseMenu_STM_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_PauseMenu_TX_UI_PauseMenu_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_PauseMenu_TX_UI_PauseMenu_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_PauseMenu_TX_UI_PauseMenu_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_PauseMenu_TX_UI_PauseMenu_v02_Shop
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_PauseMenu_TX_UI_PauseMenu_v02_Shop : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_PauseMenu_TX_UI_PauseMenu_v02_Shop");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Prison_TX_UI_Prison_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Prison_TX_UI_Prison_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Prison_TX_UI_Prison_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_QuestMenu_STM_TX_UI_questmenu_STM_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_QuestMenu_STM_TX_UI_questmenu_STM_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_QuestMenu_STM_TX_UI_questmenu_STM_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_QuestMenu_TX_UI_questmenu_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_QuestMenu_TX_UI_questmenu_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_QuestMenu_TX_UI_questmenu_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_RadioMenu_TX_UI_radiomenu_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_RadioMenu_TX_UI_radiomenu_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_RadioMenu_TX_UI_radiomenu_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_ReachingMail_TX_UI_ReachingMail_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_ReachingMail_TX_UI_ReachingMail_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_ReachingMail_TX_UI_ReachingMail_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Reception_TX_UI_Reception_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Reception_TX_UI_Reception_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Reception_TX_UI_Reception_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Result_Floor_TX_UI_Result_Floor_Info_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Result_Floor_TX_UI_Result_Floor_Info_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Result_Floor_TX_UI_Result_Floor_Info_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Result_Floor_TX_UI_Result_Floor_v02
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Result_Floor_TX_UI_Result_Floor_v02 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Result_Floor_TX_UI_Result_Floor_v02");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_RewardBoxMenu_TX_UI_RewardBox_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_RewardBoxMenu_TX_UI_RewardBox_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_RewardBoxMenu_TX_UI_RewardBox_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_RewardBoxMenu_TX_UI_RewardBox_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_RewardBoxMenu_TX_UI_RewardBox_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_RewardBoxMenu_TX_UI_RewardBox_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Shop_TX_UI_Shop_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Shop_TX_UI_Shop_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Shop_TX_UI_Shop_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_SkillSticker_TX_UI_SkillSticker_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_SkillSticker_TX_UI_SkillSticker_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_SkillSticker_TX_UI_SkillSticker_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_StampExMenu_TX_UI_StampEx_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_StampExMenu_TX_UI_StampEx_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_StampExMenu_TX_UI_StampEx_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_StatusMenu_TX_UI_Status_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_StatusMenu_TX_UI_Status_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_StatusMenu_TX_UI_Status_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v02
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v02 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v02");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v03
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v03 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_SystemWindow_TX_UI_SystemWindow_v03");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_TengokuMenu_TX_UI_TengokuMenu_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_TengokuMenu_TX_UI_TengokuMenu_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_TengokuMenu_TX_UI_TengokuMenu_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Tips_TX_UI_Tips_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Tips_TX_UI_Tips_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Tips_TX_UI_Tips_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Autumn00_TX_UI_Title_VS_Autumn00_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Autumn00_TX_UI_Title_VS_Autumn00_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Autumn00_TX_UI_Title_VS_Autumn00_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Autumn00_TX_UI_Title_VS_Autumn00_v02
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Autumn00_TX_UI_Title_VS_Autumn00_v02 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Autumn00_TX_UI_Title_VS_Autumn00_v02");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Autumn00_TX_UI_Title_VS_Autumn00_v03
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Autumn00_TX_UI_Title_VS_Autumn00_v03 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Autumn00_TX_UI_Title_VS_Autumn00_v03");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Spring00_TX_UI_Title_Spring00_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Spring00_TX_UI_Title_Spring00_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Spring00_TX_UI_Title_Spring00_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Spring00_TX_UI_Title_Spring00_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Spring00_TX_UI_Title_Spring00_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Spring00_TX_UI_Title_Spring00_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Summer00_TX_UI_Title_VS_Summer00_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Summer00_TX_UI_Title_VS_Summer00_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Summer00_TX_UI_Title_VS_Summer00_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Summer00_TX_UI_Title_VS_Summer00_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Summer00_TX_UI_Title_VS_Summer00_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Summer00_TX_UI_Title_VS_Summer00_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Summer00_TX_UI_Title_VS_Summer00_v02
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Summer00_TX_UI_Title_VS_Summer00_v02 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Summer00_TX_UI_Title_VS_Summer00_v02");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_TX_UI_Title_First_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_TX_UI_Title_First_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_TX_UI_Title_First_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_TX_UI_Title_Notice_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_TX_UI_Title_Notice_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_TX_UI_Title_Notice_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_TX_UI_Title_Spring_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_TX_UI_Title_Spring_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_TX_UI_Title_Spring_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_TX_UI_Title_VS_v00
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_TX_UI_Title_VS_v00 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_TX_UI_Title_VS_v00");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v01
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v01 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v01");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v02
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v02 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v02");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v03
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v03 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v03");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v04
// 0x0050 (0x0060 - 0x00B0)
class UBrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v04 : public UObject
{
public:
	struct FImageMapInfo                               mImageMap;                                     // 0x0060 (0x0050) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfo_UI_Title_Winter00_TX_UI_Title_VS_Winter00_v04");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

// Class BrgGameBase.BrgUIImageMapInfoRegist
// 0x0000 (0x0060 - 0x0060)
class UBrgUIImageMapInfoRegist : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class BrgGameBase.BrgUIImageMapInfoRegist");
		}

		return uClassPointer;
	};

	static void Regist(class UBrgUIImageMapInfo* inImageMapInfo);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
