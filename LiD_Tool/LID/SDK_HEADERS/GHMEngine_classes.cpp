/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: GHMEngine_classes.cpp
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

// Function GHMEngine.GHM_AutoTestManager.AddGameEventToDB
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 EventLocation                  (CPF_Parm)
// struct FRotator                EventRotation                  (CPF_Parm)
// class FString                  GameEventName                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  GameEventDesc                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  PlayerNameOrAdditionalInfo     (CPF_Parm | CPF_NeedCtorLink)

void AGHM_AutoTestManager::AddGameEventToDB(struct FVector EventLocation, struct FRotator EventRotation, class FString GameEventName, class FString GameEventDesc, class FString PlayerNameOrAdditionalInfo)
{
	static UFunction* uFnAddGameEventToDB = nullptr;

	if (!uFnAddGameEventToDB)
	{
		uFnAddGameEventToDB = UFunction::FindFunction("Function GHMEngine.GHM_AutoTestManager.AddGameEventToDB");
	}

	AGHM_AutoTestManager_execAddGameEventToDB_Params AddGameEventToDB_Params;
	memcpy_s(&AddGameEventToDB_Params.EventLocation, 0xC, &EventLocation, 0xC);
	memcpy_s(&AddGameEventToDB_Params.EventRotation, 0xC, &EventRotation, 0xC);
	memcpy_s(&AddGameEventToDB_Params.GameEventName, 0x10, &GameEventName, 0x10);
	memcpy_s(&AddGameEventToDB_Params.GameEventDesc, 0x10, &GameEventDesc, 0x10);
	memcpy_s(&AddGameEventToDB_Params.PlayerNameOrAdditionalInfo, 0x10, &PlayerNameOrAdditionalInfo, 0x10);

	uFnAddGameEventToDB->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddGameEventToDB, &AddGameEventToDB_Params, nullptr);

	uFnAddGameEventToDB->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_AutoTestManager.GetBuildConfigurationString
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString AGHM_AutoTestManager::GetBuildConfigurationString()
{
	static UFunction* uFnGetBuildConfigurationString = nullptr;

	if (!uFnGetBuildConfigurationString)
	{
		uFnGetBuildConfigurationString = UFunction::FindFunction("Function GHMEngine.GHM_AutoTestManager.GetBuildConfigurationString");
	}

	AGHM_AutoTestManager_execGetBuildConfigurationString_Params GetBuildConfigurationString_Params;

	uFnGetBuildConfigurationString->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetBuildConfigurationString, &GetBuildConfigurationString_Params, nullptr);

	uFnGetBuildConfigurationString->FunctionFlags |= 0x400;

	return GetBuildConfigurationString_Params.ReturnValue;
};

// Function GHMEngine.GHM_AutoTestManager.EndWalkthrough
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_AutoTestManager::EndWalkthrough()
{
	static UFunction* uFnEndWalkthrough = nullptr;

	if (!uFnEndWalkthrough)
	{
		uFnEndWalkthrough = UFunction::FindFunction("Function GHMEngine.GHM_AutoTestManager.EndWalkthrough");
	}

	AGHM_AutoTestManager_execEndWalkthrough_Params EndWalkthrough_Params;

	this->ProcessEvent(uFnEndWalkthrough, &EndWalkthrough_Params, nullptr);
};

// Function GHMEngine.GHM_AutoTestManager.BeginWalkthrough
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPerfCheck                     (CPF_Parm)

void AGHM_AutoTestManager::BeginWalkthrough(unsigned long bPerfCheck)
{
	static UFunction* uFnBeginWalkthrough = nullptr;

	if (!uFnBeginWalkthrough)
	{
		uFnBeginWalkthrough = UFunction::FindFunction("Function GHMEngine.GHM_AutoTestManager.BeginWalkthrough");
	}

	AGHM_AutoTestManager_execBeginWalkthrough_Params BeginWalkthrough_Params;
	BeginWalkthrough_Params.bPerfCheck = bPerfCheck;

	this->ProcessEvent(uFnBeginWalkthrough, &BeginWalkthrough_Params, nullptr);
};

// Function GHMEngine.GHM_AutoTestManager.CheckForSentinelRun
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGHM_AutoTestManager::CheckForSentinelRun()
{
	static UFunction* uFnCheckForSentinelRun = nullptr;

	if (!uFnCheckForSentinelRun)
	{
		uFnCheckForSentinelRun = UFunction::FindFunction("Function GHMEngine.GHM_AutoTestManager.CheckForSentinelRun");
	}

	AGHM_AutoTestManager_execCheckForSentinelRun_Params CheckForSentinelRun_Params;

	this->ProcessEvent(uFnCheckForSentinelRun, &CheckForSentinelRun_Params, nullptr);

	return CheckForSentinelRun_Params.ReturnValue;
};

// Function GHMEngine.GHM_AutoTestManager.DoTimeBasedSentinelStatGathering
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void AGHM_AutoTestManager::DoTimeBasedSentinelStatGathering()
{
	static UFunction* uFnDoTimeBasedSentinelStatGathering = nullptr;

	if (!uFnDoTimeBasedSentinelStatGathering)
	{
		uFnDoTimeBasedSentinelStatGathering = UFunction::FindFunction("Function GHMEngine.GHM_AutoTestManager.DoTimeBasedSentinelStatGathering");
	}

	AGHM_AutoTestManager_execDoTimeBasedSentinelStatGathering_Params DoTimeBasedSentinelStatGathering_Params;

	this->ProcessEvent(uFnDoTimeBasedSentinelStatGathering, &DoTimeBasedSentinelStatGathering_Params, nullptr);
};

// Function GHMEngine.GHM_AutoTestManager.StartAutomatedMapTestTimer
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_AutoTestManager::eventStartAutomatedMapTestTimer()
{
	static UFunction* uFnStartAutomatedMapTestTimer = nullptr;

	if (!uFnStartAutomatedMapTestTimer)
	{
		uFnStartAutomatedMapTestTimer = UFunction::FindFunction("Function GHMEngine.GHM_AutoTestManager.StartAutomatedMapTestTimer");
	}

	AGHM_AutoTestManager_eventStartAutomatedMapTestTimer_Params StartAutomatedMapTestTimer_Params;

	this->ProcessEvent(uFnStartAutomatedMapTestTimer, &StartAutomatedMapTestTimer_Params, nullptr);
};

// Function GHMEngine.GHM_CapsuleComponent.TriangleCheck
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Position1                      (CPF_Parm)
// struct FVector                 Position2                      (CPF_Parm)
// struct FVector                 Position3                      (CPF_Parm)

bool UGHM_CapsuleComponent::TriangleCheck(struct FVector Position1, struct FVector Position2, struct FVector Position3)
{
	static UFunction* uFnTriangleCheck = nullptr;

	if (!uFnTriangleCheck)
	{
		uFnTriangleCheck = UFunction::FindFunction("Function GHMEngine.GHM_CapsuleComponent.TriangleCheck");
	}

	UGHM_CapsuleComponent_execTriangleCheck_Params TriangleCheck_Params;
	memcpy_s(&TriangleCheck_Params.Position1, 0xC, &Position1, 0xC);
	memcpy_s(&TriangleCheck_Params.Position2, 0xC, &Position2, 0xC);
	memcpy_s(&TriangleCheck_Params.Position3, 0xC, &Position3, 0xC);

	uFnTriangleCheck->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTriangleCheck, &TriangleCheck_Params, nullptr);

	uFnTriangleCheck->FunctionFlags |= 0x400;

	return TriangleCheck_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugCombinationInput.InputClear
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugCombinationInput::InputClear()
{
	static UFunction* uFnInputClear = nullptr;

	if (!uFnInputClear)
	{
		uFnInputClear = UFunction::FindFunction("Function GHMEngine.GHM_DebugCombinationInput.InputClear");
	}

	UGHM_DebugCombinationInput_execInputClear_Params InputClear_Params;

	uFnInputClear->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInputClear, &InputClear_Params, nullptr);

	uFnInputClear->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugCombinationInput.SetEnabled
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  NewState                       (CPF_Parm)

void UGHM_DebugCombinationInput::SetEnabled(unsigned long NewState)
{
	static UFunction* uFnSetEnabled = nullptr;

	if (!uFnSetEnabled)
	{
		uFnSetEnabled = UFunction::FindFunction("Function GHMEngine.GHM_DebugCombinationInput.SetEnabled");
	}

	UGHM_DebugCombinationInput_execSetEnabled_Params SetEnabled_Params;
	SetEnabled_Params.NewState = NewState;

	this->ProcessEvent(uFnSetEnabled, &SetEnabled_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.DrawText
// [0x00024800] (FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)
// class FString                  Text                           (CPF_Parm | CPF_NeedCtorLink)
// float                          PosX                           (CPF_OptionalParm | CPF_Parm)
// float                          PosY                           (CPF_OptionalParm | CPF_Parm)
// uint8_t                        R                              (CPF_OptionalParm | CPF_Parm)
// uint8_t                        G                              (CPF_OptionalParm | CPF_Parm)
// uint8_t                        B                              (CPF_OptionalParm | CPF_Parm)
// uint8_t                        A                              (CPF_OptionalParm | CPF_Parm)
// unsigned long                  CR                             (CPF_OptionalParm | CPF_Parm)
// float                          XScale                         (CPF_OptionalParm | CPF_Parm)
// float                          YScale                         (CPF_OptionalParm | CPF_Parm)

void UGHM_DebugDrawManager::eventDrawTextW(float Time, class FString Text, float PosX, float PosY, uint8_t R, uint8_t G, uint8_t B, uint8_t A, unsigned long CR, float XScale, float YScale)
{
	static UFunction* uFnDrawTextW = nullptr;

	if (!uFnDrawTextW)
	{
		uFnDrawTextW = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.DrawText");
	}

	UGHM_DebugDrawManager_eventDrawTextW_Params DrawTextW_Params;
	memcpy_s(&DrawTextW_Params.Time, 0x4, &Time, 0x4);
	memcpy_s(&DrawTextW_Params.Text, 0x10, &Text, 0x10);
	memcpy_s(&DrawTextW_Params.PosX, 0x4, &PosX, 0x4);
	memcpy_s(&DrawTextW_Params.PosY, 0x4, &PosY, 0x4);
	memcpy_s(&DrawTextW_Params.R, 0x1, &R, 0x1);
	memcpy_s(&DrawTextW_Params.G, 0x1, &G, 0x1);
	memcpy_s(&DrawTextW_Params.B, 0x1, &B, 0x1);
	memcpy_s(&DrawTextW_Params.A, 0x1, &A, 0x1);
	DrawTextW_Params.CR = CR;
	memcpy_s(&DrawTextW_Params.XScale, 0x4, &XScale, 0x4);
	memcpy_s(&DrawTextW_Params.YScale, 0x4, &YScale, 0x4);

	this->ProcessEvent(uFnDrawTextW, &DrawTextW_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.DrawCone
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FVector                 Direction                      (CPF_Parm)
// float                          Length                         (CPF_Parm)
// float                          AngleWidth                     (CPF_Parm)
// float                          AngleHeight                    (CPF_Parm)
// int32_t                        NumSides                       (CPF_Parm)
// struct FColor                  DrawColor                      (CPF_Parm)

void UGHM_DebugDrawManager::eventDrawCone(float Time, struct FVector Origin, struct FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, struct FColor DrawColor)
{
	static UFunction* uFnDrawCone = nullptr;

	if (!uFnDrawCone)
	{
		uFnDrawCone = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.DrawCone");
	}

	UGHM_DebugDrawManager_eventDrawCone_Params DrawCone_Params;
	memcpy_s(&DrawCone_Params.Time, 0x4, &Time, 0x4);
	memcpy_s(&DrawCone_Params.Origin, 0xC, &Origin, 0xC);
	memcpy_s(&DrawCone_Params.Direction, 0xC, &Direction, 0xC);
	memcpy_s(&DrawCone_Params.Length, 0x4, &Length, 0x4);
	memcpy_s(&DrawCone_Params.AngleWidth, 0x4, &AngleWidth, 0x4);
	memcpy_s(&DrawCone_Params.AngleHeight, 0x4, &AngleHeight, 0x4);
	memcpy_s(&DrawCone_Params.NumSides, 0x4, &NumSides, 0x4);
	memcpy_s(&DrawCone_Params.DrawColor, 0x4, &DrawColor, 0x4);

	this->ProcessEvent(uFnDrawCone, &DrawCone_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.DrawCylinder
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)
// struct FVector                 Start                          (CPF_Parm)
// struct FVector                 End                            (CPF_Parm)
// float                          Radius                         (CPF_Parm)
// int32_t                        Segments                       (CPF_Parm)
// uint8_t                        R                              (CPF_Parm)
// uint8_t                        G                              (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void UGHM_DebugDrawManager::eventDrawCylinder(float Time, struct FVector Start, struct FVector End, float Radius, int32_t Segments, uint8_t R, uint8_t G, uint8_t B)
{
	static UFunction* uFnDrawCylinder = nullptr;

	if (!uFnDrawCylinder)
	{
		uFnDrawCylinder = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.DrawCylinder");
	}

	UGHM_DebugDrawManager_eventDrawCylinder_Params DrawCylinder_Params;
	memcpy_s(&DrawCylinder_Params.Time, 0x4, &Time, 0x4);
	memcpy_s(&DrawCylinder_Params.Start, 0xC, &Start, 0xC);
	memcpy_s(&DrawCylinder_Params.End, 0xC, &End, 0xC);
	memcpy_s(&DrawCylinder_Params.Radius, 0x4, &Radius, 0x4);
	memcpy_s(&DrawCylinder_Params.Segments, 0x4, &Segments, 0x4);
	memcpy_s(&DrawCylinder_Params.R, 0x1, &R, 0x1);
	memcpy_s(&DrawCylinder_Params.G, 0x1, &G, 0x1);
	memcpy_s(&DrawCylinder_Params.B, 0x1, &B, 0x1);

	this->ProcessEvent(uFnDrawCylinder, &DrawCylinder_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.DrawSphere
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)
// struct FVector                 Center                         (CPF_Parm)
// float                          Radius                         (CPF_Parm)
// int32_t                        Segments                       (CPF_Parm)
// uint8_t                        R                              (CPF_Parm)
// uint8_t                        G                              (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void UGHM_DebugDrawManager::eventDrawSphere(float Time, struct FVector Center, float Radius, int32_t Segments, uint8_t R, uint8_t G, uint8_t B)
{
	static UFunction* uFnDrawSphere = nullptr;

	if (!uFnDrawSphere)
	{
		uFnDrawSphere = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.DrawSphere");
	}

	UGHM_DebugDrawManager_eventDrawSphere_Params DrawSphere_Params;
	memcpy_s(&DrawSphere_Params.Time, 0x4, &Time, 0x4);
	memcpy_s(&DrawSphere_Params.Center, 0xC, &Center, 0xC);
	memcpy_s(&DrawSphere_Params.Radius, 0x4, &Radius, 0x4);
	memcpy_s(&DrawSphere_Params.Segments, 0x4, &Segments, 0x4);
	memcpy_s(&DrawSphere_Params.R, 0x1, &R, 0x1);
	memcpy_s(&DrawSphere_Params.G, 0x1, &G, 0x1);
	memcpy_s(&DrawSphere_Params.B, 0x1, &B, 0x1);

	this->ProcessEvent(uFnDrawSphere, &DrawSphere_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.DrawCoordinateSystem
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)
// struct FVector                 AxisLoc                        (CPF_Parm)
// struct FRotator                AxisRot                        (CPF_Parm)
// float                          Scale                          (CPF_Parm)

void UGHM_DebugDrawManager::eventDrawCoordinateSystem(float Time, struct FVector AxisLoc, struct FRotator AxisRot, float Scale)
{
	static UFunction* uFnDrawCoordinateSystem = nullptr;

	if (!uFnDrawCoordinateSystem)
	{
		uFnDrawCoordinateSystem = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.DrawCoordinateSystem");
	}

	UGHM_DebugDrawManager_eventDrawCoordinateSystem_Params DrawCoordinateSystem_Params;
	memcpy_s(&DrawCoordinateSystem_Params.Time, 0x4, &Time, 0x4);
	memcpy_s(&DrawCoordinateSystem_Params.AxisLoc, 0xC, &AxisLoc, 0xC);
	memcpy_s(&DrawCoordinateSystem_Params.AxisRot, 0xC, &AxisRot, 0xC);
	memcpy_s(&DrawCoordinateSystem_Params.Scale, 0x4, &Scale, 0x4);

	this->ProcessEvent(uFnDrawCoordinateSystem, &DrawCoordinateSystem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.DrawStar
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)
// struct FVector                 Position                       (CPF_Parm)
// float                          Size                           (CPF_Parm)
// uint8_t                        R                              (CPF_Parm)
// uint8_t                        G                              (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void UGHM_DebugDrawManager::eventDrawStar(float Time, struct FVector Position, float Size, uint8_t R, uint8_t G, uint8_t B)
{
	static UFunction* uFnDrawStar = nullptr;

	if (!uFnDrawStar)
	{
		uFnDrawStar = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.DrawStar");
	}

	UGHM_DebugDrawManager_eventDrawStar_Params DrawStar_Params;
	memcpy_s(&DrawStar_Params.Time, 0x4, &Time, 0x4);
	memcpy_s(&DrawStar_Params.Position, 0xC, &Position, 0xC);
	memcpy_s(&DrawStar_Params.Size, 0x4, &Size, 0x4);
	memcpy_s(&DrawStar_Params.R, 0x1, &R, 0x1);
	memcpy_s(&DrawStar_Params.G, 0x1, &G, 0x1);
	memcpy_s(&DrawStar_Params.B, 0x1, &B, 0x1);

	this->ProcessEvent(uFnDrawStar, &DrawStar_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.DrawBox
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)
// struct FVector                 Center                         (CPF_Parm)
// struct FVector                 Extent                         (CPF_Parm)
// uint8_t                        R                              (CPF_Parm)
// uint8_t                        G                              (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void UGHM_DebugDrawManager::eventDrawBox(float Time, struct FVector Center, struct FVector Extent, uint8_t R, uint8_t G, uint8_t B)
{
	static UFunction* uFnDrawBox = nullptr;

	if (!uFnDrawBox)
	{
		uFnDrawBox = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.DrawBox");
	}

	UGHM_DebugDrawManager_eventDrawBox_Params DrawBox_Params;
	memcpy_s(&DrawBox_Params.Time, 0x4, &Time, 0x4);
	memcpy_s(&DrawBox_Params.Center, 0xC, &Center, 0xC);
	memcpy_s(&DrawBox_Params.Extent, 0xC, &Extent, 0xC);
	memcpy_s(&DrawBox_Params.R, 0x1, &R, 0x1);
	memcpy_s(&DrawBox_Params.G, 0x1, &G, 0x1);
	memcpy_s(&DrawBox_Params.B, 0x1, &B, 0x1);

	this->ProcessEvent(uFnDrawBox, &DrawBox_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.DrawPoint
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)
// struct FVector                 Position                       (CPF_Parm)
// float                          Size                           (CPF_Parm)
// struct FLinearColor            PointColor                     (CPF_Parm)

void UGHM_DebugDrawManager::eventDrawPoint(float Time, struct FVector Position, float Size, struct FLinearColor PointColor)
{
	static UFunction* uFnDrawPoint = nullptr;

	if (!uFnDrawPoint)
	{
		uFnDrawPoint = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.DrawPoint");
	}

	UGHM_DebugDrawManager_eventDrawPoint_Params DrawPoint_Params;
	memcpy_s(&DrawPoint_Params.Time, 0x4, &Time, 0x4);
	memcpy_s(&DrawPoint_Params.Position, 0xC, &Position, 0xC);
	memcpy_s(&DrawPoint_Params.Size, 0x4, &Size, 0x4);
	memcpy_s(&DrawPoint_Params.PointColor, 0x10, &PointColor, 0x10);

	this->ProcessEvent(uFnDrawPoint, &DrawPoint_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.DrawLine
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)
// struct FVector                 LineStart                      (CPF_Parm)
// struct FVector                 LineEnd                        (CPF_Parm)
// uint8_t                        R                              (CPF_Parm)
// uint8_t                        G                              (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void UGHM_DebugDrawManager::eventDrawLine(float Time, struct FVector LineStart, struct FVector LineEnd, uint8_t R, uint8_t G, uint8_t B)
{
	static UFunction* uFnDrawLine = nullptr;

	if (!uFnDrawLine)
	{
		uFnDrawLine = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.DrawLine");
	}

	UGHM_DebugDrawManager_eventDrawLine_Params DrawLine_Params;
	memcpy_s(&DrawLine_Params.Time, 0x4, &Time, 0x4);
	memcpy_s(&DrawLine_Params.LineStart, 0xC, &LineStart, 0xC);
	memcpy_s(&DrawLine_Params.LineEnd, 0xC, &LineEnd, 0xC);
	memcpy_s(&DrawLine_Params.R, 0x1, &R, 0x1);
	memcpy_s(&DrawLine_Params.G, 0x1, &G, 0x1);
	memcpy_s(&DrawLine_Params.B, 0x1, &B, 0x1);

	this->ProcessEvent(uFnDrawLine, &DrawLine_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.DisplayDebug
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugDrawManager::DisplayDebug(class UCanvas* Canvas)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.DisplayDebug");
	}

	UGHM_DebugDrawManager_execDisplayDebug_Params DisplayDebug_Params;
	memcpy_s(&DisplayDebug_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.Tick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGHM_DebugDrawManager::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.Tick");
	}

	UGHM_DebugDrawManager_execTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugDrawManager.FlushDebugDrawObjects
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugDrawManager::FlushDebugDrawObjects()
{
	static UFunction* uFnFlushDebugDrawObjects = nullptr;

	if (!uFnFlushDebugDrawObjects)
	{
		uFnFlushDebugDrawObjects = UFunction::FindFunction("Function GHMEngine.GHM_DebugDrawManager.FlushDebugDrawObjects");
	}

	UGHM_DebugDrawManager_execFlushDebugDrawObjects_Params FlushDebugDrawObjects_Params;

	this->ProcessEvent(uFnFlushDebugDrawObjects, &FlushDebugDrawObjects_Params, nullptr);
};

// Function GHMEngine.GHM_GameEngine.SetSpecialMaskChannels
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Red                            (CPF_Parm)
// unsigned long                  Green                          (CPF_Parm)
// unsigned long                  Blue                           (CPF_Parm)
// unsigned long                  Alpha                          (CPF_Parm)

void UGHM_GameEngine::SetSpecialMaskChannels(unsigned long Red, unsigned long Green, unsigned long Blue, unsigned long Alpha)
{
	static UFunction* uFnSetSpecialMaskChannels = nullptr;

	if (!uFnSetSpecialMaskChannels)
	{
		uFnSetSpecialMaskChannels = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.SetSpecialMaskChannels");
	}

	UGHM_GameEngine_execSetSpecialMaskChannels_Params SetSpecialMaskChannels_Params;
	SetSpecialMaskChannels_Params.Red = Red;
	SetSpecialMaskChannels_Params.Green = Green;
	SetSpecialMaskChannels_Params.Blue = Blue;
	SetSpecialMaskChannels_Params.Alpha = Alpha;

	uFnSetSpecialMaskChannels->FunctionFlags |= ~0x400;

	UGHM_GameEngine::StaticClass()->ProcessEvent(uFnSetSpecialMaskChannels, &SetSpecialMaskChannels_Params, nullptr);

	uFnSetSpecialMaskChannels->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_GameEngine.IsDLCCorruptedForXBox360
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_GameEngine::IsDLCCorruptedForXBox360()
{
	static UFunction* uFnIsDLCCorruptedForXBox360 = nullptr;

	if (!uFnIsDLCCorruptedForXBox360)
	{
		uFnIsDLCCorruptedForXBox360 = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.IsDLCCorruptedForXBox360");
	}

	UGHM_GameEngine_execIsDLCCorruptedForXBox360_Params IsDLCCorruptedForXBox360_Params;

	this->ProcessEvent(uFnIsDLCCorruptedForXBox360, &IsDLCCorruptedForXBox360_Params, nullptr);

	return IsDLCCorruptedForXBox360_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameEngine.GetCheckpointSubsystem
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_CheckPointSubSystem* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_CheckPointSubSystem* UGHM_GameEngine::GetCheckpointSubsystem()
{
	static UFunction* uFnGetCheckpointSubsystem = nullptr;

	if (!uFnGetCheckpointSubsystem)
	{
		uFnGetCheckpointSubsystem = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.GetCheckpointSubsystem");
	}

	UGHM_GameEngine_execGetCheckpointSubsystem_Params GetCheckpointSubsystem_Params;

	uFnGetCheckpointSubsystem->FunctionFlags |= ~0x400;

	UGHM_GameEngine::StaticClass()->ProcessEvent(uFnGetCheckpointSubsystem, &GetCheckpointSubsystem_Params, nullptr);

	uFnGetCheckpointSubsystem->FunctionFlags |= 0x400;

	return GetCheckpointSubsystem_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameEngine.GetClassFromName
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UClass*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ClassName                      (CPF_Const | CPF_Parm | CPF_NeedCtorLink)

class UClass* UGHM_GameEngine::GetClassFromName(class FString ClassName)
{
	static UFunction* uFnGetClassFromName = nullptr;

	if (!uFnGetClassFromName)
	{
		uFnGetClassFromName = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.GetClassFromName");
	}

	UGHM_GameEngine_execGetClassFromName_Params GetClassFromName_Params;
	memcpy_s(&GetClassFromName_Params.ClassName, 0x10, &ClassName, 0x10);

	uFnGetClassFromName->FunctionFlags |= ~0x400;

	UGHM_GameEngine::StaticClass()->ProcessEvent(uFnGetClassFromName, &GetClassFromName_Params, nullptr);

	uFnGetClassFromName->FunctionFlags |= 0x400;

	return GetClassFromName_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameEngine.PostLoadMap
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_GameEngine::eventPostLoadMap()
{
	static UFunction* uFnPostLoadMap = nullptr;

	if (!uFnPostLoadMap)
	{
		uFnPostLoadMap = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.PostLoadMap");
	}

	UGHM_GameEngine_eventPostLoadMap_Params PostLoadMap_Params;

	this->ProcessEvent(uFnPostLoadMap, &PostLoadMap_Params, nullptr);
};

// Function GHMEngine.GHM_GameEngine.CheckCIV
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_GameEngine::CheckCIV()
{
	static UFunction* uFnCheckCIV = nullptr;

	if (!uFnCheckCIV)
	{
		uFnCheckCIV = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.CheckCIV");
	}

	UGHM_GameEngine_execCheckCIV_Params CheckCIV_Params;

	uFnCheckCIV->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCheckCIV, &CheckCIV_Params, nullptr);

	uFnCheckCIV->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_GameEngine.PostGC
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPerformFullPurge              (CPF_Parm)

void UGHM_GameEngine::eventPostGC(unsigned long bPerformFullPurge)
{
	static UFunction* uFnPostGC = nullptr;

	if (!uFnPostGC)
	{
		uFnPostGC = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.PostGC");
	}

	UGHM_GameEngine_eventPostGC_Params PostGC_Params;
	PostGC_Params.bPerformFullPurge = bPerformFullPurge;

	this->ProcessEvent(uFnPostGC, &PostGC_Params, nullptr);
};

// Function GHMEngine.GHM_GameEngine.PreGC
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPerformFullPurge              (CPF_Parm)
// unsigned long                  bFromKismetRequest             (CPF_Parm)

void UGHM_GameEngine::eventPreGC(unsigned long bPerformFullPurge, unsigned long bFromKismetRequest)
{
	static UFunction* uFnPreGC = nullptr;

	if (!uFnPreGC)
	{
		uFnPreGC = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.PreGC");
	}

	UGHM_GameEngine_eventPreGC_Params PreGC_Params;
	PreGC_Params.bPerformFullPurge = bPerformFullPurge;
	PreGC_Params.bFromKismetRequest = bFromKismetRequest;

	this->ProcessEvent(uFnPreGC, &PreGC_Params, nullptr);
};

// Function GHMEngine.GHM_GameEngine.bRequestAutomaticGC
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_GameEngine::eventbRequestAutomaticGC()
{
	static UFunction* uFnbRequestAutomaticGC = nullptr;

	if (!uFnbRequestAutomaticGC)
	{
		uFnbRequestAutomaticGC = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.bRequestAutomaticGC");
	}

	UGHM_GameEngine_eventbRequestAutomaticGC_Params bRequestAutomaticGC_Params;

	this->ProcessEvent(uFnbRequestAutomaticGC, &bRequestAutomaticGC_Params, nullptr);

	return bRequestAutomaticGC_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameEngine.bForceAvoidAutomaticGC
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_GameEngine::eventbForceAvoidAutomaticGC()
{
	static UFunction* uFnbForceAvoidAutomaticGC = nullptr;

	if (!uFnbForceAvoidAutomaticGC)
	{
		uFnbForceAvoidAutomaticGC = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.bForceAvoidAutomaticGC");
	}

	UGHM_GameEngine_eventbForceAvoidAutomaticGC_Params bForceAvoidAutomaticGC_Params;

	this->ProcessEvent(uFnbForceAvoidAutomaticGC, &bForceAvoidAutomaticGC_Params, nullptr);

	return bForceAvoidAutomaticGC_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameEngine.bAvoidAutomaticGC
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_GameEngine::eventbAvoidAutomaticGC()
{
	static UFunction* uFnbAvoidAutomaticGC = nullptr;

	if (!uFnbAvoidAutomaticGC)
	{
		uFnbAvoidAutomaticGC = UFunction::FindFunction("Function GHMEngine.GHM_GameEngine.bAvoidAutomaticGC");
	}

	UGHM_GameEngine_eventbAvoidAutomaticGC_Params bAvoidAutomaticGC_Params;

	this->ProcessEvent(uFnbAvoidAutomaticGC, &bAvoidAutomaticGC_Params, nullptr);

	return bAvoidAutomaticGC_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameInfo.PauseKismet
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  NewFlag                        (CPF_Parm)

void AGHM_GameInfo::PauseKismet(unsigned long NewFlag)
{
	static UFunction* uFnPauseKismet = nullptr;

	if (!uFnPauseKismet)
	{
		uFnPauseKismet = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.PauseKismet");
	}

	AGHM_GameInfo_execPauseKismet_Params PauseKismet_Params;
	PauseKismet_Params.NewFlag = NewFlag;

	uFnPauseKismet->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPauseKismet, &PauseKismet_Params, nullptr);

	uFnPauseKismet->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_GameInfo.UpdateEnvironmentWindAnim
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void AGHM_GameInfo::UpdateEnvironmentWindAnim(float DeltaTime)
{
	static UFunction* uFnUpdateEnvironmentWindAnim = nullptr;

	if (!uFnUpdateEnvironmentWindAnim)
	{
		uFnUpdateEnvironmentWindAnim = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.UpdateEnvironmentWindAnim");
	}

	AGHM_GameInfo_execUpdateEnvironmentWindAnim_Params UpdateEnvironmentWindAnim_Params;
	memcpy_s(&UpdateEnvironmentWindAnim_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnUpdateEnvironmentWindAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateEnvironmentWindAnim, &UpdateEnvironmentWindAnim_Params, nullptr);

	uFnUpdateEnvironmentWindAnim->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_GameInfo.StopEnvironmentWindAnim
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// float                          FadeOutSeconds                 (CPF_Parm)

void AGHM_GameInfo::StopEnvironmentWindAnim(float FadeOutSeconds)
{
	static UFunction* uFnStopEnvironmentWindAnim = nullptr;

	if (!uFnStopEnvironmentWindAnim)
	{
		uFnStopEnvironmentWindAnim = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.StopEnvironmentWindAnim");
	}

	AGHM_GameInfo_execStopEnvironmentWindAnim_Params StopEnvironmentWindAnim_Params;
	memcpy_s(&StopEnvironmentWindAnim_Params.FadeOutSeconds, 0x4, &FadeOutSeconds, 0x4);

	uFnStopEnvironmentWindAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopEnvironmentWindAnim, &StopEnvironmentWindAnim_Params, nullptr);

	uFnStopEnvironmentWindAnim->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_GameInfo.StartEnvironmentWindAnim
// [0x00440401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGHM_SkelControlDFTL_WindAnimSetting Setting                        (CPF_Const | CPF_Parm | CPF_OutParm)

void AGHM_GameInfo::StartEnvironmentWindAnim(struct FGHM_SkelControlDFTL_WindAnimSetting& Setting)
{
	static UFunction* uFnStartEnvironmentWindAnim = nullptr;

	if (!uFnStartEnvironmentWindAnim)
	{
		uFnStartEnvironmentWindAnim = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.StartEnvironmentWindAnim");
	}

	AGHM_GameInfo_execStartEnvironmentWindAnim_Params StartEnvironmentWindAnim_Params;
	memcpy_s(&StartEnvironmentWindAnim_Params.Setting, 0x68, &Setting, 0x68);

	uFnStartEnvironmentWindAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStartEnvironmentWindAnim, &StartEnvironmentWindAnim_Params, nullptr);

	uFnStartEnvironmentWindAnim->FunctionFlags |= 0x400;

	memcpy_s(&Setting, 0x68, &StartEnvironmentWindAnim_Params.Setting, 0x68);
};

// Function GHMEngine.GHM_GameInfo.GetMessageBoxSelectIdx
// [0x00042401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t AGHM_GameInfo::GetMessageBoxSelectIdx()
{
	static UFunction* uFnGetMessageBoxSelectIdx = nullptr;

	if (!uFnGetMessageBoxSelectIdx)
	{
		uFnGetMessageBoxSelectIdx = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.GetMessageBoxSelectIdx");
	}

	AGHM_GameInfo_execGetMessageBoxSelectIdx_Params GetMessageBoxSelectIdx_Params;

	uFnGetMessageBoxSelectIdx->FunctionFlags |= ~0x400;

	AGHM_GameInfo::StaticClass()->ProcessEvent(uFnGetMessageBoxSelectIdx, &GetMessageBoxSelectIdx_Params, nullptr);

	uFnGetMessageBoxSelectIdx->FunctionFlags |= 0x400;

	return GetMessageBoxSelectIdx_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameInfo.MessageBox
// [0x00042401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          ButtonAliases                  (CPF_Parm | CPF_NeedCtorLink)

bool AGHM_GameInfo::MessageBox(class FString Title, class FString Message, TArray<class FString> ButtonAliases)
{
	static UFunction* uFnMessageBox = nullptr;

	if (!uFnMessageBox)
	{
		uFnMessageBox = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.MessageBox");
	}

	AGHM_GameInfo_execMessageBox_Params MessageBox_Params;
	memcpy_s(&MessageBox_Params.Title, 0x10, &Title, 0x10);
	memcpy_s(&MessageBox_Params.Message, 0x10, &Message, 0x10);
	memcpy_s(&MessageBox_Params.ButtonAliases, 0x10, &ButtonAliases, 0x10);

	uFnMessageBox->FunctionFlags |= ~0x400;

	AGHM_GameInfo::StaticClass()->ProcessEvent(uFnMessageBox, &MessageBox_Params, nullptr);

	uFnMessageBox->FunctionFlags |= 0x400;

	return MessageBox_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameInfo.ShowMessageBox
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)
// TArray<class FString>          ButtonAliases                  (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         CloseDelegate                  (CPF_Parm | CPF_NeedCtorLink)

bool AGHM_GameInfo::ShowMessageBox(class FString Title, class FString Message, TArray<class FString> ButtonAliases, struct FScriptDelegate CloseDelegate)
{
	static UFunction* uFnShowMessageBox = nullptr;

	if (!uFnShowMessageBox)
	{
		uFnShowMessageBox = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.ShowMessageBox");
	}

	AGHM_GameInfo_execShowMessageBox_Params ShowMessageBox_Params;
	memcpy_s(&ShowMessageBox_Params.Title, 0x10, &Title, 0x10);
	memcpy_s(&ShowMessageBox_Params.Message, 0x10, &Message, 0x10);
	memcpy_s(&ShowMessageBox_Params.ButtonAliases, 0x10, &ButtonAliases, 0x10);
	memcpy_s(&ShowMessageBox_Params.CloseDelegate, 0x10, &CloseDelegate, 0x10);

	this->ProcessEvent(uFnShowMessageBox, &ShowMessageBox_Params, nullptr);

	return ShowMessageBox_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameInfo.OnMessageBoxClose
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        SelectIdx                      (CPF_Parm)

void AGHM_GameInfo::OnMessageBoxClose(int32_t SelectIdx)
{
	static UFunction* uFnOnMessageBoxClose = nullptr;

	if (!uFnOnMessageBoxClose)
	{
		uFnOnMessageBoxClose = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.OnMessageBoxClose");
	}

	AGHM_GameInfo_execOnMessageBoxClose_Params OnMessageBoxClose_Params;
	memcpy_s(&OnMessageBoxClose_Params.SelectIdx, 0x4, &SelectIdx, 0x4);

	this->ProcessEvent(uFnOnMessageBoxClose, &OnMessageBoxClose_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.UINotify
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsOpening                     (CPF_Parm)

void AGHM_GameInfo::UINotify(unsigned long bIsOpening)
{
	static UFunction* uFnUINotify = nullptr;

	if (!uFnUINotify)
	{
		uFnUINotify = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.UINotify");
	}

	AGHM_GameInfo_execUINotify_Params UINotify_Params;
	UINotify_Params.bIsOpening = bIsOpening;

	this->ProcessEvent(uFnUINotify, &UINotify_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.GetStreamingPersistentWorldInfo
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AWorldInfo*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AWorldInfo* AGHM_GameInfo::GetStreamingPersistentWorldInfo()
{
	static UFunction* uFnGetStreamingPersistentWorldInfo = nullptr;

	if (!uFnGetStreamingPersistentWorldInfo)
	{
		uFnGetStreamingPersistentWorldInfo = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.GetStreamingPersistentWorldInfo");
	}

	AGHM_GameInfo_execGetStreamingPersistentWorldInfo_Params GetStreamingPersistentWorldInfo_Params;

	uFnGetStreamingPersistentWorldInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetStreamingPersistentWorldInfo, &GetStreamingPersistentWorldInfo_Params, nullptr);

	uFnGetStreamingPersistentWorldInfo->FunctionFlags |= 0x400;

	return GetStreamingPersistentWorldInfo_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameInfo.UnregisterBreakableObject
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGHM_BreakableObject*    BreakableObject                (CPF_Parm)

void AGHM_GameInfo::UnregisterBreakableObject(class AGHM_BreakableObject* BreakableObject)
{
	static UFunction* uFnUnregisterBreakableObject = nullptr;

	if (!uFnUnregisterBreakableObject)
	{
		uFnUnregisterBreakableObject = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.UnregisterBreakableObject");
	}

	AGHM_GameInfo_execUnregisterBreakableObject_Params UnregisterBreakableObject_Params;
	memcpy_s(&UnregisterBreakableObject_Params.BreakableObject, 0x8, &BreakableObject, 0x8);

	this->ProcessEvent(uFnUnregisterBreakableObject, &UnregisterBreakableObject_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.RegisterBreakableObject
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGHM_BreakableObject*    BreakableObject                (CPF_Parm)

void AGHM_GameInfo::RegisterBreakableObject(class AGHM_BreakableObject* BreakableObject)
{
	static UFunction* uFnRegisterBreakableObject = nullptr;

	if (!uFnRegisterBreakableObject)
	{
		uFnRegisterBreakableObject = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.RegisterBreakableObject");
	}

	AGHM_GameInfo_execRegisterBreakableObject_Params RegisterBreakableObject_Params;
	memcpy_s(&RegisterBreakableObject_Params.BreakableObject, 0x8, &BreakableObject, 0x8);

	this->ProcessEvent(uFnRegisterBreakableObject, &RegisterBreakableObject_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.GHM_GHM_GameInfo_ApplyCheckpointRecord
// [0x00C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FGHM_GHM_GameInfo_CheckpointRecord Record                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGHM_GameInfo::GHM_GHM_GameInfo_ApplyCheckpointRecord(struct FGHM_GHM_GameInfo_CheckpointRecord& Record)
{
	static UFunction* uFnGHM_GHM_GameInfo_ApplyCheckpointRecord = nullptr;

	if (!uFnGHM_GHM_GameInfo_ApplyCheckpointRecord)
	{
		uFnGHM_GHM_GameInfo_ApplyCheckpointRecord = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.GHM_GHM_GameInfo_ApplyCheckpointRecord");
	}

	AGHM_GameInfo_execGHM_GHM_GameInfo_ApplyCheckpointRecord_Params GHM_GHM_GameInfo_ApplyCheckpointRecord_Params;
	memcpy_s(&GHM_GHM_GameInfo_ApplyCheckpointRecord_Params.Record, 0x10, &Record, 0x10);

	this->ProcessEvent(uFnGHM_GHM_GameInfo_ApplyCheckpointRecord, &GHM_GHM_GameInfo_ApplyCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, 0x10, &GHM_GHM_GameInfo_ApplyCheckpointRecord_Params.Record, 0x10);
};

// Function GHMEngine.GHM_GameInfo.GHM_GHM_GameInfo_CreateCheckpointRecord
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGHM_GHM_GameInfo_CheckpointRecord Record                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGHM_GameInfo::GHM_GHM_GameInfo_CreateCheckpointRecord(struct FGHM_GHM_GameInfo_CheckpointRecord& Record)
{
	static UFunction* uFnGHM_GHM_GameInfo_CreateCheckpointRecord = nullptr;

	if (!uFnGHM_GHM_GameInfo_CreateCheckpointRecord)
	{
		uFnGHM_GHM_GameInfo_CreateCheckpointRecord = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.GHM_GHM_GameInfo_CreateCheckpointRecord");
	}

	AGHM_GameInfo_execGHM_GHM_GameInfo_CreateCheckpointRecord_Params GHM_GHM_GameInfo_CreateCheckpointRecord_Params;
	memcpy_s(&GHM_GHM_GameInfo_CreateCheckpointRecord_Params.Record, 0x10, &Record, 0x10);

	this->ProcessEvent(uFnGHM_GHM_GameInfo_CreateCheckpointRecord, &GHM_GHM_GameInfo_CreateCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, 0x10, &GHM_GHM_GameInfo_CreateCheckpointRecord_Params.Record, 0x10);
};

// Function GHMEngine.GHM_GameInfo.AddBrokenAndDestroyedObject
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FBrokenObjectCheckpointRecord Record                         (CPF_Parm | CPF_NeedCtorLink)

void AGHM_GameInfo::AddBrokenAndDestroyedObject(struct FBrokenObjectCheckpointRecord Record)
{
	static UFunction* uFnAddBrokenAndDestroyedObject = nullptr;

	if (!uFnAddBrokenAndDestroyedObject)
	{
		uFnAddBrokenAndDestroyedObject = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.AddBrokenAndDestroyedObject");
	}

	AGHM_GameInfo_execAddBrokenAndDestroyedObject_Params AddBrokenAndDestroyedObject_Params;
	memcpy_s(&AddBrokenAndDestroyedObject_Params.Record, 0x3C, &Record, 0x3C);

	this->ProcessEvent(uFnAddBrokenAndDestroyedObject, &AddBrokenAndDestroyedObject_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.ClearBrokenAndDestroyedObject
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_GameInfo::ClearBrokenAndDestroyedObject()
{
	static UFunction* uFnClearBrokenAndDestroyedObject = nullptr;

	if (!uFnClearBrokenAndDestroyedObject)
	{
		uFnClearBrokenAndDestroyedObject = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.ClearBrokenAndDestroyedObject");
	}

	AGHM_GameInfo_execClearBrokenAndDestroyedObject_Params ClearBrokenAndDestroyedObject_Params;

	this->ProcessEvent(uFnClearBrokenAndDestroyedObject, &ClearBrokenAndDestroyedObject_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.UpdateScreendoorFade
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void AGHM_GameInfo::UpdateScreendoorFade(float DeltaTime)
{
	static UFunction* uFnUpdateScreendoorFade = nullptr;

	if (!uFnUpdateScreendoorFade)
	{
		uFnUpdateScreendoorFade = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.UpdateScreendoorFade");
	}

	AGHM_GameInfo_execUpdateScreendoorFade_Params UpdateScreendoorFade_Params;
	memcpy_s(&UpdateScreendoorFade_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnUpdateScreendoorFade, &UpdateScreendoorFade_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.NativeDelegateTest
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Delegate1                      (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Delegate2                      (CPF_Parm | CPF_NeedCtorLink)

void AGHM_GameInfo::NativeDelegateTest(struct FScriptDelegate Delegate1, struct FScriptDelegate Delegate2)
{
	static UFunction* uFnNativeDelegateTest = nullptr;

	if (!uFnNativeDelegateTest)
	{
		uFnNativeDelegateTest = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.NativeDelegateTest");
	}

	AGHM_GameInfo_execNativeDelegateTest_Params NativeDelegateTest_Params;
	memcpy_s(&NativeDelegateTest_Params.Delegate1, 0x10, &Delegate1, 0x10);
	memcpy_s(&NativeDelegateTest_Params.Delegate2, 0x10, &Delegate2, 0x10);

	uFnNativeDelegateTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnNativeDelegateTest, &NativeDelegateTest_Params, nullptr);

	uFnNativeDelegateTest->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_GameInfo.OneParameterDelegate
// [0x00124000] (FUNC_NetMulticast | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Parameter                      (CPF_OptionalParm | CPF_Parm)

void AGHM_GameInfo::OneParameterDelegate(class UObject* Parameter)
{
	static UFunction* uFnOneParameterDelegate = nullptr;

	if (!uFnOneParameterDelegate)
	{
		uFnOneParameterDelegate = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.OneParameterDelegate");
	}

	AGHM_GameInfo_execOneParameterDelegate_Params OneParameterDelegate_Params;
	memcpy_s(&OneParameterDelegate_Params.Parameter, 0x8, &Parameter, 0x8);

	this->ProcessEvent(uFnOneParameterDelegate, &OneParameterDelegate_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.StopFadeUpdate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPrimitiveComponent*     TargetComponent                (CPF_Parm | CPF_EditInline)

bool AGHM_GameInfo::StopFadeUpdate(class UPrimitiveComponent* TargetComponent)
{
	static UFunction* uFnStopFadeUpdate = nullptr;

	if (!uFnStopFadeUpdate)
	{
		uFnStopFadeUpdate = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.StopFadeUpdate");
	}

	AGHM_GameInfo_execStopFadeUpdate_Params StopFadeUpdate_Params;
	memcpy_s(&StopFadeUpdate_Params.TargetComponent, 0x8, &TargetComponent, 0x8);

	this->ProcessEvent(uFnStopFadeUpdate, &StopFadeUpdate_Params, nullptr);

	return StopFadeUpdate_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameInfo.StartFadeUpdate
// [0x00824002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPrimitiveComponent*     TargetComponent                (CPF_Parm | CPF_EditInline)
// float                          fTargetOpacity                 (CPF_Parm)
// float                          fFadeDuration                  (CPF_Parm)
// struct FScriptDelegate         FadeCompleteCallback           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class UObject*                 CallbackParameter              (CPF_OptionalParm | CPF_Parm)

bool AGHM_GameInfo::StartFadeUpdate(class UPrimitiveComponent* TargetComponent, float fTargetOpacity, float fFadeDuration, struct FScriptDelegate FadeCompleteCallback, class UObject* CallbackParameter)
{
	static UFunction* uFnStartFadeUpdate = nullptr;

	if (!uFnStartFadeUpdate)
	{
		uFnStartFadeUpdate = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.StartFadeUpdate");
	}

	AGHM_GameInfo_execStartFadeUpdate_Params StartFadeUpdate_Params;
	memcpy_s(&StartFadeUpdate_Params.TargetComponent, 0x8, &TargetComponent, 0x8);
	memcpy_s(&StartFadeUpdate_Params.fTargetOpacity, 0x4, &fTargetOpacity, 0x4);
	memcpy_s(&StartFadeUpdate_Params.fFadeDuration, 0x4, &fFadeDuration, 0x4);
	memcpy_s(&StartFadeUpdate_Params.FadeCompleteCallback, 0x10, &FadeCompleteCallback, 0x10);
	memcpy_s(&StartFadeUpdate_Params.CallbackParameter, 0x8, &CallbackParameter, 0x8);

	this->ProcessEvent(uFnStartFadeUpdate, &StartFadeUpdate_Params, nullptr);

	return StartFadeUpdate_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameInfo.ScreenDoorFadeComplete
// [0x00124000] (FUNC_NetMulticast | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Parameter                      (CPF_OptionalParm | CPF_Parm)

void AGHM_GameInfo::ScreenDoorFadeComplete(class UObject* Parameter)
{
	static UFunction* uFnScreenDoorFadeComplete = nullptr;

	if (!uFnScreenDoorFadeComplete)
	{
		uFnScreenDoorFadeComplete = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.ScreenDoorFadeComplete");
	}

	AGHM_GameInfo_execScreenDoorFadeComplete_Params ScreenDoorFadeComplete_Params;
	memcpy_s(&ScreenDoorFadeComplete_Params.Parameter, 0x8, &Parameter, 0x8);

	this->ProcessEvent(uFnScreenDoorFadeComplete, &ScreenDoorFadeComplete_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.UpdateMaterialParameters
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void AGHM_GameInfo::UpdateMaterialParameters(float DeltaTime)
{
	static UFunction* uFnUpdateMaterialParameters = nullptr;

	if (!uFnUpdateMaterialParameters)
	{
		uFnUpdateMaterialParameters = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.UpdateMaterialParameters");
	}

	AGHM_GameInfo_execUpdateMaterialParameters_Params UpdateMaterialParameters_Params;
	memcpy_s(&UpdateMaterialParameters_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnUpdateMaterialParameters, &UpdateMaterialParameters_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.StopMaterialUpdate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMaterialInstanceConstant* Material                       (CPF_Parm)
// struct FName                   Parameter                      (CPF_Parm)

bool AGHM_GameInfo::StopMaterialUpdate(class UMaterialInstanceConstant* Material, struct FName Parameter)
{
	static UFunction* uFnStopMaterialUpdate = nullptr;

	if (!uFnStopMaterialUpdate)
	{
		uFnStopMaterialUpdate = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.StopMaterialUpdate");
	}

	AGHM_GameInfo_execStopMaterialUpdate_Params StopMaterialUpdate_Params;
	memcpy_s(&StopMaterialUpdate_Params.Material, 0x8, &Material, 0x8);
	memcpy_s(&StopMaterialUpdate_Params.Parameter, 0x8, &Parameter, 0x8);

	this->ProcessEvent(uFnStopMaterialUpdate, &StopMaterialUpdate_Params, nullptr);

	return StopMaterialUpdate_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameInfo.StartMaterialUpdate
// [0x00824002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMaterialInstanceConstant* Material                       (CPF_Parm)
// struct FName                   Parameter                      (CPF_Parm)
// float                          fDesiredValue                  (CPF_Parm)
// float                          fDuration                      (CPF_Parm)
// struct FScriptDelegate         UpdateCompleteCallback         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class UObject*                 CallbackParameter              (CPF_OptionalParm | CPF_Parm)

bool AGHM_GameInfo::StartMaterialUpdate(class UMaterialInstanceConstant* Material, struct FName Parameter, float fDesiredValue, float fDuration, struct FScriptDelegate UpdateCompleteCallback, class UObject* CallbackParameter)
{
	static UFunction* uFnStartMaterialUpdate = nullptr;

	if (!uFnStartMaterialUpdate)
	{
		uFnStartMaterialUpdate = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.StartMaterialUpdate");
	}

	AGHM_GameInfo_execStartMaterialUpdate_Params StartMaterialUpdate_Params;
	memcpy_s(&StartMaterialUpdate_Params.Material, 0x8, &Material, 0x8);
	memcpy_s(&StartMaterialUpdate_Params.Parameter, 0x8, &Parameter, 0x8);
	memcpy_s(&StartMaterialUpdate_Params.fDesiredValue, 0x4, &fDesiredValue, 0x4);
	memcpy_s(&StartMaterialUpdate_Params.fDuration, 0x4, &fDuration, 0x4);
	memcpy_s(&StartMaterialUpdate_Params.UpdateCompleteCallback, 0x10, &UpdateCompleteCallback, 0x10);
	memcpy_s(&StartMaterialUpdate_Params.CallbackParameter, 0x8, &CallbackParameter, 0x8);

	this->ProcessEvent(uFnStartMaterialUpdate, &StartMaterialUpdate_Params, nullptr);

	return StartMaterialUpdate_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameInfo.MaterialParameterUpdateComplete
// [0x00124000] (FUNC_NetMulticast | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Parameter                      (CPF_OptionalParm | CPF_Parm)

void AGHM_GameInfo::MaterialParameterUpdateComplete(class UObject* Parameter)
{
	static UFunction* uFnMaterialParameterUpdateComplete = nullptr;

	if (!uFnMaterialParameterUpdateComplete)
	{
		uFnMaterialParameterUpdateComplete = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.MaterialParameterUpdateComplete");
	}

	AGHM_GameInfo_execMaterialParameterUpdateComplete_Params MaterialParameterUpdateComplete_Params;
	memcpy_s(&MaterialParameterUpdateComplete_Params.Parameter, 0x8, &Parameter, 0x8);

	this->ProcessEvent(uFnMaterialParameterUpdateComplete, &MaterialParameterUpdateComplete_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.Tick
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void AGHM_GameInfo::eventTick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.Tick");
	}

	AGHM_GameInfo_eventTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.CheckEnvironmentWind
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_GameInfo::eventCheckEnvironmentWind()
{
	static UFunction* uFnCheckEnvironmentWind = nullptr;

	if (!uFnCheckEnvironmentWind)
	{
		uFnCheckEnvironmentWind = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.CheckEnvironmentWind");
	}

	AGHM_GameInfo_eventCheckEnvironmentWind_Params CheckEnvironmentWind_Params;

	this->ProcessEvent(uFnCheckEnvironmentWind, &CheckEnvironmentWind_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.PostCommitMapChange
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_GameInfo::eventPostCommitMapChange()
{
	static UFunction* uFnPostCommitMapChange = nullptr;

	if (!uFnPostCommitMapChange)
	{
		uFnPostCommitMapChange = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.PostCommitMapChange");
	}

	AGHM_GameInfo_eventPostCommitMapChange_Params PostCommitMapChange_Params;

	this->ProcessEvent(uFnPostCommitMapChange, &PostCommitMapChange_Params, nullptr);
};

// Function GHMEngine.GHM_GameInfo.PostBeginPlay
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_GameInfo::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GHMEngine.GHM_GameInfo.PostBeginPlay");
	}

	AGHM_GameInfo_eventPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GHMEngine.GHM_GameViewportClient.DeProject
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class ULocalPlayer*            LP                             (CPF_Parm)
// struct FVector2D               ScreenPos                      (CPF_Parm)
// struct FVector                 WorldOrigin                    (CPF_Parm | CPF_OutParm)
// struct FVector                 WorldDirection                 (CPF_Parm | CPF_OutParm)

void UGHM_GameViewportClient::DeProject(class ULocalPlayer* LP, struct FVector2D ScreenPos, struct FVector& WorldOrigin, struct FVector& WorldDirection)
{
	static UFunction* uFnDeProject = nullptr;

	if (!uFnDeProject)
	{
		uFnDeProject = UFunction::FindFunction("Function GHMEngine.GHM_GameViewportClient.DeProject");
	}

	UGHM_GameViewportClient_execDeProject_Params DeProject_Params;
	memcpy_s(&DeProject_Params.LP, 0x8, &LP, 0x8);
	memcpy_s(&DeProject_Params.ScreenPos, 0x8, &ScreenPos, 0x8);
	memcpy_s(&DeProject_Params.WorldOrigin, 0xC, &WorldOrigin, 0xC);
	memcpy_s(&DeProject_Params.WorldDirection, 0xC, &WorldDirection, 0xC);

	uFnDeProject->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDeProject, &DeProject_Params, nullptr);

	uFnDeProject->FunctionFlags |= 0x400;

	memcpy_s(&WorldOrigin, 0xC, &DeProject_Params.WorldOrigin, 0xC);
	memcpy_s(&WorldDirection, 0xC, &DeProject_Params.WorldDirection, 0xC);
};

// Function GHMEngine.GHM_GameViewportClient.Project
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class ULocalPlayer*            LP                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 Location                       (CPF_Parm)

struct FVector UGHM_GameViewportClient::Project(class ULocalPlayer* LP, class UCanvas* Canvas, struct FVector Location)
{
	static UFunction* uFnProject = nullptr;

	if (!uFnProject)
	{
		uFnProject = UFunction::FindFunction("Function GHMEngine.GHM_GameViewportClient.Project");
	}

	UGHM_GameViewportClient_execProject_Params Project_Params;
	memcpy_s(&Project_Params.LP, 0x8, &LP, 0x8);
	memcpy_s(&Project_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&Project_Params.Location, 0xC, &Location, 0xC);

	uFnProject->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnProject, &Project_Params, nullptr);

	uFnProject->FunctionFlags |= 0x400;

	return Project_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameViewportClient.GameSessionEnded
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_GameViewportClient::eventGameSessionEnded()
{
	static UFunction* uFnGameSessionEnded = nullptr;

	if (!uFnGameSessionEnded)
	{
		uFnGameSessionEnded = UFunction::FindFunction("Function GHMEngine.GHM_GameViewportClient.GameSessionEnded");
	}

	UGHM_GameViewportClient_eventGameSessionEnded_Params GameSessionEnded_Params;

	this->ProcessEvent(uFnGameSessionEnded, &GameSessionEnded_Params, nullptr);
};

// Function GHMEngine.GHM_GameViewportClient.PostRender
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_GameViewportClient::eventPostRender(class UCanvas* Canvas)
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GHMEngine.GHM_GameViewportClient.PostRender");
	}

	UGHM_GameViewportClient_eventPostRender_Params PostRender_Params;
	memcpy_s(&PostRender_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GHMEngine.GHM_GameViewportClient.CleanRawButtonEvents
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_GameViewportClient::CleanRawButtonEvents()
{
	static UFunction* uFnCleanRawButtonEvents = nullptr;

	if (!uFnCleanRawButtonEvents)
	{
		uFnCleanRawButtonEvents = UFunction::FindFunction("Function GHMEngine.GHM_GameViewportClient.CleanRawButtonEvents");
	}

	UGHM_GameViewportClient_execCleanRawButtonEvents_Params CleanRawButtonEvents_Params;

	uFnCleanRawButtonEvents->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCleanRawButtonEvents, &CleanRawButtonEvents_Params, nullptr);

	uFnCleanRawButtonEvents->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_GFxManager.SetInputIgnore
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  _bFlag                         (CPF_Parm)

void UGHM_GFxManager::SetInputIgnore(unsigned long _bFlag)
{
	static UFunction* uFnSetInputIgnore = nullptr;

	if (!uFnSetInputIgnore)
	{
		uFnSetInputIgnore = UFunction::FindFunction("Function GHMEngine.GHM_GFxManager.SetInputIgnore");
	}

	UGHM_GFxManager_execSetInputIgnore_Params SetInputIgnore_Params;
	SetInputIgnore_Params._bFlag = _bFlag;

	uFnSetInputIgnore->FunctionFlags |= ~0x400;

	UGHM_GFxManager::StaticClass()->ProcessEvent(uFnSetInputIgnore, &SetInputIgnore_Params, nullptr);

	uFnSetInputIgnore->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_HUD.PostRender
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_HUD::eventPostRender()
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GHMEngine.GHM_HUD.PostRender");
	}

	AGHM_HUD_eventPostRender_Params PostRender_Params;

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GHMEngine.GHM_HUD.RenderTexture_Render
// [0x00042401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 pCanvas                        (CPF_Parm)

void AGHM_HUD::RenderTexture_Render(class UCanvas* pCanvas)
{
	static UFunction* uFnRenderTexture_Render = nullptr;

	if (!uFnRenderTexture_Render)
	{
		uFnRenderTexture_Render = UFunction::FindFunction("Function GHMEngine.GHM_HUD.RenderTexture_Render");
	}

	AGHM_HUD_execRenderTexture_Render_Params RenderTexture_Render_Params;
	memcpy_s(&RenderTexture_Render_Params.pCanvas, 0x8, &pCanvas, 0x8);

	uFnRenderTexture_Render->FunctionFlags |= ~0x400;

	AGHM_HUD::StaticClass()->ProcessEvent(uFnRenderTexture_Render, &RenderTexture_Render_Params, nullptr);

	uFnRenderTexture_Render->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_HUD.SetRenderTexturePosition
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Index                          (CPF_Parm)
// int32_t                        RenderX                        (CPF_Parm)
// int32_t                        RenderY                        (CPF_Parm)

void AGHM_HUD::SetRenderTexturePosition(int32_t Index, int32_t RenderX, int32_t RenderY)
{
	static UFunction* uFnSetRenderTexturePosition = nullptr;

	if (!uFnSetRenderTexturePosition)
	{
		uFnSetRenderTexturePosition = UFunction::FindFunction("Function GHMEngine.GHM_HUD.SetRenderTexturePosition");
	}

	AGHM_HUD_execSetRenderTexturePosition_Params SetRenderTexturePosition_Params;
	memcpy_s(&SetRenderTexturePosition_Params.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetRenderTexturePosition_Params.RenderX, 0x4, &RenderX, 0x4);
	memcpy_s(&SetRenderTexturePosition_Params.RenderY, 0x4, &RenderY, 0x4);

	uFnSetRenderTexturePosition->FunctionFlags |= ~0x400;

	AGHM_HUD::StaticClass()->ProcessEvent(uFnSetRenderTexturePosition, &SetRenderTexturePosition_Params, nullptr);

	uFnSetRenderTexturePosition->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_HUD.SetRenderTextureVisible
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Index                          (CPF_Parm)
// unsigned long                  Visible                        (CPF_Parm)

void AGHM_HUD::SetRenderTextureVisible(int32_t Index, unsigned long Visible)
{
	static UFunction* uFnSetRenderTextureVisible = nullptr;

	if (!uFnSetRenderTextureVisible)
	{
		uFnSetRenderTextureVisible = UFunction::FindFunction("Function GHMEngine.GHM_HUD.SetRenderTextureVisible");
	}

	AGHM_HUD_execSetRenderTextureVisible_Params SetRenderTextureVisible_Params;
	memcpy_s(&SetRenderTextureVisible_Params.Index, 0x4, &Index, 0x4);
	SetRenderTextureVisible_Params.Visible = Visible;

	uFnSetRenderTextureVisible->FunctionFlags |= ~0x400;

	AGHM_HUD::StaticClass()->ProcessEvent(uFnSetRenderTextureVisible, &SetRenderTextureVisible_Params, nullptr);

	uFnSetRenderTextureVisible->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_HUD.SetRenderTexture
// [0x00026400] (FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Index                          (CPF_Parm)
// class UTexture*                RenderTexture                  (CPF_Parm)
// int32_t                        RenderX                        (CPF_OptionalParm | CPF_Parm)
// int32_t                        RenderY                        (CPF_OptionalParm | CPF_Parm)
// int32_t                        RenderW                        (CPF_OptionalParm | CPF_Parm)
// int32_t                        RenderH                        (CPF_OptionalParm | CPF_Parm)

void AGHM_HUD::SetRenderTexture(int32_t Index, class UTexture* RenderTexture, int32_t RenderX, int32_t RenderY, int32_t RenderW, int32_t RenderH)
{
	static UFunction* uFnSetRenderTexture = nullptr;

	if (!uFnSetRenderTexture)
	{
		uFnSetRenderTexture = UFunction::FindFunction("Function GHMEngine.GHM_HUD.SetRenderTexture");
	}

	AGHM_HUD_execSetRenderTexture_Params SetRenderTexture_Params;
	memcpy_s(&SetRenderTexture_Params.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetRenderTexture_Params.RenderTexture, 0x8, &RenderTexture, 0x8);
	memcpy_s(&SetRenderTexture_Params.RenderX, 0x4, &RenderX, 0x4);
	memcpy_s(&SetRenderTexture_Params.RenderY, 0x4, &RenderY, 0x4);
	memcpy_s(&SetRenderTexture_Params.RenderW, 0x4, &RenderW, 0x4);
	memcpy_s(&SetRenderTexture_Params.RenderH, 0x4, &RenderH, 0x4);

	uFnSetRenderTexture->FunctionFlags |= ~0x400;

	AGHM_HUD::StaticClass()->ProcessEvent(uFnSetRenderTexture, &SetRenderTexture_Params, nullptr);

	uFnSetRenderTexture->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_HUD.HideOnScreenDebugInfo
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_HUD::HideOnScreenDebugInfo()
{
	static UFunction* uFnHideOnScreenDebugInfo = nullptr;

	if (!uFnHideOnScreenDebugInfo)
	{
		uFnHideOnScreenDebugInfo = UFunction::FindFunction("Function GHMEngine.GHM_HUD.HideOnScreenDebugInfo");
	}

	AGHM_HUD_execHideOnScreenDebugInfo_Params HideOnScreenDebugInfo_Params;

	this->ProcessEvent(uFnHideOnScreenDebugInfo, &HideOnScreenDebugInfo_Params, nullptr);
};

// Function GHMEngine.GHM_HUD.ShowOnScreenDebugInfo
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_HUD::ShowOnScreenDebugInfo()
{
	static UFunction* uFnShowOnScreenDebugInfo = nullptr;

	if (!uFnShowOnScreenDebugInfo)
	{
		uFnShowOnScreenDebugInfo = UFunction::FindFunction("Function GHMEngine.GHM_HUD.ShowOnScreenDebugInfo");
	}

	AGHM_HUD_execShowOnScreenDebugInfo_Params ShowOnScreenDebugInfo_Params;

	this->ProcessEvent(uFnShowOnScreenDebugInfo, &ShowOnScreenDebugInfo_Params, nullptr);
};

// Function GHMEngine.GHM_HUD.DrawOnScreenDebugInfo
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 _oCanvas                       (CPF_Parm)

void AGHM_HUD::DrawOnScreenDebugInfo(class UCanvas* _oCanvas)
{
	static UFunction* uFnDrawOnScreenDebugInfo = nullptr;

	if (!uFnDrawOnScreenDebugInfo)
	{
		uFnDrawOnScreenDebugInfo = UFunction::FindFunction("Function GHMEngine.GHM_HUD.DrawOnScreenDebugInfo");
	}

	AGHM_HUD_execDrawOnScreenDebugInfo_Params DrawOnScreenDebugInfo_Params;
	memcpy_s(&DrawOnScreenDebugInfo_Params._oCanvas, 0x8, &_oCanvas, 0x8);

	this->ProcessEvent(uFnDrawOnScreenDebugInfo, &DrawOnScreenDebugInfo_Params, nullptr);
};

// Function GHMEngine.GHM_HUD.Message
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APlayerReplicationInfo*  PRI                            (CPF_Parm)
// class FString                  msg                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FName                   MsgType                        (CPF_Parm)
// float                          Lifetime                       (CPF_OptionalParm | CPF_Parm)

void AGHM_HUD::Message(class APlayerReplicationInfo* PRI, class FString msg, struct FName MsgType, float Lifetime)
{
	static UFunction* uFnMessage = nullptr;

	if (!uFnMessage)
	{
		uFnMessage = UFunction::FindFunction("Function GHMEngine.GHM_HUD.Message");
	}

	AGHM_HUD_execMessage_Params Message_Params;
	memcpy_s(&Message_Params.PRI, 0x8, &PRI, 0x8);
	memcpy_s(&Message_Params.msg, 0x10, &msg, 0x10);
	memcpy_s(&Message_Params.MsgType, 0x8, &MsgType, 0x8);
	memcpy_s(&Message_Params.Lifetime, 0x4, &Lifetime, 0x4);

	this->ProcessEvent(uFnMessage, &Message_Params, nullptr);
};

// Function GHMEngine.GHM_HUD.UpdateLocalRevisionNumbers
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_HUD::UpdateLocalRevisionNumbers()
{
	static UFunction* uFnUpdateLocalRevisionNumbers = nullptr;

	if (!uFnUpdateLocalRevisionNumbers)
	{
		uFnUpdateLocalRevisionNumbers = UFunction::FindFunction("Function GHMEngine.GHM_HUD.UpdateLocalRevisionNumbers");
	}

	AGHM_HUD_execUpdateLocalRevisionNumbers_Params UpdateLocalRevisionNumbers_Params;

	uFnUpdateLocalRevisionNumbers->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateLocalRevisionNumbers, &UpdateLocalRevisionNumbers_Params, nullptr);

	uFnUpdateLocalRevisionNumbers->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_KActorSpawnable.StartParameterFade
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_KActorSpawnable::StartParameterFade()
{
	static UFunction* uFnStartParameterFade = nullptr;

	if (!uFnStartParameterFade)
	{
		uFnStartParameterFade = UFunction::FindFunction("Function GHMEngine.GHM_KActorSpawnable.StartParameterFade");
	}

	AGHM_KActorSpawnable_execStartParameterFade_Params StartParameterFade_Params;

	this->ProcessEvent(uFnStartParameterFade, &StartParameterFade_Params, nullptr);
};

// Function GHMEngine.GHM_KActorSpawnable.RecycleInternal
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_KActorSpawnable::eventRecycleInternal()
{
	static UFunction* uFnRecycleInternal = nullptr;

	if (!uFnRecycleInternal)
	{
		uFnRecycleInternal = UFunction::FindFunction("Function GHMEngine.GHM_KActorSpawnable.RecycleInternal");
	}

	AGHM_KActorSpawnable_eventRecycleInternal_Params RecycleInternal_Params;

	this->ProcessEvent(uFnRecycleInternal, &RecycleInternal_Params, nullptr);
};

// Function GHMEngine.GHM_KActorSpawnable.StartScreenDoorFade
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_KActorSpawnable::StartScreenDoorFade()
{
	static UFunction* uFnStartScreenDoorFade = nullptr;

	if (!uFnStartScreenDoorFade)
	{
		uFnStartScreenDoorFade = UFunction::FindFunction("Function GHMEngine.GHM_KActorSpawnable.StartScreenDoorFade");
	}

	AGHM_KActorSpawnable_execStartScreenDoorFade_Params StartScreenDoorFade_Params;

	this->ProcessEvent(uFnStartScreenDoorFade, &StartScreenDoorFade_Params, nullptr);
};

// Function GHMEngine.GHM_KActorSpawnable.RecycleDelegate
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 Parameter                      (CPF_OptionalParm | CPF_Parm)

void AGHM_KActorSpawnable::RecycleDelegate(class UObject* Parameter)
{
	static UFunction* uFnRecycleDelegate = nullptr;

	if (!uFnRecycleDelegate)
	{
		uFnRecycleDelegate = UFunction::FindFunction("Function GHMEngine.GHM_KActorSpawnable.RecycleDelegate");
	}

	AGHM_KActorSpawnable_execRecycleDelegate_Params RecycleDelegate_Params;
	memcpy_s(&RecycleDelegate_Params.Parameter, 0x8, &Parameter, 0x8);

	this->ProcessEvent(uFnRecycleDelegate, &RecycleDelegate_Params, nullptr);
};

// Function GHMEngine.GHM_KActorSpawnable.Recycle
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_KActorSpawnable::Recycle()
{
	static UFunction* uFnRecycle = nullptr;

	if (!uFnRecycle)
	{
		uFnRecycle = UFunction::FindFunction("Function GHMEngine.GHM_KActorSpawnable.Recycle");
	}

	AGHM_KActorSpawnable_execRecycle_Params Recycle_Params;

	this->ProcessEvent(uFnRecycle, &Recycle_Params, nullptr);
};

// Function GHMEngine.GHM_MapInfoBase.InitBreakableManager
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_MapInfoBase::InitBreakableManager()
{
	static UFunction* uFnInitBreakableManager = nullptr;

	if (!uFnInitBreakableManager)
	{
		uFnInitBreakableManager = UFunction::FindFunction("Function GHMEngine.GHM_MapInfoBase.InitBreakableManager");
	}

	UGHM_MapInfoBase_execInitBreakableManager_Params InitBreakableManager_Params;

	this->ProcessEvent(uFnInitBreakableManager, &InitBreakableManager_Params, nullptr);
};

// Function GHMEngine.GHM_Pawn.OnTeleport
// [0x00820102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class USeqAct_Teleport*        Action                         (CPF_Parm)

void AGHM_Pawn::OnTeleport(class USeqAct_Teleport* Action)
{
	static UFunction* uFnOnTeleport = nullptr;

	if (!uFnOnTeleport)
	{
		uFnOnTeleport = UFunction::FindFunction("Function GHMEngine.GHM_Pawn.OnTeleport");
	}

	AGHM_Pawn_execOnTeleport_Params OnTeleport_Params;
	memcpy_s(&OnTeleport_Params.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(uFnOnTeleport, &OnTeleport_Params, nullptr);
};

// Function GHMEngine.GHM_Pawn.PlayMaterialInteractionFromHitInfo
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FTraceHitInfo           _oHitInfo                      (CPF_Parm)
// int32_t                        _iSoundType                    (CPF_Parm)
// int32_t                        _iEffectType                   (CPF_Parm)
// struct FName                   _EffSocketName                 (CPF_Parm)
// struct FVector                 _vSoundLocation                (CPF_Parm)

void AGHM_Pawn::PlayMaterialInteractionFromHitInfo(struct FTraceHitInfo _oHitInfo, int32_t _iSoundType, int32_t _iEffectType, struct FName _EffSocketName, struct FVector _vSoundLocation)
{
	static UFunction* uFnPlayMaterialInteractionFromHitInfo = nullptr;

	if (!uFnPlayMaterialInteractionFromHitInfo)
	{
		uFnPlayMaterialInteractionFromHitInfo = UFunction::FindFunction("Function GHMEngine.GHM_Pawn.PlayMaterialInteractionFromHitInfo");
	}

	AGHM_Pawn_execPlayMaterialInteractionFromHitInfo_Params PlayMaterialInteractionFromHitInfo_Params;
	memcpy_s(&PlayMaterialInteractionFromHitInfo_Params._oHitInfo, 0x28, &_oHitInfo, 0x28);
	memcpy_s(&PlayMaterialInteractionFromHitInfo_Params._iSoundType, 0x4, &_iSoundType, 0x4);
	memcpy_s(&PlayMaterialInteractionFromHitInfo_Params._iEffectType, 0x4, &_iEffectType, 0x4);
	memcpy_s(&PlayMaterialInteractionFromHitInfo_Params._EffSocketName, 0x8, &_EffSocketName, 0x8);
	memcpy_s(&PlayMaterialInteractionFromHitInfo_Params._vSoundLocation, 0xC, &_vSoundLocation, 0xC);

	this->ProcessEvent(uFnPlayMaterialInteractionFromHitInfo, &PlayMaterialInteractionFromHitInfo_Params, nullptr);
};

// Function GHMEngine.GHM_Pawn.GHM_PlayFootStepSound
// [0x00820802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// int32_t                        _iFootDown                     (CPF_Parm)
// int32_t                        _iSoundType                    (CPF_Parm)
// int32_t                        _iEffectType                   (CPF_Parm)
// struct FName                   _EffSocketName                 (CPF_Parm)

void AGHM_Pawn::eventGHM_PlayFootStepSound(int32_t _iFootDown, int32_t _iSoundType, int32_t _iEffectType, struct FName _EffSocketName)
{
	static UFunction* uFnGHM_PlayFootStepSound = nullptr;

	if (!uFnGHM_PlayFootStepSound)
	{
		uFnGHM_PlayFootStepSound = UFunction::FindFunction("Function GHMEngine.GHM_Pawn.GHM_PlayFootStepSound");
	}

	AGHM_Pawn_eventGHM_PlayFootStepSound_Params GHM_PlayFootStepSound_Params;
	memcpy_s(&GHM_PlayFootStepSound_Params._iFootDown, 0x4, &_iFootDown, 0x4);
	memcpy_s(&GHM_PlayFootStepSound_Params._iSoundType, 0x4, &_iSoundType, 0x4);
	memcpy_s(&GHM_PlayFootStepSound_Params._iEffectType, 0x4, &_iEffectType, 0x4);
	memcpy_s(&GHM_PlayFootStepSound_Params._EffSocketName, 0x8, &_EffSocketName, 0x8);

	this->ProcessEvent(uFnGHM_PlayFootStepSound, &GHM_PlayFootStepSound_Params, nullptr);
};

// Function GHMEngine.GHM_Pawn.GetPhysicalMaterialProp
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UGHM_PhysicalMaterialProperty* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FTraceHitInfo           _oHitInfo                      (CPF_Parm | CPF_OutParm)

class UGHM_PhysicalMaterialProperty* AGHM_Pawn::GetPhysicalMaterialProp(struct FTraceHitInfo& _oHitInfo)
{
	static UFunction* uFnGetPhysicalMaterialProp = nullptr;

	if (!uFnGetPhysicalMaterialProp)
	{
		uFnGetPhysicalMaterialProp = UFunction::FindFunction("Function GHMEngine.GHM_Pawn.GetPhysicalMaterialProp");
	}

	AGHM_Pawn_execGetPhysicalMaterialProp_Params GetPhysicalMaterialProp_Params;
	memcpy_s(&GetPhysicalMaterialProp_Params._oHitInfo, 0x28, &_oHitInfo, 0x28);

	this->ProcessEvent(uFnGetPhysicalMaterialProp, &GetPhysicalMaterialProp_Params, nullptr);

	memcpy_s(&_oHitInfo, 0x28, &GetPhysicalMaterialProp_Params._oHitInfo, 0x28);

	return GetPhysicalMaterialProp_Params.ReturnValue;
};

// Function GHMEngine.GHM_Pawn.FindPhysicalMaterialProperty
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_PhysicalMaterialProperty* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPhysicalMaterial*       _oPhysMaterial                 (CPF_Parm)

class UGHM_PhysicalMaterialProperty* AGHM_Pawn::FindPhysicalMaterialProperty(class UPhysicalMaterial* _oPhysMaterial)
{
	static UFunction* uFnFindPhysicalMaterialProperty = nullptr;

	if (!uFnFindPhysicalMaterialProperty)
	{
		uFnFindPhysicalMaterialProperty = UFunction::FindFunction("Function GHMEngine.GHM_Pawn.FindPhysicalMaterialProperty");
	}

	AGHM_Pawn_execFindPhysicalMaterialProperty_Params FindPhysicalMaterialProperty_Params;
	memcpy_s(&FindPhysicalMaterialProperty_Params._oPhysMaterial, 0x8, &_oPhysMaterial, 0x8);

	this->ProcessEvent(uFnFindPhysicalMaterialProperty, &FindPhysicalMaterialProperty_Params, nullptr);

	return FindPhysicalMaterialProperty_Params.ReturnValue;
};

// Function GHMEngine.GHM_Pawn.MAT_SetSkelControlWeight
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   SkelControlNodeName            (CPF_Parm)
// float                          SkelControlWeight              (CPF_Parm)

void AGHM_Pawn::MAT_SetSkelControlWeight(struct FName SkelControlNodeName, float SkelControlWeight)
{
	static UFunction* uFnMAT_SetSkelControlWeight = nullptr;

	if (!uFnMAT_SetSkelControlWeight)
	{
		uFnMAT_SetSkelControlWeight = UFunction::FindFunction("Function GHMEngine.GHM_Pawn.MAT_SetSkelControlWeight");
	}

	AGHM_Pawn_execMAT_SetSkelControlWeight_Params MAT_SetSkelControlWeight_Params;
	memcpy_s(&MAT_SetSkelControlWeight_Params.SkelControlNodeName, 0x8, &SkelControlNodeName, 0x8);
	memcpy_s(&MAT_SetSkelControlWeight_Params.SkelControlWeight, 0x4, &SkelControlWeight, 0x4);

	uFnMAT_SetSkelControlWeight->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnMAT_SetSkelControlWeight, &MAT_SetSkelControlWeight_Params, nullptr);

	uFnMAT_SetSkelControlWeight->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_Pawn.SetSkelControlWeight
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   _SkelControlNodeName           (CPF_Parm)
// float                          _fSkelControlWeight            (CPF_Parm)

void AGHM_Pawn::eventSetSkelControlWeight(struct FName _SkelControlNodeName, float _fSkelControlWeight)
{
	static UFunction* uFnSetSkelControlWeight = nullptr;

	if (!uFnSetSkelControlWeight)
	{
		uFnSetSkelControlWeight = UFunction::FindFunction("Function GHMEngine.GHM_Pawn.SetSkelControlWeight");
	}

	AGHM_Pawn_eventSetSkelControlWeight_Params SetSkelControlWeight_Params;
	memcpy_s(&SetSkelControlWeight_Params._SkelControlNodeName, 0x8, &_SkelControlNodeName, 0x8);
	memcpy_s(&SetSkelControlWeight_Params._fSkelControlWeight, 0x4, &_fSkelControlWeight, 0x4);

	this->ProcessEvent(uFnSetSkelControlWeight, &SetSkelControlWeight_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.OnExternalUIExecute
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsExecute                     (CPF_Parm)

void AGHM_PlayerController::OnExternalUIExecute(unsigned long bIsExecute)
{
	static UFunction* uFnOnExternalUIExecute = nullptr;

	if (!uFnOnExternalUIExecute)
	{
		uFnOnExternalUIExecute = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.OnExternalUIExecute");
	}

	AGHM_PlayerController_execOnExternalUIExecute_Params OnExternalUIExecute_Params;
	OnExternalUIExecute_Params.bIsExecute = bIsExecute;

	this->ProcessEvent(uFnOnExternalUIExecute, &OnExternalUIExecute_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.JustLoadedCheckPoint
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::JustLoadedCheckPoint()
{
	static UFunction* uFnJustLoadedCheckPoint = nullptr;

	if (!uFnJustLoadedCheckPoint)
	{
		uFnJustLoadedCheckPoint = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.JustLoadedCheckPoint");
	}

	AGHM_PlayerController_execJustLoadedCheckPoint_Params JustLoadedCheckPoint_Params;

	this->ProcessEvent(uFnJustLoadedCheckPoint, &JustLoadedCheckPoint_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.Destroyed
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.Destroyed");
	}

	AGHM_PlayerController_eventDestroyed_Params Destroyed_Params;

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.PreBeginPlay
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::eventPreBeginPlay()
{
	static UFunction* uFnPreBeginPlay = nullptr;

	if (!uFnPreBeginPlay)
	{
		uFnPreBeginPlay = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.PreBeginPlay");
	}

	AGHM_PlayerController_eventPreBeginPlay_Params PreBeginPlay_Params;

	this->ProcessEvent(uFnPreBeginPlay, &PreBeginPlay_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.GetHUDSub
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_HUDSub*             ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_HUDSub* AGHM_PlayerController::GetHUDSub()
{
	static UFunction* uFnGetHUDSub = nullptr;

	if (!uFnGetHUDSub)
	{
		uFnGetHUDSub = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.GetHUDSub");
	}

	AGHM_PlayerController_execGetHUDSub_Params GetHUDSub_Params;

	this->ProcessEvent(uFnGetHUDSub, &GetHUDSub_Params, nullptr);

	return GetHUDSub_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.GHM_GetDebugMenu
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenu*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_DebugMenu* AGHM_PlayerController::GHM_GetDebugMenu()
{
	static UFunction* uFnGHM_GetDebugMenu = nullptr;

	if (!uFnGHM_GetDebugMenu)
	{
		uFnGHM_GetDebugMenu = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.GHM_GetDebugMenu");
	}

	AGHM_PlayerController_execGHM_GetDebugMenu_Params GHM_GetDebugMenu_Params;

	this->ProcessEvent(uFnGHM_GetDebugMenu, &GHM_GetDebugMenu_Params, nullptr);

	return GHM_GetDebugMenu_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.GetMessBoard
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_MessageBoard*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_MessageBoard* AGHM_PlayerController::GetMessBoard()
{
	static UFunction* uFnGetMessBoard = nullptr;

	if (!uFnGetMessBoard)
	{
		uFnGetMessBoard = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.GetMessBoard");
	}

	AGHM_PlayerController_execGetMessBoard_Params GetMessBoard_Params;

	this->ProcessEvent(uFnGetMessBoard, &GetMessBoard_Params, nullptr);

	return GetMessBoard_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.UnregisterPlayerDataStores
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::UnregisterPlayerDataStores()
{
	static UFunction* uFnUnregisterPlayerDataStores = nullptr;

	if (!uFnUnregisterPlayerDataStores)
	{
		uFnUnregisterPlayerDataStores = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.UnregisterPlayerDataStores");
	}

	AGHM_PlayerController_execUnregisterPlayerDataStores_Params UnregisterPlayerDataStores_Params;

	this->ProcessEvent(uFnUnregisterPlayerDataStores, &UnregisterPlayerDataStores_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.RegisterCustomPlayerDataStores
// [0x00080102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Protected | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::RegisterCustomPlayerDataStores()
{
	static UFunction* uFnRegisterCustomPlayerDataStores = nullptr;

	if (!uFnRegisterCustomPlayerDataStores)
	{
		uFnRegisterCustomPlayerDataStores = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.RegisterCustomPlayerDataStores");
	}

	AGHM_PlayerController_execRegisterCustomPlayerDataStores_Params RegisterCustomPlayerDataStores_Params;

	this->ProcessEvent(uFnRegisterCustomPlayerDataStores, &RegisterCustomPlayerDataStores_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.OnProfileWriteComplete
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void AGHM_PlayerController::OnProfileWriteComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnProfileWriteComplete = nullptr;

	if (!uFnOnProfileWriteComplete)
	{
		uFnOnProfileWriteComplete = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.OnProfileWriteComplete");
	}

	AGHM_PlayerController_execOnProfileWriteComplete_Params OnProfileWriteComplete_Params;
	memcpy_s(&OnProfileWriteComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	OnProfileWriteComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnProfileWriteComplete, &OnProfileWriteComplete_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.ClearSaveProfileDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void AGHM_PlayerController::ClearSaveProfileDelegate(struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearSaveProfileDelegate = nullptr;

	if (!uFnClearSaveProfileDelegate)
	{
		uFnClearSaveProfileDelegate = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.ClearSaveProfileDelegate");
	}

	AGHM_PlayerController_execClearSaveProfileDelegate_Params ClearSaveProfileDelegate_Params;
	memcpy_s(&ClearSaveProfileDelegate_Params.WriteProfileSettingsCompleteDelegate, 0x10, &WriteProfileSettingsCompleteDelegate, 0x10);

	this->ProcessEvent(uFnClearSaveProfileDelegate, &ClearSaveProfileDelegate_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.SaveProfile
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void AGHM_PlayerController::SaveProfile(struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnSaveProfile = nullptr;

	if (!uFnSaveProfile)
	{
		uFnSaveProfile = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.SaveProfile");
	}

	AGHM_PlayerController_execSaveProfile_Params SaveProfile_Params;
	memcpy_s(&SaveProfile_Params.WriteProfileSettingsCompleteDelegate, 0x10, &WriteProfileSettingsCompleteDelegate, 0x10);

	this->ProcessEvent(uFnSaveProfile, &SaveProfile_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.DebugLoadGameSettings
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGHM_PlayerController::DebugLoadGameSettings()
{
	static UFunction* uFnDebugLoadGameSettings = nullptr;

	if (!uFnDebugLoadGameSettings)
	{
		uFnDebugLoadGameSettings = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.DebugLoadGameSettings");
	}

	AGHM_PlayerController_execDebugLoadGameSettings_Params DebugLoadGameSettings_Params;

	this->ProcessEvent(uFnDebugLoadGameSettings, &DebugLoadGameSettings_Params, nullptr);

	return DebugLoadGameSettings_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.LoadGameSettings
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::LoadGameSettings()
{
	static UFunction* uFnLoadGameSettings = nullptr;

	if (!uFnLoadGameSettings)
	{
		uFnLoadGameSettings = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.LoadGameSettings");
	}

	AGHM_PlayerController_execLoadGameSettings_Params LoadGameSettings_Params;

	this->ProcessEvent(uFnLoadGameSettings, &LoadGameSettings_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.DebugSaveGameSettings
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGHM_PlayerController::DebugSaveGameSettings()
{
	static UFunction* uFnDebugSaveGameSettings = nullptr;

	if (!uFnDebugSaveGameSettings)
	{
		uFnDebugSaveGameSettings = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.DebugSaveGameSettings");
	}

	AGHM_PlayerController_execDebugSaveGameSettings_Params DebugSaveGameSettings_Params;

	this->ProcessEvent(uFnDebugSaveGameSettings, &DebugSaveGameSettings_Params, nullptr);

	return DebugSaveGameSettings_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.SaveGameSettings
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::SaveGameSettings()
{
	static UFunction* uFnSaveGameSettings = nullptr;

	if (!uFnSaveGameSettings)
	{
		uFnSaveGameSettings = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.SaveGameSettings");
	}

	AGHM_PlayerController_execSaveGameSettings_Params SaveGameSettings_Params;

	this->ProcessEvent(uFnSaveGameSettings, &SaveGameSettings_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.LoadChapterPoint
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::LoadChapterPoint()
{
	static UFunction* uFnLoadChapterPoint = nullptr;

	if (!uFnLoadChapterPoint)
	{
		uFnLoadChapterPoint = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.LoadChapterPoint");
	}

	AGHM_PlayerController_execLoadChapterPoint_Params LoadChapterPoint_Params;

	this->ProcessEvent(uFnLoadChapterPoint, &LoadChapterPoint_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.DebugLoadCheckPoint
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bLoadChapterPoint              (CPF_OptionalParm | CPF_Parm)

bool AGHM_PlayerController::DebugLoadCheckPoint(unsigned long bLoadChapterPoint)
{
	static UFunction* uFnDebugLoadCheckPoint = nullptr;

	if (!uFnDebugLoadCheckPoint)
	{
		uFnDebugLoadCheckPoint = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.DebugLoadCheckPoint");
	}

	AGHM_PlayerController_execDebugLoadCheckPoint_Params DebugLoadCheckPoint_Params;
	DebugLoadCheckPoint_Params.bLoadChapterPoint = bLoadChapterPoint;

	this->ProcessEvent(uFnDebugLoadCheckPoint, &DebugLoadCheckPoint_Params, nullptr);

	return DebugLoadCheckPoint_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.LoadCheckpoint
// [0x00024202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bLoadChapterPoint              (CPF_OptionalParm | CPF_Parm)

void AGHM_PlayerController::LoadCheckpoint(unsigned long bLoadChapterPoint)
{
	static UFunction* uFnLoadCheckpoint = nullptr;

	if (!uFnLoadCheckpoint)
	{
		uFnLoadCheckpoint = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.LoadCheckpoint");
	}

	AGHM_PlayerController_execLoadCheckpoint_Params LoadCheckpoint_Params;
	LoadCheckpoint_Params.bLoadChapterPoint = bLoadChapterPoint;

	this->ProcessEvent(uFnLoadCheckpoint, &LoadCheckpoint_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.SaveChapterPoint
// [0x00024202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAsyncSaveKismet               (CPF_OptionalParm | CPF_Parm)

void AGHM_PlayerController::SaveChapterPoint(unsigned long bAsyncSaveKismet)
{
	static UFunction* uFnSaveChapterPoint = nullptr;

	if (!uFnSaveChapterPoint)
	{
		uFnSaveChapterPoint = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.SaveChapterPoint");
	}

	AGHM_PlayerController_execSaveChapterPoint_Params SaveChapterPoint_Params;
	SaveChapterPoint_Params.bAsyncSaveKismet = bAsyncSaveKismet;

	this->ProcessEvent(uFnSaveChapterPoint, &SaveChapterPoint_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.DebugSaveCheckpoint
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bAsyncSaveKismet               (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bCurrentIsChapterPoint         (CPF_OptionalParm | CPF_Parm)

bool AGHM_PlayerController::DebugSaveCheckpoint(unsigned long bAsyncSaveKismet, unsigned long bCurrentIsChapterPoint)
{
	static UFunction* uFnDebugSaveCheckpoint = nullptr;

	if (!uFnDebugSaveCheckpoint)
	{
		uFnDebugSaveCheckpoint = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.DebugSaveCheckpoint");
	}

	AGHM_PlayerController_execDebugSaveCheckpoint_Params DebugSaveCheckpoint_Params;
	DebugSaveCheckpoint_Params.bAsyncSaveKismet = bAsyncSaveKismet;
	DebugSaveCheckpoint_Params.bCurrentIsChapterPoint = bCurrentIsChapterPoint;

	this->ProcessEvent(uFnDebugSaveCheckpoint, &DebugSaveCheckpoint_Params, nullptr);

	return DebugSaveCheckpoint_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.SaveCheckpoint
// [0x00024202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAsyncSaveKismet               (CPF_OptionalParm | CPF_Parm)

void AGHM_PlayerController::SaveCheckpoint(unsigned long bAsyncSaveKismet)
{
	static UFunction* uFnSaveCheckpoint = nullptr;

	if (!uFnSaveCheckpoint)
	{
		uFnSaveCheckpoint = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.SaveCheckpoint");
	}

	AGHM_PlayerController_execSaveCheckpoint_Params SaveCheckpoint_Params;
	SaveCheckpoint_Params.bAsyncSaveKismet = bAsyncSaveKismet;

	this->ProcessEvent(uFnSaveCheckpoint, &SaveCheckpoint_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.OnCheckPoint
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_SeqAct_Checkpoint*  Action                         (CPF_Parm)

void AGHM_PlayerController::OnCheckPoint(class UGHM_SeqAct_Checkpoint* Action)
{
	static UFunction* uFnOnCheckPoint = nullptr;

	if (!uFnOnCheckPoint)
	{
		uFnOnCheckPoint = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.OnCheckPoint");
	}

	AGHM_PlayerController_execOnCheckPoint_Params OnCheckPoint_Params;
	memcpy_s(&OnCheckPoint_Params.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(uFnOnCheckPoint, &OnCheckPoint_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.NotifyLoginChangeReset
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::NotifyLoginChangeReset()
{
	static UFunction* uFnNotifyLoginChangeReset = nullptr;

	if (!uFnNotifyLoginChangeReset)
	{
		uFnNotifyLoginChangeReset = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.NotifyLoginChangeReset");
	}

	AGHM_PlayerController_execNotifyLoginChangeReset_Params NotifyLoginChangeReset_Params;

	this->ProcessEvent(uFnNotifyLoginChangeReset, &NotifyLoginChangeReset_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.RegisterLatentAction
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqAct_Latent*          Action                         (CPF_Parm)

void AGHM_PlayerController::RegisterLatentAction(class USeqAct_Latent* Action)
{
	static UFunction* uFnRegisterLatentAction = nullptr;

	if (!uFnRegisterLatentAction)
	{
		uFnRegisterLatentAction = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.RegisterLatentAction");
	}

	AGHM_PlayerController_execRegisterLatentAction_Params RegisterLatentAction_Params;
	memcpy_s(&RegisterLatentAction_Params.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(uFnRegisterLatentAction, &RegisterLatentAction_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.OnSetRichPresence
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_SeqAct_SetRichPresence* in_SeqAct                      (CPF_Parm)

void AGHM_PlayerController::OnSetRichPresence(class UGHM_SeqAct_SetRichPresence* in_SeqAct)
{
	static UFunction* uFnOnSetRichPresence = nullptr;

	if (!uFnOnSetRichPresence)
	{
		uFnOnSetRichPresence = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.OnSetRichPresence");
	}

	AGHM_PlayerController_execOnSetRichPresence_Params OnSetRichPresence_Params;
	memcpy_s(&OnSetRichPresence_Params.in_SeqAct, 0x8, &in_SeqAct, 0x8);

	this->ProcessEvent(uFnOnSetRichPresence, &OnSetRichPresence_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.ClientSetRichPresenceString
// [0x010201C2] (FUNC_RequiredAPI | FUNC_Net | FUNC_NetReliable | FUNC_NetRequest | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter info:
// int32_t                        PresenceID                     (CPF_Parm)

void AGHM_PlayerController::ClientSetRichPresenceString(int32_t PresenceID)
{
	static UFunction* uFnClientSetRichPresenceString = nullptr;

	if (!uFnClientSetRichPresenceString)
	{
		uFnClientSetRichPresenceString = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.ClientSetRichPresenceString");
	}

	AGHM_PlayerController_execClientSetRichPresenceString_Params ClientSetRichPresenceString_Params;
	memcpy_s(&ClientSetRichPresenceString_Params.PresenceID, 0x4, &PresenceID, 0x4);

	this->ProcessEvent(uFnClientSetRichPresenceString, &ClientSetRichPresenceString_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.SetRichPresenceString
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        StringId                       (CPF_Parm)

void AGHM_PlayerController::SetRichPresenceString(int32_t StringId)
{
	static UFunction* uFnSetRichPresenceString = nullptr;

	if (!uFnSetRichPresenceString)
	{
		uFnSetRichPresenceString = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.SetRichPresenceString");
	}

	AGHM_PlayerController_execSetRichPresenceString_Params SetRichPresenceString_Params;
	memcpy_s(&SetRichPresenceString_Params.StringId, 0x4, &StringId, 0x4);

	this->ProcessEvent(uFnSetRichPresenceString, &SetRichPresenceString_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.GetRichPresenceStringSettingAndPropertyAndRichPresenceId
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        StringId                       (CPF_Parm)
// TArray<struct FLocalizedStringSetting> StringSettings                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t AGHM_PlayerController::GetRichPresenceStringSettingAndPropertyAndRichPresenceId(int32_t StringId, TArray<struct FLocalizedStringSetting>& StringSettings, TArray<struct FSettingsProperty>& Properties)
{
	static UFunction* uFnGetRichPresenceStringSettingAndPropertyAndRichPresenceId = nullptr;

	if (!uFnGetRichPresenceStringSettingAndPropertyAndRichPresenceId)
	{
		uFnGetRichPresenceStringSettingAndPropertyAndRichPresenceId = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.GetRichPresenceStringSettingAndPropertyAndRichPresenceId");
	}

	AGHM_PlayerController_execGetRichPresenceStringSettingAndPropertyAndRichPresenceId_Params GetRichPresenceStringSettingAndPropertyAndRichPresenceId_Params;
	memcpy_s(&GetRichPresenceStringSettingAndPropertyAndRichPresenceId_Params.StringId, 0x4, &StringId, 0x4);
	memcpy_s(&GetRichPresenceStringSettingAndPropertyAndRichPresenceId_Params.StringSettings, 0x10, &StringSettings, 0x10);
	memcpy_s(&GetRichPresenceStringSettingAndPropertyAndRichPresenceId_Params.Properties, 0x10, &Properties, 0x10);

	this->ProcessEvent(uFnGetRichPresenceStringSettingAndPropertyAndRichPresenceId, &GetRichPresenceStringSettingAndPropertyAndRichPresenceId_Params, nullptr);

	memcpy_s(&StringSettings, 0x10, &GetRichPresenceStringSettingAndPropertyAndRichPresenceId_Params.StringSettings, 0x10);
	memcpy_s(&Properties, 0x10, &GetRichPresenceStringSettingAndPropertyAndRichPresenceId_Params.Properties, 0x10);

	return GetRichPresenceStringSettingAndPropertyAndRichPresenceId_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.InitInputSystem
// [0x00024802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bDevForceFeedback              (CPF_OptionalParm | CPF_Parm)

void AGHM_PlayerController::eventInitInputSystem(unsigned long bDevForceFeedback)
{
	static UFunction* uFnInitInputSystem = nullptr;

	if (!uFnInitInputSystem)
	{
		uFnInitInputSystem = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.InitInputSystem");
	}

	AGHM_PlayerController_eventInitInputSystem_Params InitInputSystem_Params;
	InitInputSystem_Params.bDevForceFeedback = bDevForceFeedback;

	this->ProcessEvent(uFnInitInputSystem, &InitInputSystem_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientPauseSound
// [0x010209C2] (FUNC_RequiredAPI | FUNC_Net | FUNC_NetReliable | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               ASound                         (CPF_Parm)
// class AActor*                  SourceActor                    (CPF_Parm)
// unsigned long                  bPauseState                    (CPF_Parm)

void AGHM_PlayerController::eventKismet_ClientPauseSound(class USoundCue* ASound, class AActor* SourceActor, unsigned long bPauseState)
{
	static UFunction* uFnKismet_ClientPauseSound = nullptr;

	if (!uFnKismet_ClientPauseSound)
	{
		uFnKismet_ClientPauseSound = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.Kismet_ClientPauseSound");
	}

	AGHM_PlayerController_eventKismet_ClientPauseSound_Params Kismet_ClientPauseSound_Params;
	memcpy_s(&Kismet_ClientPauseSound_Params.ASound, 0x8, &ASound, 0x8);
	memcpy_s(&Kismet_ClientPauseSound_Params.SourceActor, 0x8, &SourceActor, 0x8);
	Kismet_ClientPauseSound_Params.bPauseState = bPauseState;

	this->ProcessEvent(uFnKismet_ClientPauseSound, &Kismet_ClientPauseSound_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientInitialVolSetSound
// [0x010209C2] (FUNC_RequiredAPI | FUNC_Net | FUNC_NetReliable | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               ASound                         (CPF_Parm)
// class AActor*                  SourceActor                    (CPF_Parm)
// float                          inNewVolume                    (CPF_Parm)

void AGHM_PlayerController::eventKismet_ClientInitialVolSetSound(class USoundCue* ASound, class AActor* SourceActor, float inNewVolume)
{
	static UFunction* uFnKismet_ClientInitialVolSetSound = nullptr;

	if (!uFnKismet_ClientInitialVolSetSound)
	{
		uFnKismet_ClientInitialVolSetSound = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.Kismet_ClientInitialVolSetSound");
	}

	AGHM_PlayerController_eventKismet_ClientInitialVolSetSound_Params Kismet_ClientInitialVolSetSound_Params;
	memcpy_s(&Kismet_ClientInitialVolSetSound_Params.ASound, 0x8, &ASound, 0x8);
	memcpy_s(&Kismet_ClientInitialVolSetSound_Params.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&Kismet_ClientInitialVolSetSound_Params.inNewVolume, 0x4, &inNewVolume, 0x4);

	this->ProcessEvent(uFnKismet_ClientInitialVolSetSound, &Kismet_ClientInitialVolSetSound_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientVolFadeOutSound
// [0x010209C2] (FUNC_RequiredAPI | FUNC_Net | FUNC_NetReliable | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               ASound                         (CPF_Parm)
// class AActor*                  SourceActor                    (CPF_Parm)
// float                          FadeOutTime                    (CPF_Parm)
// unsigned long                  bIgnoreFade                    (CPF_Parm)

void AGHM_PlayerController::eventKismet_ClientVolFadeOutSound(class USoundCue* ASound, class AActor* SourceActor, float FadeOutTime, unsigned long bIgnoreFade)
{
	static UFunction* uFnKismet_ClientVolFadeOutSound = nullptr;

	if (!uFnKismet_ClientVolFadeOutSound)
	{
		uFnKismet_ClientVolFadeOutSound = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.Kismet_ClientVolFadeOutSound");
	}

	AGHM_PlayerController_eventKismet_ClientVolFadeOutSound_Params Kismet_ClientVolFadeOutSound_Params;
	memcpy_s(&Kismet_ClientVolFadeOutSound_Params.ASound, 0x8, &ASound, 0x8);
	memcpy_s(&Kismet_ClientVolFadeOutSound_Params.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&Kismet_ClientVolFadeOutSound_Params.FadeOutTime, 0x4, &FadeOutTime, 0x4);
	Kismet_ClientVolFadeOutSound_Params.bIgnoreFade = bIgnoreFade;

	this->ProcessEvent(uFnKismet_ClientVolFadeOutSound, &Kismet_ClientVolFadeOutSound_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientVolFadeInSound
// [0x010209C2] (FUNC_RequiredAPI | FUNC_Net | FUNC_NetReliable | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               ASound                         (CPF_Parm)
// class AActor*                  SourceActor                    (CPF_Parm)
// float                          VolumeMultiplier               (CPF_Parm)
// float                          PitchMultiplier                (CPF_Parm)
// float                          FadeInTime                     (CPF_Parm)
// unsigned long                  bSuppressSubtitles             (CPF_Parm)
// unsigned long                  bSuppressSpatialization        (CPF_Parm)
// unsigned long                  bIgnoreFade                    (CPF_Parm)

void AGHM_PlayerController::eventKismet_ClientVolFadeInSound(class USoundCue* ASound, class AActor* SourceActor, float VolumeMultiplier, float PitchMultiplier, float FadeInTime, unsigned long bSuppressSubtitles, unsigned long bSuppressSpatialization, unsigned long bIgnoreFade)
{
	static UFunction* uFnKismet_ClientVolFadeInSound = nullptr;

	if (!uFnKismet_ClientVolFadeInSound)
	{
		uFnKismet_ClientVolFadeInSound = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.Kismet_ClientVolFadeInSound");
	}

	AGHM_PlayerController_eventKismet_ClientVolFadeInSound_Params Kismet_ClientVolFadeInSound_Params;
	memcpy_s(&Kismet_ClientVolFadeInSound_Params.ASound, 0x8, &ASound, 0x8);
	memcpy_s(&Kismet_ClientVolFadeInSound_Params.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&Kismet_ClientVolFadeInSound_Params.VolumeMultiplier, 0x4, &VolumeMultiplier, 0x4);
	memcpy_s(&Kismet_ClientVolFadeInSound_Params.PitchMultiplier, 0x4, &PitchMultiplier, 0x4);
	memcpy_s(&Kismet_ClientVolFadeInSound_Params.FadeInTime, 0x4, &FadeInTime, 0x4);
	Kismet_ClientVolFadeInSound_Params.bSuppressSubtitles = bSuppressSubtitles;
	Kismet_ClientVolFadeInSound_Params.bSuppressSpatialization = bSuppressSpatialization;
	Kismet_ClientVolFadeInSound_Params.bIgnoreFade = bIgnoreFade;

	this->ProcessEvent(uFnKismet_ClientVolFadeInSound, &Kismet_ClientVolFadeInSound_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientStopSoundDeferred
// [0x010209C2] (FUNC_RequiredAPI | FUNC_Net | FUNC_NetReliable | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               ASound                         (CPF_Parm)
// class AActor*                  SourceActor                    (CPF_Parm)
// float                          FadeOutTime                    (CPF_Parm)

void AGHM_PlayerController::eventKismet_ClientStopSoundDeferred(class USoundCue* ASound, class AActor* SourceActor, float FadeOutTime)
{
	static UFunction* uFnKismet_ClientStopSoundDeferred = nullptr;

	if (!uFnKismet_ClientStopSoundDeferred)
	{
		uFnKismet_ClientStopSoundDeferred = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.Kismet_ClientStopSoundDeferred");
	}

	AGHM_PlayerController_eventKismet_ClientStopSoundDeferred_Params Kismet_ClientStopSoundDeferred_Params;
	memcpy_s(&Kismet_ClientStopSoundDeferred_Params.ASound, 0x8, &ASound, 0x8);
	memcpy_s(&Kismet_ClientStopSoundDeferred_Params.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&Kismet_ClientStopSoundDeferred_Params.FadeOutTime, 0x4, &FadeOutTime, 0x4);

	this->ProcessEvent(uFnKismet_ClientStopSoundDeferred, &Kismet_ClientStopSoundDeferred_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.Kismet_ClientPlaySound
// [0x010249C2] (FUNC_RequiredAPI | FUNC_Net | FUNC_NetReliable | FUNC_NetRequest | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter info:
// class UAudioComponent*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class USoundCue*               ASound                         (CPF_Parm)
// class AActor*                  SourceActor                    (CPF_Parm)
// float                          VolumeMultiplier               (CPF_Parm)
// float                          PitchMultiplier                (CPF_Parm)
// float                          FadeInTime                     (CPF_Parm)
// unsigned long                  bSuppressSubtitles             (CPF_Parm)
// unsigned long                  bSuppressSpatialization        (CPF_Parm)
// int32_t                        inUserData                     (CPF_OptionalParm | CPF_Parm)
// class FString                  inOffsetMarkerLabel            (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class FString                  inEndMarkerLabel               (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class UAudioComponent* AGHM_PlayerController::eventKismet_ClientPlaySound(class USoundCue* ASound, class AActor* SourceActor, float VolumeMultiplier, float PitchMultiplier, float FadeInTime, unsigned long bSuppressSubtitles, unsigned long bSuppressSpatialization, int32_t inUserData, class FString inOffsetMarkerLabel, class FString inEndMarkerLabel)
{
	static UFunction* uFnKismet_ClientPlaySound = nullptr;

	if (!uFnKismet_ClientPlaySound)
	{
		uFnKismet_ClientPlaySound = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.Kismet_ClientPlaySound");
	}

	AGHM_PlayerController_eventKismet_ClientPlaySound_Params Kismet_ClientPlaySound_Params;
	memcpy_s(&Kismet_ClientPlaySound_Params.ASound, 0x8, &ASound, 0x8);
	memcpy_s(&Kismet_ClientPlaySound_Params.SourceActor, 0x8, &SourceActor, 0x8);
	memcpy_s(&Kismet_ClientPlaySound_Params.VolumeMultiplier, 0x4, &VolumeMultiplier, 0x4);
	memcpy_s(&Kismet_ClientPlaySound_Params.PitchMultiplier, 0x4, &PitchMultiplier, 0x4);
	memcpy_s(&Kismet_ClientPlaySound_Params.FadeInTime, 0x4, &FadeInTime, 0x4);
	Kismet_ClientPlaySound_Params.bSuppressSubtitles = bSuppressSubtitles;
	Kismet_ClientPlaySound_Params.bSuppressSpatialization = bSuppressSpatialization;
	memcpy_s(&Kismet_ClientPlaySound_Params.inUserData, 0x4, &inUserData, 0x4);
	memcpy_s(&Kismet_ClientPlaySound_Params.inOffsetMarkerLabel, 0x10, &inOffsetMarkerLabel, 0x10);
	memcpy_s(&Kismet_ClientPlaySound_Params.inEndMarkerLabel, 0x10, &inEndMarkerLabel, 0x10);

	this->ProcessEvent(uFnKismet_ClientPlaySound, &Kismet_ClientPlaySound_Params, nullptr);

	return Kismet_ClientPlaySound_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.IsCurrentMatineeSkippable
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGHM_PlayerController::IsCurrentMatineeSkippable()
{
	static UFunction* uFnIsCurrentMatineeSkippable = nullptr;

	if (!uFnIsCurrentMatineeSkippable)
	{
		uFnIsCurrentMatineeSkippable = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.IsCurrentMatineeSkippable");
	}

	AGHM_PlayerController_execIsCurrentMatineeSkippable_Params IsCurrentMatineeSkippable_Params;

	this->ProcessEvent(uFnIsCurrentMatineeSkippable, &IsCurrentMatineeSkippable_Params, nullptr);

	return IsCurrentMatineeSkippable_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.IsInCinematicForSkipMatinee
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGHM_PlayerController::IsInCinematicForSkipMatinee()
{
	static UFunction* uFnIsInCinematicForSkipMatinee = nullptr;

	if (!uFnIsInCinematicForSkipMatinee)
	{
		uFnIsInCinematicForSkipMatinee = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.IsInCinematicForSkipMatinee");
	}

	AGHM_PlayerController_execIsInCinematicForSkipMatinee_Params IsInCinematicForSkipMatinee_Params;

	this->ProcessEvent(uFnIsInCinematicForSkipMatinee, &IsInCinematicForSkipMatinee_Params, nullptr);

	return IsInCinematicForSkipMatinee_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.CancelMatinee
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::CancelMatinee()
{
	static UFunction* uFnCancelMatinee = nullptr;

	if (!uFnCancelMatinee)
	{
		uFnCancelMatinee = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.CancelMatinee");
	}

	AGHM_PlayerController_execCancelMatinee_Params CancelMatinee_Params;

	this->ProcessEvent(uFnCancelMatinee, &CancelMatinee_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.OnSetSoundMode
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqAct_SetSoundMode*    Action                         (CPF_Parm)

void AGHM_PlayerController::OnSetSoundMode(class USeqAct_SetSoundMode* Action)
{
	static UFunction* uFnOnSetSoundMode = nullptr;

	if (!uFnOnSetSoundMode)
	{
		uFnOnSetSoundMode = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.OnSetSoundMode");
	}

	AGHM_PlayerController_execOnSetSoundMode_Params OnSetSoundMode_Params;
	memcpy_s(&OnSetSoundMode_Params.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(uFnOnSetSoundMode, &OnSetSoundMode_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.OnRegistSoundModeExclusive
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UGHM_SeqAct_RegistSoundModeExclusive* Action                         (CPF_Parm)

void AGHM_PlayerController::OnRegistSoundModeExclusive(class UGHM_SeqAct_RegistSoundModeExclusive* Action)
{
	static UFunction* uFnOnRegistSoundModeExclusive = nullptr;

	if (!uFnOnRegistSoundModeExclusive)
	{
		uFnOnRegistSoundModeExclusive = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.OnRegistSoundModeExclusive");
	}

	AGHM_PlayerController_execOnRegistSoundModeExclusive_Params OnRegistSoundModeExclusive_Params;
	memcpy_s(&OnRegistSoundModeExclusive_Params.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(uFnOnRegistSoundModeExclusive, &OnRegistSoundModeExclusive_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.IsIgnoreSoundModeChange
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   InSoundModeName                (CPF_Parm)

bool AGHM_PlayerController::IsIgnoreSoundModeChange(struct FName InSoundModeName)
{
	static UFunction* uFnIsIgnoreSoundModeChange = nullptr;

	if (!uFnIsIgnoreSoundModeChange)
	{
		uFnIsIgnoreSoundModeChange = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.IsIgnoreSoundModeChange");
	}

	AGHM_PlayerController_execIsIgnoreSoundModeChange_Params IsIgnoreSoundModeChange_Params;
	memcpy_s(&IsIgnoreSoundModeChange_Params.InSoundModeName, 0x8, &InSoundModeName, 0x8);

	this->ProcessEvent(uFnIsIgnoreSoundModeChange, &IsIgnoreSoundModeChange_Params, nullptr);

	return IsIgnoreSoundModeChange_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerController.GHMSetSoundMode
// [0x00024102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   InSoundModeName                (CPF_Parm)
// unsigned long                  bResetAllClassProperties       (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bTopPriority                   (CPF_OptionalParm | CPF_Parm)

void AGHM_PlayerController::GHMSetSoundMode(struct FName InSoundModeName, unsigned long bResetAllClassProperties, unsigned long bTopPriority)
{
	static UFunction* uFnGHMSetSoundMode = nullptr;

	if (!uFnGHMSetSoundMode)
	{
		uFnGHMSetSoundMode = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.GHMSetSoundMode");
	}

	AGHM_PlayerController_execGHMSetSoundMode_Params GHMSetSoundMode_Params;
	memcpy_s(&GHMSetSoundMode_Params.InSoundModeName, 0x8, &InSoundModeName, 0x8);
	GHMSetSoundMode_Params.bResetAllClassProperties = bResetAllClassProperties;
	GHMSetSoundMode_Params.bTopPriority = bTopPriority;

	this->ProcessEvent(uFnGHMSetSoundMode, &GHMSetSoundMode_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.RestartLevel
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::RestartLevel()
{
	static UFunction* uFnRestartLevel = nullptr;

	if (!uFnRestartLevel)
	{
		uFnRestartLevel = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.RestartLevel");
	}

	AGHM_PlayerController_execRestartLevel_Params RestartLevel_Params;

	this->ProcessEvent(uFnRestartLevel, &RestartLevel_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.PostBeginPlay
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_PlayerController::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.PostBeginPlay");
	}

	AGHM_PlayerController_eventPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerController.bUsingRuntimeTool
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGHM_PlayerController::bUsingRuntimeTool()
{
	static UFunction* uFnbUsingRuntimeTool = nullptr;

	if (!uFnbUsingRuntimeTool)
	{
		uFnbUsingRuntimeTool = UFunction::FindFunction("Function GHMEngine.GHM_PlayerController.bUsingRuntimeTool");
	}

	AGHM_PlayerController_execbUsingRuntimeTool_Params bUsingRuntimeTool_Params;

	uFnbUsingRuntimeTool->FunctionFlags |= ~0x400;

	AGHM_PlayerController::StaticClass()->ProcessEvent(uFnbUsingRuntimeTool, &bUsingRuntimeTool_Params, nullptr);

	uFnbUsingRuntimeTool->FunctionFlags |= 0x400;

	return bUsingRuntimeTool_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.BackInputText
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::BackInputText()
{
	static UFunction* uFnBackInputText = nullptr;

	if (!uFnBackInputText)
	{
		uFnBackInputText = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.BackInputText");
	}

	UGHM_PlayerInput_execBackInputText_Params BackInputText_Params;

	uFnBackInputText->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnBackInputText, &BackInputText_Params, nullptr);

	uFnBackInputText->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.AddInputText
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  Character                      (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::AddInputText(class FString Character)
{
	static UFunction* uFnAddInputText = nullptr;

	if (!uFnAddInputText)
	{
		uFnAddInputText = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.AddInputText");
	}

	UGHM_PlayerInput_execAddInputText_Params AddInputText_Params;
	memcpy_s(&AddInputText_Params.Character, 0x10, &Character, 0x10);

	uFnAddInputText->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddInputText, &AddInputText_Params, nullptr);

	uFnAddInputText->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.IsMouseLClickEnable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsMouseLClickEnable()
{
	static UFunction* uFnIsMouseLClickEnable = nullptr;

	if (!uFnIsMouseLClickEnable)
	{
		uFnIsMouseLClickEnable = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsMouseLClickEnable");
	}

	UGHM_PlayerInput_execIsMouseLClickEnable_Params IsMouseLClickEnable_Params;

	uFnIsMouseLClickEnable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsMouseLClickEnable, &IsMouseLClickEnable_Params, nullptr);

	uFnIsMouseLClickEnable->FunctionFlags |= 0x400;

	return IsMouseLClickEnable_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.UILStickRight
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::UILStickRight()
{
	static UFunction* uFnUILStickRight = nullptr;

	if (!uFnUILStickRight)
	{
		uFnUILStickRight = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.UILStickRight");
	}

	UGHM_PlayerInput_execUILStickRight_Params UILStickRight_Params;

	uFnUILStickRight->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUILStickRight, &UILStickRight_Params, nullptr);

	uFnUILStickRight->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.UILStickLeft
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::UILStickLeft()
{
	static UFunction* uFnUILStickLeft = nullptr;

	if (!uFnUILStickLeft)
	{
		uFnUILStickLeft = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.UILStickLeft");
	}

	UGHM_PlayerInput_execUILStickLeft_Params UILStickLeft_Params;

	uFnUILStickLeft->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUILStickLeft, &UILStickLeft_Params, nullptr);

	uFnUILStickLeft->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.UILStickDown
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::UILStickDown()
{
	static UFunction* uFnUILStickDown = nullptr;

	if (!uFnUILStickDown)
	{
		uFnUILStickDown = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.UILStickDown");
	}

	UGHM_PlayerInput_execUILStickDown_Params UILStickDown_Params;

	uFnUILStickDown->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUILStickDown, &UILStickDown_Params, nullptr);

	uFnUILStickDown->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.UILStickUp
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::UILStickUp()
{
	static UFunction* uFnUILStickUp = nullptr;

	if (!uFnUILStickUp)
	{
		uFnUILStickUp = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.UILStickUp");
	}

	UGHM_PlayerInput_execUILStickUp_Params UILStickUp_Params;

	uFnUILStickUp->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUILStickUp, &UILStickUp_Params, nullptr);

	uFnUILStickUp->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.PlusEventCtrl
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Press                          (CPF_Parm)
// uint8_t                        btn                            (CPF_Parm)

void UGHM_PlayerInput::PlusEventCtrl(unsigned long Press, uint8_t btn)
{
	static UFunction* uFnPlusEventCtrl = nullptr;

	if (!uFnPlusEventCtrl)
	{
		uFnPlusEventCtrl = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PlusEventCtrl");
	}

	UGHM_PlayerInput_execPlusEventCtrl_Params PlusEventCtrl_Params;
	PlusEventCtrl_Params.Press = Press;
	memcpy_s(&PlusEventCtrl_Params.btn, 0x1, &btn, 0x1);

	uFnPlusEventCtrl->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlusEventCtrl, &PlusEventCtrl_Params, nullptr);

	uFnPlusEventCtrl->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.IsWheelDown
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsWheelDown()
{
	static UFunction* uFnIsWheelDown = nullptr;

	if (!uFnIsWheelDown)
	{
		uFnIsWheelDown = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsWheelDown");
	}

	UGHM_PlayerInput_execIsWheelDown_Params IsWheelDown_Params;

	uFnIsWheelDown->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsWheelDown, &IsWheelDown_Params, nullptr);

	uFnIsWheelDown->FunctionFlags |= 0x400;

	return IsWheelDown_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.IsWheelUp
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsWheelUp()
{
	static UFunction* uFnIsWheelUp = nullptr;

	if (!uFnIsWheelUp)
	{
		uFnIsWheelUp = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsWheelUp");
	}

	UGHM_PlayerInput_execIsWheelUp_Params IsWheelUp_Params;

	uFnIsWheelUp->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsWheelUp, &IsWheelUp_Params, nullptr);

	uFnIsWheelUp->FunctionFlags |= 0x400;

	return IsWheelUp_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.IsWalkCtrl
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsWalkCtrl()
{
	static UFunction* uFnIsWalkCtrl = nullptr;

	if (!uFnIsWalkCtrl)
	{
		uFnIsWalkCtrl = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsWalkCtrl");
	}

	UGHM_PlayerInput_execIsWalkCtrl_Params IsWalkCtrl_Params;

	uFnIsWalkCtrl->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsWalkCtrl, &IsWalkCtrl_Params, nullptr);

	uFnIsWalkCtrl->FunctionFlags |= 0x400;

	return IsWalkCtrl_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.SetWalkCtrl
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWalk                          (CPF_Parm)

void UGHM_PlayerInput::SetWalkCtrl(unsigned long bWalk)
{
	static UFunction* uFnSetWalkCtrl = nullptr;

	if (!uFnSetWalkCtrl)
	{
		uFnSetWalkCtrl = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetWalkCtrl");
	}

	UGHM_PlayerInput_execSetWalkCtrl_Params SetWalkCtrl_Params;
	SetWalkCtrl_Params.bWalk = bWalk;

	uFnSetWalkCtrl->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetWalkCtrl, &SetWalkCtrl_Params, nullptr);

	uFnSetWalkCtrl->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.MoveRight
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::MoveRight()
{
	static UFunction* uFnMoveRight = nullptr;

	if (!uFnMoveRight)
	{
		uFnMoveRight = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.MoveRight");
	}

	UGHM_PlayerInput_execMoveRight_Params MoveRight_Params;

	uFnMoveRight->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnMoveRight, &MoveRight_Params, nullptr);

	uFnMoveRight->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.MoveLeft
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::MoveLeft()
{
	static UFunction* uFnMoveLeft = nullptr;

	if (!uFnMoveLeft)
	{
		uFnMoveLeft = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.MoveLeft");
	}

	UGHM_PlayerInput_execMoveLeft_Params MoveLeft_Params;

	uFnMoveLeft->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnMoveLeft, &MoveLeft_Params, nullptr);

	uFnMoveLeft->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.MoveDown
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::MoveDown()
{
	static UFunction* uFnMoveDown = nullptr;

	if (!uFnMoveDown)
	{
		uFnMoveDown = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.MoveDown");
	}

	UGHM_PlayerInput_execMoveDown_Params MoveDown_Params;

	uFnMoveDown->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnMoveDown, &MoveDown_Params, nullptr);

	uFnMoveDown->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.MoveUp
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::MoveUp()
{
	static UFunction* uFnMoveUp = nullptr;

	if (!uFnMoveUp)
	{
		uFnMoveUp = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.MoveUp");
	}

	UGHM_PlayerInput_execMoveUp_Params MoveUp_Params;

	uFnMoveUp->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnMoveUp, &MoveUp_Params, nullptr);

	uFnMoveUp->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.BtnEventCtrl
// [0x00044401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Press                          (CPF_Parm)
// unsigned long                  fix                            (CPF_Parm)
// int32_t                        pad1                           (CPF_Parm)
// int32_t                        pad2                           (CPF_OptionalParm | CPF_Parm)

void UGHM_PlayerInput::BtnEventCtrl(unsigned long Press, unsigned long fix, int32_t pad1, int32_t pad2)
{
	static UFunction* uFnBtnEventCtrl = nullptr;

	if (!uFnBtnEventCtrl)
	{
		uFnBtnEventCtrl = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.BtnEventCtrl");
	}

	UGHM_PlayerInput_execBtnEventCtrl_Params BtnEventCtrl_Params;
	BtnEventCtrl_Params.Press = Press;
	BtnEventCtrl_Params.fix = fix;
	memcpy_s(&BtnEventCtrl_Params.pad1, 0x4, &pad1, 0x4);
	memcpy_s(&BtnEventCtrl_Params.pad2, 0x4, &pad2, 0x4);

	uFnBtnEventCtrl->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnBtnEventCtrl, &BtnEventCtrl_Params, nullptr);

	uFnBtnEventCtrl->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.DoBtnUIEvent
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Link                           (CPF_Parm)
// unsigned long                  Press                          (CPF_Parm)

void UGHM_PlayerInput::DoBtnUIEvent(uint8_t Link, unsigned long Press)
{
	static UFunction* uFnDoBtnUIEvent = nullptr;

	if (!uFnDoBtnUIEvent)
	{
		uFnDoBtnUIEvent = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.DoBtnUIEvent");
	}

	UGHM_PlayerInput_execDoBtnUIEvent_Params DoBtnUIEvent_Params;
	memcpy_s(&DoBtnUIEvent_Params.Link, 0x1, &Link, 0x1);
	DoBtnUIEvent_Params.Press = Press;

	uFnDoBtnUIEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDoBtnUIEvent, &DoBtnUIEvent_Params, nullptr);

	uFnDoBtnUIEvent->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.DoBtnPlayerEvent
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Link                           (CPF_Parm)
// unsigned long                  Press                          (CPF_Parm)

void UGHM_PlayerInput::DoBtnPlayerEvent(uint8_t Link, unsigned long Press)
{
	static UFunction* uFnDoBtnPlayerEvent = nullptr;

	if (!uFnDoBtnPlayerEvent)
	{
		uFnDoBtnPlayerEvent = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.DoBtnPlayerEvent");
	}

	UGHM_PlayerInput_execDoBtnPlayerEvent_Params DoBtnPlayerEvent_Params;
	memcpy_s(&DoBtnPlayerEvent_Params.Link, 0x1, &Link, 0x1);
	DoBtnPlayerEvent_Params.Press = Press;

	uFnDoBtnPlayerEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDoBtnPlayerEvent, &DoBtnPlayerEvent_Params, nullptr);

	uFnDoBtnPlayerEvent->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseInner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        mouse                          (CPF_Parm)

void UGHM_PlayerInput::ReleaseMouseInner(uint8_t mouse)
{
	static UFunction* uFnReleaseMouseInner = nullptr;

	if (!uFnReleaseMouseInner)
	{
		uFnReleaseMouseInner = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseMouseInner");
	}

	UGHM_PlayerInput_execReleaseMouseInner_Params ReleaseMouseInner_Params;
	memcpy_s(&ReleaseMouseInner_Params.mouse, 0x1, &mouse, 0x1);

	uFnReleaseMouseInner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReleaseMouseInner, &ReleaseMouseInner_Params, nullptr);

	uFnReleaseMouseInner->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.PressMouseInner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        mouse                          (CPF_Parm)

void UGHM_PlayerInput::PressMouseInner(uint8_t mouse)
{
	static UFunction* uFnPressMouseInner = nullptr;

	if (!uFnPressMouseInner)
	{
		uFnPressMouseInner = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressMouseInner");
	}

	UGHM_PlayerInput_execPressMouseInner_Params PressMouseInner_Params;
	memcpy_s(&PressMouseInner_Params.mouse, 0x1, &mouse, 0x1);

	uFnPressMouseInner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPressMouseInner, &PressMouseInner_Params, nullptr);

	uFnPressMouseInner->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.KeyToBtnEvent
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  Press                          (CPF_Parm)

void UGHM_PlayerInput::KeyToBtnEvent(class FString Key, unsigned long Press)
{
	static UFunction* uFnKeyToBtnEvent = nullptr;

	if (!uFnKeyToBtnEvent)
	{
		uFnKeyToBtnEvent = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.KeyToBtnEvent");
	}

	UGHM_PlayerInput_execKeyToBtnEvent_Params KeyToBtnEvent_Params;
	memcpy_s(&KeyToBtnEvent_Params.Key, 0x10, &Key, 0x10);
	KeyToBtnEvent_Params.Press = Press;

	uFnKeyToBtnEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnKeyToBtnEvent, &KeyToBtnEvent_Params, nullptr);

	uFnKeyToBtnEvent->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.ReleaseKeyInner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::ReleaseKeyInner(class FString Key)
{
	static UFunction* uFnReleaseKeyInner = nullptr;

	if (!uFnReleaseKeyInner)
	{
		uFnReleaseKeyInner = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseKeyInner");
	}

	UGHM_PlayerInput_execReleaseKeyInner_Params ReleaseKeyInner_Params;
	memcpy_s(&ReleaseKeyInner_Params.Key, 0x10, &Key, 0x10);

	uFnReleaseKeyInner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReleaseKeyInner, &ReleaseKeyInner_Params, nullptr);

	uFnReleaseKeyInner->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.PressKeyInner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::PressKeyInner(class FString Key)
{
	static UFunction* uFnPressKeyInner = nullptr;

	if (!uFnPressKeyInner)
	{
		uFnPressKeyInner = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressKeyInner");
	}

	UGHM_PlayerInput_execPressKeyInner_Params PressKeyInner_Params;
	memcpy_s(&PressKeyInner_Params.Key, 0x10, &Key, 0x10);

	uFnPressKeyInner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPressKeyInner, &PressKeyInner_Params, nullptr);

	uFnPressKeyInner->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.ReleaseShiftKeyInner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::ReleaseShiftKeyInner(class FString Key)
{
	static UFunction* uFnReleaseShiftKeyInner = nullptr;

	if (!uFnReleaseShiftKeyInner)
	{
		uFnReleaseShiftKeyInner = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseShiftKeyInner");
	}

	UGHM_PlayerInput_execReleaseShiftKeyInner_Params ReleaseShiftKeyInner_Params;
	memcpy_s(&ReleaseShiftKeyInner_Params.Key, 0x10, &Key, 0x10);

	uFnReleaseShiftKeyInner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReleaseShiftKeyInner, &ReleaseShiftKeyInner_Params, nullptr);

	uFnReleaseShiftKeyInner->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.PressShiftKeyInner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::PressShiftKeyInner(class FString Key)
{
	static UFunction* uFnPressShiftKeyInner = nullptr;

	if (!uFnPressShiftKeyInner)
	{
		uFnPressShiftKeyInner = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressShiftKeyInner");
	}

	UGHM_PlayerInput_execPressShiftKeyInner_Params PressShiftKeyInner_Params;
	memcpy_s(&PressShiftKeyInner_Params.Key, 0x10, &Key, 0x10);

	uFnPressShiftKeyInner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPressShiftKeyInner, &PressShiftKeyInner_Params, nullptr);

	uFnPressShiftKeyInner->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.ReleaseNumberKeyInner
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// int32_t                        Num                            (CPF_Parm)

void UGHM_PlayerInput::ReleaseNumberKeyInner(int32_t Num)
{
	static UFunction* uFnReleaseNumberKeyInner = nullptr;

	if (!uFnReleaseNumberKeyInner)
	{
		uFnReleaseNumberKeyInner = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseNumberKeyInner");
	}

	UGHM_PlayerInput_execReleaseNumberKeyInner_Params ReleaseNumberKeyInner_Params;
	memcpy_s(&ReleaseNumberKeyInner_Params.Num, 0x4, &Num, 0x4);

	uFnReleaseNumberKeyInner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReleaseNumberKeyInner, &ReleaseNumberKeyInner_Params, nullptr);

	uFnReleaseNumberKeyInner->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.PressNumberKeyInner
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// int32_t                        Num                            (CPF_Parm)

void UGHM_PlayerInput::PressNumberKeyInner(int32_t Num)
{
	static UFunction* uFnPressNumberKeyInner = nullptr;

	if (!uFnPressNumberKeyInner)
	{
		uFnPressNumberKeyInner = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressNumberKeyInner");
	}

	UGHM_PlayerInput_execPressNumberKeyInner_Params PressNumberKeyInner_Params;
	memcpy_s(&PressNumberKeyInner_Params.Num, 0x4, &Num, 0x4);

	uFnPressNumberKeyInner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPressNumberKeyInner, &PressNumberKeyInner_Params, nullptr);

	uFnPressNumberKeyInner->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.ReleaseAlphabetKeyInner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  L                              (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::ReleaseAlphabetKeyInner(class FString S, class FString L)
{
	static UFunction* uFnReleaseAlphabetKeyInner = nullptr;

	if (!uFnReleaseAlphabetKeyInner)
	{
		uFnReleaseAlphabetKeyInner = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseAlphabetKeyInner");
	}

	UGHM_PlayerInput_execReleaseAlphabetKeyInner_Params ReleaseAlphabetKeyInner_Params;
	memcpy_s(&ReleaseAlphabetKeyInner_Params.S, 0x10, &S, 0x10);
	memcpy_s(&ReleaseAlphabetKeyInner_Params.L, 0x10, &L, 0x10);

	uFnReleaseAlphabetKeyInner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReleaseAlphabetKeyInner, &ReleaseAlphabetKeyInner_Params, nullptr);

	uFnReleaseAlphabetKeyInner->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.PressAlphabetKeyInner
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  L                              (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::PressAlphabetKeyInner(class FString S, class FString L)
{
	static UFunction* uFnPressAlphabetKeyInner = nullptr;

	if (!uFnPressAlphabetKeyInner)
	{
		uFnPressAlphabetKeyInner = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressAlphabetKeyInner");
	}

	UGHM_PlayerInput_execPressAlphabetKeyInner_Params PressAlphabetKeyInner_Params;
	memcpy_s(&PressAlphabetKeyInner_Params.S, 0x10, &S, 0x10);
	memcpy_s(&PressAlphabetKeyInner_Params.L, 0x10, &L, 0x10);

	uFnPressAlphabetKeyInner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPressAlphabetKeyInner, &PressAlphabetKeyInner_Params, nullptr);

	uFnPressAlphabetKeyInner->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.Update
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          fDeltaTime                     (CPF_Parm)

void UGHM_PlayerInput::Update(float fDeltaTime)
{
	static UFunction* uFnUpdate = nullptr;

	if (!uFnUpdate)
	{
		uFnUpdate = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.Update");
	}

	UGHM_PlayerInput_execUpdate_Params Update_Params;
	memcpy_s(&Update_Params.fDeltaTime, 0x4, &fDeltaTime, 0x4);

	uFnUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdate, &Update_Params, nullptr);

	uFnUpdate->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.Release
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_PlayerInput::Release(uint8_t btn)
{
	static UFunction* uFnRelease = nullptr;

	if (!uFnRelease)
	{
		uFnRelease = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.Release");
	}

	UGHM_PlayerInput_execRelease_Params Release_Params;
	memcpy_s(&Release_Params.btn, 0x1, &btn, 0x1);

	uFnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRelease, &Release_Params, nullptr);

	uFnRelease->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.Press
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_PlayerInput::Press(uint8_t btn)
{
	static UFunction* uFnPress = nullptr;

	if (!uFnPress)
	{
		uFnPress = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.Press");
	}

	UGHM_PlayerInput_execPress_Params Press_Params;
	memcpy_s(&Press_Params.btn, 0x1, &btn, 0x1);

	uFnPress->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPress, &Press_Params, nullptr);

	uFnPress->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.GetBitwisePadDef
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        btn                            (CPF_Parm)

int32_t UGHM_PlayerInput::GetBitwisePadDef(uint8_t btn)
{
	static UFunction* uFnGetBitwisePadDef = nullptr;

	if (!uFnGetBitwisePadDef)
	{
		uFnGetBitwisePadDef = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetBitwisePadDef");
	}

	UGHM_PlayerInput_execGetBitwisePadDef_Params GetBitwisePadDef_Params;
	memcpy_s(&GetBitwisePadDef_Params.btn, 0x1, &btn, 0x1);

	uFnGetBitwisePadDef->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetBitwisePadDef, &GetBitwisePadDef_Params, nullptr);

	uFnGetBitwisePadDef->FunctionFlags |= 0x400;

	return GetBitwisePadDef_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.IsOnRepeat
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        btn                            (CPF_Parm)

bool UGHM_PlayerInput::IsOnRepeat(uint8_t btn)
{
	static UFunction* uFnIsOnRepeat = nullptr;

	if (!uFnIsOnRepeat)
	{
		uFnIsOnRepeat = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsOnRepeat");
	}

	UGHM_PlayerInput_execIsOnRepeat_Params IsOnRepeat_Params;
	memcpy_s(&IsOnRepeat_Params.btn, 0x1, &btn, 0x1);

	uFnIsOnRepeat->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsOnRepeat, &IsOnRepeat_Params, nullptr);

	uFnIsOnRepeat->FunctionFlags |= 0x400;

	return IsOnRepeat_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.IsOnRelease
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        btn                            (CPF_Parm)

bool UGHM_PlayerInput::IsOnRelease(uint8_t btn)
{
	static UFunction* uFnIsOnRelease = nullptr;

	if (!uFnIsOnRelease)
	{
		uFnIsOnRelease = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsOnRelease");
	}

	UGHM_PlayerInput_execIsOnRelease_Params IsOnRelease_Params;
	memcpy_s(&IsOnRelease_Params.btn, 0x1, &btn, 0x1);

	uFnIsOnRelease->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsOnRelease, &IsOnRelease_Params, nullptr);

	uFnIsOnRelease->FunctionFlags |= 0x400;

	return IsOnRelease_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.IsOnPress
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        btn                            (CPF_Parm)

bool UGHM_PlayerInput::IsOnPress(uint8_t btn)
{
	static UFunction* uFnIsOnPress = nullptr;

	if (!uFnIsOnPress)
	{
		uFnIsOnPress = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsOnPress");
	}

	UGHM_PlayerInput_execIsOnPress_Params IsOnPress_Params;
	memcpy_s(&IsOnPress_Params.btn, 0x1, &btn, 0x1);

	uFnIsOnPress->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsOnPress, &IsOnPress_Params, nullptr);

	uFnIsOnPress->FunctionFlags |= 0x400;

	return IsOnPress_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.IsReleased
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        btn                            (CPF_Parm)

bool UGHM_PlayerInput::IsReleased(uint8_t btn)
{
	static UFunction* uFnIsReleased = nullptr;

	if (!uFnIsReleased)
	{
		uFnIsReleased = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsReleased");
	}

	UGHM_PlayerInput_execIsReleased_Params IsReleased_Params;
	memcpy_s(&IsReleased_Params.btn, 0x1, &btn, 0x1);

	uFnIsReleased->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsReleased, &IsReleased_Params, nullptr);

	uFnIsReleased->FunctionFlags |= 0x400;

	return IsReleased_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.IsPressed
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        btn                            (CPF_Parm)

bool UGHM_PlayerInput::IsPressed(uint8_t btn)
{
	static UFunction* uFnIsPressed = nullptr;

	if (!uFnIsPressed)
	{
		uFnIsPressed = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsPressed");
	}

	UGHM_PlayerInput_execIsPressed_Params IsPressed_Params;
	memcpy_s(&IsPressed_Params.btn, 0x1, &btn, 0x1);

	uFnIsPressed->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPressed, &IsPressed_Params, nullptr);

	uFnIsPressed->FunctionFlags |= 0x400;

	return IsPressed_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.IsShift
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsShift()
{
	static UFunction* uFnIsShift = nullptr;

	if (!uFnIsShift)
	{
		uFnIsShift = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsShift");
	}

	UGHM_PlayerInput_execIsShift_Params IsShift_Params;

	this->ProcessEvent(uFnIsShift, &IsShift_Params, nullptr);

	return IsShift_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.ReleaseKeyCheck
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleaseKeyCheck()
{
	static UFunction* uFnReleaseKeyCheck = nullptr;

	if (!uFnReleaseKeyCheck)
	{
		uFnReleaseKeyCheck = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseKeyCheck");
	}

	UGHM_PlayerInput_execReleaseKeyCheck_Params ReleaseKeyCheck_Params;

	this->ProcessEvent(uFnReleaseKeyCheck, &ReleaseKeyCheck_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressKeyCheck
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressKeyCheck()
{
	static UFunction* uFnPressKeyCheck = nullptr;

	if (!uFnPressKeyCheck)
	{
		uFnPressKeyCheck = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressKeyCheck");
	}

	UGHM_PlayerInput_execPressKeyCheck_Params PressKeyCheck_Params;

	this->ProcessEvent(uFnPressKeyCheck, &PressKeyCheck_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressNoEffect
// [0x00020200] (FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressNoEffect()
{
	static UFunction* uFnPressNoEffect = nullptr;

	if (!uFnPressNoEffect)
	{
		uFnPressNoEffect = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressNoEffect");
	}

	UGHM_PlayerInput_execPressNoEffect_Params PressNoEffect_Params;

	this->ProcessEvent(uFnPressNoEffect, &PressNoEffect_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.MouseWheelDown
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::MouseWheelDown()
{
	static UFunction* uFnMouseWheelDown = nullptr;

	if (!uFnMouseWheelDown)
	{
		uFnMouseWheelDown = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.MouseWheelDown");
	}

	UGHM_PlayerInput_execMouseWheelDown_Params MouseWheelDown_Params;

	this->ProcessEvent(uFnMouseWheelDown, &MouseWheelDown_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.MouseWheelUp
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::MouseWheelUp()
{
	static UFunction* uFnMouseWheelUp = nullptr;

	if (!uFnMouseWheelUp)
	{
		uFnMouseWheelUp = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.MouseWheelUp");
	}

	UGHM_PlayerInput_execMouseWheelUp_Params MouseWheelUp_Params;

	this->ProcessEvent(uFnMouseWheelUp, &MouseWheelUp_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseEx2
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleaseMouseEx2()
{
	static UFunction* uFnReleaseMouseEx2 = nullptr;

	if (!uFnReleaseMouseEx2)
	{
		uFnReleaseMouseEx2 = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseMouseEx2");
	}

	UGHM_PlayerInput_execReleaseMouseEx2_Params ReleaseMouseEx2_Params;

	this->ProcessEvent(uFnReleaseMouseEx2, &ReleaseMouseEx2_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressMouseEx2
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressMouseEx2()
{
	static UFunction* uFnPressMouseEx2 = nullptr;

	if (!uFnPressMouseEx2)
	{
		uFnPressMouseEx2 = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressMouseEx2");
	}

	UGHM_PlayerInput_execPressMouseEx2_Params PressMouseEx2_Params;

	this->ProcessEvent(uFnPressMouseEx2, &PressMouseEx2_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseEx1
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleaseMouseEx1()
{
	static UFunction* uFnReleaseMouseEx1 = nullptr;

	if (!uFnReleaseMouseEx1)
	{
		uFnReleaseMouseEx1 = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseMouseEx1");
	}

	UGHM_PlayerInput_execReleaseMouseEx1_Params ReleaseMouseEx1_Params;

	this->ProcessEvent(uFnReleaseMouseEx1, &ReleaseMouseEx1_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressMouseEx1
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressMouseEx1()
{
	static UFunction* uFnPressMouseEx1 = nullptr;

	if (!uFnPressMouseEx1)
	{
		uFnPressMouseEx1 = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressMouseEx1");
	}

	UGHM_PlayerInput_execPressMouseEx1_Params PressMouseEx1_Params;

	this->ProcessEvent(uFnPressMouseEx1, &PressMouseEx1_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseC
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleaseMouseC()
{
	static UFunction* uFnReleaseMouseC = nullptr;

	if (!uFnReleaseMouseC)
	{
		uFnReleaseMouseC = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseMouseC");
	}

	UGHM_PlayerInput_execReleaseMouseC_Params ReleaseMouseC_Params;

	this->ProcessEvent(uFnReleaseMouseC, &ReleaseMouseC_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressMouseC
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressMouseC()
{
	static UFunction* uFnPressMouseC = nullptr;

	if (!uFnPressMouseC)
	{
		uFnPressMouseC = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressMouseC");
	}

	UGHM_PlayerInput_execPressMouseC_Params PressMouseC_Params;

	this->ProcessEvent(uFnPressMouseC, &PressMouseC_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseR
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleaseMouseR()
{
	static UFunction* uFnReleaseMouseR = nullptr;

	if (!uFnReleaseMouseR)
	{
		uFnReleaseMouseR = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseMouseR");
	}

	UGHM_PlayerInput_execReleaseMouseR_Params ReleaseMouseR_Params;

	this->ProcessEvent(uFnReleaseMouseR, &ReleaseMouseR_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressMouseR
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressMouseR()
{
	static UFunction* uFnPressMouseR = nullptr;

	if (!uFnPressMouseR)
	{
		uFnPressMouseR = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressMouseR");
	}

	UGHM_PlayerInput_execPressMouseR_Params PressMouseR_Params;

	this->ProcessEvent(uFnPressMouseR, &PressMouseR_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMouseL
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleaseMouseL()
{
	static UFunction* uFnReleaseMouseL = nullptr;

	if (!uFnReleaseMouseL)
	{
		uFnReleaseMouseL = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseMouseL");
	}

	UGHM_PlayerInput_execReleaseMouseL_Params ReleaseMouseL_Params;

	this->ProcessEvent(uFnReleaseMouseL, &ReleaseMouseL_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressMouseL
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressMouseL()
{
	static UFunction* uFnPressMouseL = nullptr;

	if (!uFnPressMouseL)
	{
		uFnPressMouseL = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressMouseL");
	}

	UGHM_PlayerInput_execPressMouseL_Params PressMouseL_Params;

	this->ProcessEvent(uFnPressMouseL, &PressMouseL_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::ReleaseKey(class FString Key)
{
	static UFunction* uFnReleaseKey = nullptr;

	if (!uFnReleaseKey)
	{
		uFnReleaseKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseKey");
	}

	UGHM_PlayerInput_execReleaseKey_Params ReleaseKey_Params;
	memcpy_s(&ReleaseKey_Params.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(uFnReleaseKey, &ReleaseKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::PressKey(class FString Key)
{
	static UFunction* uFnPressKey = nullptr;

	if (!uFnPressKey)
	{
		uFnPressKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressKey");
	}

	UGHM_PlayerInput_execPressKey_Params PressKey_Params;
	memcpy_s(&PressKey_Params.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(uFnPressKey, &PressKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseUnderbarKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::ReleaseUnderbarKey(class FString Key)
{
	static UFunction* uFnReleaseUnderbarKey = nullptr;

	if (!uFnReleaseUnderbarKey)
	{
		uFnReleaseUnderbarKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseUnderbarKey");
	}

	UGHM_PlayerInput_execReleaseUnderbarKey_Params ReleaseUnderbarKey_Params;
	memcpy_s(&ReleaseUnderbarKey_Params.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(uFnReleaseUnderbarKey, &ReleaseUnderbarKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseMinusKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::ReleaseMinusKey(class FString Key)
{
	static UFunction* uFnReleaseMinusKey = nullptr;

	if (!uFnReleaseMinusKey)
	{
		uFnReleaseMinusKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseMinusKey");
	}

	UGHM_PlayerInput_execReleaseMinusKey_Params ReleaseMinusKey_Params;
	memcpy_s(&ReleaseMinusKey_Params.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(uFnReleaseMinusKey, &ReleaseMinusKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseEscapeKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleaseEscapeKey()
{
	static UFunction* uFnReleaseEscapeKey = nullptr;

	if (!uFnReleaseEscapeKey)
	{
		uFnReleaseEscapeKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseEscapeKey");
	}

	UGHM_PlayerInput_execReleaseEscapeKey_Params ReleaseEscapeKey_Params;

	this->ProcessEvent(uFnReleaseEscapeKey, &ReleaseEscapeKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseEnterKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleaseEnterKey()
{
	static UFunction* uFnReleaseEnterKey = nullptr;

	if (!uFnReleaseEnterKey)
	{
		uFnReleaseEnterKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseEnterKey");
	}

	UGHM_PlayerInput_execReleaseEnterKey_Params ReleaseEnterKey_Params;

	this->ProcessEvent(uFnReleaseEnterKey, &ReleaseEnterKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseBackKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleaseBackKey()
{
	static UFunction* uFnReleaseBackKey = nullptr;

	if (!uFnReleaseBackKey)
	{
		uFnReleaseBackKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseBackKey");
	}

	UGHM_PlayerInput_execReleaseBackKey_Params ReleaseBackKey_Params;

	this->ProcessEvent(uFnReleaseBackKey, &ReleaseBackKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseShiftKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::ReleaseShiftKey(class FString Key)
{
	static UFunction* uFnReleaseShiftKey = nullptr;

	if (!uFnReleaseShiftKey)
	{
		uFnReleaseShiftKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseShiftKey");
	}

	UGHM_PlayerInput_execReleaseShiftKey_Params ReleaseShiftKey_Params;
	memcpy_s(&ReleaseShiftKey_Params.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(uFnReleaseShiftKey, &ReleaseShiftKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseNumberKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Num                            (CPF_Parm)

void UGHM_PlayerInput::ReleaseNumberKey(int32_t Num)
{
	static UFunction* uFnReleaseNumberKey = nullptr;

	if (!uFnReleaseNumberKey)
	{
		uFnReleaseNumberKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseNumberKey");
	}

	UGHM_PlayerInput_execReleaseNumberKey_Params ReleaseNumberKey_Params;
	memcpy_s(&ReleaseNumberKey_Params.Num, 0x4, &Num, 0x4);

	this->ProcessEvent(uFnReleaseNumberKey, &ReleaseNumberKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleaseAlphabetKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  L                              (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::ReleaseAlphabetKey(class FString S, class FString L)
{
	static UFunction* uFnReleaseAlphabetKey = nullptr;

	if (!uFnReleaseAlphabetKey)
	{
		uFnReleaseAlphabetKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleaseAlphabetKey");
	}

	UGHM_PlayerInput_execReleaseAlphabetKey_Params ReleaseAlphabetKey_Params;
	memcpy_s(&ReleaseAlphabetKey_Params.S, 0x10, &S, 0x10);
	memcpy_s(&ReleaseAlphabetKey_Params.L, 0x10, &L, 0x10);

	this->ProcessEvent(uFnReleaseAlphabetKey, &ReleaseAlphabetKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressUnderbarKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::PressUnderbarKey(class FString Key)
{
	static UFunction* uFnPressUnderbarKey = nullptr;

	if (!uFnPressUnderbarKey)
	{
		uFnPressUnderbarKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressUnderbarKey");
	}

	UGHM_PlayerInput_execPressUnderbarKey_Params PressUnderbarKey_Params;
	memcpy_s(&PressUnderbarKey_Params.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(uFnPressUnderbarKey, &PressUnderbarKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressMinusKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::PressMinusKey(class FString Key)
{
	static UFunction* uFnPressMinusKey = nullptr;

	if (!uFnPressMinusKey)
	{
		uFnPressMinusKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressMinusKey");
	}

	UGHM_PlayerInput_execPressMinusKey_Params PressMinusKey_Params;
	memcpy_s(&PressMinusKey_Params.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(uFnPressMinusKey, &PressMinusKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressEscapeKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressEscapeKey()
{
	static UFunction* uFnPressEscapeKey = nullptr;

	if (!uFnPressEscapeKey)
	{
		uFnPressEscapeKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressEscapeKey");
	}

	UGHM_PlayerInput_execPressEscapeKey_Params PressEscapeKey_Params;

	this->ProcessEvent(uFnPressEscapeKey, &PressEscapeKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressEnterKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressEnterKey()
{
	static UFunction* uFnPressEnterKey = nullptr;

	if (!uFnPressEnterKey)
	{
		uFnPressEnterKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressEnterKey");
	}

	UGHM_PlayerInput_execPressEnterKey_Params PressEnterKey_Params;

	this->ProcessEvent(uFnPressEnterKey, &PressEnterKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressBackKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressBackKey()
{
	static UFunction* uFnPressBackKey = nullptr;

	if (!uFnPressBackKey)
	{
		uFnPressBackKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressBackKey");
	}

	UGHM_PlayerInput_execPressBackKey_Params PressBackKey_Params;

	this->ProcessEvent(uFnPressBackKey, &PressBackKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressShiftKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::PressShiftKey(class FString Key)
{
	static UFunction* uFnPressShiftKey = nullptr;

	if (!uFnPressShiftKey)
	{
		uFnPressShiftKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressShiftKey");
	}

	UGHM_PlayerInput_execPressShiftKey_Params PressShiftKey_Params;
	memcpy_s(&PressShiftKey_Params.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(uFnPressShiftKey, &PressShiftKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressNumberKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Num                            (CPF_Parm)

void UGHM_PlayerInput::PressNumberKey(int32_t Num)
{
	static UFunction* uFnPressNumberKey = nullptr;

	if (!uFnPressNumberKey)
	{
		uFnPressNumberKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressNumberKey");
	}

	UGHM_PlayerInput_execPressNumberKey_Params PressNumberKey_Params;
	memcpy_s(&PressNumberKey_Params.Num, 0x4, &Num, 0x4);

	this->ProcessEvent(uFnPressNumberKey, &PressNumberKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressAlphabetKey
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  L                              (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::PressAlphabetKey(class FString S, class FString L)
{
	static UFunction* uFnPressAlphabetKey = nullptr;

	if (!uFnPressAlphabetKey)
	{
		uFnPressAlphabetKey = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressAlphabetKey");
	}

	UGHM_PlayerInput_execPressAlphabetKey_Params PressAlphabetKey_Params;
	memcpy_s(&PressAlphabetKey_Params.S, 0x10, &S, 0x10);
	memcpy_s(&PressAlphabetKey_Params.L, 0x10, &L, 0x10);

	this->ProcessEvent(uFnPressAlphabetKey, &PressAlphabetKey_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadBack
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadBack()
{
	static UFunction* uFnReleasePadBack = nullptr;

	if (!uFnReleasePadBack)
	{
		uFnReleasePadBack = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadBack");
	}

	UGHM_PlayerInput_execReleasePadBack_Params ReleasePadBack_Params;

	this->ProcessEvent(uFnReleasePadBack, &ReleasePadBack_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadStart
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadStart()
{
	static UFunction* uFnReleasePadStart = nullptr;

	if (!uFnReleasePadStart)
	{
		uFnReleasePadStart = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadStart");
	}

	UGHM_PlayerInput_execReleasePadStart_Params ReleasePadStart_Params;

	this->ProcessEvent(uFnReleasePadStart, &ReleasePadStart_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadRightThumbstick
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadRightThumbstick()
{
	static UFunction* uFnReleasePadRightThumbstick = nullptr;

	if (!uFnReleasePadRightThumbstick)
	{
		uFnReleasePadRightThumbstick = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadRightThumbstick");
	}

	UGHM_PlayerInput_execReleasePadRightThumbstick_Params ReleasePadRightThumbstick_Params;

	this->ProcessEvent(uFnReleasePadRightThumbstick, &ReleasePadRightThumbstick_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadLeftThumbstick
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadLeftThumbstick()
{
	static UFunction* uFnReleasePadLeftThumbstick = nullptr;

	if (!uFnReleasePadLeftThumbstick)
	{
		uFnReleasePadLeftThumbstick = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadLeftThumbstick");
	}

	UGHM_PlayerInput_execReleasePadLeftThumbstick_Params ReleasePadLeftThumbstick_Params;

	this->ProcessEvent(uFnReleasePadLeftThumbstick, &ReleasePadLeftThumbstick_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadRightTrigger
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadRightTrigger()
{
	static UFunction* uFnReleasePadRightTrigger = nullptr;

	if (!uFnReleasePadRightTrigger)
	{
		uFnReleasePadRightTrigger = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadRightTrigger");
	}

	UGHM_PlayerInput_execReleasePadRightTrigger_Params ReleasePadRightTrigger_Params;

	this->ProcessEvent(uFnReleasePadRightTrigger, &ReleasePadRightTrigger_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadLeftTrigger
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadLeftTrigger()
{
	static UFunction* uFnReleasePadLeftTrigger = nullptr;

	if (!uFnReleasePadLeftTrigger)
	{
		uFnReleasePadLeftTrigger = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadLeftTrigger");
	}

	UGHM_PlayerInput_execReleasePadLeftTrigger_Params ReleasePadLeftTrigger_Params;

	this->ProcessEvent(uFnReleasePadLeftTrigger, &ReleasePadLeftTrigger_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadRightShoulder
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadRightShoulder()
{
	static UFunction* uFnReleasePadRightShoulder = nullptr;

	if (!uFnReleasePadRightShoulder)
	{
		uFnReleasePadRightShoulder = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadRightShoulder");
	}

	UGHM_PlayerInput_execReleasePadRightShoulder_Params ReleasePadRightShoulder_Params;

	this->ProcessEvent(uFnReleasePadRightShoulder, &ReleasePadRightShoulder_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadLeftShoulder
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadLeftShoulder()
{
	static UFunction* uFnReleasePadLeftShoulder = nullptr;

	if (!uFnReleasePadLeftShoulder)
	{
		uFnReleasePadLeftShoulder = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadLeftShoulder");
	}

	UGHM_PlayerInput_execReleasePadLeftShoulder_Params ReleasePadLeftShoulder_Params;

	this->ProcessEvent(uFnReleasePadLeftShoulder, &ReleasePadLeftShoulder_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadY
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadY()
{
	static UFunction* uFnReleasePadY = nullptr;

	if (!uFnReleasePadY)
	{
		uFnReleasePadY = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadY");
	}

	UGHM_PlayerInput_execReleasePadY_Params ReleasePadY_Params;

	this->ProcessEvent(uFnReleasePadY, &ReleasePadY_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadX
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadX()
{
	static UFunction* uFnReleasePadX = nullptr;

	if (!uFnReleasePadX)
	{
		uFnReleasePadX = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadX");
	}

	UGHM_PlayerInput_execReleasePadX_Params ReleasePadX_Params;

	this->ProcessEvent(uFnReleasePadX, &ReleasePadX_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadB
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadB()
{
	static UFunction* uFnReleasePadB = nullptr;

	if (!uFnReleasePadB)
	{
		uFnReleasePadB = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadB");
	}

	UGHM_PlayerInput_execReleasePadB_Params ReleasePadB_Params;

	this->ProcessEvent(uFnReleasePadB, &ReleasePadB_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadA
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadA()
{
	static UFunction* uFnReleasePadA = nullptr;

	if (!uFnReleasePadA)
	{
		uFnReleasePadA = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadA");
	}

	UGHM_PlayerInput_execReleasePadA_Params ReleasePadA_Params;

	this->ProcessEvent(uFnReleasePadA, &ReleasePadA_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadRight
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadRight()
{
	static UFunction* uFnReleasePadRight = nullptr;

	if (!uFnReleasePadRight)
	{
		uFnReleasePadRight = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadRight");
	}

	UGHM_PlayerInput_execReleasePadRight_Params ReleasePadRight_Params;

	this->ProcessEvent(uFnReleasePadRight, &ReleasePadRight_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadLeft
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadLeft()
{
	static UFunction* uFnReleasePadLeft = nullptr;

	if (!uFnReleasePadLeft)
	{
		uFnReleasePadLeft = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadLeft");
	}

	UGHM_PlayerInput_execReleasePadLeft_Params ReleasePadLeft_Params;

	this->ProcessEvent(uFnReleasePadLeft, &ReleasePadLeft_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadDown
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadDown()
{
	static UFunction* uFnReleasePadDown = nullptr;

	if (!uFnReleasePadDown)
	{
		uFnReleasePadDown = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadDown");
	}

	UGHM_PlayerInput_execReleasePadDown_Params ReleasePadDown_Params;

	this->ProcessEvent(uFnReleasePadDown, &ReleasePadDown_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.ReleasePadUp
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ReleasePadUp()
{
	static UFunction* uFnReleasePadUp = nullptr;

	if (!uFnReleasePadUp)
	{
		uFnReleasePadUp = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ReleasePadUp");
	}

	UGHM_PlayerInput_execReleasePadUp_Params ReleasePadUp_Params;

	this->ProcessEvent(uFnReleasePadUp, &ReleasePadUp_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadBack
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadBack()
{
	static UFunction* uFnPressPadBack = nullptr;

	if (!uFnPressPadBack)
	{
		uFnPressPadBack = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadBack");
	}

	UGHM_PlayerInput_execPressPadBack_Params PressPadBack_Params;

	this->ProcessEvent(uFnPressPadBack, &PressPadBack_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadStart
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadStart()
{
	static UFunction* uFnPressPadStart = nullptr;

	if (!uFnPressPadStart)
	{
		uFnPressPadStart = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadStart");
	}

	UGHM_PlayerInput_execPressPadStart_Params PressPadStart_Params;

	this->ProcessEvent(uFnPressPadStart, &PressPadStart_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadRightThumbstick
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadRightThumbstick()
{
	static UFunction* uFnPressPadRightThumbstick = nullptr;

	if (!uFnPressPadRightThumbstick)
	{
		uFnPressPadRightThumbstick = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadRightThumbstick");
	}

	UGHM_PlayerInput_execPressPadRightThumbstick_Params PressPadRightThumbstick_Params;

	this->ProcessEvent(uFnPressPadRightThumbstick, &PressPadRightThumbstick_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadLeftThumbstick
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadLeftThumbstick()
{
	static UFunction* uFnPressPadLeftThumbstick = nullptr;

	if (!uFnPressPadLeftThumbstick)
	{
		uFnPressPadLeftThumbstick = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadLeftThumbstick");
	}

	UGHM_PlayerInput_execPressPadLeftThumbstick_Params PressPadLeftThumbstick_Params;

	this->ProcessEvent(uFnPressPadLeftThumbstick, &PressPadLeftThumbstick_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadRightTrigger
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadRightTrigger()
{
	static UFunction* uFnPressPadRightTrigger = nullptr;

	if (!uFnPressPadRightTrigger)
	{
		uFnPressPadRightTrigger = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadRightTrigger");
	}

	UGHM_PlayerInput_execPressPadRightTrigger_Params PressPadRightTrigger_Params;

	this->ProcessEvent(uFnPressPadRightTrigger, &PressPadRightTrigger_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadLeftTrigger
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadLeftTrigger()
{
	static UFunction* uFnPressPadLeftTrigger = nullptr;

	if (!uFnPressPadLeftTrigger)
	{
		uFnPressPadLeftTrigger = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadLeftTrigger");
	}

	UGHM_PlayerInput_execPressPadLeftTrigger_Params PressPadLeftTrigger_Params;

	this->ProcessEvent(uFnPressPadLeftTrigger, &PressPadLeftTrigger_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadRightShoulder
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadRightShoulder()
{
	static UFunction* uFnPressPadRightShoulder = nullptr;

	if (!uFnPressPadRightShoulder)
	{
		uFnPressPadRightShoulder = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadRightShoulder");
	}

	UGHM_PlayerInput_execPressPadRightShoulder_Params PressPadRightShoulder_Params;

	this->ProcessEvent(uFnPressPadRightShoulder, &PressPadRightShoulder_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadLeftShoulder
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadLeftShoulder()
{
	static UFunction* uFnPressPadLeftShoulder = nullptr;

	if (!uFnPressPadLeftShoulder)
	{
		uFnPressPadLeftShoulder = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadLeftShoulder");
	}

	UGHM_PlayerInput_execPressPadLeftShoulder_Params PressPadLeftShoulder_Params;

	this->ProcessEvent(uFnPressPadLeftShoulder, &PressPadLeftShoulder_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadY
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadY()
{
	static UFunction* uFnPressPadY = nullptr;

	if (!uFnPressPadY)
	{
		uFnPressPadY = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadY");
	}

	UGHM_PlayerInput_execPressPadY_Params PressPadY_Params;

	this->ProcessEvent(uFnPressPadY, &PressPadY_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadX
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadX()
{
	static UFunction* uFnPressPadX = nullptr;

	if (!uFnPressPadX)
	{
		uFnPressPadX = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadX");
	}

	UGHM_PlayerInput_execPressPadX_Params PressPadX_Params;

	this->ProcessEvent(uFnPressPadX, &PressPadX_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadB
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadB()
{
	static UFunction* uFnPressPadB = nullptr;

	if (!uFnPressPadB)
	{
		uFnPressPadB = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadB");
	}

	UGHM_PlayerInput_execPressPadB_Params PressPadB_Params;

	this->ProcessEvent(uFnPressPadB, &PressPadB_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadA
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadA()
{
	static UFunction* uFnPressPadA = nullptr;

	if (!uFnPressPadA)
	{
		uFnPressPadA = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadA");
	}

	UGHM_PlayerInput_execPressPadA_Params PressPadA_Params;

	this->ProcessEvent(uFnPressPadA, &PressPadA_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadRight
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadRight()
{
	static UFunction* uFnPressPadRight = nullptr;

	if (!uFnPressPadRight)
	{
		uFnPressPadRight = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadRight");
	}

	UGHM_PlayerInput_execPressPadRight_Params PressPadRight_Params;

	this->ProcessEvent(uFnPressPadRight, &PressPadRight_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadLeft
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadLeft()
{
	static UFunction* uFnPressPadLeft = nullptr;

	if (!uFnPressPadLeft)
	{
		uFnPressPadLeft = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadLeft");
	}

	UGHM_PlayerInput_execPressPadLeft_Params PressPadLeft_Params;

	this->ProcessEvent(uFnPressPadLeft, &PressPadLeft_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadDown
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadDown()
{
	static UFunction* uFnPressPadDown = nullptr;

	if (!uFnPressPadDown)
	{
		uFnPressPadDown = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadDown");
	}

	UGHM_PlayerInput_execPressPadDown_Params PressPadDown_Params;

	this->ProcessEvent(uFnPressPadDown, &PressPadDown_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.PressPadUp
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::PressPadUp()
{
	static UFunction* uFnPressPadUp = nullptr;

	if (!uFnPressPadUp)
	{
		uFnPressPadUp = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PressPadUp");
	}

	UGHM_PlayerInput_execPressPadUp_Params PressPadUp_Params;

	this->ProcessEvent(uFnPressPadUp, &PressPadUp_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.SetMapCtrl
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Enable                         (CPF_Parm)

void UGHM_PlayerInput::SetMapCtrl(unsigned long Enable)
{
	static UFunction* uFnSetMapCtrl = nullptr;

	if (!uFnSetMapCtrl)
	{
		uFnSetMapCtrl = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetMapCtrl");
	}

	UGHM_PlayerInput_execSetMapCtrl_Params SetMapCtrl_Params;
	SetMapCtrl_Params.Enable = Enable;

	uFnSetMapCtrl->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetMapCtrl, &SetMapCtrl_Params, nullptr);

	uFnSetMapCtrl->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.IsMapCtrl
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsMapCtrl()
{
	static UFunction* uFnIsMapCtrl = nullptr;

	if (!uFnIsMapCtrl)
	{
		uFnIsMapCtrl = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsMapCtrl");
	}

	UGHM_PlayerInput_execIsMapCtrl_Params IsMapCtrl_Params;

	uFnIsMapCtrl->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsMapCtrl, &IsMapCtrl_Params, nullptr);

	uFnIsMapCtrl->FunctionFlags |= 0x400;

	return IsMapCtrl_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.SetUIKeyCtrlDisableEx
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Disable                        (CPF_Parm)

void UGHM_PlayerInput::SetUIKeyCtrlDisableEx(unsigned long Disable)
{
	static UFunction* uFnSetUIKeyCtrlDisableEx = nullptr;

	if (!uFnSetUIKeyCtrlDisableEx)
	{
		uFnSetUIKeyCtrlDisableEx = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetUIKeyCtrlDisableEx");
	}

	UGHM_PlayerInput_execSetUIKeyCtrlDisableEx_Params SetUIKeyCtrlDisableEx_Params;
	SetUIKeyCtrlDisableEx_Params.Disable = Disable;

	uFnSetUIKeyCtrlDisableEx->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetUIKeyCtrlDisableEx, &SetUIKeyCtrlDisableEx_Params, nullptr);

	uFnSetUIKeyCtrlDisableEx->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.SetUIKeyCtrlDisable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Disable                        (CPF_Parm)

void UGHM_PlayerInput::SetUIKeyCtrlDisable(unsigned long Disable)
{
	static UFunction* uFnSetUIKeyCtrlDisable = nullptr;

	if (!uFnSetUIKeyCtrlDisable)
	{
		uFnSetUIKeyCtrlDisable = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetUIKeyCtrlDisable");
	}

	UGHM_PlayerInput_execSetUIKeyCtrlDisable_Params SetUIKeyCtrlDisable_Params;
	SetUIKeyCtrlDisable_Params.Disable = Disable;

	uFnSetUIKeyCtrlDisable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetUIKeyCtrlDisable, &SetUIKeyCtrlDisable_Params, nullptr);

	uFnSetUIKeyCtrlDisable->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.IsUIKeyCtrlDisable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsUIKeyCtrlDisable()
{
	static UFunction* uFnIsUIKeyCtrlDisable = nullptr;

	if (!uFnIsUIKeyCtrlDisable)
	{
		uFnIsUIKeyCtrlDisable = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsUIKeyCtrlDisable");
	}

	UGHM_PlayerInput_execIsUIKeyCtrlDisable_Params IsUIKeyCtrlDisable_Params;

	uFnIsUIKeyCtrlDisable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsUIKeyCtrlDisable, &IsUIKeyCtrlDisable_Params, nullptr);

	uFnIsUIKeyCtrlDisable->FunctionFlags |= 0x400;

	return IsUIKeyCtrlDisable_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.IsPlayerMoveDisable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsPlayerMoveDisable()
{
	static UFunction* uFnIsPlayerMoveDisable = nullptr;

	if (!uFnIsPlayerMoveDisable)
	{
		uFnIsPlayerMoveDisable = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsPlayerMoveDisable");
	}

	UGHM_PlayerInput_execIsPlayerMoveDisable_Params IsPlayerMoveDisable_Params;

	uFnIsPlayerMoveDisable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPlayerMoveDisable, &IsPlayerMoveDisable_Params, nullptr);

	uFnIsPlayerMoveDisable->FunctionFlags |= 0x400;

	return IsPlayerMoveDisable_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.SetPlayerKeyCtrlDisable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Disable                        (CPF_Parm)

void UGHM_PlayerInput::SetPlayerKeyCtrlDisable(unsigned long Disable)
{
	static UFunction* uFnSetPlayerKeyCtrlDisable = nullptr;

	if (!uFnSetPlayerKeyCtrlDisable)
	{
		uFnSetPlayerKeyCtrlDisable = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetPlayerKeyCtrlDisable");
	}

	UGHM_PlayerInput_execSetPlayerKeyCtrlDisable_Params SetPlayerKeyCtrlDisable_Params;
	SetPlayerKeyCtrlDisable_Params.Disable = Disable;

	uFnSetPlayerKeyCtrlDisable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPlayerKeyCtrlDisable, &SetPlayerKeyCtrlDisable_Params, nullptr);

	uFnSetPlayerKeyCtrlDisable->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.IsPlayerKeyCtrlDisable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsPlayerKeyCtrlDisable()
{
	static UFunction* uFnIsPlayerKeyCtrlDisable = nullptr;

	if (!uFnIsPlayerKeyCtrlDisable)
	{
		uFnIsPlayerKeyCtrlDisable = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsPlayerKeyCtrlDisable");
	}

	UGHM_PlayerInput_execIsPlayerKeyCtrlDisable_Params IsPlayerKeyCtrlDisable_Params;

	uFnIsPlayerKeyCtrlDisable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPlayerKeyCtrlDisable, &IsPlayerKeyCtrlDisable_Params, nullptr);

	uFnIsPlayerKeyCtrlDisable->FunctionFlags |= 0x400;

	return IsPlayerKeyCtrlDisable_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.IsActiveTextInput
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsActiveTextInput()
{
	static UFunction* uFnIsActiveTextInput = nullptr;

	if (!uFnIsActiveTextInput)
	{
		uFnIsActiveTextInput = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsActiveTextInput");
	}

	UGHM_PlayerInput_execIsActiveTextInput_Params IsActiveTextInput_Params;

	uFnIsActiveTextInput->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsActiveTextInput, &IsActiveTextInput_Params, nullptr);

	uFnIsActiveTextInput->FunctionFlags |= 0x400;

	return IsActiveTextInput_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.EnterEnable
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::EnterEnable()
{
	static UFunction* uFnEnterEnable = nullptr;

	if (!uFnEnterEnable)
	{
		uFnEnterEnable = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.EnterEnable");
	}

	UGHM_PlayerInput_execEnterEnable_Params EnterEnable_Params;

	this->ProcessEvent(uFnEnterEnable, &EnterEnable_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.IsEnterEnable
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsEnterEnable()
{
	static UFunction* uFnIsEnterEnable = nullptr;

	if (!uFnIsEnterEnable)
	{
		uFnIsEnterEnable = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsEnterEnable");
	}

	UGHM_PlayerInput_execIsEnterEnable_Params IsEnterEnable_Params;

	this->ProcessEvent(uFnIsEnterEnable, &IsEnterEnable_Params, nullptr);

	return IsEnterEnable_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.GetInputText
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGHM_PlayerInput::GetInputText()
{
	static UFunction* uFnGetInputText = nullptr;

	if (!uFnGetInputText)
	{
		uFnGetInputText = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetInputText");
	}

	UGHM_PlayerInput_execGetInputText_Params GetInputText_Params;

	this->ProcessEvent(uFnGetInputText, &GetInputText_Params, nullptr);

	return GetInputText_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.ClearInputText
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::ClearInputText()
{
	static UFunction* uFnClearInputText = nullptr;

	if (!uFnClearInputText)
	{
		uFnClearInputText = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ClearInputText");
	}

	UGHM_PlayerInput_execClearInputText_Params ClearInputText_Params;

	this->ProcessEvent(uFnClearInputText, &ClearInputText_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.CancelTextInput
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::CancelTextInput()
{
	static UFunction* uFnCancelTextInput = nullptr;

	if (!uFnCancelTextInput)
	{
		uFnCancelTextInput = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.CancelTextInput");
	}

	UGHM_PlayerInput_execCancelTextInput_Params CancelTextInput_Params;

	this->ProcessEvent(uFnCancelTextInput, &CancelTextInput_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.EndTextInput
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::EndTextInput()
{
	static UFunction* uFnEndTextInput = nullptr;

	if (!uFnEndTextInput)
	{
		uFnEndTextInput = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.EndTextInput");
	}

	UGHM_PlayerInput_execEndTextInput_Params EndTextInput_Params;

	this->ProcessEvent(uFnEndTextInput, &EndTextInput_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.StartTextInput
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Max                            (CPF_OptionalParm | CPF_Parm)
// class FString                  Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::StartTextInput(int32_t Max, class FString Text)
{
	static UFunction* uFnStartTextInput = nullptr;

	if (!uFnStartTextInput)
	{
		uFnStartTextInput = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.StartTextInput");
	}

	UGHM_PlayerInput_execStartTextInput_Params StartTextInput_Params;
	memcpy_s(&StartTextInput_Params.Max, 0x4, &Max, 0x4);
	memcpy_s(&StartTextInput_Params.Text, 0x10, &Text, 0x10);

	this->ProcessEvent(uFnStartTextInput, &StartTextInput_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.GetUIMouseFromDef
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        Link                           (CPF_Parm)

uint8_t UGHM_PlayerInput::GetUIMouseFromDef(uint8_t Link)
{
	static UFunction* uFnGetUIMouseFromDef = nullptr;

	if (!uFnGetUIMouseFromDef)
	{
		uFnGetUIMouseFromDef = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetUIMouseFromDef");
	}

	UGHM_PlayerInput_execGetUIMouseFromDef_Params GetUIMouseFromDef_Params;
	memcpy_s(&GetUIMouseFromDef_Params.Link, 0x1, &Link, 0x1);

	uFnGetUIMouseFromDef->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetUIMouseFromDef, &GetUIMouseFromDef_Params, nullptr);

	uFnGetUIMouseFromDef->FunctionFlags |= 0x400;

	return GetUIMouseFromDef_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.GetMouseFromDef
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        Link                           (CPF_Parm)

uint8_t UGHM_PlayerInput::GetMouseFromDef(uint8_t Link)
{
	static UFunction* uFnGetMouseFromDef = nullptr;

	if (!uFnGetMouseFromDef)
	{
		uFnGetMouseFromDef = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetMouseFromDef");
	}

	UGHM_PlayerInput_execGetMouseFromDef_Params GetMouseFromDef_Params;
	memcpy_s(&GetMouseFromDef_Params.Link, 0x1, &Link, 0x1);

	uFnGetMouseFromDef->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetMouseFromDef, &GetMouseFromDef_Params, nullptr);

	uFnGetMouseFromDef->FunctionFlags |= 0x400;

	return GetMouseFromDef_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.GetUIKeyFromDef
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        Link                           (CPF_Parm)

class FString UGHM_PlayerInput::GetUIKeyFromDef(uint8_t Link)
{
	static UFunction* uFnGetUIKeyFromDef = nullptr;

	if (!uFnGetUIKeyFromDef)
	{
		uFnGetUIKeyFromDef = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetUIKeyFromDef");
	}

	UGHM_PlayerInput_execGetUIKeyFromDef_Params GetUIKeyFromDef_Params;
	memcpy_s(&GetUIKeyFromDef_Params.Link, 0x1, &Link, 0x1);

	uFnGetUIKeyFromDef->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetUIKeyFromDef, &GetUIKeyFromDef_Params, nullptr);

	uFnGetUIKeyFromDef->FunctionFlags |= 0x400;

	return GetUIKeyFromDef_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.GetSecondKeyFromDef
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        Link                           (CPF_Parm)

class FString UGHM_PlayerInput::GetSecondKeyFromDef(uint8_t Link)
{
	static UFunction* uFnGetSecondKeyFromDef = nullptr;

	if (!uFnGetSecondKeyFromDef)
	{
		uFnGetSecondKeyFromDef = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetSecondKeyFromDef");
	}

	UGHM_PlayerInput_execGetSecondKeyFromDef_Params GetSecondKeyFromDef_Params;
	memcpy_s(&GetSecondKeyFromDef_Params.Link, 0x1, &Link, 0x1);

	uFnGetSecondKeyFromDef->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetSecondKeyFromDef, &GetSecondKeyFromDef_Params, nullptr);

	uFnGetSecondKeyFromDef->FunctionFlags |= 0x400;

	return GetSecondKeyFromDef_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.GetPrimeKeyFromDef
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        Link                           (CPF_Parm)

class FString UGHM_PlayerInput::GetPrimeKeyFromDef(uint8_t Link)
{
	static UFunction* uFnGetPrimeKeyFromDef = nullptr;

	if (!uFnGetPrimeKeyFromDef)
	{
		uFnGetPrimeKeyFromDef = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetPrimeKeyFromDef");
	}

	UGHM_PlayerInput_execGetPrimeKeyFromDef_Params GetPrimeKeyFromDef_Params;
	memcpy_s(&GetPrimeKeyFromDef_Params.Link, 0x1, &Link, 0x1);

	uFnGetPrimeKeyFromDef->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetPrimeKeyFromDef, &GetPrimeKeyFromDef_Params, nullptr);

	uFnGetPrimeKeyFromDef->FunctionFlags |= 0x400;

	return GetPrimeKeyFromDef_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.GetKeyListMax
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_PlayerInput::GetKeyListMax()
{
	static UFunction* uFnGetKeyListMax = nullptr;

	if (!uFnGetKeyListMax)
	{
		uFnGetKeyListMax = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetKeyListMax");
	}

	UGHM_PlayerInput_execGetKeyListMax_Params GetKeyListMax_Params;

	uFnGetKeyListMax->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetKeyListMax, &GetKeyListMax_Params, nullptr);

	uFnGetKeyListMax->FunctionFlags |= 0x400;

	return GetKeyListMax_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.GetKeyIndex
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

int32_t UGHM_PlayerInput::GetKeyIndex(class FString Key)
{
	static UFunction* uFnGetKeyIndex = nullptr;

	if (!uFnGetKeyIndex)
	{
		uFnGetKeyIndex = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetKeyIndex");
	}

	UGHM_PlayerInput_execGetKeyIndex_Params GetKeyIndex_Params;
	memcpy_s(&GetKeyIndex_Params.Key, 0x10, &Key, 0x10);

	uFnGetKeyIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetKeyIndex, &GetKeyIndex_Params, nullptr);

	uFnGetKeyIndex->FunctionFlags |= 0x400;

	return GetKeyIndex_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.ClearKeySetting
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Init                           (CPF_OptionalParm | CPF_Parm)

void UGHM_PlayerInput::ClearKeySetting(unsigned long Init)
{
	static UFunction* uFnClearKeySetting = nullptr;

	if (!uFnClearKeySetting)
	{
		uFnClearKeySetting = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ClearKeySetting");
	}

	UGHM_PlayerInput_execClearKeySetting_Params ClearKeySetting_Params;
	ClearKeySetting_Params.Init = Init;

	uFnClearKeySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearKeySetting, &ClearKeySetting_Params, nullptr);

	uFnClearKeySetting->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.SetUIMouseBtnMap
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        mouse                          (CPF_Parm)
// uint8_t                        Link                           (CPF_Parm)

void UGHM_PlayerInput::SetUIMouseBtnMap(uint8_t mouse, uint8_t Link)
{
	static UFunction* uFnSetUIMouseBtnMap = nullptr;

	if (!uFnSetUIMouseBtnMap)
	{
		uFnSetUIMouseBtnMap = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetUIMouseBtnMap");
	}

	UGHM_PlayerInput_execSetUIMouseBtnMap_Params SetUIMouseBtnMap_Params;
	memcpy_s(&SetUIMouseBtnMap_Params.mouse, 0x1, &mouse, 0x1);
	memcpy_s(&SetUIMouseBtnMap_Params.Link, 0x1, &Link, 0x1);

	uFnSetUIMouseBtnMap->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetUIMouseBtnMap, &SetUIMouseBtnMap_Params, nullptr);

	uFnSetUIMouseBtnMap->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.SetPlayerMouseBtnMap
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        mouse                          (CPF_Parm)
// uint8_t                        Link                           (CPF_Parm)

void UGHM_PlayerInput::SetPlayerMouseBtnMap(uint8_t mouse, uint8_t Link)
{
	static UFunction* uFnSetPlayerMouseBtnMap = nullptr;

	if (!uFnSetPlayerMouseBtnMap)
	{
		uFnSetPlayerMouseBtnMap = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetPlayerMouseBtnMap");
	}

	UGHM_PlayerInput_execSetPlayerMouseBtnMap_Params SetPlayerMouseBtnMap_Params;
	memcpy_s(&SetPlayerMouseBtnMap_Params.mouse, 0x1, &mouse, 0x1);
	memcpy_s(&SetPlayerMouseBtnMap_Params.Link, 0x1, &Link, 0x1);

	uFnSetPlayerMouseBtnMap->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPlayerMouseBtnMap, &SetPlayerMouseBtnMap_Params, nullptr);

	uFnSetPlayerMouseBtnMap->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.SetUISecondKeyBtnMap
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        Link                           (CPF_Parm)

void UGHM_PlayerInput::SetUISecondKeyBtnMap(class FString Key, uint8_t Link)
{
	static UFunction* uFnSetUISecondKeyBtnMap = nullptr;

	if (!uFnSetUISecondKeyBtnMap)
	{
		uFnSetUISecondKeyBtnMap = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetUISecondKeyBtnMap");
	}

	UGHM_PlayerInput_execSetUISecondKeyBtnMap_Params SetUISecondKeyBtnMap_Params;
	memcpy_s(&SetUISecondKeyBtnMap_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetUISecondKeyBtnMap_Params.Link, 0x1, &Link, 0x1);

	uFnSetUISecondKeyBtnMap->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetUISecondKeyBtnMap, &SetUISecondKeyBtnMap_Params, nullptr);

	uFnSetUISecondKeyBtnMap->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.SetUIPrimeKeyBtnMap
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        Link                           (CPF_Parm)
// unsigned long                  second                         (CPF_OptionalParm | CPF_Parm)

void UGHM_PlayerInput::SetUIPrimeKeyBtnMap(class FString Key, uint8_t Link, unsigned long second)
{
	static UFunction* uFnSetUIPrimeKeyBtnMap = nullptr;

	if (!uFnSetUIPrimeKeyBtnMap)
	{
		uFnSetUIPrimeKeyBtnMap = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetUIPrimeKeyBtnMap");
	}

	UGHM_PlayerInput_execSetUIPrimeKeyBtnMap_Params SetUIPrimeKeyBtnMap_Params;
	memcpy_s(&SetUIPrimeKeyBtnMap_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetUIPrimeKeyBtnMap_Params.Link, 0x1, &Link, 0x1);
	SetUIPrimeKeyBtnMap_Params.second = second;

	uFnSetUIPrimeKeyBtnMap->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetUIPrimeKeyBtnMap, &SetUIPrimeKeyBtnMap_Params, nullptr);

	uFnSetUIPrimeKeyBtnMap->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.SetPlayerSecondKeyBtnMap
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        Link                           (CPF_Parm)

void UGHM_PlayerInput::SetPlayerSecondKeyBtnMap(class FString Key, uint8_t Link)
{
	static UFunction* uFnSetPlayerSecondKeyBtnMap = nullptr;

	if (!uFnSetPlayerSecondKeyBtnMap)
	{
		uFnSetPlayerSecondKeyBtnMap = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetPlayerSecondKeyBtnMap");
	}

	UGHM_PlayerInput_execSetPlayerSecondKeyBtnMap_Params SetPlayerSecondKeyBtnMap_Params;
	memcpy_s(&SetPlayerSecondKeyBtnMap_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetPlayerSecondKeyBtnMap_Params.Link, 0x1, &Link, 0x1);

	uFnSetPlayerSecondKeyBtnMap->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPlayerSecondKeyBtnMap, &SetPlayerSecondKeyBtnMap_Params, nullptr);

	uFnSetPlayerSecondKeyBtnMap->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.SetPlayerPrimeKeyBtnMap
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        Link                           (CPF_Parm)
// unsigned long                  second                         (CPF_OptionalParm | CPF_Parm)

void UGHM_PlayerInput::SetPlayerPrimeKeyBtnMap(class FString Key, uint8_t Link, unsigned long second)
{
	static UFunction* uFnSetPlayerPrimeKeyBtnMap = nullptr;

	if (!uFnSetPlayerPrimeKeyBtnMap)
	{
		uFnSetPlayerPrimeKeyBtnMap = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetPlayerPrimeKeyBtnMap");
	}

	UGHM_PlayerInput_execSetPlayerPrimeKeyBtnMap_Params SetPlayerPrimeKeyBtnMap_Params;
	memcpy_s(&SetPlayerPrimeKeyBtnMap_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetPlayerPrimeKeyBtnMap_Params.Link, 0x1, &Link, 0x1);
	SetPlayerPrimeKeyBtnMap_Params.second = second;

	uFnSetPlayerPrimeKeyBtnMap->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPlayerPrimeKeyBtnMap, &SetPlayerPrimeKeyBtnMap_Params, nullptr);

	uFnSetPlayerPrimeKeyBtnMap->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.GetKeyConfigFromBtn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        inBtn                          (CPF_Parm)

uint8_t UGHM_PlayerInput::GetKeyConfigFromBtn(uint8_t inBtn)
{
	static UFunction* uFnGetKeyConfigFromBtn = nullptr;

	if (!uFnGetKeyConfigFromBtn)
	{
		uFnGetKeyConfigFromBtn = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetKeyConfigFromBtn");
	}

	UGHM_PlayerInput_execGetKeyConfigFromBtn_Params GetKeyConfigFromBtn_Params;
	memcpy_s(&GetKeyConfigFromBtn_Params.inBtn, 0x1, &inBtn, 0x1);

	uFnGetKeyConfigFromBtn->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetKeyConfigFromBtn, &GetKeyConfigFromBtn_Params, nullptr);

	uFnGetKeyConfigFromBtn->FunctionFlags |= 0x400;

	return GetKeyConfigFromBtn_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.GetBtnFromKeyConfig
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        Link                           (CPF_Parm)

uint8_t UGHM_PlayerInput::GetBtnFromKeyConfig(uint8_t Link)
{
	static UFunction* uFnGetBtnFromKeyConfig = nullptr;

	if (!uFnGetBtnFromKeyConfig)
	{
		uFnGetBtnFromKeyConfig = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.GetBtnFromKeyConfig");
	}

	UGHM_PlayerInput_execGetBtnFromKeyConfig_Params GetBtnFromKeyConfig_Params;
	memcpy_s(&GetBtnFromKeyConfig_Params.Link, 0x1, &Link, 0x1);

	uFnGetBtnFromKeyConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetBtnFromKeyConfig, &GetBtnFromKeyConfig_Params, nullptr);

	uFnGetBtnFromKeyConfig->FunctionFlags |= 0x400;

	return GetBtnFromKeyConfig_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.ConvertKeyConfigToEnginePadDef
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        inBtn                          (CPF_Parm)

uint8_t UGHM_PlayerInput::ConvertKeyConfigToEnginePadDef(uint8_t inBtn)
{
	static UFunction* uFnConvertKeyConfigToEnginePadDef = nullptr;

	if (!uFnConvertKeyConfigToEnginePadDef)
	{
		uFnConvertKeyConfigToEnginePadDef = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.ConvertKeyConfigToEnginePadDef");
	}

	UGHM_PlayerInput_execConvertKeyConfigToEnginePadDef_Params ConvertKeyConfigToEnginePadDef_Params;
	memcpy_s(&ConvertKeyConfigToEnginePadDef_Params.inBtn, 0x1, &inBtn, 0x1);

	uFnConvertKeyConfigToEnginePadDef->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnConvertKeyConfigToEnginePadDef, &ConvertKeyConfigToEnginePadDef_Params, nullptr);

	uFnConvertKeyConfigToEnginePadDef->FunctionFlags |= 0x400;

	return ConvertKeyConfigToEnginePadDef_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.CheckDuplicateKeyConfig
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::CheckDuplicateKeyConfig()
{
	static UFunction* uFnCheckDuplicateKeyConfig = nullptr;

	if (!uFnCheckDuplicateKeyConfig)
	{
		uFnCheckDuplicateKeyConfig = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.CheckDuplicateKeyConfig");
	}

	UGHM_PlayerInput_execCheckDuplicateKeyConfig_Params CheckDuplicateKeyConfig_Params;

	uFnCheckDuplicateKeyConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCheckDuplicateKeyConfig, &CheckDuplicateKeyConfig_Params, nullptr);

	uFnCheckDuplicateKeyConfig->FunctionFlags |= 0x400;

	return CheckDuplicateKeyConfig_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInput.SetKeyConfig
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)
// uint8_t                        Link                           (CPF_Parm)

void UGHM_PlayerInput::SetKeyConfig(uint8_t btn, uint8_t Link)
{
	static UFunction* uFnSetKeyConfig = nullptr;

	if (!uFnSetKeyConfig)
	{
		uFnSetKeyConfig = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetKeyConfig");
	}

	UGHM_PlayerInput_execSetKeyConfig_Params SetKeyConfig_Params;
	memcpy_s(&SetKeyConfig_Params.btn, 0x1, &btn, 0x1);
	memcpy_s(&SetKeyConfig_Params.Link, 0x1, &Link, 0x1);

	uFnSetKeyConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetKeyConfig, &SetKeyConfig_Params, nullptr);

	uFnSetKeyConfig->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.SetupKeyName
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// class FString                  Key                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_PlayerInput::SetupKeyName(class FString Key)
{
	static UFunction* uFnSetupKeyName = nullptr;

	if (!uFnSetupKeyName)
	{
		uFnSetupKeyName = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.SetupKeyName");
	}

	UGHM_PlayerInput_execSetupKeyName_Params SetupKeyName_Params;
	memcpy_s(&SetupKeyName_Params.Key, 0x10, &Key, 0x10);

	uFnSetupKeyName->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetupKeyName, &SetupKeyName_Params, nullptr);

	uFnSetupKeyName->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.InitKeyMap
// [0x00040401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::InitKeyMap()
{
	static UFunction* uFnInitKeyMap = nullptr;

	if (!uFnInitKeyMap)
	{
		uFnInitKeyMap = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.InitKeyMap");
	}

	UGHM_PlayerInput_execInitKeyMap_Params InitKeyMap_Params;

	uFnInitKeyMap->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInitKeyMap, &InitKeyMap_Params, nullptr);

	uFnInitKeyMap->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.InitKeyConfig
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::InitKeyConfig()
{
	static UFunction* uFnInitKeyConfig = nullptr;

	if (!uFnInitKeyConfig)
	{
		uFnInitKeyConfig = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.InitKeyConfig");
	}

	UGHM_PlayerInput_execInitKeyConfig_Params InitKeyConfig_Params;

	uFnInitKeyConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInitKeyConfig, &InitKeyConfig_Params, nullptr);

	uFnInitKeyConfig->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.InitInputSystem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInput::InitInputSystem()
{
	static UFunction* uFnInitInputSystem = nullptr;

	if (!uFnInitInputSystem)
	{
		uFnInitInputSystem = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.InitInputSystem");
	}

	UGHM_PlayerInput_execInitInputSystem_Params InitInputSystem_Params;

	uFnInitInputSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInitInputSystem, &InitInputSystem_Params, nullptr);

	uFnInitInputSystem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInput.PlayerInput
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          fDeltaTime                     (CPF_Parm)

void UGHM_PlayerInput::eventPlayerInput(float fDeltaTime)
{
	static UFunction* uFnPlayerInput = nullptr;

	if (!uFnPlayerInput)
	{
		uFnPlayerInput = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.PlayerInput");
	}

	UGHM_PlayerInput_eventPlayerInput_Params PlayerInput_Params;
	memcpy_s(&PlayerInput_Params.fDeltaTime, 0x4, &fDeltaTime, 0x4);

	this->ProcessEvent(uFnPlayerInput, &PlayerInput_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInput.IsCircleToAccept
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInput::IsCircleToAccept()
{
	static UFunction* uFnIsCircleToAccept = nullptr;

	if (!uFnIsCircleToAccept)
	{
		uFnIsCircleToAccept = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInput.IsCircleToAccept");
	}

	UGHM_PlayerInput_execIsCircleToAccept_Params IsCircleToAccept_Params;

	uFnIsCircleToAccept->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsCircleToAccept, &IsCircleToAccept_Params, nullptr);

	uFnIsCircleToAccept->FunctionFlags |= 0x400;

	return IsCircleToAccept_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInputRecorder.LoadFromDisk
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UGHM_PlayerInputRecorder::LoadFromDisk(class FString Filename)
{
	static UFunction* uFnLoadFromDisk = nullptr;

	if (!uFnLoadFromDisk)
	{
		uFnLoadFromDisk = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.LoadFromDisk");
	}

	UGHM_PlayerInputRecorder_execLoadFromDisk_Params LoadFromDisk_Params;
	memcpy_s(&LoadFromDisk_Params.Filename, 0x10, &Filename, 0x10);

	uFnLoadFromDisk->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLoadFromDisk, &LoadFromDisk_Params, nullptr);

	uFnLoadFromDisk->FunctionFlags |= 0x400;

	return LoadFromDisk_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInputRecorder.SaveToDisk
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UGHM_PlayerInputRecorder::SaveToDisk(class FString Filename)
{
	static UFunction* uFnSaveToDisk = nullptr;

	if (!uFnSaveToDisk)
	{
		uFnSaveToDisk = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.SaveToDisk");
	}

	UGHM_PlayerInputRecorder_execSaveToDisk_Params SaveToDisk_Params;
	memcpy_s(&SaveToDisk_Params.Filename, 0x10, &Filename, 0x10);

	uFnSaveToDisk->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSaveToDisk, &SaveToDisk_Params, nullptr);

	uFnSaveToDisk->FunctionFlags |= 0x400;

	return SaveToDisk_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInputRecorder.ReplayInputs
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInputRecorder::ReplayInputs()
{
	static UFunction* uFnReplayInputs = nullptr;

	if (!uFnReplayInputs)
	{
		uFnReplayInputs = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.ReplayInputs");
	}

	UGHM_PlayerInputRecorder_execReplayInputs_Params ReplayInputs_Params;

	uFnReplayInputs->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReplayInputs, &ReplayInputs_Params, nullptr);

	uFnReplayInputs->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInputRecorder.RecordInputs
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGHM_PlayerInputRecorder::RecordInputs(float DeltaTime)
{
	static UFunction* uFnRecordInputs = nullptr;

	if (!uFnRecordInputs)
	{
		uFnRecordInputs = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.RecordInputs");
	}

	UGHM_PlayerInputRecorder_execRecordInputs_Params RecordInputs_Params;
	memcpy_s(&RecordInputs_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnRecordInputs->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRecordInputs, &RecordInputs_Params, nullptr);

	uFnRecordInputs->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInputRecorder.DeleteInputs
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInputRecorder::DeleteInputs()
{
	static UFunction* uFnDeleteInputs = nullptr;

	if (!uFnDeleteInputs)
	{
		uFnDeleteInputs = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.DeleteInputs");
	}

	UGHM_PlayerInputRecorder_execDeleteInputs_Params DeleteInputs_Params;

	uFnDeleteInputs->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDeleteInputs, &DeleteInputs_Params, nullptr);

	uFnDeleteInputs->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInputRecorder.AllocateInputs
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        NumInputs                      (CPF_Parm)

void UGHM_PlayerInputRecorder::AllocateInputs(int32_t NumInputs)
{
	static UFunction* uFnAllocateInputs = nullptr;

	if (!uFnAllocateInputs)
	{
		uFnAllocateInputs = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.AllocateInputs");
	}

	UGHM_PlayerInputRecorder_execAllocateInputs_Params AllocateInputs_Params;
	memcpy_s(&AllocateInputs_Params.NumInputs, 0x4, &NumInputs, 0x4);

	uFnAllocateInputs->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAllocateInputs, &AllocateInputs_Params, nullptr);

	uFnAllocateInputs->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_PlayerInputRecorder.PlayerInput
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          fDeltaTime                     (CPF_Parm)

void UGHM_PlayerInputRecorder::eventPlayerInput(float fDeltaTime)
{
	static UFunction* uFnPlayerInput = nullptr;

	if (!uFnPlayerInput)
	{
		uFnPlayerInput = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.PlayerInput");
	}

	UGHM_PlayerInputRecorder_eventPlayerInput_Params PlayerInput_Params;
	memcpy_s(&PlayerInput_Params.fDeltaTime, 0x4, &fDeltaTime, 0x4);

	this->ProcessEvent(uFnPlayerInput, &PlayerInput_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInputRecorder.StopPlayback
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInputRecorder::StopPlayback()
{
	static UFunction* uFnStopPlayback = nullptr;

	if (!uFnStopPlayback)
	{
		uFnStopPlayback = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.StopPlayback");
	}

	UGHM_PlayerInputRecorder_execStopPlayback_Params StopPlayback_Params;

	this->ProcessEvent(uFnStopPlayback, &StopPlayback_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInputRecorder.StartPlayback
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInputRecorder::StartPlayback()
{
	static UFunction* uFnStartPlayback = nullptr;

	if (!uFnStartPlayback)
	{
		uFnStartPlayback = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.StartPlayback");
	}

	UGHM_PlayerInputRecorder_execStartPlayback_Params StartPlayback_Params;

	this->ProcessEvent(uFnStartPlayback, &StartPlayback_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInputRecorder.StopRecording
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInputRecorder::StopRecording()
{
	static UFunction* uFnStopRecording = nullptr;

	if (!uFnStopRecording)
	{
		uFnStopRecording = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.StopRecording");
	}

	UGHM_PlayerInputRecorder_execStopRecording_Params StopRecording_Params;

	this->ProcessEvent(uFnStopRecording, &StopRecording_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInputRecorder.StartRecording
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInputRecorder::StartRecording()
{
	static UFunction* uFnStartRecording = nullptr;

	if (!uFnStartRecording)
	{
		uFnStartRecording = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.StartRecording");
	}

	UGHM_PlayerInputRecorder_execStartRecording_Params StartRecording_Params;

	this->ProcessEvent(uFnStartRecording, &StartRecording_Params, nullptr);
};

// Function GHMEngine.GHM_PlayerInputRecorder.IsReplayingInputs
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInputRecorder::IsReplayingInputs()
{
	static UFunction* uFnIsReplayingInputs = nullptr;

	if (!uFnIsReplayingInputs)
	{
		uFnIsReplayingInputs = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.IsReplayingInputs");
	}

	UGHM_PlayerInputRecorder_execIsReplayingInputs_Params IsReplayingInputs_Params;

	this->ProcessEvent(uFnIsReplayingInputs, &IsReplayingInputs_Params, nullptr);

	return IsReplayingInputs_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInputRecorder.IsRecordingInputs
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_PlayerInputRecorder::IsRecordingInputs()
{
	static UFunction* uFnIsRecordingInputs = nullptr;

	if (!uFnIsRecordingInputs)
	{
		uFnIsRecordingInputs = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.IsRecordingInputs");
	}

	UGHM_PlayerInputRecorder_execIsRecordingInputs_Params IsRecordingInputs_Params;

	this->ProcessEvent(uFnIsRecordingInputs, &IsRecordingInputs_Params, nullptr);

	return IsRecordingInputs_Params.ReturnValue;
};

// Function GHMEngine.GHM_PlayerInputRecorder.Initialized
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_PlayerInputRecorder::Initialized()
{
	static UFunction* uFnInitialized = nullptr;

	if (!uFnInitialized)
	{
		uFnInitialized = UFunction::FindFunction("Function GHMEngine.GHM_PlayerInputRecorder.Initialized");
	}

	UGHM_PlayerInputRecorder_execInitialized_Params Initialized_Params;

	this->ProcessEvent(uFnInitialized, &Initialized_Params, nullptr);
};

// Function GHMEngine.GHM_SectionVolume.Destroyed
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_SectionVolume::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function GHMEngine.GHM_SectionVolume.Destroyed");
	}

	AGHM_SectionVolume_eventDestroyed_Params Destroyed_Params;

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function GHMEngine.GHM_SectionVolume.UnTouch
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Other                          (CPF_Parm)

void AGHM_SectionVolume::eventUnTouch(class AActor* Other)
{
	static UFunction* uFnUnTouch = nullptr;

	if (!uFnUnTouch)
	{
		uFnUnTouch = UFunction::FindFunction("Function GHMEngine.GHM_SectionVolume.UnTouch");
	}

	AGHM_SectionVolume_eventUnTouch_Params UnTouch_Params;
	memcpy_s(&UnTouch_Params.Other, 0x8, &Other, 0x8);

	this->ProcessEvent(uFnUnTouch, &UnTouch_Params, nullptr);
};

// Function GHMEngine.GHM_SectionVolume.Touch
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AGHM_SectionVolume::eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal)
{
	static UFunction* uFnTouch = nullptr;

	if (!uFnTouch)
	{
		uFnTouch = UFunction::FindFunction("Function GHMEngine.GHM_SectionVolume.Touch");
	}

	AGHM_SectionVolume_eventTouch_Params Touch_Params;
	memcpy_s(&Touch_Params.Other, 0x8, &Other, 0x8);
	memcpy_s(&Touch_Params.OtherComp, 0x8, &OtherComp, 0x8);
	memcpy_s(&Touch_Params.HitLocation, 0xC, &HitLocation, 0xC);
	memcpy_s(&Touch_Params.HitNormal, 0xC, &HitNormal, 0xC);

	this->ProcessEvent(uFnTouch, &Touch_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_Checkpoint.Activated
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_Checkpoint::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_Checkpoint.Activated");
	}

	UGHM_SeqAct_Checkpoint_eventActivated_Params Activated_Params;

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_Checkpoint.PreActivated
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_Checkpoint::eventPreActivated()
{
	static UFunction* uFnPreActivated = nullptr;

	if (!uFnPreActivated)
	{
		uFnPreActivated = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_Checkpoint.PreActivated");
	}

	UGHM_SeqAct_Checkpoint_eventPreActivated_Params PreActivated_Params;

	this->ProcessEvent(uFnPreActivated, &PreActivated_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_FrameDelay.ResetDelayActive
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_FrameDelay::ResetDelayActive()
{
	static UFunction* uFnResetDelayActive = nullptr;

	if (!uFnResetDelayActive)
	{
		uFnResetDelayActive = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_FrameDelay.ResetDelayActive");
	}

	UGHM_SeqAct_FrameDelay_execResetDelayActive_Params ResetDelayActive_Params;

	uFnResetDelayActive->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnResetDelayActive, &ResetDelayActive_Params, nullptr);

	uFnResetDelayActive->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SeqAct_FrameDelay.Reset
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_FrameDelay::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_FrameDelay.Reset");
	}

	UGHM_SeqAct_FrameDelay_execReset_Params Reset_Params;

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_ToggleCastShadows.ToggleCastShadows
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<class AActor*>          ActorList                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGHM_SeqAct_ToggleCastShadows::ToggleCastShadows(TArray<class AActor*>& ActorList)
{
	static UFunction* uFnToggleCastShadows = nullptr;

	if (!uFnToggleCastShadows)
	{
		uFnToggleCastShadows = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ToggleCastShadows.ToggleCastShadows");
	}

	UGHM_SeqAct_ToggleCastShadows_execToggleCastShadows_Params ToggleCastShadows_Params;
	memcpy_s(&ToggleCastShadows_Params.ActorList, 0x10, &ActorList, 0x10);

	uFnToggleCastShadows->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnToggleCastShadows, &ToggleCastShadows_Params, nullptr);

	uFnToggleCastShadows->FunctionFlags |= 0x400;

	memcpy_s(&ActorList, 0x10, &ToggleCastShadows_Params.ActorList, 0x10);
};

// Function GHMEngine.GHM_SeqAct_ToggleCastShadows.SetCastShadows
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bCastShadows                   (CPF_Parm)
// TArray<class AActor*>          ActorList                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGHM_SeqAct_ToggleCastShadows::SetCastShadows(unsigned long bCastShadows, TArray<class AActor*>& ActorList)
{
	static UFunction* uFnSetCastShadows = nullptr;

	if (!uFnSetCastShadows)
	{
		uFnSetCastShadows = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ToggleCastShadows.SetCastShadows");
	}

	UGHM_SeqAct_ToggleCastShadows_execSetCastShadows_Params SetCastShadows_Params;
	SetCastShadows_Params.bCastShadows = bCastShadows;
	memcpy_s(&SetCastShadows_Params.ActorList, 0x10, &ActorList, 0x10);

	uFnSetCastShadows->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetCastShadows, &SetCastShadows_Params, nullptr);

	uFnSetCastShadows->FunctionFlags |= 0x400;

	memcpy_s(&ActorList, 0x10, &SetCastShadows_Params.ActorList, 0x10);
};

// Function GHMEngine.GHM_SeqAct_ToggleCastShadows.Activated
// [0x00820802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_ToggleCastShadows::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ToggleCastShadows.Activated");
	}

	UGHM_SeqAct_ToggleCastShadows_eventActivated_Params Activated_Params;

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

// Function GHMEngine.GHM_SubTitle_Native.UpDateSubTitle
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SubTitle_Native::UpDateSubTitle()
{
	static UFunction* uFnUpDateSubTitle = nullptr;

	if (!uFnUpDateSubTitle)
	{
		uFnUpDateSubTitle = UFunction::FindFunction("Function GHMEngine.GHM_SubTitle_Native.UpDateSubTitle");
	}

	UGHM_SubTitle_Native_execUpDateSubTitle_Params UpDateSubTitle_Params;

	this->ProcessEvent(uFnUpDateSubTitle, &UpDateSubTitle_Params, nullptr);
};

// Function GHMEngine.GHM_SubTitle_Native.Initializ
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SubTitle_Native::Initializ()
{
	static UFunction* uFnInitializ = nullptr;

	if (!uFnInitializ)
	{
		uFnInitializ = UFunction::FindFunction("Function GHMEngine.GHM_SubTitle_Native.Initializ");
	}

	UGHM_SubTitle_Native_execInitializ_Params Initializ_Params;

	this->ProcessEvent(uFnInitializ, &Initializ_Params, nullptr);
};

// Function GHMEngine.GHM_SubTitle_Native.SetSkipButtonTex
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UTexture*                Tex                            (CPF_Parm)
// int32_t                        X                              (CPF_Parm)
// int32_t                        Y                              (CPF_Parm)
// int32_t                        W                              (CPF_Parm)
// int32_t                        H                              (CPF_Parm)

void UGHM_SubTitle_Native::SetSkipButtonTex(class UTexture* Tex, int32_t X, int32_t Y, int32_t W, int32_t H)
{
	static UFunction* uFnSetSkipButtonTex = nullptr;

	if (!uFnSetSkipButtonTex)
	{
		uFnSetSkipButtonTex = UFunction::FindFunction("Function GHMEngine.GHM_SubTitle_Native.SetSkipButtonTex");
	}

	UGHM_SubTitle_Native_execSetSkipButtonTex_Params SetSkipButtonTex_Params;
	memcpy_s(&SetSkipButtonTex_Params.Tex, 0x8, &Tex, 0x8);
	memcpy_s(&SetSkipButtonTex_Params.X, 0x4, &X, 0x4);
	memcpy_s(&SetSkipButtonTex_Params.Y, 0x4, &Y, 0x4);
	memcpy_s(&SetSkipButtonTex_Params.W, 0x4, &W, 0x4);
	memcpy_s(&SetSkipButtonTex_Params.H, 0x4, &H, 0x4);

	uFnSetSkipButtonTex->FunctionFlags |= ~0x400;

	UGHM_SubTitle_Native::StaticClass()->ProcessEvent(uFnSetSkipButtonTex, &SetSkipButtonTex_Params, nullptr);

	uFnSetSkipButtonTex->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SubTitle_Native.SetSubtitleTex
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UTexture*                Tex                            (CPF_Parm)
// int32_t                        X                              (CPF_Parm)
// int32_t                        Y                              (CPF_Parm)
// int32_t                        W                              (CPF_Parm)
// int32_t                        H                              (CPF_Parm)

void UGHM_SubTitle_Native::SetSubtitleTex(class UTexture* Tex, int32_t X, int32_t Y, int32_t W, int32_t H)
{
	static UFunction* uFnSetSubtitleTex = nullptr;

	if (!uFnSetSubtitleTex)
	{
		uFnSetSubtitleTex = UFunction::FindFunction("Function GHMEngine.GHM_SubTitle_Native.SetSubtitleTex");
	}

	UGHM_SubTitle_Native_execSetSubtitleTex_Params SetSubtitleTex_Params;
	memcpy_s(&SetSubtitleTex_Params.Tex, 0x8, &Tex, 0x8);
	memcpy_s(&SetSubtitleTex_Params.X, 0x4, &X, 0x4);
	memcpy_s(&SetSubtitleTex_Params.Y, 0x4, &Y, 0x4);
	memcpy_s(&SetSubtitleTex_Params.W, 0x4, &W, 0x4);
	memcpy_s(&SetSubtitleTex_Params.H, 0x4, &H, 0x4);

	uFnSetSubtitleTex->FunctionFlags |= ~0x400;

	UGHM_SubTitle_Native::StaticClass()->ProcessEvent(uFnSetSubtitleTex, &SetSubtitleTex_Params, nullptr);

	uFnSetSubtitleTex->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SubTitle_Native.SetSubTitleMovieTex
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UTexture*                Tex                            (CPF_Parm)
// int32_t                        psY                            (CPF_Parm)

void UGHM_SubTitle_Native::SetSubTitleMovieTex(class UTexture* Tex, int32_t psY)
{
	static UFunction* uFnSetSubTitleMovieTex = nullptr;

	if (!uFnSetSubTitleMovieTex)
	{
		uFnSetSubTitleMovieTex = UFunction::FindFunction("Function GHMEngine.GHM_SubTitle_Native.SetSubTitleMovieTex");
	}

	UGHM_SubTitle_Native_execSetSubTitleMovieTex_Params SetSubTitleMovieTex_Params;
	memcpy_s(&SetSubTitleMovieTex_Params.Tex, 0x8, &Tex, 0x8);
	memcpy_s(&SetSubTitleMovieTex_Params.psY, 0x4, &psY, 0x4);

	uFnSetSubTitleMovieTex->FunctionFlags |= ~0x400;

	UGHM_SubTitle_Native::StaticClass()->ProcessEvent(uFnSetSubTitleMovieTex, &SetSubTitleMovieTex_Params, nullptr);

	uFnSetSubTitleMovieTex->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SubTitle_Native.AttachSubtitleManager
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  flag                           (CPF_Parm)

void UGHM_SubTitle_Native::AttachSubtitleManager(unsigned long flag)
{
	static UFunction* uFnAttachSubtitleManager = nullptr;

	if (!uFnAttachSubtitleManager)
	{
		uFnAttachSubtitleManager = UFunction::FindFunction("Function GHMEngine.GHM_SubTitle_Native.AttachSubtitleManager");
	}

	UGHM_SubTitle_Native_execAttachSubtitleManager_Params AttachSubtitleManager_Params;
	AttachSubtitleManager_Params.flag = flag;

	uFnAttachSubtitleManager->FunctionFlags |= ~0x400;

	UGHM_SubTitle_Native::StaticClass()->ProcessEvent(uFnAttachSubtitleManager, &AttachSubtitleManager_Params, nullptr);

	uFnAttachSubtitleManager->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SubTitle_Native.GetLastSubtitleString
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGHM_SubTitle_Native::GetLastSubtitleString()
{
	static UFunction* uFnGetLastSubtitleString = nullptr;

	if (!uFnGetLastSubtitleString)
	{
		uFnGetLastSubtitleString = UFunction::FindFunction("Function GHMEngine.GHM_SubTitle_Native.GetLastSubtitleString");
	}

	UGHM_SubTitle_Native_execGetLastSubtitleString_Params GetLastSubtitleString_Params;

	uFnGetLastSubtitleString->FunctionFlags |= ~0x400;

	UGHM_SubTitle_Native::StaticClass()->ProcessEvent(uFnGetLastSubtitleString, &GetLastSubtitleString_Params, nullptr);

	uFnGetLastSubtitleString->FunctionFlags |= 0x400;

	return GetLastSubtitleString_Params.ReturnValue;
};

// Function GHMEngine.GHM_AnimNodeBlendByProperty.ReBecomeRelevant
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_AnimNodeBlendByProperty::ReBecomeRelevant()
{
	static UFunction* uFnReBecomeRelevant = nullptr;

	if (!uFnReBecomeRelevant)
	{
		uFnReBecomeRelevant = UFunction::FindFunction("Function GHMEngine.GHM_AnimNodeBlendByProperty.ReBecomeRelevant");
	}

	UGHM_AnimNodeBlendByProperty_execReBecomeRelevant_Params ReBecomeRelevant_Params;

	uFnReBecomeRelevant->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReBecomeRelevant, &ReBecomeRelevant_Params, nullptr);

	uFnReBecomeRelevant->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_AnimNodeChain.PlayAnimation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        nodeindex                      (CPF_Parm)
// float                          BlendTime                      (CPF_Parm)

void UGHM_AnimNodeChain::PlayAnimation(int32_t nodeindex, float BlendTime)
{
	static UFunction* uFnPlayAnimation = nullptr;

	if (!uFnPlayAnimation)
	{
		uFnPlayAnimation = UFunction::FindFunction("Function GHMEngine.GHM_AnimNodeChain.PlayAnimation");
	}

	UGHM_AnimNodeChain_execPlayAnimation_Params PlayAnimation_Params;
	memcpy_s(&PlayAnimation_Params.nodeindex, 0x4, &nodeindex, 0x4);
	memcpy_s(&PlayAnimation_Params.BlendTime, 0x4, &BlendTime, 0x4);

	uFnPlayAnimation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlayAnimation, &PlayAnimation_Params, nullptr);

	uFnPlayAnimation->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_AnimNodeChain.PlayNextAnimation
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          BlendTime                      (CPF_Parm)

void UGHM_AnimNodeChain::PlayNextAnimation(float BlendTime)
{
	static UFunction* uFnPlayNextAnimation = nullptr;

	if (!uFnPlayNextAnimation)
	{
		uFnPlayNextAnimation = UFunction::FindFunction("Function GHMEngine.GHM_AnimNodeChain.PlayNextAnimation");
	}

	UGHM_AnimNodeChain_execPlayNextAnimation_Params PlayNextAnimation_Params;
	memcpy_s(&PlayNextAnimation_Params.BlendTime, 0x4, &BlendTime, 0x4);

	uFnPlayNextAnimation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlayNextAnimation, &PlayNextAnimation_Params, nullptr);

	uFnPlayNextAnimation->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SkelControlDFTL.StopWindAnim
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          FadeOutSeconds                 (CPF_Parm)

void UGHM_SkelControlDFTL::StopWindAnim(float FadeOutSeconds)
{
	static UFunction* uFnStopWindAnim = nullptr;

	if (!uFnStopWindAnim)
	{
		uFnStopWindAnim = UFunction::FindFunction("Function GHMEngine.GHM_SkelControlDFTL.StopWindAnim");
	}

	UGHM_SkelControlDFTL_execStopWindAnim_Params StopWindAnim_Params;
	memcpy_s(&StopWindAnim_Params.FadeOutSeconds, 0x4, &FadeOutSeconds, 0x4);

	uFnStopWindAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopWindAnim, &StopWindAnim_Params, nullptr);

	uFnStopWindAnim->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SkelControlDFTL.StartWindAnim
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FGHM_SkelControlDFTL_WindAnimSetting WindAnimSetting                (CPF_Parm)

void UGHM_SkelControlDFTL::StartWindAnim(struct FGHM_SkelControlDFTL_WindAnimSetting WindAnimSetting)
{
	static UFunction* uFnStartWindAnim = nullptr;

	if (!uFnStartWindAnim)
	{
		uFnStartWindAnim = UFunction::FindFunction("Function GHMEngine.GHM_SkelControlDFTL.StartWindAnim");
	}

	UGHM_SkelControlDFTL_execStartWindAnim_Params StartWindAnim_Params;
	memcpy_s(&StartWindAnim_Params.WindAnimSetting, 0x68, &WindAnimSetting, 0x68);

	uFnStartWindAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStartWindAnim, &StartWindAnim_Params, nullptr);

	uFnStartWindAnim->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SkelControlTrailWithInertia.OnTeleport
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USkeletalMeshComponent*  _poSkelComp                    (CPF_Parm | CPF_EditInline)

void UGHM_SkelControlTrailWithInertia::OnTeleport(class USkeletalMeshComponent* _poSkelComp)
{
	static UFunction* uFnOnTeleport = nullptr;

	if (!uFnOnTeleport)
	{
		uFnOnTeleport = UFunction::FindFunction("Function GHMEngine.GHM_SkelControlTrailWithInertia.OnTeleport");
	}

	UGHM_SkelControlTrailWithInertia_execOnTeleport_Params OnTeleport_Params;
	memcpy_s(&OnTeleport_Params._poSkelComp, 0x8, &_poSkelComp, 0x8);

	uFnOnTeleport->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOnTeleport, &OnTeleport_Params, nullptr);

	uFnOnTeleport->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SkelControlTrailWithEffector.OnTeleport
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USkeletalMeshComponent*  _poSkelComp                    (CPF_Parm | CPF_EditInline)

void UGHM_SkelControlTrailWithEffector::OnTeleport(class USkeletalMeshComponent* _poSkelComp)
{
	static UFunction* uFnOnTeleport = nullptr;

	if (!uFnOnTeleport)
	{
		uFnOnTeleport = UFunction::FindFunction("Function GHMEngine.GHM_SkelControlTrailWithEffector.OnTeleport");
	}

	UGHM_SkelControlTrailWithEffector_execOnTeleport_Params OnTeleport_Params;
	memcpy_s(&OnTeleport_Params._poSkelComp, 0x8, &_poSkelComp, 0x8);

	uFnOnTeleport->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOnTeleport, &OnTeleport_Params, nullptr);

	uFnOnTeleport->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SkeletalMeshActorMAT.MAT_SetSkelControlWeight
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   SkelControlNodeName            (CPF_Parm)
// float                          SkelControlWeight              (CPF_Parm)

void AGHM_SkeletalMeshActorMAT::MAT_SetSkelControlWeight(struct FName SkelControlNodeName, float SkelControlWeight)
{
	static UFunction* uFnMAT_SetSkelControlWeight = nullptr;

	if (!uFnMAT_SetSkelControlWeight)
	{
		uFnMAT_SetSkelControlWeight = UFunction::FindFunction("Function GHMEngine.GHM_SkeletalMeshActorMAT.MAT_SetSkelControlWeight");
	}

	AGHM_SkeletalMeshActorMAT_execMAT_SetSkelControlWeight_Params MAT_SetSkelControlWeight_Params;
	memcpy_s(&MAT_SetSkelControlWeight_Params.SkelControlNodeName, 0x8, &SkelControlNodeName, 0x8);
	memcpy_s(&MAT_SetSkelControlWeight_Params.SkelControlWeight, 0x4, &SkelControlWeight, 0x4);

	uFnMAT_SetSkelControlWeight->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnMAT_SetSkelControlWeight, &MAT_SetSkelControlWeight_Params, nullptr);

	uFnMAT_SetSkelControlWeight->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SkeletalMeshActorMAT.SetSkelControlWeight
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   SkelControlNodeName            (CPF_Parm)
// float                          SkelControlWeight              (CPF_Parm)

void AGHM_SkeletalMeshActorMAT::eventSetSkelControlWeight(struct FName SkelControlNodeName, float SkelControlWeight)
{
	static UFunction* uFnSetSkelControlWeight = nullptr;

	if (!uFnSetSkelControlWeight)
	{
		uFnSetSkelControlWeight = UFunction::FindFunction("Function GHMEngine.GHM_SkeletalMeshActorMAT.SetSkelControlWeight");
	}

	AGHM_SkeletalMeshActorMAT_eventSetSkelControlWeight_Params SetSkelControlWeight_Params;
	memcpy_s(&SetSkelControlWeight_Params.SkelControlNodeName, 0x8, &SkelControlNodeName, 0x8);
	memcpy_s(&SetSkelControlWeight_Params.SkelControlWeight, 0x4, &SkelControlWeight, 0x4);

	this->ProcessEvent(uFnSetSkelControlWeight, &SetSkelControlWeight_Params, nullptr);
};

// Function GHMEngine.GHM_KActor.StackNotify
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_KActor::StackNotify()
{
	static UFunction* uFnStackNotify = nullptr;

	if (!uFnStackNotify)
	{
		uFnStackNotify = UFunction::FindFunction("Function GHMEngine.GHM_KActor.StackNotify");
	}

	AGHM_KActor_execStackNotify_Params StackNotify_Params;

	this->ProcessEvent(uFnStackNotify, &StackNotify_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.ApplyCheckpointRecordCore
// [0x00C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FBrokenObjectCheckpointRecord Record                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGHM_BreakableObject::ApplyCheckpointRecordCore(struct FBrokenObjectCheckpointRecord& Record)
{
	static UFunction* uFnApplyCheckpointRecordCore = nullptr;

	if (!uFnApplyCheckpointRecordCore)
	{
		uFnApplyCheckpointRecordCore = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.ApplyCheckpointRecordCore");
	}

	AGHM_BreakableObject_execApplyCheckpointRecordCore_Params ApplyCheckpointRecordCore_Params;
	memcpy_s(&ApplyCheckpointRecordCore_Params.Record, 0x3C, &Record, 0x3C);

	this->ProcessEvent(uFnApplyCheckpointRecordCore, &ApplyCheckpointRecordCore_Params, nullptr);

	memcpy_s(&Record, 0x3C, &ApplyCheckpointRecordCore_Params.Record, 0x3C);
};

// Function GHMEngine.GHM_BreakableObject.GHM_GHM_BreakableObject_ApplyCheckpointRecord
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGHM_GHM_BreakableObject_CheckpointRecord Record                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGHM_BreakableObject::GHM_GHM_BreakableObject_ApplyCheckpointRecord(struct FGHM_GHM_BreakableObject_CheckpointRecord& Record)
{
	static UFunction* uFnGHM_GHM_BreakableObject_ApplyCheckpointRecord = nullptr;

	if (!uFnGHM_GHM_BreakableObject_ApplyCheckpointRecord)
	{
		uFnGHM_GHM_BreakableObject_ApplyCheckpointRecord = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.GHM_GHM_BreakableObject_ApplyCheckpointRecord");
	}

	AGHM_BreakableObject_execGHM_GHM_BreakableObject_ApplyCheckpointRecord_Params GHM_GHM_BreakableObject_ApplyCheckpointRecord_Params;
	memcpy_s(&GHM_GHM_BreakableObject_ApplyCheckpointRecord_Params.Record, 0x3C, &Record, 0x3C);

	this->ProcessEvent(uFnGHM_GHM_BreakableObject_ApplyCheckpointRecord, &GHM_GHM_BreakableObject_ApplyCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, 0x3C, &GHM_GHM_BreakableObject_ApplyCheckpointRecord_Params.Record, 0x3C);
};

// Function GHMEngine.GHM_BreakableObject.GHM_GHM_BreakableObject_CreateCheckpointRecord
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGHM_GHM_BreakableObject_CheckpointRecord Record                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGHM_BreakableObject::GHM_GHM_BreakableObject_CreateCheckpointRecord(struct FGHM_GHM_BreakableObject_CheckpointRecord& Record)
{
	static UFunction* uFnGHM_GHM_BreakableObject_CreateCheckpointRecord = nullptr;

	if (!uFnGHM_GHM_BreakableObject_CreateCheckpointRecord)
	{
		uFnGHM_GHM_BreakableObject_CreateCheckpointRecord = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.GHM_GHM_BreakableObject_CreateCheckpointRecord");
	}

	AGHM_BreakableObject_execGHM_GHM_BreakableObject_CreateCheckpointRecord_Params GHM_GHM_BreakableObject_CreateCheckpointRecord_Params;
	memcpy_s(&GHM_GHM_BreakableObject_CreateCheckpointRecord_Params.Record, 0x3C, &Record, 0x3C);

	this->ProcessEvent(uFnGHM_GHM_BreakableObject_CreateCheckpointRecord, &GHM_GHM_BreakableObject_CreateCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, 0x3C, &GHM_GHM_BreakableObject_CreateCheckpointRecord_Params.Record, 0x3C);
};

// Function GHMEngine.GHM_BreakableObject.AddSpawnedPackageRecords
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// int32_t                        InPackageNo                    (CPF_Parm)
// int32_t                        InRemainingDamage              (CPF_Parm)

void AGHM_BreakableObject::AddSpawnedPackageRecords(int32_t InPackageNo, int32_t InRemainingDamage)
{
	static UFunction* uFnAddSpawnedPackageRecords = nullptr;

	if (!uFnAddSpawnedPackageRecords)
	{
		uFnAddSpawnedPackageRecords = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.AddSpawnedPackageRecords");
	}

	AGHM_BreakableObject_execAddSpawnedPackageRecords_Params AddSpawnedPackageRecords_Params;
	memcpy_s(&AddSpawnedPackageRecords_Params.InPackageNo, 0x4, &InPackageNo, 0x4);
	memcpy_s(&AddSpawnedPackageRecords_Params.InRemainingDamage, 0x4, &InRemainingDamage, 0x4);

	this->ProcessEvent(uFnAddSpawnedPackageRecords, &AddSpawnedPackageRecords_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.Detach
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Other                          (CPF_Parm)

void AGHM_BreakableObject::eventDetach(class AActor* Other)
{
	static UFunction* uFnDetach = nullptr;

	if (!uFnDetach)
	{
		uFnDetach = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.Detach");
	}

	AGHM_BreakableObject_eventDetach_Params Detach_Params;
	memcpy_s(&Detach_Params.Other, 0x8, &Other, 0x8);

	this->ProcessEvent(uFnDetach, &Detach_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.Attach
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Other                          (CPF_Parm)

void AGHM_BreakableObject::eventAttach(class AActor* Other)
{
	static UFunction* uFnAttach = nullptr;

	if (!uFnAttach)
	{
		uFnAttach = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.Attach");
	}

	AGHM_BreakableObject_eventAttach_Params Attach_Params;
	memcpy_s(&Attach_Params.Other, 0x8, &Other, 0x8);

	this->ProcessEvent(uFnAttach, &Attach_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.FinalTweaksRB
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AKActorSpawnable*        Fragment                       (CPF_Parm)
// struct FBreakPackage           BP                             (CPF_Parm | CPF_NeedCtorLink)
// struct FBreakActor             BA                             (CPF_Parm | CPF_NeedCtorLink)

void AGHM_BreakableObject::FinalTweaksRB(class AKActorSpawnable* Fragment, struct FBreakPackage BP, struct FBreakActor BA)
{
	static UFunction* uFnFinalTweaksRB = nullptr;

	if (!uFnFinalTweaksRB)
	{
		uFnFinalTweaksRB = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.FinalTweaksRB");
	}

	AGHM_BreakableObject_execFinalTweaksRB_Params FinalTweaksRB_Params;
	memcpy_s(&FinalTweaksRB_Params.Fragment, 0x8, &Fragment, 0x8);
	memcpy_s(&FinalTweaksRB_Params.BP, 0xD8, &BP, 0xD8);
	memcpy_s(&FinalTweaksRB_Params.BA, 0x68, &BA, 0x68);

	this->ProcessEvent(uFnFinalTweaksRB, &FinalTweaksRB_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.FinalTweaksStatic
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class ADynamicSMActor*         Fragment                       (CPF_Parm)
// struct FBreakPackage           BP                             (CPF_Parm | CPF_NeedCtorLink)
// struct FBreakActor             BA                             (CPF_Parm | CPF_NeedCtorLink)

void AGHM_BreakableObject::FinalTweaksStatic(class ADynamicSMActor* Fragment, struct FBreakPackage BP, struct FBreakActor BA)
{
	static UFunction* uFnFinalTweaksStatic = nullptr;

	if (!uFnFinalTweaksStatic)
	{
		uFnFinalTweaksStatic = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.FinalTweaksStatic");
	}

	AGHM_BreakableObject_execFinalTweaksStatic_Params FinalTweaksStatic_Params;
	memcpy_s(&FinalTweaksStatic_Params.Fragment, 0x8, &Fragment, 0x8);
	memcpy_s(&FinalTweaksStatic_Params.BP, 0xD8, &BP, 0xD8);
	memcpy_s(&FinalTweaksStatic_Params.BA, 0x68, &BA, 0x68);

	this->ProcessEvent(uFnFinalTweaksStatic, &FinalTweaksStatic_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.RBInit
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AKActorSpawnable*        Fragment                       (CPF_Parm)
// struct FBreakPackage           BP                             (CPF_Parm | CPF_NeedCtorLink)
// struct FBreakActor             BA                             (CPF_Parm | CPF_NeedCtorLink)
// struct FVector                 RBVelocity                     (CPF_Parm)

void AGHM_BreakableObject::RBInit(class AKActorSpawnable* Fragment, struct FBreakPackage BP, struct FBreakActor BA, struct FVector RBVelocity)
{
	static UFunction* uFnRBInit = nullptr;

	if (!uFnRBInit)
	{
		uFnRBInit = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.RBInit");
	}

	AGHM_BreakableObject_execRBInit_Params RBInit_Params;
	memcpy_s(&RBInit_Params.Fragment, 0x8, &Fragment, 0x8);
	memcpy_s(&RBInit_Params.BP, 0xD8, &BP, 0xD8);
	memcpy_s(&RBInit_Params.BA, 0x68, &BA, 0x68);
	memcpy_s(&RBInit_Params.RBVelocity, 0xC, &RBVelocity, 0xC);

	this->ProcessEvent(uFnRBInit, &RBInit_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.StaticInit
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class ADynamicSMActor*         Fragment                       (CPF_Parm)
// struct FBreakPackage           BP                             (CPF_Parm | CPF_NeedCtorLink)
// struct FBreakActor             BA                             (CPF_Parm | CPF_NeedCtorLink)

void AGHM_BreakableObject::StaticInit(class ADynamicSMActor* Fragment, struct FBreakPackage BP, struct FBreakActor BA)
{
	static UFunction* uFnStaticInit = nullptr;

	if (!uFnStaticInit)
	{
		uFnStaticInit = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.StaticInit");
	}

	AGHM_BreakableObject_execStaticInit_Params StaticInit_Params;
	memcpy_s(&StaticInit_Params.Fragment, 0x8, &Fragment, 0x8);
	memcpy_s(&StaticInit_Params.BP, 0xD8, &BP, 0xD8);
	memcpy_s(&StaticInit_Params.BA, 0x68, &BA, 0x68);

	this->ProcessEvent(uFnStaticInit, &StaticInit_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.BaseInit
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class ADynamicSMActor*         Fragment                       (CPF_Parm)
// struct FBreakPackage           BP                             (CPF_Parm | CPF_NeedCtorLink)
// struct FBreakActor             BA                             (CPF_Parm | CPF_NeedCtorLink)

void AGHM_BreakableObject::BaseInit(class ADynamicSMActor* Fragment, struct FBreakPackage BP, struct FBreakActor BA)
{
	static UFunction* uFnBaseInit = nullptr;

	if (!uFnBaseInit)
	{
		uFnBaseInit = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.BaseInit");
	}

	AGHM_BreakableObject_execBaseInit_Params BaseInit_Params;
	memcpy_s(&BaseInit_Params.Fragment, 0x8, &Fragment, 0x8);
	memcpy_s(&BaseInit_Params.BP, 0xD8, &BP, 0xD8);
	memcpy_s(&BaseInit_Params.BA, 0x68, &BA, 0x68);

	this->ProcessEvent(uFnBaseInit, &BaseInit_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.SpawnPostDestructionParticles
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObject::SpawnPostDestructionParticles()
{
	static UFunction* uFnSpawnPostDestructionParticles = nullptr;

	if (!uFnSpawnPostDestructionParticles)
	{
		uFnSpawnPostDestructionParticles = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.SpawnPostDestructionParticles");
	}

	AGHM_BreakableObject_execSpawnPostDestructionParticles_Params SpawnPostDestructionParticles_Params;

	this->ProcessEvent(uFnSpawnPostDestructionParticles, &SpawnPostDestructionParticles_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.DeleteAccumulationParticles
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObject::DeleteAccumulationParticles()
{
	static UFunction* uFnDeleteAccumulationParticles = nullptr;

	if (!uFnDeleteAccumulationParticles)
	{
		uFnDeleteAccumulationParticles = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.DeleteAccumulationParticles");
	}

	AGHM_BreakableObject_execDeleteAccumulationParticles_Params DeleteAccumulationParticles_Params;

	this->ProcessEvent(uFnDeleteAccumulationParticles, &DeleteAccumulationParticles_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.SpawnAccumulationParticles
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UParticleSystemComponent* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// struct FBreakPackage           BP                             (CPF_Parm | CPF_NeedCtorLink)

class UParticleSystemComponent* AGHM_BreakableObject::SpawnAccumulationParticles(struct FBreakPackage BP)
{
	static UFunction* uFnSpawnAccumulationParticles = nullptr;

	if (!uFnSpawnAccumulationParticles)
	{
		uFnSpawnAccumulationParticles = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.SpawnAccumulationParticles");
	}

	AGHM_BreakableObject_execSpawnAccumulationParticles_Params SpawnAccumulationParticles_Params;
	memcpy_s(&SpawnAccumulationParticles_Params.BP, 0xD8, &BP, 0xD8);

	this->ProcessEvent(uFnSpawnAccumulationParticles, &SpawnAccumulationParticles_Params, nullptr);

	return SpawnAccumulationParticles_Params.ReturnValue;
};

// Function GHMEngine.GHM_BreakableObject.SpawnDamageParticles
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FBreakPackage           BP                             (CPF_Parm | CPF_NeedCtorLink)

void AGHM_BreakableObject::SpawnDamageParticles(struct FBreakPackage BP)
{
	static UFunction* uFnSpawnDamageParticles = nullptr;

	if (!uFnSpawnDamageParticles)
	{
		uFnSpawnDamageParticles = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.SpawnDamageParticles");
	}

	AGHM_BreakableObject_execSpawnDamageParticles_Params SpawnDamageParticles_Params;
	memcpy_s(&SpawnDamageParticles_Params.BP, 0xD8, &BP, 0xD8);

	this->ProcessEvent(uFnSpawnDamageParticles, &SpawnDamageParticles_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.SpawnParticles
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FBreakPackage           BP                             (CPF_Parm | CPF_NeedCtorLink)

void AGHM_BreakableObject::SpawnParticles(struct FBreakPackage BP)
{
	static UFunction* uFnSpawnParticles = nullptr;

	if (!uFnSpawnParticles)
	{
		uFnSpawnParticles = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.SpawnParticles");
	}

	AGHM_BreakableObject_execSpawnParticles_Params SpawnParticles_Params;
	memcpy_s(&SpawnParticles_Params.BP, 0xD8, &BP, 0xD8);

	this->ProcessEvent(uFnSpawnParticles, &SpawnParticles_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.PerformFrameSpawns
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObject::PerformFrameSpawns()
{
	static UFunction* uFnPerformFrameSpawns = nullptr;

	if (!uFnPerformFrameSpawns)
	{
		uFnPerformFrameSpawns = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.PerformFrameSpawns");
	}

	AGHM_BreakableObject_execPerformFrameSpawns_Params PerformFrameSpawns_Params;

	this->ProcessEvent(uFnPerformFrameSpawns, &PerformFrameSpawns_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.SpawnPhysicsPart
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FBreakActor             BA                             (CPF_Parm | CPF_NeedCtorLink)

void AGHM_BreakableObject::SpawnPhysicsPart(struct FBreakActor BA)
{
	static UFunction* uFnSpawnPhysicsPart = nullptr;

	if (!uFnSpawnPhysicsPart)
	{
		uFnSpawnPhysicsPart = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.SpawnPhysicsPart");
	}

	AGHM_BreakableObject_execSpawnPhysicsPart_Params SpawnPhysicsPart_Params;
	memcpy_s(&SpawnPhysicsPart_Params.BA, 0x68, &BA, 0x68);

	this->ProcessEvent(uFnSpawnPhysicsPart, &SpawnPhysicsPart_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.SpawnPackage
// [0x00824002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FBreakPackage           BP                             (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        iInitialDamage                 (CPF_OptionalParm | CPF_Parm)
// float                          PostSpawnNoDamageTime          (CPF_OptionalParm | CPF_Parm)

void AGHM_BreakableObject::SpawnPackage(struct FBreakPackage BP, int32_t iInitialDamage, float PostSpawnNoDamageTime)
{
	static UFunction* uFnSpawnPackage = nullptr;

	if (!uFnSpawnPackage)
	{
		uFnSpawnPackage = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.SpawnPackage");
	}

	AGHM_BreakableObject_execSpawnPackage_Params SpawnPackage_Params;
	memcpy_s(&SpawnPackage_Params.BP, 0xD8, &BP, 0xD8);
	memcpy_s(&SpawnPackage_Params.iInitialDamage, 0x4, &iInitialDamage, 0x4);
	memcpy_s(&SpawnPackage_Params.PostSpawnNoDamageTime, 0x4, &PostSpawnNoDamageTime, 0x4);

	this->ProcessEvent(uFnSpawnPackage, &SpawnPackage_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.RigidBodyCollision
// [0x00420802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UPrimitiveComponent*     HitComponent                   (CPF_Parm | CPF_EditInline)
// class UPrimitiveComponent*     OtherComponent                 (CPF_Parm | CPF_EditInline)
// int32_t                        ContactIndex                   (CPF_Parm)
// struct FCollisionImpactData    RigidCollisionData             (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGHM_BreakableObject::eventRigidBodyCollision(class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int32_t ContactIndex, struct FCollisionImpactData& RigidCollisionData)
{
	static UFunction* uFnRigidBodyCollision = nullptr;

	if (!uFnRigidBodyCollision)
	{
		uFnRigidBodyCollision = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.RigidBodyCollision");
	}

	AGHM_BreakableObject_eventRigidBodyCollision_Params RigidBodyCollision_Params;
	memcpy_s(&RigidBodyCollision_Params.HitComponent, 0x8, &HitComponent, 0x8);
	memcpy_s(&RigidBodyCollision_Params.OtherComponent, 0x8, &OtherComponent, 0x8);
	memcpy_s(&RigidBodyCollision_Params.ContactIndex, 0x4, &ContactIndex, 0x4);
	memcpy_s(&RigidBodyCollision_Params.RigidCollisionData, 0x28, &RigidCollisionData, 0x28);

	this->ProcessEvent(uFnRigidBodyCollision, &RigidBodyCollision_Params, nullptr);

	memcpy_s(&RigidCollisionData, 0x28, &RigidBodyCollision_Params.RigidCollisionData, 0x28);
};

// Function GHMEngine.GHM_BreakableObject.Bump
// [0x00820802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitNormal                      (CPF_Parm)

void AGHM_BreakableObject::eventBump(class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal)
{
	static UFunction* uFnBump = nullptr;

	if (!uFnBump)
	{
		uFnBump = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.Bump");
	}

	AGHM_BreakableObject_eventBump_Params Bump_Params;
	memcpy_s(&Bump_Params.Other, 0x8, &Other, 0x8);
	memcpy_s(&Bump_Params.OtherComp, 0x8, &OtherComp, 0x8);
	memcpy_s(&Bump_Params.HitNormal, 0xC, &HitNormal, 0xC);

	this->ProcessEvent(uFnBump, &Bump_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.TakeDamageInner
// [0x00824002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// int32_t                        DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void AGHM_BreakableObject::TakeDamageInner(int32_t DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamageInner = nullptr;

	if (!uFnTakeDamageInner)
	{
		uFnTakeDamageInner = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.TakeDamageInner");
	}

	AGHM_BreakableObject_execTakeDamageInner_Params TakeDamageInner_Params;
	memcpy_s(&TakeDamageInner_Params.DamageAmount, 0x4, &DamageAmount, 0x4);
	memcpy_s(&TakeDamageInner_Params.EventInstigator, 0x8, &EventInstigator, 0x8);
	memcpy_s(&TakeDamageInner_Params.HitLocation, 0xC, &HitLocation, 0xC);
	memcpy_s(&TakeDamageInner_Params.Momentum, 0xC, &Momentum, 0xC);
	memcpy_s(&TakeDamageInner_Params.DamageType, 0x8, &DamageType, 0x8);
	memcpy_s(&TakeDamageInner_Params.HitInfo, 0x28, &HitInfo, 0x28);
	memcpy_s(&TakeDamageInner_Params.DamageCauser, 0x8, &DamageCauser, 0x8);

	this->ProcessEvent(uFnTakeDamageInner, &TakeDamageInner_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.TakeDamageInnerParent
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void AGHM_BreakableObject::TakeDamageInnerParent(int32_t DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamageInnerParent = nullptr;

	if (!uFnTakeDamageInnerParent)
	{
		uFnTakeDamageInnerParent = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.TakeDamageInnerParent");
	}

	AGHM_BreakableObject_execTakeDamageInnerParent_Params TakeDamageInnerParent_Params;
	memcpy_s(&TakeDamageInnerParent_Params.DamageAmount, 0x4, &DamageAmount, 0x4);
	memcpy_s(&TakeDamageInnerParent_Params.EventInstigator, 0x8, &EventInstigator, 0x8);
	memcpy_s(&TakeDamageInnerParent_Params.HitLocation, 0xC, &HitLocation, 0xC);
	memcpy_s(&TakeDamageInnerParent_Params.Momentum, 0xC, &Momentum, 0xC);
	memcpy_s(&TakeDamageInnerParent_Params.DamageType, 0x8, &DamageType, 0x8);
	memcpy_s(&TakeDamageInnerParent_Params.HitInfo, 0x28, &HitInfo, 0x28);
	memcpy_s(&TakeDamageInnerParent_Params.DamageCauser, 0x8, &DamageCauser, 0x8);

	this->ProcessEvent(uFnTakeDamageInnerParent, &TakeDamageInnerParent_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.TakeDamage
// [0x00824802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// int32_t                        DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void AGHM_BreakableObject::eventTakeDamage(int32_t DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.TakeDamage");
	}

	AGHM_BreakableObject_eventTakeDamage_Params TakeDamage_Params;
	memcpy_s(&TakeDamage_Params.DamageAmount, 0x4, &DamageAmount, 0x4);
	memcpy_s(&TakeDamage_Params.EventInstigator, 0x8, &EventInstigator, 0x8);
	memcpy_s(&TakeDamage_Params.HitLocation, 0xC, &HitLocation, 0xC);
	memcpy_s(&TakeDamage_Params.Momentum, 0xC, &Momentum, 0xC);
	memcpy_s(&TakeDamage_Params.DamageType, 0x8, &DamageType, 0x8);
	memcpy_s(&TakeDamage_Params.HitInfo, 0x28, &HitInfo, 0x28);
	memcpy_s(&TakeDamage_Params.DamageCauser, 0x8, &DamageCauser, 0x8);

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.EnableBreakableObject
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObject::EnableBreakableObject()
{
	static UFunction* uFnEnableBreakableObject = nullptr;

	if (!uFnEnableBreakableObject)
	{
		uFnEnableBreakableObject = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.EnableBreakableObject");
	}

	AGHM_BreakableObject_execEnableBreakableObject_Params EnableBreakableObject_Params;

	this->ProcessEvent(uFnEnableBreakableObject, &EnableBreakableObject_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.SetSplitNavMesh
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bNewValue                      (CPF_Parm)

void AGHM_BreakableObject::SetSplitNavMesh(unsigned long bNewValue)
{
	static UFunction* uFnSetSplitNavMesh = nullptr;

	if (!uFnSetSplitNavMesh)
	{
		uFnSetSplitNavMesh = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.SetSplitNavMesh");
	}

	AGHM_BreakableObject_execSetSplitNavMesh_Params SetSplitNavMesh_Params;
	SetSplitNavMesh_Params.bNewValue = bNewValue;

	uFnSetSplitNavMesh->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSplitNavMesh, &SetSplitNavMesh_Params, nullptr);

	uFnSetSplitNavMesh->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_BreakableObject.PostBeginPlay
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObject::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.PostBeginPlay");
	}

	AGHM_BreakableObject_eventPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.PreBeginPlay
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObject::eventPreBeginPlay()
{
	static UFunction* uFnPreBeginPlay = nullptr;

	if (!uFnPreBeginPlay)
	{
		uFnPreBeginPlay = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.PreBeginPlay");
	}

	AGHM_BreakableObject_eventPreBeginPlay_Params PreBeginPlay_Params;

	this->ProcessEvent(uFnPreBeginPlay, &PreBeginPlay_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObject.Destroyed
// [0x00820902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObject::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObject.Destroyed");
	}

	AGHM_BreakableObject_eventDestroyed_Params Destroyed_Params;

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.PostResaveCheckpoint
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_Checkpoint::eventPostResaveCheckpoint()
{
	static UFunction* uFnPostResaveCheckpoint = nullptr;

	if (!uFnPostResaveCheckpoint)
	{
		uFnPostResaveCheckpoint = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.PostResaveCheckpoint");
	}

	UGHM_Checkpoint_eventPostResaveCheckpoint_Params PostResaveCheckpoint_Params;

	this->ProcessEvent(uFnPostResaveCheckpoint, &PostResaveCheckpoint_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.ResaveCheckpointWriteToStorage
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_Checkpoint::eventResaveCheckpointWriteToStorage()
{
	static UFunction* uFnResaveCheckpointWriteToStorage = nullptr;

	if (!uFnResaveCheckpointWriteToStorage)
	{
		uFnResaveCheckpointWriteToStorage = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.ResaveCheckpointWriteToStorage");
	}

	UGHM_Checkpoint_eventResaveCheckpointWriteToStorage_Params ResaveCheckpointWriteToStorage_Params;

	this->ProcessEvent(uFnResaveCheckpointWriteToStorage, &ResaveCheckpointWriteToStorage_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.Post_SeqEvent_CheckpointSaved
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        iCheckPointIndex               (CPF_Parm)

void UGHM_Checkpoint::Post_SeqEvent_CheckpointSaved(int32_t iCheckPointIndex)
{
	static UFunction* uFnPost_SeqEvent_CheckpointSaved = nullptr;

	if (!uFnPost_SeqEvent_CheckpointSaved)
	{
		uFnPost_SeqEvent_CheckpointSaved = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.Post_SeqEvent_CheckpointSaved");
	}

	UGHM_Checkpoint_execPost_SeqEvent_CheckpointSaved_Params Post_SeqEvent_CheckpointSaved_Params;
	memcpy_s(&Post_SeqEvent_CheckpointSaved_Params.iCheckPointIndex, 0x4, &iCheckPointIndex, 0x4);

	UGHM_Checkpoint::StaticClass()->ProcessEvent(uFnPost_SeqEvent_CheckpointSaved, &Post_SeqEvent_CheckpointSaved_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.PostSaveCheckpoint
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_Checkpoint::eventPostSaveCheckpoint()
{
	static UFunction* uFnPostSaveCheckpoint = nullptr;

	if (!uFnPostSaveCheckpoint)
	{
		uFnPostSaveCheckpoint = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.PostSaveCheckpoint");
	}

	UGHM_Checkpoint_eventPostSaveCheckpoint_Params PostSaveCheckpoint_Params;

	this->ProcessEvent(uFnPostSaveCheckpoint, &PostSaveCheckpoint_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.Post_SeqEvent_CheckpointWriteToStorage
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        iCheckPointIndex               (CPF_Parm)

void UGHM_Checkpoint::Post_SeqEvent_CheckpointWriteToStorage(int32_t iCheckPointIndex)
{
	static UFunction* uFnPost_SeqEvent_CheckpointWriteToStorage = nullptr;

	if (!uFnPost_SeqEvent_CheckpointWriteToStorage)
	{
		uFnPost_SeqEvent_CheckpointWriteToStorage = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.Post_SeqEvent_CheckpointWriteToStorage");
	}

	UGHM_Checkpoint_execPost_SeqEvent_CheckpointWriteToStorage_Params Post_SeqEvent_CheckpointWriteToStorage_Params;
	memcpy_s(&Post_SeqEvent_CheckpointWriteToStorage_Params.iCheckPointIndex, 0x4, &iCheckPointIndex, 0x4);

	UGHM_Checkpoint::StaticClass()->ProcessEvent(uFnPost_SeqEvent_CheckpointWriteToStorage, &Post_SeqEvent_CheckpointWriteToStorage_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.CheckpointWriteToStorage
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_Checkpoint::eventCheckpointWriteToStorage()
{
	static UFunction* uFnCheckpointWriteToStorage = nullptr;

	if (!uFnCheckpointWriteToStorage)
	{
		uFnCheckpointWriteToStorage = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.CheckpointWriteToStorage");
	}

	UGHM_Checkpoint_eventCheckpointWriteToStorage_Params CheckpointWriteToStorage_Params;

	this->ProcessEvent(uFnCheckpointWriteToStorage, &CheckpointWriteToStorage_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.PreSaveCheckpoint
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_Checkpoint::eventPreSaveCheckpoint()
{
	static UFunction* uFnPreSaveCheckpoint = nullptr;

	if (!uFnPreSaveCheckpoint)
	{
		uFnPreSaveCheckpoint = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.PreSaveCheckpoint");
	}

	UGHM_Checkpoint_eventPreSaveCheckpoint_Params PreSaveCheckpoint_Params;

	this->ProcessEvent(uFnPreSaveCheckpoint, &PreSaveCheckpoint_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.Post_SeqEvent_CheckpointLoaded
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        iCheckPointIndex               (CPF_Parm)

void UGHM_Checkpoint::Post_SeqEvent_CheckpointLoaded(int32_t iCheckPointIndex)
{
	static UFunction* uFnPost_SeqEvent_CheckpointLoaded = nullptr;

	if (!uFnPost_SeqEvent_CheckpointLoaded)
	{
		uFnPost_SeqEvent_CheckpointLoaded = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.Post_SeqEvent_CheckpointLoaded");
	}

	UGHM_Checkpoint_execPost_SeqEvent_CheckpointLoaded_Params Post_SeqEvent_CheckpointLoaded_Params;
	memcpy_s(&Post_SeqEvent_CheckpointLoaded_Params.iCheckPointIndex, 0x4, &iCheckPointIndex, 0x4);

	UGHM_Checkpoint::StaticClass()->ProcessEvent(uFnPost_SeqEvent_CheckpointLoaded, &Post_SeqEvent_CheckpointLoaded_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.PostLoadCheckpoint
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_Checkpoint::eventPostLoadCheckpoint()
{
	static UFunction* uFnPostLoadCheckpoint = nullptr;

	if (!uFnPostLoadCheckpoint)
	{
		uFnPostLoadCheckpoint = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.PostLoadCheckpoint");
	}

	UGHM_Checkpoint_eventPostLoadCheckpoint_Params PostLoadCheckpoint_Params;

	this->ProcessEvent(uFnPostLoadCheckpoint, &PostLoadCheckpoint_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.PreLoadCheckpoint
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_Checkpoint::eventPreLoadCheckpoint()
{
	static UFunction* uFnPreLoadCheckpoint = nullptr;

	if (!uFnPreLoadCheckpoint)
	{
		uFnPreLoadCheckpoint = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.PreLoadCheckpoint");
	}

	UGHM_Checkpoint_eventPreLoadCheckpoint_Params PreLoadCheckpoint_Params;

	this->ProcessEvent(uFnPreLoadCheckpoint, &PreLoadCheckpoint_Params, nullptr);
};

// Function GHMEngine.GHM_Checkpoint.CheckpointIsEmpty
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_Checkpoint::eventCheckpointIsEmpty()
{
	static UFunction* uFnCheckpointIsEmpty = nullptr;

	if (!uFnCheckpointIsEmpty)
	{
		uFnCheckpointIsEmpty = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.CheckpointIsEmpty");
	}

	UGHM_Checkpoint_eventCheckpointIsEmpty_Params CheckpointIsEmpty_Params;

	this->ProcessEvent(uFnCheckpointIsEmpty, &CheckpointIsEmpty_Params, nullptr);

	return CheckpointIsEmpty_Params.ReturnValue;
};

// Function GHMEngine.GHM_Checkpoint.CheckpointIsNewer
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGHM_Checkpoint*         OtherCheckpoint                (CPF_Parm)

bool UGHM_Checkpoint::CheckpointIsNewer(class UGHM_Checkpoint* OtherCheckpoint)
{
	static UFunction* uFnCheckpointIsNewer = nullptr;

	if (!uFnCheckpointIsNewer)
	{
		uFnCheckpointIsNewer = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.CheckpointIsNewer");
	}

	UGHM_Checkpoint_execCheckpointIsNewer_Params CheckpointIsNewer_Params;
	memcpy_s(&CheckpointIsNewer_Params.OtherCheckpoint, 0x8, &OtherCheckpoint, 0x8);

	this->ProcessEvent(uFnCheckpointIsNewer, &CheckpointIsNewer_Params, nullptr);

	return CheckpointIsNewer_Params.ReturnValue;
};

// Function GHMEngine.GHM_Checkpoint.CheckpointTimeIsNewer
// [0x00422003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FCheckpointTime         lCheckpointTime                (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FCheckpointTime         OtherCheckpointTime            (CPF_Const | CPF_Parm | CPF_OutParm)

bool UGHM_Checkpoint::CheckpointTimeIsNewer(struct FCheckpointTime& lCheckpointTime, struct FCheckpointTime& OtherCheckpointTime)
{
	static UFunction* uFnCheckpointTimeIsNewer = nullptr;

	if (!uFnCheckpointTimeIsNewer)
	{
		uFnCheckpointTimeIsNewer = UFunction::FindFunction("Function GHMEngine.GHM_Checkpoint.CheckpointTimeIsNewer");
	}

	UGHM_Checkpoint_execCheckpointTimeIsNewer_Params CheckpointTimeIsNewer_Params;
	memcpy_s(&CheckpointTimeIsNewer_Params.lCheckpointTime, 0x10, &lCheckpointTime, 0x10);
	memcpy_s(&CheckpointTimeIsNewer_Params.OtherCheckpointTime, 0x10, &OtherCheckpointTime, 0x10);

	UGHM_Checkpoint::StaticClass()->ProcessEvent(uFnCheckpointTimeIsNewer, &CheckpointTimeIsNewer_Params, nullptr);

	memcpy_s(&lCheckpointTime, 0x10, &CheckpointTimeIsNewer_Params.lCheckpointTime, 0x10);
	memcpy_s(&OtherCheckpointTime, 0x10, &CheckpointTimeIsNewer_Params.OtherCheckpointTime, 0x10);

	return CheckpointTimeIsNewer_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.ForceExitSave
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_CheckPointSubSystem::ForceExitSave()
{
	static UFunction* uFnForceExitSave = nullptr;

	if (!uFnForceExitSave)
	{
		uFnForceExitSave = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.ForceExitSave");
	}

	UGHM_CheckPointSubSystem_execForceExitSave_Params ForceExitSave_Params;

	this->ProcessEvent(uFnForceExitSave, &ForceExitSave_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.ClearOnMemorySaveData
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_CheckPointSubSystem::ClearOnMemorySaveData()
{
	static UFunction* uFnClearOnMemorySaveData = nullptr;

	if (!uFnClearOnMemorySaveData)
	{
		uFnClearOnMemorySaveData = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.ClearOnMemorySaveData");
	}

	UGHM_CheckPointSubSystem_execClearOnMemorySaveData_Params ClearOnMemorySaveData_Params;

	this->ProcessEvent(uFnClearOnMemorySaveData, &ClearOnMemorySaveData_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.GetCheckpointIndex
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_CheckPointSubSystem::GetCheckpointIndex()
{
	static UFunction* uFnGetCheckpointIndex = nullptr;

	if (!uFnGetCheckpointIndex)
	{
		uFnGetCheckpointIndex = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.GetCheckpointIndex");
	}

	UGHM_CheckPointSubSystem_execGetCheckpointIndex_Params GetCheckpointIndex_Params;

	this->ProcessEvent(uFnGetCheckpointIndex, &GetCheckpointIndex_Params, nullptr);

	return GetCheckpointIndex_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.GetGameSettingsIndex
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_CheckPointSubSystem::GetGameSettingsIndex()
{
	static UFunction* uFnGetGameSettingsIndex = nullptr;

	if (!uFnGetGameSettingsIndex)
	{
		uFnGetGameSettingsIndex = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.GetGameSettingsIndex");
	}

	UGHM_CheckPointSubSystem_execGetGameSettingsIndex_Params GetGameSettingsIndex_Params;

	this->ProcessEvent(uFnGetGameSettingsIndex, &GetGameSettingsIndex_Params, nullptr);

	return GetGameSettingsIndex_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.CheckpointIsEmpty
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::CheckpointIsEmpty()
{
	static UFunction* uFnCheckpointIsEmpty = nullptr;

	if (!uFnCheckpointIsEmpty)
	{
		uFnCheckpointIsEmpty = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.CheckpointIsEmpty");
	}

	UGHM_CheckPointSubSystem_execCheckpointIsEmpty_Params CheckpointIsEmpty_Params;

	this->ProcessEvent(uFnCheckpointIsEmpty, &CheckpointIsEmpty_Params, nullptr);

	return CheckpointIsEmpty_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveFailed
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_CheckPointSubSystem::eventSaveFailed()
{
	static UFunction* uFnSaveFailed = nullptr;

	if (!uFnSaveFailed)
	{
		uFnSaveFailed = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SaveFailed");
	}

	UGHM_CheckPointSubSystem_eventSaveFailed_Params SaveFailed_Params;

	this->ProcessEvent(uFnSaveFailed, &SaveFailed_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.IsLoadComplete
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::IsLoadComplete()
{
	static UFunction* uFnIsLoadComplete = nullptr;

	if (!uFnIsLoadComplete)
	{
		uFnIsLoadComplete = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.IsLoadComplete");
	}

	UGHM_CheckPointSubSystem_execIsLoadComplete_Params IsLoadComplete_Params;

	this->ProcessEvent(uFnIsLoadComplete, &IsLoadComplete_Params, nullptr);

	return IsLoadComplete_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.JustLoadedCheckPoint
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_CheckPointSubSystem::eventJustLoadedCheckPoint()
{
	static UFunction* uFnJustLoadedCheckPoint = nullptr;

	if (!uFnJustLoadedCheckPoint)
	{
		uFnJustLoadedCheckPoint = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.JustLoadedCheckPoint");
	}

	UGHM_CheckPointSubSystem_eventJustLoadedCheckPoint_Params JustLoadedCheckPoint_Params;

	this->ProcessEvent(uFnJustLoadedCheckPoint, &JustLoadedCheckPoint_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadGameSettingsImmediately
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::LoadGameSettingsImmediately()
{
	static UFunction* uFnLoadGameSettingsImmediately = nullptr;

	if (!uFnLoadGameSettingsImmediately)
	{
		uFnLoadGameSettingsImmediately = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.LoadGameSettingsImmediately");
	}

	UGHM_CheckPointSubSystem_execLoadGameSettingsImmediately_Params LoadGameSettingsImmediately_Params;

	this->ProcessEvent(uFnLoadGameSettingsImmediately, &LoadGameSettingsImmediately_Params, nullptr);

	return LoadGameSettingsImmediately_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadGameSettingsRequest
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          fLoadingDelayTimer             (CPF_OptionalParm | CPF_Parm)

bool UGHM_CheckPointSubSystem::LoadGameSettingsRequest(float fLoadingDelayTimer)
{
	static UFunction* uFnLoadGameSettingsRequest = nullptr;

	if (!uFnLoadGameSettingsRequest)
	{
		uFnLoadGameSettingsRequest = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.LoadGameSettingsRequest");
	}

	UGHM_CheckPointSubSystem_execLoadGameSettingsRequest_Params LoadGameSettingsRequest_Params;
	memcpy_s(&LoadGameSettingsRequest_Params.fLoadingDelayTimer, 0x4, &fLoadingDelayTimer, 0x4);

	this->ProcessEvent(uFnLoadGameSettingsRequest, &LoadGameSettingsRequest_Params, nullptr);

	return LoadGameSettingsRequest_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadRequest
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bLoadChapterPoint              (CPF_Parm)
// unsigned long                  bResaveActorRecords            (CPF_Parm)
// float                          fLoadingDelayTimer             (CPF_OptionalParm | CPF_Parm)
// float                          fAfterLoadedDelayTimer         (CPF_OptionalParm | CPF_Parm)

bool UGHM_CheckPointSubSystem::LoadRequest(unsigned long bLoadChapterPoint, unsigned long bResaveActorRecords, float fLoadingDelayTimer, float fAfterLoadedDelayTimer)
{
	static UFunction* uFnLoadRequest = nullptr;

	if (!uFnLoadRequest)
	{
		uFnLoadRequest = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.LoadRequest");
	}

	UGHM_CheckPointSubSystem_execLoadRequest_Params LoadRequest_Params;
	LoadRequest_Params.bLoadChapterPoint = bLoadChapterPoint;
	LoadRequest_Params.bResaveActorRecords = bResaveActorRecords;
	memcpy_s(&LoadRequest_Params.fLoadingDelayTimer, 0x4, &fLoadingDelayTimer, 0x4);
	memcpy_s(&LoadRequest_Params.fAfterLoadedDelayTimer, 0x4, &fAfterLoadedDelayTimer, 0x4);

	this->ProcessEvent(uFnLoadRequest, &LoadRequest_Params, nullptr);

	return LoadRequest_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.StartLoadCheckPoint
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::eventStartLoadCheckPoint()
{
	static UFunction* uFnStartLoadCheckPoint = nullptr;

	if (!uFnStartLoadCheckPoint)
	{
		uFnStartLoadCheckPoint = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.StartLoadCheckPoint");
	}

	UGHM_CheckPointSubSystem_eventStartLoadCheckPoint_Params StartLoadCheckPoint_Params;

	this->ProcessEvent(uFnStartLoadCheckPoint, &StartLoadCheckPoint_Params, nullptr);

	return StartLoadCheckPoint_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.IsSaveComplete
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::IsSaveComplete()
{
	static UFunction* uFnIsSaveComplete = nullptr;

	if (!uFnIsSaveComplete)
	{
		uFnIsSaveComplete = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.IsSaveComplete");
	}

	UGHM_CheckPointSubSystem_execIsSaveComplete_Params IsSaveComplete_Params;

	this->ProcessEvent(uFnIsSaveComplete, &IsSaveComplete_Params, nullptr);

	return IsSaveComplete_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveGameSettingsImmediately
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        GameSettingsIndex              (CPF_Parm)

bool UGHM_CheckPointSubSystem::SaveGameSettingsImmediately(int32_t GameSettingsIndex)
{
	static UFunction* uFnSaveGameSettingsImmediately = nullptr;

	if (!uFnSaveGameSettingsImmediately)
	{
		uFnSaveGameSettingsImmediately = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SaveGameSettingsImmediately");
	}

	UGHM_CheckPointSubSystem_execSaveGameSettingsImmediately_Params SaveGameSettingsImmediately_Params;
	memcpy_s(&SaveGameSettingsImmediately_Params.GameSettingsIndex, 0x4, &GameSettingsIndex, 0x4);

	this->ProcessEvent(uFnSaveGameSettingsImmediately, &SaveGameSettingsImmediately_Params, nullptr);

	return SaveGameSettingsImmediately_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveGameSettingsRequest
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        GameSettingsIndex              (CPF_Parm)

bool UGHM_CheckPointSubSystem::SaveGameSettingsRequest(int32_t GameSettingsIndex)
{
	static UFunction* uFnSaveGameSettingsRequest = nullptr;

	if (!uFnSaveGameSettingsRequest)
	{
		uFnSaveGameSettingsRequest = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SaveGameSettingsRequest");
	}

	UGHM_CheckPointSubSystem_execSaveGameSettingsRequest_Params SaveGameSettingsRequest_Params;
	memcpy_s(&SaveGameSettingsRequest_Params.GameSettingsIndex, 0x4, &GameSettingsIndex, 0x4);

	this->ProcessEvent(uFnSaveGameSettingsRequest, &SaveGameSettingsRequest_Params, nullptr);

	return SaveGameSettingsRequest_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveRequest
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bSaveGameSettings              (CPF_Parm)
// int32_t                        SaveIndex                      (CPF_Parm)
// unsigned long                  bCurrentIsChapterPoint         (CPF_OptionalParm | CPF_Parm)
// struct FVector                 PlayerLocation                 (CPF_Const | CPF_OptionalParm | CPF_Parm)
// unsigned long                  bAsyncSaveKismet               (CPF_OptionalParm | CPF_Parm)

bool UGHM_CheckPointSubSystem::SaveRequest(unsigned long bSaveGameSettings, int32_t SaveIndex, unsigned long bCurrentIsChapterPoint, struct FVector PlayerLocation, unsigned long bAsyncSaveKismet)
{
	static UFunction* uFnSaveRequest = nullptr;

	if (!uFnSaveRequest)
	{
		uFnSaveRequest = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SaveRequest");
	}

	UGHM_CheckPointSubSystem_execSaveRequest_Params SaveRequest_Params;
	SaveRequest_Params.bSaveGameSettings = bSaveGameSettings;
	memcpy_s(&SaveRequest_Params.SaveIndex, 0x4, &SaveIndex, 0x4);
	SaveRequest_Params.bCurrentIsChapterPoint = bCurrentIsChapterPoint;
	memcpy_s(&SaveRequest_Params.PlayerLocation, 0xC, &PlayerLocation, 0xC);
	SaveRequest_Params.bAsyncSaveKismet = bAsyncSaveKismet;

	this->ProcessEvent(uFnSaveRequest, &SaveRequest_Params, nullptr);

	return SaveRequest_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.StartSaveCheckPoint
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::eventStartSaveCheckPoint()
{
	static UFunction* uFnStartSaveCheckPoint = nullptr;

	if (!uFnStartSaveCheckPoint)
	{
		uFnStartSaveCheckPoint = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.StartSaveCheckPoint");
	}

	UGHM_CheckPointSubSystem_eventStartSaveCheckPoint_Params StartSaveCheckPoint_Params;

	this->ProcessEvent(uFnStartSaveCheckPoint, &StartSaveCheckPoint_Params, nullptr);

	return StartSaveCheckPoint_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.CorruptSaveDataNoSaveNotify
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        SelectIdx                      (CPF_Parm)

void UGHM_CheckPointSubSystem::CorruptSaveDataNoSaveNotify(int32_t SelectIdx)
{
	static UFunction* uFnCorruptSaveDataNoSaveNotify = nullptr;

	if (!uFnCorruptSaveDataNoSaveNotify)
	{
		uFnCorruptSaveDataNoSaveNotify = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.CorruptSaveDataNoSaveNotify");
	}

	UGHM_CheckPointSubSystem_execCorruptSaveDataNoSaveNotify_Params CorruptSaveDataNoSaveNotify_Params;
	memcpy_s(&CorruptSaveDataNoSaveNotify_Params.SelectIdx, 0x4, &SelectIdx, 0x4);

	this->ProcessEvent(uFnCorruptSaveDataNoSaveNotify, &CorruptSaveDataNoSaveNotify_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.CorruptSaveDataNoSaveMessage
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UGHM_CheckPointSubSystem::eventCorruptSaveDataNoSaveMessage(float DeltaTime)
{
	static UFunction* uFnCorruptSaveDataNoSaveMessage = nullptr;

	if (!uFnCorruptSaveDataNoSaveMessage)
	{
		uFnCorruptSaveDataNoSaveMessage = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.CorruptSaveDataNoSaveMessage");
	}

	UGHM_CheckPointSubSystem_eventCorruptSaveDataNoSaveMessage_Params CorruptSaveDataNoSaveMessage_Params;
	memcpy_s(&CorruptSaveDataNoSaveMessage_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnCorruptSaveDataNoSaveMessage, &CorruptSaveDataNoSaveMessage_Params, nullptr);

	return CorruptSaveDataNoSaveMessage_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveErrorDeviceChangeNoSaveNotify
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        SelectIdx                      (CPF_Parm)

void UGHM_CheckPointSubSystem::SaveErrorDeviceChangeNoSaveNotify(int32_t SelectIdx)
{
	static UFunction* uFnSaveErrorDeviceChangeNoSaveNotify = nullptr;

	if (!uFnSaveErrorDeviceChangeNoSaveNotify)
	{
		uFnSaveErrorDeviceChangeNoSaveNotify = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SaveErrorDeviceChangeNoSaveNotify");
	}

	UGHM_CheckPointSubSystem_execSaveErrorDeviceChangeNoSaveNotify_Params SaveErrorDeviceChangeNoSaveNotify_Params;
	memcpy_s(&SaveErrorDeviceChangeNoSaveNotify_Params.SelectIdx, 0x4, &SelectIdx, 0x4);

	this->ProcessEvent(uFnSaveErrorDeviceChangeNoSaveNotify, &SaveErrorDeviceChangeNoSaveNotify_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveErrorDeviceChangeNoSaveMessage
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UGHM_CheckPointSubSystem::eventSaveErrorDeviceChangeNoSaveMessage(float DeltaTime)
{
	static UFunction* uFnSaveErrorDeviceChangeNoSaveMessage = nullptr;

	if (!uFnSaveErrorDeviceChangeNoSaveMessage)
	{
		uFnSaveErrorDeviceChangeNoSaveMessage = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SaveErrorDeviceChangeNoSaveMessage");
	}

	UGHM_CheckPointSubSystem_eventSaveErrorDeviceChangeNoSaveMessage_Params SaveErrorDeviceChangeNoSaveMessage_Params;
	memcpy_s(&SaveErrorDeviceChangeNoSaveMessage_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnSaveErrorDeviceChangeNoSaveMessage, &SaveErrorDeviceChangeNoSaveMessage_Params, nullptr);

	return SaveErrorDeviceChangeNoSaveMessage_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeOverwriteMessageNotify
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        SelectIdx                      (CPF_Parm)

void UGHM_CheckPointSubSystem::StorageDeviceChangeOverwriteMessageNotify(int32_t SelectIdx)
{
	static UFunction* uFnStorageDeviceChangeOverwriteMessageNotify = nullptr;

	if (!uFnStorageDeviceChangeOverwriteMessageNotify)
	{
		uFnStorageDeviceChangeOverwriteMessageNotify = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeOverwriteMessageNotify");
	}

	UGHM_CheckPointSubSystem_execStorageDeviceChangeOverwriteMessageNotify_Params StorageDeviceChangeOverwriteMessageNotify_Params;
	memcpy_s(&StorageDeviceChangeOverwriteMessageNotify_Params.SelectIdx, 0x4, &SelectIdx, 0x4);

	this->ProcessEvent(uFnStorageDeviceChangeOverwriteMessageNotify, &StorageDeviceChangeOverwriteMessageNotify_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeOverwriteMessage
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UGHM_CheckPointSubSystem::eventStorageDeviceChangeOverwriteMessage(float DeltaTime)
{
	static UFunction* uFnStorageDeviceChangeOverwriteMessage = nullptr;

	if (!uFnStorageDeviceChangeOverwriteMessage)
	{
		uFnStorageDeviceChangeOverwriteMessage = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeOverwriteMessage");
	}

	UGHM_CheckPointSubSystem_eventStorageDeviceChangeOverwriteMessage_Params StorageDeviceChangeOverwriteMessage_Params;
	memcpy_s(&StorageDeviceChangeOverwriteMessage_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnStorageDeviceChangeOverwriteMessage, &StorageDeviceChangeOverwriteMessage_Params, nullptr);

	return StorageDeviceChangeOverwriteMessage_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.InsufficientStorageDeviceNoSaveMessageNotify
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        SelectIdx                      (CPF_Parm)

void UGHM_CheckPointSubSystem::InsufficientStorageDeviceNoSaveMessageNotify(int32_t SelectIdx)
{
	static UFunction* uFnInsufficientStorageDeviceNoSaveMessageNotify = nullptr;

	if (!uFnInsufficientStorageDeviceNoSaveMessageNotify)
	{
		uFnInsufficientStorageDeviceNoSaveMessageNotify = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.InsufficientStorageDeviceNoSaveMessageNotify");
	}

	UGHM_CheckPointSubSystem_execInsufficientStorageDeviceNoSaveMessageNotify_Params InsufficientStorageDeviceNoSaveMessageNotify_Params;
	memcpy_s(&InsufficientStorageDeviceNoSaveMessageNotify_Params.SelectIdx, 0x4, &SelectIdx, 0x4);

	this->ProcessEvent(uFnInsufficientStorageDeviceNoSaveMessageNotify, &InsufficientStorageDeviceNoSaveMessageNotify_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.InsufficientStorageDeviceNoSaveMessage
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UGHM_CheckPointSubSystem::eventInsufficientStorageDeviceNoSaveMessage(float DeltaTime)
{
	static UFunction* uFnInsufficientStorageDeviceNoSaveMessage = nullptr;

	if (!uFnInsufficientStorageDeviceNoSaveMessage)
	{
		uFnInsufficientStorageDeviceNoSaveMessage = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.InsufficientStorageDeviceNoSaveMessage");
	}

	UGHM_CheckPointSubSystem_eventInsufficientStorageDeviceNoSaveMessage_Params InsufficientStorageDeviceNoSaveMessage_Params;
	memcpy_s(&InsufficientStorageDeviceNoSaveMessage_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnInsufficientStorageDeviceNoSaveMessage, &InsufficientStorageDeviceNoSaveMessage_Params, nullptr);

	return InsufficientStorageDeviceNoSaveMessage_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.InvalidStorageDeviceNoSaveMessageNotify
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        SelectIdx                      (CPF_Parm)

void UGHM_CheckPointSubSystem::InvalidStorageDeviceNoSaveMessageNotify(int32_t SelectIdx)
{
	static UFunction* uFnInvalidStorageDeviceNoSaveMessageNotify = nullptr;

	if (!uFnInvalidStorageDeviceNoSaveMessageNotify)
	{
		uFnInvalidStorageDeviceNoSaveMessageNotify = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.InvalidStorageDeviceNoSaveMessageNotify");
	}

	UGHM_CheckPointSubSystem_execInvalidStorageDeviceNoSaveMessageNotify_Params InvalidStorageDeviceNoSaveMessageNotify_Params;
	memcpy_s(&InvalidStorageDeviceNoSaveMessageNotify_Params.SelectIdx, 0x4, &SelectIdx, 0x4);

	this->ProcessEvent(uFnInvalidStorageDeviceNoSaveMessageNotify, &InvalidStorageDeviceNoSaveMessageNotify_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.InvalidStorageDeviceNoSaveMessage
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UGHM_CheckPointSubSystem::eventInvalidStorageDeviceNoSaveMessage(float DeltaTime)
{
	static UFunction* uFnInvalidStorageDeviceNoSaveMessage = nullptr;

	if (!uFnInvalidStorageDeviceNoSaveMessage)
	{
		uFnInvalidStorageDeviceNoSaveMessage = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.InvalidStorageDeviceNoSaveMessage");
	}

	UGHM_CheckPointSubSystem_eventInvalidStorageDeviceNoSaveMessage_Params InvalidStorageDeviceNoSaveMessage_Params;
	memcpy_s(&InvalidStorageDeviceNoSaveMessage_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnInvalidStorageDeviceNoSaveMessage, &InvalidStorageDeviceNoSaveMessage_Params, nullptr);

	return InvalidStorageDeviceNoSaveMessage_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeWarningMessageNotify
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        SelectIdx                      (CPF_Parm)

void UGHM_CheckPointSubSystem::eventStorageDeviceChangeWarningMessageNotify(int32_t SelectIdx)
{
	static UFunction* uFnStorageDeviceChangeWarningMessageNotify = nullptr;

	if (!uFnStorageDeviceChangeWarningMessageNotify)
	{
		uFnStorageDeviceChangeWarningMessageNotify = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeWarningMessageNotify");
	}

	UGHM_CheckPointSubSystem_eventStorageDeviceChangeWarningMessageNotify_Params StorageDeviceChangeWarningMessageNotify_Params;
	memcpy_s(&StorageDeviceChangeWarningMessageNotify_Params.SelectIdx, 0x4, &SelectIdx, 0x4);

	this->ProcessEvent(uFnStorageDeviceChangeWarningMessageNotify, &StorageDeviceChangeWarningMessageNotify_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeWarningMessage
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UGHM_CheckPointSubSystem::eventStorageDeviceChangeWarningMessage(float DeltaTime)
{
	static UFunction* uFnStorageDeviceChangeWarningMessage = nullptr;

	if (!uFnStorageDeviceChangeWarningMessage)
	{
		uFnStorageDeviceChangeWarningMessage = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.StorageDeviceChangeWarningMessage");
	}

	UGHM_CheckPointSubSystem_eventStorageDeviceChangeWarningMessage_Params StorageDeviceChangeWarningMessage_Params;
	memcpy_s(&StorageDeviceChangeWarningMessage_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnStorageDeviceChangeWarningMessage, &StorageDeviceChangeWarningMessage_Params, nullptr);

	return StorageDeviceChangeWarningMessage_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.OnStorageDeviceChange
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_CheckPointSubSystem::OnStorageDeviceChange()
{
	static UFunction* uFnOnStorageDeviceChange = nullptr;

	if (!uFnOnStorageDeviceChange)
	{
		uFnOnStorageDeviceChange = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.OnStorageDeviceChange");
	}

	UGHM_CheckPointSubSystem_execOnStorageDeviceChange_Params OnStorageDeviceChange_Params;

	this->ProcessEvent(uFnOnStorageDeviceChange, &OnStorageDeviceChange_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.ClearStorageDeviceChangeDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_CheckPointSubSystem::ClearStorageDeviceChangeDelegate()
{
	static UFunction* uFnClearStorageDeviceChangeDelegate = nullptr;

	if (!uFnClearStorageDeviceChangeDelegate)
	{
		uFnClearStorageDeviceChangeDelegate = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.ClearStorageDeviceChangeDelegate");
	}

	UGHM_CheckPointSubSystem_execClearStorageDeviceChangeDelegate_Params ClearStorageDeviceChangeDelegate_Params;

	this->ProcessEvent(uFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.RegisterStorageDeviceChangeDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_CheckPointSubSystem::RegisterStorageDeviceChangeDelegate()
{
	static UFunction* uFnRegisterStorageDeviceChangeDelegate = nullptr;

	if (!uFnRegisterStorageDeviceChangeDelegate)
	{
		uFnRegisterStorageDeviceChangeDelegate = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.RegisterStorageDeviceChangeDelegate");
	}

	UGHM_CheckPointSubSystem_execRegisterStorageDeviceChangeDelegate_Params RegisterStorageDeviceChangeDelegate_Params;

	this->ProcessEvent(uFnRegisterStorageDeviceChangeDelegate, &RegisterStorageDeviceChangeDelegate_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.OnLoadDeviceSelectionComplete
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UGHM_CheckPointSubSystem::OnLoadDeviceSelectionComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnLoadDeviceSelectionComplete = nullptr;

	if (!uFnOnLoadDeviceSelectionComplete)
	{
		uFnOnLoadDeviceSelectionComplete = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.OnLoadDeviceSelectionComplete");
	}

	UGHM_CheckPointSubSystem_execOnLoadDeviceSelectionComplete_Params OnLoadDeviceSelectionComplete_Params;
	OnLoadDeviceSelectionComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnLoadDeviceSelectionComplete, &OnLoadDeviceSelectionComplete_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadStorageDeviceSelect
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UGHM_CheckPointSubSystem::eventLoadStorageDeviceSelect(float DeltaTime)
{
	static UFunction* uFnLoadStorageDeviceSelect = nullptr;

	if (!uFnLoadStorageDeviceSelect)
	{
		uFnLoadStorageDeviceSelect = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.LoadStorageDeviceSelect");
	}

	UGHM_CheckPointSubSystem_eventLoadStorageDeviceSelect_Params LoadStorageDeviceSelect_Params;
	memcpy_s(&LoadStorageDeviceSelect_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnLoadStorageDeviceSelect, &LoadStorageDeviceSelect_Params, nullptr);

	return LoadStorageDeviceSelect_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.OnSaveDeviceSelectionComplete
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UGHM_CheckPointSubSystem::OnSaveDeviceSelectionComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnSaveDeviceSelectionComplete = nullptr;

	if (!uFnOnSaveDeviceSelectionComplete)
	{
		uFnOnSaveDeviceSelectionComplete = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.OnSaveDeviceSelectionComplete");
	}

	UGHM_CheckPointSubSystem_execOnSaveDeviceSelectionComplete_Params OnSaveDeviceSelectionComplete_Params;
	OnSaveDeviceSelectionComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnSaveDeviceSelectionComplete, &OnSaveDeviceSelectionComplete_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveStorageDeviceSelect
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UGHM_CheckPointSubSystem::eventSaveStorageDeviceSelect(float DeltaTime)
{
	static UFunction* uFnSaveStorageDeviceSelect = nullptr;

	if (!uFnSaveStorageDeviceSelect)
	{
		uFnSaveStorageDeviceSelect = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SaveStorageDeviceSelect");
	}

	UGHM_CheckPointSubSystem_eventSaveStorageDeviceSelect_Params SaveStorageDeviceSelect_Params;
	memcpy_s(&SaveStorageDeviceSelect_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnSaveStorageDeviceSelect, &SaveStorageDeviceSelect_Params, nullptr);

	return SaveStorageDeviceSelect_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.WaitExternalUI
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UGHM_CheckPointSubSystem::eventWaitExternalUI(float DeltaTime)
{
	static UFunction* uFnWaitExternalUI = nullptr;

	if (!uFnWaitExternalUI)
	{
		uFnWaitExternalUI = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.WaitExternalUI");
	}

	UGHM_CheckPointSubSystem_eventWaitExternalUI_Params WaitExternalUI_Params;
	memcpy_s(&WaitExternalUI_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnWaitExternalUI, &WaitExternalUI_Params, nullptr);

	return WaitExternalUI_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.GetButtonAliasesOK
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class FString> UGHM_CheckPointSubSystem::GetButtonAliasesOK()
{
	static UFunction* uFnGetButtonAliasesOK = nullptr;

	if (!uFnGetButtonAliasesOK)
	{
		uFnGetButtonAliasesOK = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.GetButtonAliasesOK");
	}

	UGHM_CheckPointSubSystem_execGetButtonAliasesOK_Params GetButtonAliasesOK_Params;

	this->ProcessEvent(uFnGetButtonAliasesOK, &GetButtonAliasesOK_Params, nullptr);

	return GetButtonAliasesOK_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.GetButtonAliasesYN
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class FString> UGHM_CheckPointSubSystem::GetButtonAliasesYN()
{
	static UFunction* uFnGetButtonAliasesYN = nullptr;

	if (!uFnGetButtonAliasesYN)
	{
		uFnGetButtonAliasesYN = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.GetButtonAliasesYN");
	}

	UGHM_CheckPointSubSystem_execGetButtonAliasesYN_Params GetButtonAliasesYN_Params;

	this->ProcessEvent(uFnGetButtonAliasesYN, &GetButtonAliasesYN_Params, nullptr);

	return GetButtonAliasesYN_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.IsExistSaveData
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::IsExistSaveData()
{
	static UFunction* uFnIsExistSaveData = nullptr;

	if (!uFnIsExistSaveData)
	{
		uFnIsExistSaveData = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.IsExistSaveData");
	}

	UGHM_CheckPointSubSystem_execIsExistSaveData_Params IsExistSaveData_Params;

	uFnIsExistSaveData->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsExistSaveData, &IsExistSaveData_Params, nullptr);

	uFnIsExistSaveData->FunctionFlags |= 0x400;

	return IsExistSaveData_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetPlayersOnly
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Enable                         (CPF_Parm)

void UGHM_CheckPointSubSystem::eventSetPlayersOnly(unsigned long Enable)
{
	static UFunction* uFnSetPlayersOnly = nullptr;

	if (!uFnSetPlayersOnly)
	{
		uFnSetPlayersOnly = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SetPlayersOnly");
	}

	UGHM_CheckPointSubSystem_eventSetPlayersOnly_Params SetPlayersOnly_Params;
	SetPlayersOnly_Params.Enable = Enable;

	this->ProcessEvent(uFnSetPlayersOnly, &SetPlayersOnly_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.AreStorageWritesAllowed
// [0x00024802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bIgnoreDeviceStatus            (CPF_OptionalParm | CPF_Parm)
// int32_t                        RequiredSize                   (CPF_OptionalParm | CPF_Parm)

bool UGHM_CheckPointSubSystem::eventAreStorageWritesAllowed(unsigned long bIgnoreDeviceStatus, int32_t RequiredSize)
{
	static UFunction* uFnAreStorageWritesAllowed = nullptr;

	if (!uFnAreStorageWritesAllowed)
	{
		uFnAreStorageWritesAllowed = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.AreStorageWritesAllowed");
	}

	UGHM_CheckPointSubSystem_eventAreStorageWritesAllowed_Params AreStorageWritesAllowed_Params;
	AreStorageWritesAllowed_Params.bIgnoreDeviceStatus = bIgnoreDeviceStatus;
	memcpy_s(&AreStorageWritesAllowed_Params.RequiredSize, 0x4, &RequiredSize, 0x4);

	this->ProcessEvent(uFnAreStorageWritesAllowed, &AreStorageWritesAllowed_Params, nullptr);

	return AreStorageWritesAllowed_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.IsCurrentDeviceHasFreeSpaceForDeviceSelect
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::eventIsCurrentDeviceHasFreeSpaceForDeviceSelect()
{
	static UFunction* uFnIsCurrentDeviceHasFreeSpaceForDeviceSelect = nullptr;

	if (!uFnIsCurrentDeviceHasFreeSpaceForDeviceSelect)
	{
		uFnIsCurrentDeviceHasFreeSpaceForDeviceSelect = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.IsCurrentDeviceHasFreeSpaceForDeviceSelect");
	}

	UGHM_CheckPointSubSystem_eventIsCurrentDeviceHasFreeSpaceForDeviceSelect_Params IsCurrentDeviceHasFreeSpaceForDeviceSelect_Params;

	this->ProcessEvent(uFnIsCurrentDeviceHasFreeSpaceForDeviceSelect, &IsCurrentDeviceHasFreeSpaceForDeviceSelect_Params, nullptr);

	return IsCurrentDeviceHasFreeSpaceForDeviceSelect_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.IsCurrentDeviceValid
// [0x00024802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        SizeNeeded                     (CPF_OptionalParm | CPF_Parm)

bool UGHM_CheckPointSubSystem::eventIsCurrentDeviceValid(int32_t SizeNeeded)
{
	static UFunction* uFnIsCurrentDeviceValid = nullptr;

	if (!uFnIsCurrentDeviceValid)
	{
		uFnIsCurrentDeviceValid = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.IsCurrentDeviceValid");
	}

	UGHM_CheckPointSubSystem_eventIsCurrentDeviceValid_Params IsCurrentDeviceValid_Params;
	memcpy_s(&IsCurrentDeviceValid_Params.SizeNeeded, 0x4, &SizeNeeded, 0x4);

	this->ProcessEvent(uFnIsCurrentDeviceValid, &IsCurrentDeviceValid_Params, nullptr);

	return IsCurrentDeviceValid_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.RetryToWriteToStorage
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::RetryToWriteToStorage()
{
	static UFunction* uFnRetryToWriteToStorage = nullptr;

	if (!uFnRetryToWriteToStorage)
	{
		uFnRetryToWriteToStorage = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.RetryToWriteToStorage");
	}

	UGHM_CheckPointSubSystem_execRetryToWriteToStorage_Params RetryToWriteToStorage_Params;

	uFnRetryToWriteToStorage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRetryToWriteToStorage, &RetryToWriteToStorage_Params, nullptr);

	uFnRetryToWriteToStorage->FunctionFlags |= 0x400;

	return RetryToWriteToStorage_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadGameSettings
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::LoadGameSettings()
{
	static UFunction* uFnLoadGameSettings = nullptr;

	if (!uFnLoadGameSettings)
	{
		uFnLoadGameSettings = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.LoadGameSettings");
	}

	UGHM_CheckPointSubSystem_execLoadGameSettings_Params LoadGameSettings_Params;

	uFnLoadGameSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLoadGameSettings, &LoadGameSettings_Params, nullptr);

	uFnLoadGameSettings->FunctionFlags |= 0x400;

	return LoadGameSettings_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.LoadCheckpoint
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// float                          fAfterLoadedDelayTimer         (CPF_Parm)
// unsigned long                  bResaveActorRecords            (CPF_Parm)

void UGHM_CheckPointSubSystem::LoadCheckpoint(float fAfterLoadedDelayTimer, unsigned long bResaveActorRecords)
{
	static UFunction* uFnLoadCheckpoint = nullptr;

	if (!uFnLoadCheckpoint)
	{
		uFnLoadCheckpoint = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.LoadCheckpoint");
	}

	UGHM_CheckPointSubSystem_execLoadCheckpoint_Params LoadCheckpoint_Params;
	memcpy_s(&LoadCheckpoint_Params.fAfterLoadedDelayTimer, 0x4, &fAfterLoadedDelayTimer, 0x4);
	LoadCheckpoint_Params.bResaveActorRecords = bResaveActorRecords;

	uFnLoadCheckpoint->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLoadCheckpoint, &LoadCheckpoint_Params, nullptr);

	uFnLoadCheckpoint->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_CheckPointSubSystem.CheckpointWriteToStorage
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:

void UGHM_CheckPointSubSystem::CheckpointWriteToStorage()
{
	static UFunction* uFnCheckpointWriteToStorage = nullptr;

	if (!uFnCheckpointWriteToStorage)
	{
		uFnCheckpointWriteToStorage = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.CheckpointWriteToStorage");
	}

	UGHM_CheckPointSubSystem_execCheckpointWriteToStorage_Params CheckpointWriteToStorage_Params;

	uFnCheckpointWriteToStorage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCheckpointWriteToStorage, &CheckpointWriteToStorage_Params, nullptr);

	uFnCheckpointWriteToStorage->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveGameSettings
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:

void UGHM_CheckPointSubSystem::SaveGameSettings()
{
	static UFunction* uFnSaveGameSettings = nullptr;

	if (!uFnSaveGameSettings)
	{
		uFnSaveGameSettings = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SaveGameSettings");
	}

	UGHM_CheckPointSubSystem_execSaveGameSettings_Params SaveGameSettings_Params;

	uFnSaveGameSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSaveGameSettings, &SaveGameSettings_Params, nullptr);

	uFnSaveGameSettings->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_CheckPointSubSystem.SaveCheckpoint
// [0x00480400] (FUNC_Native | FUNC_Protected | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAsyncSaveKismet               (CPF_Parm)
// struct FVector                 CheckpointLocation             (CPF_Const | CPF_Parm | CPF_OutParm)

void UGHM_CheckPointSubSystem::SaveCheckpoint(unsigned long bAsyncSaveKismet, struct FVector& CheckpointLocation)
{
	static UFunction* uFnSaveCheckpoint = nullptr;

	if (!uFnSaveCheckpoint)
	{
		uFnSaveCheckpoint = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SaveCheckpoint");
	}

	UGHM_CheckPointSubSystem_execSaveCheckpoint_Params SaveCheckpoint_Params;
	SaveCheckpoint_Params.bAsyncSaveKismet = bAsyncSaveKismet;
	memcpy_s(&SaveCheckpoint_Params.CheckpointLocation, 0xC, &CheckpointLocation, 0xC);

	uFnSaveCheckpoint->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSaveCheckpoint, &SaveCheckpoint_Params, nullptr);

	uFnSaveCheckpoint->FunctionFlags |= 0x400;

	memcpy_s(&CheckpointLocation, 0xC, &SaveCheckpoint_Params.CheckpointLocation, 0xC);
};

// Function GHMEngine.GHM_CheckPointSubSystem.ResetCheckpointState
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_CheckPointSubSystem::ResetCheckpointState()
{
	static UFunction* uFnResetCheckpointState = nullptr;

	if (!uFnResetCheckpointState)
	{
		uFnResetCheckpointState = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.ResetCheckpointState");
	}

	UGHM_CheckPointSubSystem_execResetCheckpointState_Params ResetCheckpointState_Params;

	this->ProcessEvent(uFnResetCheckpointState, &ResetCheckpointState_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetCheckpointState
// [0x00024802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        eNewState                      (CPF_Parm)
// float                          fExternalUIDelayTimer          (CPF_OptionalParm | CPF_Parm)

void UGHM_CheckPointSubSystem::eventSetCheckpointState(uint8_t eNewState, float fExternalUIDelayTimer)
{
	static UFunction* uFnSetCheckpointState = nullptr;

	if (!uFnSetCheckpointState)
	{
		uFnSetCheckpointState = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SetCheckpointState");
	}

	UGHM_CheckPointSubSystem_eventSetCheckpointState_Params SetCheckpointState_Params;
	memcpy_s(&SetCheckpointState_Params.eNewState, 0x1, &eNewState, 0x1);
	memcpy_s(&SetCheckpointState_Params.fExternalUIDelayTimer, 0x4, &fExternalUIDelayTimer, 0x4);

	this->ProcessEvent(uFnSetCheckpointState, &SetCheckpointState_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetSleep
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Enable                         (CPF_Parm)

void UGHM_CheckPointSubSystem::SetSleep(unsigned long Enable)
{
	static UFunction* uFnSetSleep = nullptr;

	if (!uFnSetSleep)
	{
		uFnSetSleep = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SetSleep");
	}

	UGHM_CheckPointSubSystem_execSetSleep_Params SetSleep_Params;
	SetSleep_Params.Enable = Enable;

	this->ProcessEvent(uFnSetSleep, &SetSleep_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetNoSave
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Enable                         (CPF_Parm)

void UGHM_CheckPointSubSystem::eventSetNoSave(unsigned long Enable)
{
	static UFunction* uFnSetNoSave = nullptr;

	if (!uFnSetNoSave)
	{
		uFnSetNoSave = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SetNoSave");
	}

	UGHM_CheckPointSubSystem_eventSetNoSave_Params SetNoSave_Params;
	SetNoSave_Params.Enable = Enable;

	this->ProcessEvent(uFnSetNoSave, &SetNoSave_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetShouldWriteToStorage
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Enable                         (CPF_Parm)

void UGHM_CheckPointSubSystem::SetShouldWriteToStorage(unsigned long Enable)
{
	static UFunction* uFnSetShouldWriteToStorage = nullptr;

	if (!uFnSetShouldWriteToStorage)
	{
		uFnSetShouldWriteToStorage = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SetShouldWriteToStorage");
	}

	UGHM_CheckPointSubSystem_execSetShouldWriteToStorage_Params SetShouldWriteToStorage_Params;
	SetShouldWriteToStorage_Params.Enable = Enable;

	this->ProcessEvent(uFnSetShouldWriteToStorage, &SetShouldWriteToStorage_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.FindCheckpointData
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FCheckpointEnumerationResult EnumResult                     (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
// int32_t                        IsCorrupted                    (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

bool UGHM_CheckPointSubSystem::FindCheckpointData(struct FCheckpointEnumerationResult& EnumResult, int32_t& IsCorrupted)
{
	static UFunction* uFnFindCheckpointData = nullptr;

	if (!uFnFindCheckpointData)
	{
		uFnFindCheckpointData = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.FindCheckpointData");
	}

	UGHM_CheckPointSubSystem_execFindCheckpointData_Params FindCheckpointData_Params;
	memcpy_s(&FindCheckpointData_Params.EnumResult, 0x1C, &EnumResult, 0x1C);
	memcpy_s(&FindCheckpointData_Params.IsCorrupted, 0x4, &IsCorrupted, 0x4);

	uFnFindCheckpointData->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFindCheckpointData, &FindCheckpointData_Params, nullptr);

	uFnFindCheckpointData->FunctionFlags |= 0x400;

	memcpy_s(&EnumResult, 0x1C, &FindCheckpointData_Params.EnumResult, 0x1C);
	memcpy_s(&IsCorrupted, 0x4, &FindCheckpointData_Params.IsCorrupted, 0x4);

	return FindCheckpointData_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.HasStorageDeviceBeenRemoved
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_CheckPointSubSystem::HasStorageDeviceBeenRemoved()
{
	static UFunction* uFnHasStorageDeviceBeenRemoved = nullptr;

	if (!uFnHasStorageDeviceBeenRemoved)
	{
		uFnHasStorageDeviceBeenRemoved = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.HasStorageDeviceBeenRemoved");
	}

	UGHM_CheckPointSubSystem_execHasStorageDeviceBeenRemoved_Params HasStorageDeviceBeenRemoved_Params;

	uFnHasStorageDeviceBeenRemoved->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHasStorageDeviceBeenRemoved, &HasStorageDeviceBeenRemoved_Params, nullptr);

	uFnHasStorageDeviceBeenRemoved->FunctionFlags |= 0x400;

	return HasStorageDeviceBeenRemoved_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.GetCurrentDeviceID
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_CheckPointSubSystem::GetCurrentDeviceID()
{
	static UFunction* uFnGetCurrentDeviceID = nullptr;

	if (!uFnGetCurrentDeviceID)
	{
		uFnGetCurrentDeviceID = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.GetCurrentDeviceID");
	}

	UGHM_CheckPointSubSystem_execGetCurrentDeviceID_Params GetCurrentDeviceID_Params;

	uFnGetCurrentDeviceID->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetCurrentDeviceID, &GetCurrentDeviceID_Params, nullptr);

	uFnGetCurrentDeviceID->FunctionFlags |= 0x400;

	return GetCurrentDeviceID_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetCurrentDeviceID
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        NewDeviceID                    (CPF_Parm)
// unsigned long                  bProfileSignedOut              (CPF_OptionalParm | CPF_Parm)

void UGHM_CheckPointSubSystem::SetCurrentDeviceID(int32_t NewDeviceID, unsigned long bProfileSignedOut)
{
	static UFunction* uFnSetCurrentDeviceID = nullptr;

	if (!uFnSetCurrentDeviceID)
	{
		uFnSetCurrentDeviceID = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SetCurrentDeviceID");
	}

	UGHM_CheckPointSubSystem_execSetCurrentDeviceID_Params SetCurrentDeviceID_Params;
	memcpy_s(&SetCurrentDeviceID_Params.NewDeviceID, 0x4, &NewDeviceID, 0x4);
	SetCurrentDeviceID_Params.bProfileSignedOut = bProfileSignedOut;

	uFnSetCurrentDeviceID->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetCurrentDeviceID, &SetCurrentDeviceID_Params, nullptr);

	uFnSetCurrentDeviceID->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_CheckPointSubSystem.SetCurrentUserID
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        NewUserID                      (CPF_Parm)

void UGHM_CheckPointSubSystem::SetCurrentUserID(int32_t NewUserID)
{
	static UFunction* uFnSetCurrentUserID = nullptr;

	if (!uFnSetCurrentUserID)
	{
		uFnSetCurrentUserID = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.SetCurrentUserID");
	}

	UGHM_CheckPointSubSystem_execSetCurrentUserID_Params SetCurrentUserID_Params;
	memcpy_s(&SetCurrentUserID_Params.NewUserID, 0x4, &NewUserID, 0x4);

	this->ProcessEvent(uFnSetCurrentUserID, &SetCurrentUserID_Params, nullptr);
};

// Function GHMEngine.GHM_CheckPointSubSystem.Tick
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGHM_CheckPointSubSystem::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GHMEngine.GHM_CheckPointSubSystem.Tick");
	}

	UGHM_CheckPointSubSystem_execTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);

	uFnTick->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.Clear
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItem::Clear()
{
	static UFunction* uFnClear = nullptr;

	if (!uFnClear)
	{
		uFnClear = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.Clear");
	}

	UGHM_DebugMenuItem_execClear_Params Clear_Params;

	this->ProcessEvent(uFnClear, &Clear_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.LeftStick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItem::LeftStick(float moveX, float moveY)
{
	static UFunction* uFnLeftStick = nullptr;

	if (!uFnLeftStick)
	{
		uFnLeftStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.LeftStick");
	}

	UGHM_DebugMenuItem_execLeftStick_Params LeftStick_Params;
	memcpy_s(&LeftStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&LeftStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnLeftStick, &LeftStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.RightStick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItem::RightStick(float moveX, float moveY)
{
	static UFunction* uFnRightStick = nullptr;

	if (!uFnRightStick)
	{
		uFnRightStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.RightStick");
	}

	UGHM_DebugMenuItem_execRightStick_Params RightStick_Params;
	memcpy_s(&RightStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&RightStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnRightStick, &RightStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.KeyLeftStickButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItem::KeyLeftStickButton(uint8_t btn)
{
	static UFunction* uFnKeyLeftStickButton = nullptr;

	if (!uFnKeyLeftStickButton)
	{
		uFnKeyLeftStickButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.KeyLeftStickButton");
	}

	UGHM_DebugMenuItem_execKeyLeftStickButton_Params KeyLeftStickButton_Params;
	memcpy_s(&KeyLeftStickButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyLeftStickButton, &KeyLeftStickButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.KeyRightStickButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItem::KeyRightStickButton(uint8_t btn)
{
	static UFunction* uFnKeyRightStickButton = nullptr;

	if (!uFnKeyRightStickButton)
	{
		uFnKeyRightStickButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.KeyRightStickButton");
	}

	UGHM_DebugMenuItem_execKeyRightStickButton_Params KeyRightStickButton_Params;
	memcpy_s(&KeyRightStickButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyRightStickButton, &KeyRightStickButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.KeyYButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItem::KeyYButton(uint8_t btn)
{
	static UFunction* uFnKeyYButton = nullptr;

	if (!uFnKeyYButton)
	{
		uFnKeyYButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.KeyYButton");
	}

	UGHM_DebugMenuItem_execKeyYButton_Params KeyYButton_Params;
	memcpy_s(&KeyYButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyYButton, &KeyYButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.KeyXButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItem::KeyXButton(uint8_t btn)
{
	static UFunction* uFnKeyXButton = nullptr;

	if (!uFnKeyXButton)
	{
		uFnKeyXButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.KeyXButton");
	}

	UGHM_DebugMenuItem_execKeyXButton_Params KeyXButton_Params;
	memcpy_s(&KeyXButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyXButton, &KeyXButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.KeyBButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItem::KeyBButton(uint8_t btn)
{
	static UFunction* uFnKeyBButton = nullptr;

	if (!uFnKeyBButton)
	{
		uFnKeyBButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.KeyBButton");
	}

	UGHM_DebugMenuItem_execKeyBButton_Params KeyBButton_Params;
	memcpy_s(&KeyBButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyBButton, &KeyBButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.KeyRight
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItem::KeyRight()
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.KeyRight");
	}

	UGHM_DebugMenuItem_execKeyRight_Params KeyRight_Params;

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.KeyLeft
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItem::KeyLeft()
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.KeyLeft");
	}

	UGHM_DebugMenuItem_execKeyLeft_Params KeyLeft_Params;

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.KeyDown
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItem::KeyDown()
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.KeyDown");
	}

	UGHM_DebugMenuItem_execKeyDown_Params KeyDown_Params;

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.KeyUp
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItem::KeyUp()
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.KeyUp");
	}

	UGHM_DebugMenuItem_execKeyUp_Params KeyUp_Params;

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.IsInRectToPoint
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          px                             (CPF_Parm)
// float                          Py                             (CPF_Parm)

bool UGHM_DebugMenuItem::IsInRectToPoint(float px, float Py)
{
	static UFunction* uFnIsInRectToPoint = nullptr;

	if (!uFnIsInRectToPoint)
	{
		uFnIsInRectToPoint = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.IsInRectToPoint");
	}

	UGHM_DebugMenuItem_execIsInRectToPoint_Params IsInRectToPoint_Params;
	memcpy_s(&IsInRectToPoint_Params.px, 0x4, &px, 0x4);
	memcpy_s(&IsInRectToPoint_Params.Py, 0x4, &Py, 0x4);

	this->ProcessEvent(uFnIsInRectToPoint, &IsInRectToPoint_Params, nullptr);

	return IsInRectToPoint_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.DrawMenuItemChain
// [0x00C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// class UGHM_DebugMenuItem*      selectitem                     (CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItem::DrawMenuItemChain(class UCanvas* Canvas, class UGHM_DebugMenuItem*& selectitem)
{
	static UFunction* uFnDrawMenuItemChain = nullptr;

	if (!uFnDrawMenuItemChain)
	{
		uFnDrawMenuItemChain = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.DrawMenuItemChain");
	}

	UGHM_DebugMenuItem_execDrawMenuItemChain_Params DrawMenuItemChain_Params;
	memcpy_s(&DrawMenuItemChain_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&DrawMenuItemChain_Params.selectitem, 0x8, &selectitem, 0x8);

	this->ProcessEvent(uFnDrawMenuItemChain, &DrawMenuItemChain_Params, nullptr);

	memcpy_s(&selectitem, 0x8, &DrawMenuItemChain_Params.selectitem, 0x8);
};

// Function GHMEngine.GHM_DebugMenuItem.CalcPosNextItemAndDrawMenuItemChainFrame
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItem::CalcPosNextItemAndDrawMenuItemChainFrame(class UCanvas* Canvas)
{
	static UFunction* uFnCalcPosNextItemAndDrawMenuItemChainFrame = nullptr;

	if (!uFnCalcPosNextItemAndDrawMenuItemChainFrame)
	{
		uFnCalcPosNextItemAndDrawMenuItemChainFrame = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.CalcPosNextItemAndDrawMenuItemChainFrame");
	}

	UGHM_DebugMenuItem_execCalcPosNextItemAndDrawMenuItemChainFrame_Params CalcPosNextItemAndDrawMenuItemChainFrame_Params;
	memcpy_s(&CalcPosNextItemAndDrawMenuItemChainFrame_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnCalcPosNextItemAndDrawMenuItemChainFrame, &CalcPosNextItemAndDrawMenuItemChainFrame_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.DrawDescription
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 pos                            (CPF_Parm)

void UGHM_DebugMenuItem::DrawDescription(class UCanvas* Canvas, struct FVector pos)
{
	static UFunction* uFnDrawDescription = nullptr;

	if (!uFnDrawDescription)
	{
		uFnDrawDescription = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.DrawDescription");
	}

	UGHM_DebugMenuItem_execDrawDescription_Params DrawDescription_Params;
	memcpy_s(&DrawDescription_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&DrawDescription_Params.pos, 0xC, &pos, 0xC);

	this->ProcessEvent(uFnDrawDescription, &DrawDescription_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.SetDescription
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Str                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_DebugMenuItem::SetDescription(class FString Str)
{
	static UFunction* uFnSetDescription = nullptr;

	if (!uFnSetDescription)
	{
		uFnSetDescription = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetDescription");
	}

	UGHM_DebugMenuItem_execSetDescription_Params SetDescription_Params;
	memcpy_s(&SetDescription_Params.Str, 0x10, &Str, 0x10);

	this->ProcessEvent(uFnSetDescription, &SetDescription_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.GetDescription
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGHM_DebugMenuItem::GetDescription()
{
	static UFunction* uFnGetDescription = nullptr;

	if (!uFnGetDescription)
	{
		uFnGetDescription = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetDescription");
	}

	UGHM_DebugMenuItem_execGetDescription_Params GetDescription_Params;

	this->ProcessEvent(uFnGetDescription, &GetDescription_Params, nullptr);

	return GetDescription_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.DrawCursor
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UCanvas*                 Canvas                         (CPF_Parm)

bool UGHM_DebugMenuItem::DrawCursor(class UCanvas* Canvas)
{
	static UFunction* uFnDrawCursor = nullptr;

	if (!uFnDrawCursor)
	{
		uFnDrawCursor = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.DrawCursor");
	}

	UGHM_DebugMenuItem_execDrawCursor_Params DrawCursor_Params;
	memcpy_s(&DrawCursor_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawCursor, &DrawCursor_Params, nullptr);

	return DrawCursor_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItem::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.DrawMenuItem");
	}

	UGHM_DebugMenuItem_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItem.GetItemTextWidth
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_DebugMenuItem::GetItemTextWidth()
{
	static UFunction* uFnGetItemTextWidth = nullptr;

	if (!uFnGetItemTextWidth)
	{
		uFnGetItemTextWidth = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetItemTextWidth");
	}

	UGHM_DebugMenuItem_execGetItemTextWidth_Params GetItemTextWidth_Params;

	uFnGetItemTextWidth->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetItemTextWidth, &GetItemTextWidth_Params, nullptr);

	uFnGetItemTextWidth->FunctionFlags |= 0x400;

	return GetItemTextWidth_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.AddChild
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenuItem*      Item                           (CPF_Parm)

void UGHM_DebugMenuItem::AddChild(class UGHM_DebugMenuItem* Item)
{
	static UFunction* uFnAddChild = nullptr;

	if (!uFnAddChild)
	{
		uFnAddChild = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.AddChild");
	}

	UGHM_DebugMenuItem_execAddChild_Params AddChild_Params;
	memcpy_s(&AddChild_Params.Item, 0x8, &Item, 0x8);

	uFnAddChild->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddChild, &AddChild_Params, nullptr);

	uFnAddChild->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.AddNext
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenuItem*      Item                           (CPF_Parm)

void UGHM_DebugMenuItem::AddNext(class UGHM_DebugMenuItem* Item)
{
	static UFunction* uFnAddNext = nullptr;

	if (!uFnAddNext)
	{
		uFnAddNext = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.AddNext");
	}

	UGHM_DebugMenuItem_execAddNext_Params AddNext_Params;
	memcpy_s(&AddNext_Params.Item, 0x8, &Item, 0x8);

	uFnAddNext->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddNext, &AddNext_Params, nullptr);

	uFnAddNext->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.Cancel
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItem::Cancel()
{
	static UFunction* uFnCancel = nullptr;

	if (!uFnCancel)
	{
		uFnCancel = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.Cancel");
	}

	UGHM_DebugMenuItem_execCancel_Params Cancel_Params;

	uFnCancel->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCancel, &Cancel_Params, nullptr);

	uFnCancel->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.Select
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItem::Select()
{
	static UFunction* uFnSelect = nullptr;

	if (!uFnSelect)
	{
		uFnSelect = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.Select");
	}

	UGHM_DebugMenuItem_execSelect_Params Select_Params;

	uFnSelect->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSelect, &Select_Params, nullptr);

	uFnSelect->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.SetCursor
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  flag                           (CPF_Parm)

void UGHM_DebugMenuItem::SetCursor(unsigned long flag)
{
	static UFunction* uFnSetCursor = nullptr;

	if (!uFnSetCursor)
	{
		uFnSetCursor = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetCursor");
	}

	UGHM_DebugMenuItem_execSetCursor_Params SetCursor_Params;
	SetCursor_Params.flag = flag;

	uFnSetCursor->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetCursor, &SetCursor_Params, nullptr);

	uFnSetCursor->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.SetExpand
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  flag                           (CPF_Parm)

void UGHM_DebugMenuItem::SetExpand(unsigned long flag)
{
	static UFunction* uFnSetExpand = nullptr;

	if (!uFnSetExpand)
	{
		uFnSetExpand = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetExpand");
	}

	UGHM_DebugMenuItem_execSetExpand_Params SetExpand_Params;
	SetExpand_Params.flag = flag;

	uFnSetExpand->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetExpand, &SetExpand_Params, nullptr);

	uFnSetExpand->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.SetHeight
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Height                         (CPF_Parm)

void UGHM_DebugMenuItem::SetHeight(int32_t Height)
{
	static UFunction* uFnSetHeight = nullptr;

	if (!uFnSetHeight)
	{
		uFnSetHeight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetHeight");
	}

	UGHM_DebugMenuItem_execSetHeight_Params SetHeight_Params;
	memcpy_s(&SetHeight_Params.Height, 0x4, &Height, 0x4);

	uFnSetHeight->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetHeight, &SetHeight_Params, nullptr);

	uFnSetHeight->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.SetWidth
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Width                          (CPF_Parm)

void UGHM_DebugMenuItem::SetWidth(int32_t Width)
{
	static UFunction* uFnSetWidth = nullptr;

	if (!uFnSetWidth)
	{
		uFnSetWidth = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetWidth");
	}

	UGHM_DebugMenuItem_execSetWidth_Params SetWidth_Params;
	memcpy_s(&SetWidth_Params.Width, 0x4, &Width, 0x4);

	uFnSetWidth->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetWidth, &SetWidth_Params, nullptr);

	uFnSetWidth->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.SetPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 Position                       (CPF_Parm)

void UGHM_DebugMenuItem::SetPosition(struct FVector Position)
{
	static UFunction* uFnSetPosition = nullptr;

	if (!uFnSetPosition)
	{
		uFnSetPosition = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetPosition");
	}

	UGHM_DebugMenuItem_execSetPosition_Params SetPosition_Params;
	memcpy_s(&SetPosition_Params.Position, 0xC, &Position, 0xC);

	uFnSetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPosition, &SetPosition_Params, nullptr);

	uFnSetPosition->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.SetName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Item                           (CPF_Parm | CPF_NeedCtorLink)

void UGHM_DebugMenuItem::SetName(class FString Item)
{
	static UFunction* uFnSetName = nullptr;

	if (!uFnSetName)
	{
		uFnSetName = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetName");
	}

	UGHM_DebugMenuItem_execSetName_Params SetName_Params;
	memcpy_s(&SetName_Params.Item, 0x10, &Item, 0x10);

	uFnSetName->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetName, &SetName_Params, nullptr);

	uFnSetName->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.SetChild
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenuItem*      Item                           (CPF_Parm)

void UGHM_DebugMenuItem::SetChild(class UGHM_DebugMenuItem* Item)
{
	static UFunction* uFnSetChild = nullptr;

	if (!uFnSetChild)
	{
		uFnSetChild = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetChild");
	}

	UGHM_DebugMenuItem_execSetChild_Params SetChild_Params;
	memcpy_s(&SetChild_Params.Item, 0x8, &Item, 0x8);

	uFnSetChild->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetChild, &SetChild_Params, nullptr);

	uFnSetChild->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.SetParent
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenuItem*      Item                           (CPF_Parm)

void UGHM_DebugMenuItem::SetParent(class UGHM_DebugMenuItem* Item)
{
	static UFunction* uFnSetParent = nullptr;

	if (!uFnSetParent)
	{
		uFnSetParent = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetParent");
	}

	UGHM_DebugMenuItem_execSetParent_Params SetParent_Params;
	memcpy_s(&SetParent_Params.Item, 0x8, &Item, 0x8);

	uFnSetParent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetParent, &SetParent_Params, nullptr);

	uFnSetParent->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.SetNext
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenuItem*      Item                           (CPF_Parm)

void UGHM_DebugMenuItem::SetNext(class UGHM_DebugMenuItem* Item)
{
	static UFunction* uFnSetNext = nullptr;

	if (!uFnSetNext)
	{
		uFnSetNext = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetNext");
	}

	UGHM_DebugMenuItem_execSetNext_Params SetNext_Params;
	memcpy_s(&SetNext_Params.Item, 0x8, &Item, 0x8);

	uFnSetNext->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetNext, &SetNext_Params, nullptr);

	uFnSetNext->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.SetPrev
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenuItem*      Item                           (CPF_Parm)

void UGHM_DebugMenuItem::SetPrev(class UGHM_DebugMenuItem* Item)
{
	static UFunction* uFnSetPrev = nullptr;

	if (!uFnSetPrev)
	{
		uFnSetPrev = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.SetPrev");
	}

	UGHM_DebugMenuItem_execSetPrev_Params SetPrev_Params;
	memcpy_s(&SetPrev_Params.Item, 0x8, &Item, 0x8);

	uFnSetPrev->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPrev, &SetPrev_Params, nullptr);

	uFnSetPrev->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItem.GetCursor
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_DebugMenuItem::GetCursor()
{
	static UFunction* uFnGetCursor = nullptr;

	if (!uFnGetCursor)
	{
		uFnGetCursor = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetCursor");
	}

	UGHM_DebugMenuItem_execGetCursor_Params GetCursor_Params;

	uFnGetCursor->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetCursor, &GetCursor_Params, nullptr);

	uFnGetCursor->FunctionFlags |= 0x400;

	return GetCursor_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.GetExpand
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_DebugMenuItem::GetExpand()
{
	static UFunction* uFnGetExpand = nullptr;

	if (!uFnGetExpand)
	{
		uFnGetExpand = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetExpand");
	}

	UGHM_DebugMenuItem_execGetExpand_Params GetExpand_Params;

	uFnGetExpand->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetExpand, &GetExpand_Params, nullptr);

	uFnGetExpand->FunctionFlags |= 0x400;

	return GetExpand_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.GetHeight
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_DebugMenuItem::GetHeight()
{
	static UFunction* uFnGetHeight = nullptr;

	if (!uFnGetHeight)
	{
		uFnGetHeight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetHeight");
	}

	UGHM_DebugMenuItem_execGetHeight_Params GetHeight_Params;

	uFnGetHeight->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetHeight, &GetHeight_Params, nullptr);

	uFnGetHeight->FunctionFlags |= 0x400;

	return GetHeight_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.GetWidth
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_DebugMenuItem::GetWidth()
{
	static UFunction* uFnGetWidth = nullptr;

	if (!uFnGetWidth)
	{
		uFnGetWidth = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetWidth");
	}

	UGHM_DebugMenuItem_execGetWidth_Params GetWidth_Params;

	uFnGetWidth->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetWidth, &GetWidth_Params, nullptr);

	uFnGetWidth->FunctionFlags |= 0x400;

	return GetWidth_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.GetPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector UGHM_DebugMenuItem::GetPosition()
{
	static UFunction* uFnGetPosition = nullptr;

	if (!uFnGetPosition)
	{
		uFnGetPosition = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetPosition");
	}

	UGHM_DebugMenuItem_execGetPosition_Params GetPosition_Params;

	uFnGetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetPosition, &GetPosition_Params, nullptr);

	uFnGetPosition->FunctionFlags |= 0x400;

	return GetPosition_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.GetName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGHM_DebugMenuItem::GetName()
{
	static UFunction* uFnGetName = nullptr;

	if (!uFnGetName)
	{
		uFnGetName = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetName");
	}

	UGHM_DebugMenuItem_execGetName_Params GetName_Params;

	uFnGetName->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetName, &GetName_Params, nullptr);

	uFnGetName->FunctionFlags |= 0x400;

	return GetName_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.GetChild
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenuItem*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_DebugMenuItem* UGHM_DebugMenuItem::GetChild()
{
	static UFunction* uFnGetChild = nullptr;

	if (!uFnGetChild)
	{
		uFnGetChild = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetChild");
	}

	UGHM_DebugMenuItem_execGetChild_Params GetChild_Params;

	uFnGetChild->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetChild, &GetChild_Params, nullptr);

	uFnGetChild->FunctionFlags |= 0x400;

	return GetChild_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.GetParent
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenuItem*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_DebugMenuItem* UGHM_DebugMenuItem::GetParent()
{
	static UFunction* uFnGetParent = nullptr;

	if (!uFnGetParent)
	{
		uFnGetParent = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetParent");
	}

	UGHM_DebugMenuItem_execGetParent_Params GetParent_Params;

	uFnGetParent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetParent, &GetParent_Params, nullptr);

	uFnGetParent->FunctionFlags |= 0x400;

	return GetParent_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.GetNext
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenuItem*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_DebugMenuItem* UGHM_DebugMenuItem::GetNext()
{
	static UFunction* uFnGetNext = nullptr;

	if (!uFnGetNext)
	{
		uFnGetNext = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetNext");
	}

	UGHM_DebugMenuItem_execGetNext_Params GetNext_Params;

	uFnGetNext->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetNext, &GetNext_Params, nullptr);

	uFnGetNext->FunctionFlags |= 0x400;

	return GetNext_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItem.GetPrev
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenuItem*      ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_DebugMenuItem* UGHM_DebugMenuItem::GetPrev()
{
	static UFunction* uFnGetPrev = nullptr;

	if (!uFnGetPrev)
	{
		uFnGetPrev = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItem.GetPrev");
	}

	UGHM_DebugMenuItem_execGetPrev_Params GetPrev_Params;

	uFnGetPrev->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetPrev, &GetPrev_Params, nullptr);

	uFnGetPrev->FunctionFlags |= 0x400;

	return GetPrev_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemValue.Clear
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemValue::Clear()
{
	static UFunction* uFnClear = nullptr;

	if (!uFnClear)
	{
		uFnClear = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValue.Clear");
	}

	UGHM_DebugMenuItemValue_execClear_Params Clear_Params;

	this->ProcessEvent(uFnClear, &Clear_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemValue.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemValue::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValue.DrawMenuItem");
	}

	UGHM_DebugMenuItemValue_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemValue.AddExecFunc
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         dgt                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_DebugMenuItemValue::AddExecFunc(struct FScriptDelegate dgt)
{
	static UFunction* uFnAddExecFunc = nullptr;

	if (!uFnAddExecFunc)
	{
		uFnAddExecFunc = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValue.AddExecFunc");
	}

	UGHM_DebugMenuItemValue_execAddExecFunc_Params AddExecFunc_Params;
	memcpy_s(&AddExecFunc_Params.dgt, 0x10, &dgt, 0x10);

	this->ProcessEvent(uFnAddExecFunc, &AddExecFunc_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemValue.SetSeparaterWidth
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Width                          (CPF_Parm)

void UGHM_DebugMenuItemValue::SetSeparaterWidth(int32_t Width)
{
	static UFunction* uFnSetSeparaterWidth = nullptr;

	if (!uFnSetSeparaterWidth)
	{
		uFnSetSeparaterWidth = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValue.SetSeparaterWidth");
	}

	UGHM_DebugMenuItemValue_execSetSeparaterWidth_Params SetSeparaterWidth_Params;
	memcpy_s(&SetSeparaterWidth_Params.Width, 0x4, &Width, 0x4);

	uFnSetSeparaterWidth->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSeparaterWidth, &SetSeparaterWidth_Params, nullptr);

	uFnSetSeparaterWidth->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemValue.SetCellWidth
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Width                          (CPF_Parm)

void UGHM_DebugMenuItemValue::SetCellWidth(int32_t Width)
{
	static UFunction* uFnSetCellWidth = nullptr;

	if (!uFnSetCellWidth)
	{
		uFnSetCellWidth = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValue.SetCellWidth");
	}

	UGHM_DebugMenuItemValue_execSetCellWidth_Params SetCellWidth_Params;
	memcpy_s(&SetCellWidth_Params.Width, 0x4, &Width, 0x4);

	uFnSetCellWidth->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetCellWidth, &SetCellWidth_Params, nullptr);

	uFnSetCellWidth->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemValue.SetWidth
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Width                          (CPF_Parm)

void UGHM_DebugMenuItemValue::SetWidth(int32_t Width)
{
	static UFunction* uFnSetWidth = nullptr;

	if (!uFnSetWidth)
	{
		uFnSetWidth = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValue.SetWidth");
	}

	UGHM_DebugMenuItemValue_execSetWidth_Params SetWidth_Params;
	memcpy_s(&SetWidth_Params.Width, 0x4, &Width, 0x4);

	uFnSetWidth->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetWidth, &SetWidth_Params, nullptr);

	uFnSetWidth->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemValue.ExecFunc
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemValue::ExecFunc()
{
	static UFunction* uFnExecFunc = nullptr;

	if (!uFnExecFunc)
	{
		uFnExecFunc = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValue.ExecFunc");
	}

	UGHM_DebugMenuItemValue_execExecFunc_Params ExecFunc_Params;

	this->ProcessEvent(uFnExecFunc, &ExecFunc_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemBool.Clear
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemBool::Clear()
{
	static UFunction* uFnClear = nullptr;

	if (!uFnClear)
	{
		uFnClear = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.Clear");
	}

	UGHM_DebugMenuItemBool_execClear_Params Clear_Params;

	this->ProcessEvent(uFnClear, &Clear_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemBool.Select
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemBool::Select()
{
	static UFunction* uFnSelect = nullptr;

	if (!uFnSelect)
	{
		uFnSelect = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.Select");
	}

	UGHM_DebugMenuItemBool_execSelect_Params Select_Params;

	this->ProcessEvent(uFnSelect, &Select_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemBool.SetSwitchType
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Type                           (CPF_Parm)

void UGHM_DebugMenuItemBool::SetSwitchType(uint8_t Type)
{
	static UFunction* uFnSetSwitchType = nullptr;

	if (!uFnSetSwitchType)
	{
		uFnSetSwitchType = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.SetSwitchType");
	}

	UGHM_DebugMenuItemBool_execSetSwitchType_Params SetSwitchType_Params;
	memcpy_s(&SetSwitchType_Params.Type, 0x1, &Type, 0x1);

	this->ProcessEvent(uFnSetSwitchType, &SetSwitchType_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemBool.SetDispSwitch
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  tf                             (CPF_Parm)

void UGHM_DebugMenuItemBool::SetDispSwitch(unsigned long tf)
{
	static UFunction* uFnSetDispSwitch = nullptr;

	if (!uFnSetDispSwitch)
	{
		uFnSetDispSwitch = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.SetDispSwitch");
	}

	UGHM_DebugMenuItemBool_execSetDispSwitch_Params SetDispSwitch_Params;
	SetDispSwitch_Params.tf = tf;

	this->ProcessEvent(uFnSetDispSwitch, &SetDispSwitch_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemBool.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemBool::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.DrawMenuItem");
	}

	UGHM_DebugMenuItemBool_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemBool.Rev
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemBool::Rev()
{
	static UFunction* uFnRev = nullptr;

	if (!uFnRev)
	{
		uFnRev = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.Rev");
	}

	UGHM_DebugMenuItemBool_execRev_Params Rev_Params;

	this->ProcessEvent(uFnRev, &Rev_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemBool.AddUnExecFunc
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         dgt                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_DebugMenuItemBool::AddUnExecFunc(struct FScriptDelegate dgt)
{
	static UFunction* uFnAddUnExecFunc = nullptr;

	if (!uFnAddUnExecFunc)
	{
		uFnAddUnExecFunc = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.AddUnExecFunc");
	}

	UGHM_DebugMenuItemBool_execAddUnExecFunc_Params AddUnExecFunc_Params;
	memcpy_s(&AddUnExecFunc_Params.dgt, 0x10, &dgt, 0x10);

	this->ProcessEvent(uFnAddUnExecFunc, &AddUnExecFunc_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemBool.UnExecFunc
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemBool::UnExecFunc()
{
	static UFunction* uFnUnExecFunc = nullptr;

	if (!uFnUnExecFunc)
	{
		uFnUnExecFunc = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.UnExecFunc");
	}

	UGHM_DebugMenuItemBool_execUnExecFunc_Params UnExecFunc_Params;

	this->ProcessEvent(uFnUnExecFunc, &UnExecFunc_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemBool.ChangeNum
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_DebugMenuItemBool::ChangeNum()
{
	static UFunction* uFnChangeNum = nullptr;

	if (!uFnChangeNum)
	{
		uFnChangeNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.ChangeNum");
	}

	UGHM_DebugMenuItemBool_execChangeNum_Params ChangeNum_Params;

	uFnChangeNum->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnChangeNum, &ChangeNum_Params, nullptr);

	uFnChangeNum->FunctionFlags |= 0x400;

	return ChangeNum_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemBool.UpdateRegistValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemBool::UpdateRegistValue()
{
	static UFunction* uFnUpdateRegistValue = nullptr;

	if (!uFnUpdateRegistValue)
	{
		uFnUpdateRegistValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.UpdateRegistValue");
	}

	UGHM_DebugMenuItemBool_execUpdateRegistValue_Params UpdateRegistValue_Params;

	uFnUpdateRegistValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateRegistValue, &UpdateRegistValue_Params, nullptr);

	uFnUpdateRegistValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemBool.UnRegist
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemBool::UnRegist()
{
	static UFunction* uFnUnRegist = nullptr;

	if (!uFnUnRegist)
	{
		uFnUnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.UnRegist");
	}

	UGHM_DebugMenuItemBool_execUnRegist_Params UnRegist_Params;

	uFnUnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnRegist, &UnRegist_Params, nullptr);

	uFnUnRegist->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemBool.Regist
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemBool::Regist(int32_t& editvalue)
{
	static UFunction* uFnRegist = nullptr;

	if (!uFnRegist)
	{
		uFnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemBool.Regist");
	}

	UGHM_DebugMenuItemBool_execRegist_Params Regist_Params;
	memcpy_s(&Regist_Params.editvalue, 0x4, &editvalue, 0x4);

	uFnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegist, &Regist_Params, nullptr);

	uFnRegist->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0x4, &Regist_Params.editvalue, 0x4);
};

// Function GHMEngine.GHM_DebugMenuItemByte.KeyXButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItemByte::KeyXButton(uint8_t btn)
{
	static UFunction* uFnKeyXButton = nullptr;

	if (!uFnKeyXButton)
	{
		uFnKeyXButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.KeyXButton");
	}

	UGHM_DebugMenuItemByte_execKeyXButton_Params KeyXButton_Params;
	memcpy_s(&KeyXButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyXButton, &KeyXButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemByte.KeyRight
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemByte::KeyRight()
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.KeyRight");
	}

	UGHM_DebugMenuItemByte_execKeyRight_Params KeyRight_Params;

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemByte.KeyLeft
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemByte::KeyLeft()
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.KeyLeft");
	}

	UGHM_DebugMenuItemByte_execKeyLeft_Params KeyLeft_Params;

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemByte.KeyDown
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemByte::KeyDown()
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.KeyDown");
	}

	UGHM_DebugMenuItemByte_execKeyDown_Params KeyDown_Params;

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemByte.KeyUp
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemByte::KeyUp()
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.KeyUp");
	}

	UGHM_DebugMenuItemByte_execKeyUp_Params KeyUp_Params;

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemByte.SetNum
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Num                            (CPF_Parm)

void UGHM_DebugMenuItemByte::SetNum(uint8_t Num)
{
	static UFunction* uFnSetNum = nullptr;

	if (!uFnSetNum)
	{
		uFnSetNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.SetNum");
	}

	UGHM_DebugMenuItemByte_execSetNum_Params SetNum_Params;
	memcpy_s(&SetNum_Params.Num, 0x1, &Num, 0x1);

	this->ProcessEvent(uFnSetNum, &SetNum_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemByte.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemByte::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.DrawMenuItem");
	}

	UGHM_DebugMenuItemByte_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemByte.Rev
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemByte::Rev()
{
	static UFunction* uFnRev = nullptr;

	if (!uFnRev)
	{
		uFnRev = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.Rev");
	}

	UGHM_DebugMenuItemByte_execRev_Params Rev_Params;

	uFnRev->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRev, &Rev_Params, nullptr);

	uFnRev->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemByte.UpdateRegistValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemByte::UpdateRegistValue()
{
	static UFunction* uFnUpdateRegistValue = nullptr;

	if (!uFnUpdateRegistValue)
	{
		uFnUpdateRegistValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.UpdateRegistValue");
	}

	UGHM_DebugMenuItemByte_execUpdateRegistValue_Params UpdateRegistValue_Params;

	uFnUpdateRegistValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateRegistValue, &UpdateRegistValue_Params, nullptr);

	uFnUpdateRegistValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemByte.UnRegist
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemByte::UnRegist()
{
	static UFunction* uFnUnRegist = nullptr;

	if (!uFnUnRegist)
	{
		uFnUnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.UnRegist");
	}

	UGHM_DebugMenuItemByte_execUnRegist_Params UnRegist_Params;

	uFnUnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnRegist, &UnRegist_Params, nullptr);

	uFnUnRegist->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemByte.Regist
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemByte::Regist(uint8_t& editvalue)
{
	static UFunction* uFnRegist = nullptr;

	if (!uFnRegist)
	{
		uFnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.Regist");
	}

	UGHM_DebugMenuItemByte_execRegist_Params Regist_Params;
	memcpy_s(&Regist_Params.editvalue, 0x1, &editvalue, 0x1);

	uFnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegist, &Regist_Params, nullptr);

	uFnRegist->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0x1, &Regist_Params.editvalue, 0x1);
};

// Function GHMEngine.GHM_DebugMenuItemByte.ChangeNum
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        addnum                         (CPF_Parm)

void UGHM_DebugMenuItemByte::ChangeNum(int32_t addnum)
{
	static UFunction* uFnChangeNum = nullptr;

	if (!uFnChangeNum)
	{
		uFnChangeNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.ChangeNum");
	}

	UGHM_DebugMenuItemByte_execChangeNum_Params ChangeNum_Params;
	memcpy_s(&ChangeNum_Params.addnum, 0x4, &addnum, 0x4);

	uFnChangeNum->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnChangeNum, &ChangeNum_Params, nullptr);

	uFnChangeNum->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemByte.DrawSelectedItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemByte::DrawSelectedItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawSelectedItem = nullptr;

	if (!uFnDrawSelectedItem)
	{
		uFnDrawSelectedItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.DrawSelectedItem");
	}

	UGHM_DebugMenuItemByte_execDrawSelectedItem_Params DrawSelectedItem_Params;
	memcpy_s(&DrawSelectedItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawSelectedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawSelectedItem, &DrawSelectedItem_Params, nullptr);

	uFnDrawSelectedItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemByte.DrawDefaultItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemByte::DrawDefaultItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawDefaultItem = nullptr;

	if (!uFnDrawDefaultItem)
	{
		uFnDrawDefaultItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemByte.DrawDefaultItem");
	}

	UGHM_DebugMenuItemByte_execDrawDefaultItem_Params DrawDefaultItem_Params;
	memcpy_s(&DrawDefaultItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawDefaultItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawDefaultItem, &DrawDefaultItem_Params, nullptr);

	uFnDrawDefaultItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemColor.DrawMenuItem
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemColor::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.DrawMenuItem");
	}

	UGHM_DebugMenuItemColor_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColor.LeftStick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItemColor::LeftStick(float moveX, float moveY)
{
	static UFunction* uFnLeftStick = nullptr;

	if (!uFnLeftStick)
	{
		uFnLeftStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.LeftStick");
	}

	UGHM_DebugMenuItemColor_execLeftStick_Params LeftStick_Params;
	memcpy_s(&LeftStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&LeftStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnLeftStick, &LeftStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColor.RightStick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItemColor::RightStick(float moveX, float moveY)
{
	static UFunction* uFnRightStick = nullptr;

	if (!uFnRightStick)
	{
		uFnRightStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.RightStick");
	}

	UGHM_DebugMenuItemColor_execRightStick_Params RightStick_Params;
	memcpy_s(&RightStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&RightStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnRightStick, &RightStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColor.KeyBButton
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItemColor::KeyBButton(uint8_t btn)
{
	static UFunction* uFnKeyBButton = nullptr;

	if (!uFnKeyBButton)
	{
		uFnKeyBButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.KeyBButton");
	}

	UGHM_DebugMenuItemColor_execKeyBButton_Params KeyBButton_Params;
	memcpy_s(&KeyBButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyBButton, &KeyBButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColor.Cancel
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemColor::Cancel()
{
	static UFunction* uFnCancel = nullptr;

	if (!uFnCancel)
	{
		uFnCancel = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.Cancel");
	}

	UGHM_DebugMenuItemColor_execCancel_Params Cancel_Params;

	this->ProcessEvent(uFnCancel, &Cancel_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColor.Select
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemColor::Select()
{
	static UFunction* uFnSelect = nullptr;

	if (!uFnSelect)
	{
		uFnSelect = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.Select");
	}

	UGHM_DebugMenuItemColor_execSelect_Params Select_Params;

	this->ProcessEvent(uFnSelect, &Select_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColor.RealTimeValueChange
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRTFlag                        (CPF_Parm)

void UGHM_DebugMenuItemColor::RealTimeValueChange(unsigned long bRTFlag)
{
	static UFunction* uFnRealTimeValueChange = nullptr;

	if (!uFnRealTimeValueChange)
	{
		uFnRealTimeValueChange = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.RealTimeValueChange");
	}

	UGHM_DebugMenuItemColor_execRealTimeValueChange_Params RealTimeValueChange_Params;
	RealTimeValueChange_Params.bRTFlag = bRTFlag;

	this->ProcessEvent(uFnRealTimeValueChange, &RealTimeValueChange_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColor.UpdateRegistValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemColor::UpdateRegistValue()
{
	static UFunction* uFnUpdateRegistValue = nullptr;

	if (!uFnUpdateRegistValue)
	{
		uFnUpdateRegistValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.UpdateRegistValue");
	}

	UGHM_DebugMenuItemColor_execUpdateRegistValue_Params UpdateRegistValue_Params;

	uFnUpdateRegistValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateRegistValue, &UpdateRegistValue_Params, nullptr);

	uFnUpdateRegistValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemColor.UnRegist
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemColor::UnRegist()
{
	static UFunction* uFnUnRegist = nullptr;

	if (!uFnUnRegist)
	{
		uFnUnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.UnRegist");
	}

	UGHM_DebugMenuItemColor_execUnRegist_Params UnRegist_Params;

	uFnUnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnRegist, &UnRegist_Params, nullptr);

	uFnUnRegist->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemColor.RegistVector
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemColor::RegistVector(struct FVector& editvalue)
{
	static UFunction* uFnRegistVector = nullptr;

	if (!uFnRegistVector)
	{
		uFnRegistVector = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.RegistVector");
	}

	UGHM_DebugMenuItemColor_execRegistVector_Params RegistVector_Params;
	memcpy_s(&RegistVector_Params.editvalue, 0xC, &editvalue, 0xC);

	uFnRegistVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegistVector, &RegistVector_Params, nullptr);

	uFnRegistVector->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0xC, &RegistVector_Params.editvalue, 0xC);
};

// Function GHMEngine.GHM_DebugMenuItemColor.RegistColor
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FColor                  editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemColor::RegistColor(struct FColor& editvalue)
{
	static UFunction* uFnRegistColor = nullptr;

	if (!uFnRegistColor)
	{
		uFnRegistColor = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.RegistColor");
	}

	UGHM_DebugMenuItemColor_execRegistColor_Params RegistColor_Params;
	memcpy_s(&RegistColor_Params.editvalue, 0x4, &editvalue, 0x4);

	uFnRegistColor->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegistColor, &RegistColor_Params, nullptr);

	uFnRegistColor->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0x4, &RegistColor_Params.editvalue, 0x4);
};

// Function GHMEngine.GHM_DebugMenuItemColor.SetColor
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  scolor                         (CPF_Parm)

void UGHM_DebugMenuItemColor::SetColor(struct FColor scolor)
{
	static UFunction* uFnSetColor = nullptr;

	if (!uFnSetColor)
	{
		uFnSetColor = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColor.SetColor");
	}

	UGHM_DebugMenuItemColor_execSetColor_Params SetColor_Params;
	memcpy_s(&SetColor_Params.scolor, 0x4, &scolor, 0x4);

	uFnSetColor->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetColor, &SetColor_Params, nullptr);

	uFnSetColor->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloat.KeyXButton
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItemFloat::KeyXButton(uint8_t btn)
{
	static UFunction* uFnKeyXButton = nullptr;

	if (!uFnKeyXButton)
	{
		uFnKeyXButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.KeyXButton");
	}

	UGHM_DebugMenuItemFloat_execKeyXButton_Params KeyXButton_Params;
	memcpy_s(&KeyXButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyXButton, &KeyXButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloat.KeyRight
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloat::KeyRight()
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.KeyRight");
	}

	UGHM_DebugMenuItemFloat_execKeyRight_Params KeyRight_Params;

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloat.KeyLeft
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloat::KeyLeft()
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.KeyLeft");
	}

	UGHM_DebugMenuItemFloat_execKeyLeft_Params KeyLeft_Params;

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloat.KeyDown
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloat::KeyDown()
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.KeyDown");
	}

	UGHM_DebugMenuItemFloat_execKeyDown_Params KeyDown_Params;

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloat.KeyUp
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloat::KeyUp()
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.KeyUp");
	}

	UGHM_DebugMenuItemFloat_execKeyUp_Params KeyUp_Params;

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloat.SetNum
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Num                            (CPF_Parm)

void UGHM_DebugMenuItemFloat::SetNum(float Num)
{
	static UFunction* uFnSetNum = nullptr;

	if (!uFnSetNum)
	{
		uFnSetNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.SetNum");
	}

	UGHM_DebugMenuItemFloat_execSetNum_Params SetNum_Params;
	memcpy_s(&SetNum_Params.Num, 0x4, &Num, 0x4);

	this->ProcessEvent(uFnSetNum, &SetNum_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloat.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemFloat::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.DrawMenuItem");
	}

	UGHM_DebugMenuItemFloat_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloat.Rev
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloat::Rev()
{
	static UFunction* uFnRev = nullptr;

	if (!uFnRev)
	{
		uFnRev = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.Rev");
	}

	UGHM_DebugMenuItemFloat_execRev_Params Rev_Params;

	uFnRev->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRev, &Rev_Params, nullptr);

	uFnRev->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloat.UpdateRegistValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloat::UpdateRegistValue()
{
	static UFunction* uFnUpdateRegistValue = nullptr;

	if (!uFnUpdateRegistValue)
	{
		uFnUpdateRegistValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.UpdateRegistValue");
	}

	UGHM_DebugMenuItemFloat_execUpdateRegistValue_Params UpdateRegistValue_Params;

	uFnUpdateRegistValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateRegistValue, &UpdateRegistValue_Params, nullptr);

	uFnUpdateRegistValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloat.UnRegist
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloat::UnRegist()
{
	static UFunction* uFnUnRegist = nullptr;

	if (!uFnUnRegist)
	{
		uFnUnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.UnRegist");
	}

	UGHM_DebugMenuItemFloat_execUnRegist_Params UnRegist_Params;

	uFnUnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnRegist, &UnRegist_Params, nullptr);

	uFnUnRegist->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloat.Regist
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemFloat::Regist(float& editvalue)
{
	static UFunction* uFnRegist = nullptr;

	if (!uFnRegist)
	{
		uFnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.Regist");
	}

	UGHM_DebugMenuItemFloat_execRegist_Params Regist_Params;
	memcpy_s(&Regist_Params.editvalue, 0x4, &editvalue, 0x4);

	uFnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegist, &Regist_Params, nullptr);

	uFnRegist->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0x4, &Regist_Params.editvalue, 0x4);
};

// Function GHMEngine.GHM_DebugMenuItemFloat.ChangeNum
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        addnum                         (CPF_Parm)

void UGHM_DebugMenuItemFloat::ChangeNum(int32_t addnum)
{
	static UFunction* uFnChangeNum = nullptr;

	if (!uFnChangeNum)
	{
		uFnChangeNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.ChangeNum");
	}

	UGHM_DebugMenuItemFloat_execChangeNum_Params ChangeNum_Params;
	memcpy_s(&ChangeNum_Params.addnum, 0x4, &addnum, 0x4);

	uFnChangeNum->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnChangeNum, &ChangeNum_Params, nullptr);

	uFnChangeNum->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloat.DrawSelectedItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemFloat::DrawSelectedItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawSelectedItem = nullptr;

	if (!uFnDrawSelectedItem)
	{
		uFnDrawSelectedItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.DrawSelectedItem");
	}

	UGHM_DebugMenuItemFloat_execDrawSelectedItem_Params DrawSelectedItem_Params;
	memcpy_s(&DrawSelectedItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawSelectedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawSelectedItem, &DrawSelectedItem_Params, nullptr);

	uFnDrawSelectedItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloat.DrawDefaultItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemFloat::DrawDefaultItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawDefaultItem = nullptr;

	if (!uFnDrawDefaultItem)
	{
		uFnDrawDefaultItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloat.DrawDefaultItem");
	}

	UGHM_DebugMenuItemFloat_execDrawDefaultItem_Params DrawDefaultItem_Params;
	memcpy_s(&DrawDefaultItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawDefaultItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawDefaultItem, &DrawDefaultItem_Params, nullptr);

	uFnDrawDefaultItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.LeftStick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItemFloatArray::LeftStick(float moveX, float moveY)
{
	static UFunction* uFnLeftStick = nullptr;

	if (!uFnLeftStick)
	{
		uFnLeftStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.LeftStick");
	}

	UGHM_DebugMenuItemFloatArray_execLeftStick_Params LeftStick_Params;
	memcpy_s(&LeftStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&LeftStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnLeftStick, &LeftStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyXButton
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItemFloatArray::KeyXButton(uint8_t btn)
{
	static UFunction* uFnKeyXButton = nullptr;

	if (!uFnKeyXButton)
	{
		uFnKeyXButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyXButton");
	}

	UGHM_DebugMenuItemFloatArray_execKeyXButton_Params KeyXButton_Params;
	memcpy_s(&KeyXButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyXButton, &KeyXButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyRight
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloatArray::KeyRight()
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyRight");
	}

	UGHM_DebugMenuItemFloatArray_execKeyRight_Params KeyRight_Params;

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyLeft
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloatArray::KeyLeft()
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyLeft");
	}

	UGHM_DebugMenuItemFloatArray_execKeyLeft_Params KeyLeft_Params;

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyDown
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloatArray::KeyDown()
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyDown");
	}

	UGHM_DebugMenuItemFloatArray_execKeyDown_Params KeyDown_Params;

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyUp
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloatArray::KeyUp()
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.KeyUp");
	}

	UGHM_DebugMenuItemFloatArray_execKeyUp_Params KeyUp_Params;

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.SetNum
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Num                            (CPF_Parm)

void UGHM_DebugMenuItemFloatArray::SetNum(float Num)
{
	static UFunction* uFnSetNum = nullptr;

	if (!uFnSetNum)
	{
		uFnSetNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.SetNum");
	}

	UGHM_DebugMenuItemFloatArray_execSetNum_Params SetNum_Params;
	memcpy_s(&SetNum_Params.Num, 0x4, &Num, 0x4);

	this->ProcessEvent(uFnSetNum, &SetNum_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemFloatArray::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.DrawMenuItem");
	}

	UGHM_DebugMenuItemFloatArray_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.SetParamCellWidth
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Width                          (CPF_Parm)

void UGHM_DebugMenuItemFloatArray::SetParamCellWidth(int32_t Width)
{
	static UFunction* uFnSetParamCellWidth = nullptr;

	if (!uFnSetParamCellWidth)
	{
		uFnSetParamCellWidth = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.SetParamCellWidth");
	}

	UGHM_DebugMenuItemFloatArray_execSetParamCellWidth_Params SetParamCellWidth_Params;
	memcpy_s(&SetParamCellWidth_Params.Width, 0x4, &Width, 0x4);

	this->ProcessEvent(uFnSetParamCellWidth, &SetParamCellWidth_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.SetParamName
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  pname                          (CPF_Parm | CPF_NeedCtorLink)

void UGHM_DebugMenuItemFloatArray::SetParamName(int32_t Index, class FString pname)
{
	static UFunction* uFnSetParamName = nullptr;

	if (!uFnSetParamName)
	{
		uFnSetParamName = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.SetParamName");
	}

	UGHM_DebugMenuItemFloatArray_execSetParamName_Params SetParamName_Params;
	memcpy_s(&SetParamName_Params.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetParamName_Params.pname, 0x10, &pname, 0x10);

	this->ProcessEvent(uFnSetParamName, &SetParamName_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.Rev
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloatArray::Rev()
{
	static UFunction* uFnRev = nullptr;

	if (!uFnRev)
	{
		uFnRev = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.Rev");
	}

	UGHM_DebugMenuItemFloatArray_execRev_Params Rev_Params;

	uFnRev->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRev, &Rev_Params, nullptr);

	uFnRev->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.UpdateRegistValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloatArray::UpdateRegistValue()
{
	static UFunction* uFnUpdateRegistValue = nullptr;

	if (!uFnUpdateRegistValue)
	{
		uFnUpdateRegistValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.UpdateRegistValue");
	}

	UGHM_DebugMenuItemFloatArray_execUpdateRegistValue_Params UpdateRegistValue_Params;

	uFnUpdateRegistValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateRegistValue, &UpdateRegistValue_Params, nullptr);

	uFnUpdateRegistValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.UnRegist
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemFloatArray::UnRegist()
{
	static UFunction* uFnUnRegist = nullptr;

	if (!uFnUnRegist)
	{
		uFnUnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.UnRegist");
	}

	UGHM_DebugMenuItemFloatArray_execUnRegist_Params UnRegist_Params;

	uFnUnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnRegist, &UnRegist_Params, nullptr);

	uFnUnRegist->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.Regist
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<float>                  editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGHM_DebugMenuItemFloatArray::Regist(TArray<float>& editvalue)
{
	static UFunction* uFnRegist = nullptr;

	if (!uFnRegist)
	{
		uFnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.Regist");
	}

	UGHM_DebugMenuItemFloatArray_execRegist_Params Regist_Params;
	memcpy_s(&Regist_Params.editvalue, 0x10, &editvalue, 0x10);

	uFnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegist, &Regist_Params, nullptr);

	uFnRegist->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0x10, &Regist_Params.editvalue, 0x10);
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.ChangeNum
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        addnum                         (CPF_Parm)

void UGHM_DebugMenuItemFloatArray::ChangeNum(int32_t addnum)
{
	static UFunction* uFnChangeNum = nullptr;

	if (!uFnChangeNum)
	{
		uFnChangeNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.ChangeNum");
	}

	UGHM_DebugMenuItemFloatArray_execChangeNum_Params ChangeNum_Params;
	memcpy_s(&ChangeNum_Params.addnum, 0x4, &addnum, 0x4);

	uFnChangeNum->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnChangeNum, &ChangeNum_Params, nullptr);

	uFnChangeNum->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.DrawSelectedItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemFloatArray::DrawSelectedItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawSelectedItem = nullptr;

	if (!uFnDrawSelectedItem)
	{
		uFnDrawSelectedItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.DrawSelectedItem");
	}

	UGHM_DebugMenuItemFloatArray_execDrawSelectedItem_Params DrawSelectedItem_Params;
	memcpy_s(&DrawSelectedItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawSelectedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawSelectedItem, &DrawSelectedItem_Params, nullptr);

	uFnDrawSelectedItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemFloatArray.DrawDefaultItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemFloatArray::DrawDefaultItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawDefaultItem = nullptr;

	if (!uFnDrawDefaultItem)
	{
		uFnDrawDefaultItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemFloatArray.DrawDefaultItem");
	}

	UGHM_DebugMenuItemFloatArray_execDrawDefaultItem_Params DrawDefaultItem_Params;
	memcpy_s(&DrawDefaultItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawDefaultItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawDefaultItem, &DrawDefaultItem_Params, nullptr);

	uFnDrawDefaultItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.RightStick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItemGraph::RightStick(float moveX, float moveY)
{
	static UFunction* uFnRightStick = nullptr;

	if (!uFnRightStick)
	{
		uFnRightStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.RightStick");
	}

	UGHM_DebugMenuItemGraph_execRightStick_Params RightStick_Params;
	memcpy_s(&RightStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&RightStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnRightStick, &RightStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.DrawYAxisLabelOnGraph
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 DrawCanvas                     (CPF_Parm)
// float                          YAxisValue                     (CPF_Parm)
// struct FColor                  LabelColor                     (CPF_Parm)

void UGHM_DebugMenuItemGraph::DrawYAxisLabelOnGraph(class UCanvas* DrawCanvas, float YAxisValue, struct FColor LabelColor)
{
	static UFunction* uFnDrawYAxisLabelOnGraph = nullptr;

	if (!uFnDrawYAxisLabelOnGraph)
	{
		uFnDrawYAxisLabelOnGraph = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.DrawYAxisLabelOnGraph");
	}

	UGHM_DebugMenuItemGraph_execDrawYAxisLabelOnGraph_Params DrawYAxisLabelOnGraph_Params;
	memcpy_s(&DrawYAxisLabelOnGraph_Params.DrawCanvas, 0x8, &DrawCanvas, 0x8);
	memcpy_s(&DrawYAxisLabelOnGraph_Params.YAxisValue, 0x4, &YAxisValue, 0x4);
	memcpy_s(&DrawYAxisLabelOnGraph_Params.LabelColor, 0x4, &LabelColor, 0x4);

	this->ProcessEvent(uFnDrawYAxisLabelOnGraph, &DrawYAxisLabelOnGraph_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.DrawXAxisLabelOnGraph
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 DrawCanvas                     (CPF_Parm)
// float                          XAxisValue                     (CPF_Parm)
// struct FColor                  LabelColor                     (CPF_Parm)

void UGHM_DebugMenuItemGraph::DrawXAxisLabelOnGraph(class UCanvas* DrawCanvas, float XAxisValue, struct FColor LabelColor)
{
	static UFunction* uFnDrawXAxisLabelOnGraph = nullptr;

	if (!uFnDrawXAxisLabelOnGraph)
	{
		uFnDrawXAxisLabelOnGraph = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.DrawXAxisLabelOnGraph");
	}

	UGHM_DebugMenuItemGraph_execDrawXAxisLabelOnGraph_Params DrawXAxisLabelOnGraph_Params;
	memcpy_s(&DrawXAxisLabelOnGraph_Params.DrawCanvas, 0x8, &DrawCanvas, 0x8);
	memcpy_s(&DrawXAxisLabelOnGraph_Params.XAxisValue, 0x4, &XAxisValue, 0x4);
	memcpy_s(&DrawXAxisLabelOnGraph_Params.LabelColor, 0x4, &LabelColor, 0x4);

	this->ProcessEvent(uFnDrawXAxisLabelOnGraph, &DrawXAxisLabelOnGraph_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.DrawGraphWindow
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemGraph::DrawGraphWindow(class UCanvas* Canvas)
{
	static UFunction* uFnDrawGraphWindow = nullptr;

	if (!uFnDrawGraphWindow)
	{
		uFnDrawGraphWindow = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.DrawGraphWindow");
	}

	UGHM_DebugMenuItemGraph_execDrawGraphWindow_Params DrawGraphWindow_Params;
	memcpy_s(&DrawGraphWindow_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawGraphWindow, &DrawGraphWindow_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.Select
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemGraph::Select()
{
	static UFunction* uFnSelect = nullptr;

	if (!uFnSelect)
	{
		uFnSelect = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.Select");
	}

	UGHM_DebugMenuItemGraph_execSelect_Params Select_Params;

	this->ProcessEvent(uFnSelect, &Select_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemGraph::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.DrawMenuItem");
	}

	UGHM_DebugMenuItemGraph_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.SetWindowPosition
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          PositionX                      (CPF_Parm)
// float                          PositionY                      (CPF_Parm)

void UGHM_DebugMenuItemGraph::SetWindowPosition(float PositionX, float PositionY)
{
	static UFunction* uFnSetWindowPosition = nullptr;

	if (!uFnSetWindowPosition)
	{
		uFnSetWindowPosition = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.SetWindowPosition");
	}

	UGHM_DebugMenuItemGraph_execSetWindowPosition_Params SetWindowPosition_Params;
	memcpy_s(&SetWindowPosition_Params.PositionX, 0x4, &PositionX, 0x4);
	memcpy_s(&SetWindowPosition_Params.PositionY, 0x4, &PositionY, 0x4);

	this->ProcessEvent(uFnSetWindowPosition, &SetWindowPosition_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.SetWindowSize
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          WindowSizeX                    (CPF_Parm)
// float                          WindowSizeY                    (CPF_Parm)

void UGHM_DebugMenuItemGraph::SetWindowSize(float WindowSizeX, float WindowSizeY)
{
	static UFunction* uFnSetWindowSize = nullptr;

	if (!uFnSetWindowSize)
	{
		uFnSetWindowSize = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.SetWindowSize");
	}

	UGHM_DebugMenuItemGraph_execSetWindowSize_Params SetWindowSize_Params;
	memcpy_s(&SetWindowSize_Params.WindowSizeX, 0x4, &WindowSizeX, 0x4);
	memcpy_s(&SetWindowSize_Params.WindowSizeY, 0x4, &WindowSizeY, 0x4);

	this->ProcessEvent(uFnSetWindowSize, &SetWindowSize_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.SetWindowTitle
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  WindowTitle                    (CPF_Parm | CPF_NeedCtorLink)

void UGHM_DebugMenuItemGraph::SetWindowTitle(class FString WindowTitle)
{
	static UFunction* uFnSetWindowTitle = nullptr;

	if (!uFnSetWindowTitle)
	{
		uFnSetWindowTitle = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.SetWindowTitle");
	}

	UGHM_DebugMenuItemGraph_execSetWindowTitle_Params SetWindowTitle_Params;
	memcpy_s(&SetWindowTitle_Params.WindowTitle, 0x10, &WindowTitle, 0x10);

	this->ProcessEvent(uFnSetWindowTitle, &SetWindowTitle_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.SetXAxisRange
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Min                            (CPF_Parm)
// float                          Max                            (CPF_Parm)

void UGHM_DebugMenuItemGraph::SetXAxisRange(float Min, float Max)
{
	static UFunction* uFnSetXAxisRange = nullptr;

	if (!uFnSetXAxisRange)
	{
		uFnSetXAxisRange = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.SetXAxisRange");
	}

	UGHM_DebugMenuItemGraph_execSetXAxisRange_Params SetXAxisRange_Params;
	memcpy_s(&SetXAxisRange_Params.Min, 0x4, &Min, 0x4);
	memcpy_s(&SetXAxisRange_Params.Max, 0x4, &Max, 0x4);

	this->ProcessEvent(uFnSetXAxisRange, &SetXAxisRange_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetYAxisRange
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector2D UGHM_DebugMenuItemGraph::GetYAxisRange()
{
	static UFunction* uFnGetYAxisRange = nullptr;

	if (!uFnGetYAxisRange)
	{
		uFnGetYAxisRange = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetYAxisRange");
	}

	UGHM_DebugMenuItemGraph_execGetYAxisRange_Params GetYAxisRange_Params;

	this->ProcessEvent(uFnGetYAxisRange, &GetYAxisRange_Params, nullptr);

	return GetYAxisRange_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetXAxisRange
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector2D UGHM_DebugMenuItemGraph::GetXAxisRange()
{
	static UFunction* uFnGetXAxisRange = nullptr;

	if (!uFnGetXAxisRange)
	{
		uFnGetXAxisRange = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetXAxisRange");
	}

	UGHM_DebugMenuItemGraph_execGetXAxisRange_Params GetXAxisRange_Params;

	this->ProcessEvent(uFnGetXAxisRange, &GetXAxisRange_Params, nullptr);

	return GetXAxisRange_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.SetYAxisRange
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Min                            (CPF_Parm)
// float                          Max                            (CPF_Parm)

void UGHM_DebugMenuItemGraph::SetYAxisRange(float Min, float Max)
{
	static UFunction* uFnSetYAxisRange = nullptr;

	if (!uFnSetYAxisRange)
	{
		uFnSetYAxisRange = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.SetYAxisRange");
	}

	UGHM_DebugMenuItemGraph_execSetYAxisRange_Params SetYAxisRange_Params;
	memcpy_s(&SetYAxisRange_Params.Min, 0x4, &Min, 0x4);
	memcpy_s(&SetYAxisRange_Params.Max, 0x4, &Max, 0x4);

	this->ProcessEvent(uFnSetYAxisRange, &SetYAxisRange_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphPointInScreenSpace
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          GraphValueX                    (CPF_Parm)
// float                          GraphValueY                    (CPF_Parm)

struct FVector2D UGHM_DebugMenuItemGraph::GetGraphPointInScreenSpace(float GraphValueX, float GraphValueY)
{
	static UFunction* uFnGetGraphPointInScreenSpace = nullptr;

	if (!uFnGetGraphPointInScreenSpace)
	{
		uFnGetGraphPointInScreenSpace = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphPointInScreenSpace");
	}

	UGHM_DebugMenuItemGraph_execGetGraphPointInScreenSpace_Params GetGraphPointInScreenSpace_Params;
	memcpy_s(&GetGraphPointInScreenSpace_Params.GraphValueX, 0x4, &GraphValueX, 0x4);
	memcpy_s(&GetGraphPointInScreenSpace_Params.GraphValueY, 0x4, &GraphValueY, 0x4);

	this->ProcessEvent(uFnGetGraphPointInScreenSpace, &GetGraphPointInScreenSpace_Params, nullptr);

	return GetGraphPointInScreenSpace_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetYNegativeRangeInScreenSpace
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UGHM_DebugMenuItemGraph::GetYNegativeRangeInScreenSpace()
{
	static UFunction* uFnGetYNegativeRangeInScreenSpace = nullptr;

	if (!uFnGetYNegativeRangeInScreenSpace)
	{
		uFnGetYNegativeRangeInScreenSpace = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetYNegativeRangeInScreenSpace");
	}

	UGHM_DebugMenuItemGraph_execGetYNegativeRangeInScreenSpace_Params GetYNegativeRangeInScreenSpace_Params;

	this->ProcessEvent(uFnGetYNegativeRangeInScreenSpace, &GetYNegativeRangeInScreenSpace_Params, nullptr);

	return GetYNegativeRangeInScreenSpace_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetYPositiveRangeInScreenSpace
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UGHM_DebugMenuItemGraph::GetYPositiveRangeInScreenSpace()
{
	static UFunction* uFnGetYPositiveRangeInScreenSpace = nullptr;

	if (!uFnGetYPositiveRangeInScreenSpace)
	{
		uFnGetYPositiveRangeInScreenSpace = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetYPositiveRangeInScreenSpace");
	}

	UGHM_DebugMenuItemGraph_execGetYPositiveRangeInScreenSpace_Params GetYPositiveRangeInScreenSpace_Params;

	this->ProcessEvent(uFnGetYPositiveRangeInScreenSpace, &GetYPositiveRangeInScreenSpace_Params, nullptr);

	return GetYPositiveRangeInScreenSpace_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetXNegativeRangeInScreenSpace
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UGHM_DebugMenuItemGraph::GetXNegativeRangeInScreenSpace()
{
	static UFunction* uFnGetXNegativeRangeInScreenSpace = nullptr;

	if (!uFnGetXNegativeRangeInScreenSpace)
	{
		uFnGetXNegativeRangeInScreenSpace = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetXNegativeRangeInScreenSpace");
	}

	UGHM_DebugMenuItemGraph_execGetXNegativeRangeInScreenSpace_Params GetXNegativeRangeInScreenSpace_Params;

	this->ProcessEvent(uFnGetXNegativeRangeInScreenSpace, &GetXNegativeRangeInScreenSpace_Params, nullptr);

	return GetXNegativeRangeInScreenSpace_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetXPositiveRangeInScreenSpace
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UGHM_DebugMenuItemGraph::GetXPositiveRangeInScreenSpace()
{
	static UFunction* uFnGetXPositiveRangeInScreenSpace = nullptr;

	if (!uFnGetXPositiveRangeInScreenSpace)
	{
		uFnGetXPositiveRangeInScreenSpace = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetXPositiveRangeInScreenSpace");
	}

	UGHM_DebugMenuItemGraph_execGetXPositiveRangeInScreenSpace_Params GetXPositiveRangeInScreenSpace_Params;

	this->ProcessEvent(uFnGetXPositiveRangeInScreenSpace, &GetXPositiveRangeInScreenSpace_Params, nullptr);

	return GetXPositiveRangeInScreenSpace_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphOriginInScreenSpace
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector2D UGHM_DebugMenuItemGraph::GetGraphOriginInScreenSpace()
{
	static UFunction* uFnGetGraphOriginInScreenSpace = nullptr;

	if (!uFnGetGraphOriginInScreenSpace)
	{
		uFnGetGraphOriginInScreenSpace = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphOriginInScreenSpace");
	}

	UGHM_DebugMenuItemGraph_execGetGraphOriginInScreenSpace_Params GetGraphOriginInScreenSpace_Params;

	this->ProcessEvent(uFnGetGraphOriginInScreenSpace, &GetGraphOriginInScreenSpace_Params, nullptr);

	return GetGraphOriginInScreenSpace_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphSizeInScreenSpace
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector2D UGHM_DebugMenuItemGraph::GetGraphSizeInScreenSpace()
{
	static UFunction* uFnGetGraphSizeInScreenSpace = nullptr;

	if (!uFnGetGraphSizeInScreenSpace)
	{
		uFnGetGraphSizeInScreenSpace = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphSizeInScreenSpace");
	}

	UGHM_DebugMenuItemGraph_execGetGraphSizeInScreenSpace_Params GetGraphSizeInScreenSpace_Params;

	this->ProcessEvent(uFnGetGraphSizeInScreenSpace, &GetGraphSizeInScreenSpace_Params, nullptr);

	return GetGraphSizeInScreenSpace_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphWindowSizeInScreenSpace
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector2D UGHM_DebugMenuItemGraph::GetGraphWindowSizeInScreenSpace()
{
	static UFunction* uFnGetGraphWindowSizeInScreenSpace = nullptr;

	if (!uFnGetGraphWindowSizeInScreenSpace)
	{
		uFnGetGraphWindowSizeInScreenSpace = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphWindowSizeInScreenSpace");
	}

	UGHM_DebugMenuItemGraph_execGetGraphWindowSizeInScreenSpace_Params GetGraphWindowSizeInScreenSpace_Params;

	this->ProcessEvent(uFnGetGraphWindowSizeInScreenSpace, &GetGraphWindowSizeInScreenSpace_Params, nullptr);

	return GetGraphWindowSizeInScreenSpace_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphWindowOriginInScreenSpace
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector2D UGHM_DebugMenuItemGraph::GetGraphWindowOriginInScreenSpace()
{
	static UFunction* uFnGetGraphWindowOriginInScreenSpace = nullptr;

	if (!uFnGetGraphWindowOriginInScreenSpace)
	{
		uFnGetGraphWindowOriginInScreenSpace = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemGraph.GetGraphWindowOriginInScreenSpace");
	}

	UGHM_DebugMenuItemGraph_execGetGraphWindowOriginInScreenSpace_Params GetGraphWindowOriginInScreenSpace_Params;

	this->ProcessEvent(uFnGetGraphWindowOriginInScreenSpace, &GetGraphWindowOriginInScreenSpace_Params, nullptr);

	return GetGraphWindowOriginInScreenSpace_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemInt.KeyXButton
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItemInt::KeyXButton(uint8_t btn)
{
	static UFunction* uFnKeyXButton = nullptr;

	if (!uFnKeyXButton)
	{
		uFnKeyXButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.KeyXButton");
	}

	UGHM_DebugMenuItemInt_execKeyXButton_Params KeyXButton_Params;
	memcpy_s(&KeyXButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyXButton, &KeyXButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt.KeyRight
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt::KeyRight()
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.KeyRight");
	}

	UGHM_DebugMenuItemInt_execKeyRight_Params KeyRight_Params;

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt.KeyLeft
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt::KeyLeft()
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.KeyLeft");
	}

	UGHM_DebugMenuItemInt_execKeyLeft_Params KeyLeft_Params;

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt.KeyDown
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt::KeyDown()
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.KeyDown");
	}

	UGHM_DebugMenuItemInt_execKeyDown_Params KeyDown_Params;

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt.KeyUp
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt::KeyUp()
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.KeyUp");
	}

	UGHM_DebugMenuItemInt_execKeyUp_Params KeyUp_Params;

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt.SetNum
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Num                            (CPF_Parm)

void UGHM_DebugMenuItemInt::SetNum(int32_t Num)
{
	static UFunction* uFnSetNum = nullptr;

	if (!uFnSetNum)
	{
		uFnSetNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.SetNum");
	}

	UGHM_DebugMenuItemInt_execSetNum_Params SetNum_Params;
	memcpy_s(&SetNum_Params.Num, 0x4, &Num, 0x4);

	this->ProcessEvent(uFnSetNum, &SetNum_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemInt::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.DrawMenuItem");
	}

	UGHM_DebugMenuItemInt_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt.Rev
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt::Rev()
{
	static UFunction* uFnRev = nullptr;

	if (!uFnRev)
	{
		uFnRev = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.Rev");
	}

	UGHM_DebugMenuItemInt_execRev_Params Rev_Params;

	uFnRev->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRev, &Rev_Params, nullptr);

	uFnRev->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt.UpdateRegistValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt::UpdateRegistValue()
{
	static UFunction* uFnUpdateRegistValue = nullptr;

	if (!uFnUpdateRegistValue)
	{
		uFnUpdateRegistValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.UpdateRegistValue");
	}

	UGHM_DebugMenuItemInt_execUpdateRegistValue_Params UpdateRegistValue_Params;

	uFnUpdateRegistValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateRegistValue, &UpdateRegistValue_Params, nullptr);

	uFnUpdateRegistValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt.UnRegist
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt::UnRegist()
{
	static UFunction* uFnUnRegist = nullptr;

	if (!uFnUnRegist)
	{
		uFnUnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.UnRegist");
	}

	UGHM_DebugMenuItemInt_execUnRegist_Params UnRegist_Params;

	uFnUnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnRegist, &UnRegist_Params, nullptr);

	uFnUnRegist->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt.Regist
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemInt::Regist(int32_t& editvalue)
{
	static UFunction* uFnRegist = nullptr;

	if (!uFnRegist)
	{
		uFnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.Regist");
	}

	UGHM_DebugMenuItemInt_execRegist_Params Regist_Params;
	memcpy_s(&Regist_Params.editvalue, 0x4, &editvalue, 0x4);

	uFnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegist, &Regist_Params, nullptr);

	uFnRegist->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0x4, &Regist_Params.editvalue, 0x4);
};

// Function GHMEngine.GHM_DebugMenuItemInt.ChangeNum
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        addnum                         (CPF_Parm)

void UGHM_DebugMenuItemInt::ChangeNum(int32_t addnum)
{
	static UFunction* uFnChangeNum = nullptr;

	if (!uFnChangeNum)
	{
		uFnChangeNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.ChangeNum");
	}

	UGHM_DebugMenuItemInt_execChangeNum_Params ChangeNum_Params;
	memcpy_s(&ChangeNum_Params.addnum, 0x4, &addnum, 0x4);

	uFnChangeNum->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnChangeNum, &ChangeNum_Params, nullptr);

	uFnChangeNum->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt.DrawSelectedItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemInt::DrawSelectedItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawSelectedItem = nullptr;

	if (!uFnDrawSelectedItem)
	{
		uFnDrawSelectedItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.DrawSelectedItem");
	}

	UGHM_DebugMenuItemInt_execDrawSelectedItem_Params DrawSelectedItem_Params;
	memcpy_s(&DrawSelectedItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawSelectedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawSelectedItem, &DrawSelectedItem_Params, nullptr);

	uFnDrawSelectedItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt.DrawDefaultItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemInt::DrawDefaultItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawDefaultItem = nullptr;

	if (!uFnDrawDefaultItem)
	{
		uFnDrawDefaultItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt.DrawDefaultItem");
	}

	UGHM_DebugMenuItemInt_execDrawDefaultItem_Params DrawDefaultItem_Params;
	memcpy_s(&DrawDefaultItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawDefaultItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawDefaultItem, &DrawDefaultItem_Params, nullptr);

	uFnDrawDefaultItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt64.KeyXButton
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItemInt64::KeyXButton(uint8_t btn)
{
	static UFunction* uFnKeyXButton = nullptr;

	if (!uFnKeyXButton)
	{
		uFnKeyXButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.KeyXButton");
	}

	UGHM_DebugMenuItemInt64_execKeyXButton_Params KeyXButton_Params;
	memcpy_s(&KeyXButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyXButton, &KeyXButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt64.KeyRight
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt64::KeyRight()
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.KeyRight");
	}

	UGHM_DebugMenuItemInt64_execKeyRight_Params KeyRight_Params;

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt64.KeyLeft
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt64::KeyLeft()
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.KeyLeft");
	}

	UGHM_DebugMenuItemInt64_execKeyLeft_Params KeyLeft_Params;

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt64.KeyDown
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt64::KeyDown()
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.KeyDown");
	}

	UGHM_DebugMenuItemInt64_execKeyDown_Params KeyDown_Params;

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt64.KeyUp
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt64::KeyUp()
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.KeyUp");
	}

	UGHM_DebugMenuItemInt64_execKeyUp_Params KeyUp_Params;

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt64.SetNum
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint64_t                       Num                            (CPF_Parm)

void UGHM_DebugMenuItemInt64::SetNum(uint64_t Num)
{
	static UFunction* uFnSetNum = nullptr;

	if (!uFnSetNum)
	{
		uFnSetNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.SetNum");
	}

	UGHM_DebugMenuItemInt64_execSetNum_Params SetNum_Params;
	SetNum_Params.Num = Num;

	this->ProcessEvent(uFnSetNum, &SetNum_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt64.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemInt64::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.DrawMenuItem");
	}

	UGHM_DebugMenuItemInt64_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemInt64.Rev
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt64::Rev()
{
	static UFunction* uFnRev = nullptr;

	if (!uFnRev)
	{
		uFnRev = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.Rev");
	}

	UGHM_DebugMenuItemInt64_execRev_Params Rev_Params;

	uFnRev->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRev, &Rev_Params, nullptr);

	uFnRev->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt64.UpdateRegistValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt64::UpdateRegistValue()
{
	static UFunction* uFnUpdateRegistValue = nullptr;

	if (!uFnUpdateRegistValue)
	{
		uFnUpdateRegistValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.UpdateRegistValue");
	}

	UGHM_DebugMenuItemInt64_execUpdateRegistValue_Params UpdateRegistValue_Params;

	uFnUpdateRegistValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateRegistValue, &UpdateRegistValue_Params, nullptr);

	uFnUpdateRegistValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt64.UnRegist
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemInt64::UnRegist()
{
	static UFunction* uFnUnRegist = nullptr;

	if (!uFnUnRegist)
	{
		uFnUnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.UnRegist");
	}

	UGHM_DebugMenuItemInt64_execUnRegist_Params UnRegist_Params;

	uFnUnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnRegist, &UnRegist_Params, nullptr);

	uFnUnRegist->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt64.Regist
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint64_t                       editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemInt64::Regist(uint64_t& editvalue)
{
	static UFunction* uFnRegist = nullptr;

	if (!uFnRegist)
	{
		uFnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.Regist");
	}

	UGHM_DebugMenuItemInt64_execRegist_Params Regist_Params;
	editvalue = Regist_Params.editvalue;

	uFnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegist, &Regist_Params, nullptr);

	uFnRegist->FunctionFlags |= 0x400;

	editvalue = Regist_Params.editvalue;
};

// Function GHMEngine.GHM_DebugMenuItemInt64.ChangeNum
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint64_t                       addnum                         (CPF_Parm)

void UGHM_DebugMenuItemInt64::ChangeNum(uint64_t addnum)
{
	static UFunction* uFnChangeNum = nullptr;

	if (!uFnChangeNum)
	{
		uFnChangeNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.ChangeNum");
	}

	UGHM_DebugMenuItemInt64_execChangeNum_Params ChangeNum_Params;
	ChangeNum_Params.addnum = addnum;

	uFnChangeNum->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnChangeNum, &ChangeNum_Params, nullptr);

	uFnChangeNum->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt64.DrawSelectedItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemInt64::DrawSelectedItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawSelectedItem = nullptr;

	if (!uFnDrawSelectedItem)
	{
		uFnDrawSelectedItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.DrawSelectedItem");
	}

	UGHM_DebugMenuItemInt64_execDrawSelectedItem_Params DrawSelectedItem_Params;
	memcpy_s(&DrawSelectedItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawSelectedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawSelectedItem, &DrawSelectedItem_Params, nullptr);

	uFnDrawSelectedItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemInt64.DrawDefaultItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemInt64::DrawDefaultItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawDefaultItem = nullptr;

	if (!uFnDrawDefaultItem)
	{
		uFnDrawDefaultItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemInt64.DrawDefaultItem");
	}

	UGHM_DebugMenuItemInt64_execDrawDefaultItem_Params DrawDefaultItem_Params;
	memcpy_s(&DrawDefaultItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawDefaultItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawDefaultItem, &DrawDefaultItem_Params, nullptr);

	uFnDrawDefaultItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.LeftStick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItemIntArray::LeftStick(float moveX, float moveY)
{
	static UFunction* uFnLeftStick = nullptr;

	if (!uFnLeftStick)
	{
		uFnLeftStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.LeftStick");
	}

	UGHM_DebugMenuItemIntArray_execLeftStick_Params LeftStick_Params;
	memcpy_s(&LeftStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&LeftStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnLeftStick, &LeftStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.KeyXButton
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItemIntArray::KeyXButton(uint8_t btn)
{
	static UFunction* uFnKeyXButton = nullptr;

	if (!uFnKeyXButton)
	{
		uFnKeyXButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.KeyXButton");
	}

	UGHM_DebugMenuItemIntArray_execKeyXButton_Params KeyXButton_Params;
	memcpy_s(&KeyXButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyXButton, &KeyXButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.KeyRight
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemIntArray::KeyRight()
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.KeyRight");
	}

	UGHM_DebugMenuItemIntArray_execKeyRight_Params KeyRight_Params;

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.KeyLeft
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemIntArray::KeyLeft()
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.KeyLeft");
	}

	UGHM_DebugMenuItemIntArray_execKeyLeft_Params KeyLeft_Params;

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.KeyDown
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemIntArray::KeyDown()
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.KeyDown");
	}

	UGHM_DebugMenuItemIntArray_execKeyDown_Params KeyDown_Params;

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.KeyUp
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemIntArray::KeyUp()
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.KeyUp");
	}

	UGHM_DebugMenuItemIntArray_execKeyUp_Params KeyUp_Params;

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.SetNum
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Num                            (CPF_Parm)

void UGHM_DebugMenuItemIntArray::SetNum(float Num)
{
	static UFunction* uFnSetNum = nullptr;

	if (!uFnSetNum)
	{
		uFnSetNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.SetNum");
	}

	UGHM_DebugMenuItemIntArray_execSetNum_Params SetNum_Params;
	memcpy_s(&SetNum_Params.Num, 0x4, &Num, 0x4);

	this->ProcessEvent(uFnSetNum, &SetNum_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemIntArray::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.DrawMenuItem");
	}

	UGHM_DebugMenuItemIntArray_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.SetParamCellWidth
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Width                          (CPF_Parm)

void UGHM_DebugMenuItemIntArray::SetParamCellWidth(int32_t Width)
{
	static UFunction* uFnSetParamCellWidth = nullptr;

	if (!uFnSetParamCellWidth)
	{
		uFnSetParamCellWidth = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.SetParamCellWidth");
	}

	UGHM_DebugMenuItemIntArray_execSetParamCellWidth_Params SetParamCellWidth_Params;
	memcpy_s(&SetParamCellWidth_Params.Width, 0x4, &Width, 0x4);

	this->ProcessEvent(uFnSetParamCellWidth, &SetParamCellWidth_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.SetParamName
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  pname                          (CPF_Parm | CPF_NeedCtorLink)

void UGHM_DebugMenuItemIntArray::SetParamName(int32_t Index, class FString pname)
{
	static UFunction* uFnSetParamName = nullptr;

	if (!uFnSetParamName)
	{
		uFnSetParamName = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.SetParamName");
	}

	UGHM_DebugMenuItemIntArray_execSetParamName_Params SetParamName_Params;
	memcpy_s(&SetParamName_Params.Index, 0x4, &Index, 0x4);
	memcpy_s(&SetParamName_Params.pname, 0x10, &pname, 0x10);

	this->ProcessEvent(uFnSetParamName, &SetParamName_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.Rev
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemIntArray::Rev()
{
	static UFunction* uFnRev = nullptr;

	if (!uFnRev)
	{
		uFnRev = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.Rev");
	}

	UGHM_DebugMenuItemIntArray_execRev_Params Rev_Params;

	uFnRev->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRev, &Rev_Params, nullptr);

	uFnRev->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.UpdateRegistValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemIntArray::UpdateRegistValue()
{
	static UFunction* uFnUpdateRegistValue = nullptr;

	if (!uFnUpdateRegistValue)
	{
		uFnUpdateRegistValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.UpdateRegistValue");
	}

	UGHM_DebugMenuItemIntArray_execUpdateRegistValue_Params UpdateRegistValue_Params;

	uFnUpdateRegistValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateRegistValue, &UpdateRegistValue_Params, nullptr);

	uFnUpdateRegistValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.UnRegist
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemIntArray::UnRegist()
{
	static UFunction* uFnUnRegist = nullptr;

	if (!uFnUnRegist)
	{
		uFnUnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.UnRegist");
	}

	UGHM_DebugMenuItemIntArray_execUnRegist_Params UnRegist_Params;

	uFnUnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnRegist, &UnRegist_Params, nullptr);

	uFnUnRegist->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.Regist
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<int32_t>                editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGHM_DebugMenuItemIntArray::Regist(TArray<int32_t>& editvalue)
{
	static UFunction* uFnRegist = nullptr;

	if (!uFnRegist)
	{
		uFnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.Regist");
	}

	UGHM_DebugMenuItemIntArray_execRegist_Params Regist_Params;
	memcpy_s(&Regist_Params.editvalue, 0x10, &editvalue, 0x10);

	uFnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegist, &Regist_Params, nullptr);

	uFnRegist->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0x10, &Regist_Params.editvalue, 0x10);
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.ChangeNum
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        addnum                         (CPF_Parm)

void UGHM_DebugMenuItemIntArray::ChangeNum(int32_t addnum)
{
	static UFunction* uFnChangeNum = nullptr;

	if (!uFnChangeNum)
	{
		uFnChangeNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.ChangeNum");
	}

	UGHM_DebugMenuItemIntArray_execChangeNum_Params ChangeNum_Params;
	memcpy_s(&ChangeNum_Params.addnum, 0x4, &addnum, 0x4);

	uFnChangeNum->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnChangeNum, &ChangeNum_Params, nullptr);

	uFnChangeNum->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.DrawSelectedItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemIntArray::DrawSelectedItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawSelectedItem = nullptr;

	if (!uFnDrawSelectedItem)
	{
		uFnDrawSelectedItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.DrawSelectedItem");
	}

	UGHM_DebugMenuItemIntArray_execDrawSelectedItem_Params DrawSelectedItem_Params;
	memcpy_s(&DrawSelectedItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawSelectedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawSelectedItem, &DrawSelectedItem_Params, nullptr);

	uFnDrawSelectedItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemIntArray.DrawDefaultItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemIntArray::DrawDefaultItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawDefaultItem = nullptr;

	if (!uFnDrawDefaultItem)
	{
		uFnDrawDefaultItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemIntArray.DrawDefaultItem");
	}

	UGHM_DebugMenuItemIntArray_execDrawDefaultItem_Params DrawDefaultItem_Params;
	memcpy_s(&DrawDefaultItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawDefaultItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawDefaultItem, &DrawDefaultItem_Params, nullptr);

	uFnDrawDefaultItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemList.Cancel
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemList::Cancel()
{
	static UFunction* uFnCancel = nullptr;

	if (!uFnCancel)
	{
		uFnCancel = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.Cancel");
	}

	UGHM_DebugMenuItemList_execCancel_Params Cancel_Params;

	this->ProcessEvent(uFnCancel, &Cancel_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.KeyRight
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemList::KeyRight()
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.KeyRight");
	}

	UGHM_DebugMenuItemList_execKeyRight_Params KeyRight_Params;

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.KeyLeft
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemList::KeyLeft()
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.KeyLeft");
	}

	UGHM_DebugMenuItemList_execKeyLeft_Params KeyLeft_Params;

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.KeyDown
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemList::KeyDown()
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.KeyDown");
	}

	UGHM_DebugMenuItemList_execKeyDown_Params KeyDown_Params;

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.KeyUp
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemList::KeyUp()
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.KeyUp");
	}

	UGHM_DebugMenuItemList_execKeyUp_Params KeyUp_Params;

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.CreateSkeltalMeshAnimList
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USkeletalMeshComponent*  SMC                            (CPF_Parm | CPF_EditInline)

void UGHM_DebugMenuItemList::CreateSkeltalMeshAnimList(class USkeletalMeshComponent* SMC)
{
	static UFunction* uFnCreateSkeltalMeshAnimList = nullptr;

	if (!uFnCreateSkeltalMeshAnimList)
	{
		uFnCreateSkeltalMeshAnimList = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.CreateSkeltalMeshAnimList");
	}

	UGHM_DebugMenuItemList_execCreateSkeltalMeshAnimList_Params CreateSkeltalMeshAnimList_Params;
	memcpy_s(&CreateSkeltalMeshAnimList_Params.SMC, 0x8, &SMC, 0x8);

	this->ProcessEvent(uFnCreateSkeltalMeshAnimList, &CreateSkeltalMeshAnimList_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemList::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.DrawMenuItem");
	}

	UGHM_DebugMenuItemList_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.GetSelectIndex
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_DebugMenuItemList::GetSelectIndex()
{
	static UFunction* uFnGetSelectIndex = nullptr;

	if (!uFnGetSelectIndex)
	{
		uFnGetSelectIndex = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.GetSelectIndex");
	}

	UGHM_DebugMenuItemList_execGetSelectIndex_Params GetSelectIndex_Params;

	this->ProcessEvent(uFnGetSelectIndex, &GetSelectIndex_Params, nullptr);

	return GetSelectIndex_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemList.GetNameValue
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UGHM_DebugMenuItemList::GetNameValue()
{
	static UFunction* uFnGetNameValue = nullptr;

	if (!uFnGetNameValue)
	{
		uFnGetNameValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.GetNameValue");
	}

	UGHM_DebugMenuItemList_execGetNameValue_Params GetNameValue_Params;

	this->ProcessEvent(uFnGetNameValue, &GetNameValue_Params, nullptr);

	return GetNameValue_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemList.GetFloatValue
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UGHM_DebugMenuItemList::GetFloatValue()
{
	static UFunction* uFnGetFloatValue = nullptr;

	if (!uFnGetFloatValue)
	{
		uFnGetFloatValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.GetFloatValue");
	}

	UGHM_DebugMenuItemList_execGetFloatValue_Params GetFloatValue_Params;

	this->ProcessEvent(uFnGetFloatValue, &GetFloatValue_Params, nullptr);

	return GetFloatValue_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemList.GetIntValue
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_DebugMenuItemList::GetIntValue()
{
	static UFunction* uFnGetIntValue = nullptr;

	if (!uFnGetIntValue)
	{
		uFnGetIntValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.GetIntValue");
	}

	UGHM_DebugMenuItemList_execGetIntValue_Params GetIntValue_Params;

	this->ProcessEvent(uFnGetIntValue, &GetIntValue_Params, nullptr);

	return GetIntValue_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemList.DelListAll
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemList::DelListAll()
{
	static UFunction* uFnDelListAll = nullptr;

	if (!uFnDelListAll)
	{
		uFnDelListAll = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.DelListAll");
	}

	UGHM_DebugMenuItemList_execDelListAll_Params DelListAll_Params;

	this->ProcessEvent(uFnDelListAll, &DelListAll_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.DelListChild
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Index                          (CPF_Parm)

void UGHM_DebugMenuItemList::DelListChild(int32_t Index)
{
	static UFunction* uFnDelListChild = nullptr;

	if (!uFnDelListChild)
	{
		uFnDelListChild = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.DelListChild");
	}

	UGHM_DebugMenuItemList_execDelListChild_Params DelListChild_Params;
	memcpy_s(&DelListChild_Params.Index, 0x4, &Index, 0x4);

	this->ProcessEvent(uFnDelListChild, &DelListChild_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.DelListChildByName
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  iname                          (CPF_Parm | CPF_NeedCtorLink)

void UGHM_DebugMenuItemList::DelListChildByName(class FString iname)
{
	static UFunction* uFnDelListChildByName = nullptr;

	if (!uFnDelListChildByName)
	{
		uFnDelListChildByName = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.DelListChildByName");
	}

	UGHM_DebugMenuItemList_execDelListChildByName_Params DelListChildByName_Params;
	memcpy_s(&DelListChildByName_Params.iname, 0x10, &iname, 0x10);

	this->ProcessEvent(uFnDelListChildByName, &DelListChildByName_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.AddListChildF
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  iname                          (CPF_Parm | CPF_NeedCtorLink)
// float                          Value                          (CPF_Parm)

void UGHM_DebugMenuItemList::AddListChildF(class FString iname, float Value)
{
	static UFunction* uFnAddListChildF = nullptr;

	if (!uFnAddListChildF)
	{
		uFnAddListChildF = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.AddListChildF");
	}

	UGHM_DebugMenuItemList_execAddListChildF_Params AddListChildF_Params;
	memcpy_s(&AddListChildF_Params.iname, 0x10, &iname, 0x10);
	memcpy_s(&AddListChildF_Params.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(uFnAddListChildF, &AddListChildF_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.AddListChildI
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  iname                          (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Value                          (CPF_Parm)

void UGHM_DebugMenuItemList::AddListChildI(class FString iname, int32_t Value)
{
	static UFunction* uFnAddListChildI = nullptr;

	if (!uFnAddListChildI)
	{
		uFnAddListChildI = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.AddListChildI");
	}

	UGHM_DebugMenuItemList_execAddListChildI_Params AddListChildI_Params;
	memcpy_s(&AddListChildI_Params.iname, 0x10, &iname, 0x10);
	memcpy_s(&AddListChildI_Params.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(uFnAddListChildI, &AddListChildI_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.ChangeListType
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Type                           (CPF_Parm)

void UGHM_DebugMenuItemList::ChangeListType(uint8_t Type)
{
	static UFunction* uFnChangeListType = nullptr;

	if (!uFnChangeListType)
	{
		uFnChangeListType = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.ChangeListType");
	}

	UGHM_DebugMenuItemList_execChangeListType_Params ChangeListType_Params;
	memcpy_s(&ChangeListType_Params.Type, 0x1, &Type, 0x1);

	this->ProcessEvent(uFnChangeListType, &ChangeListType_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.RealTimeValueChange
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRTFlag                        (CPF_Parm)

void UGHM_DebugMenuItemList::RealTimeValueChange(unsigned long bRTFlag)
{
	static UFunction* uFnRealTimeValueChange = nullptr;

	if (!uFnRealTimeValueChange)
	{
		uFnRealTimeValueChange = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.RealTimeValueChange");
	}

	UGHM_DebugMenuItemList_execRealTimeValueChange_Params RealTimeValueChange_Params;
	RealTimeValueChange_Params.bRTFlag = bRTFlag;

	this->ProcessEvent(uFnRealTimeValueChange, &RealTimeValueChange_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemList.UpdateRegistValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemList::UpdateRegistValue()
{
	static UFunction* uFnUpdateRegistValue = nullptr;

	if (!uFnUpdateRegistValue)
	{
		uFnUpdateRegistValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.UpdateRegistValue");
	}

	UGHM_DebugMenuItemList_execUpdateRegistValue_Params UpdateRegistValue_Params;

	uFnUpdateRegistValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateRegistValue, &UpdateRegistValue_Params, nullptr);

	uFnUpdateRegistValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemList.ChangeValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Num                            (CPF_Parm)

void UGHM_DebugMenuItemList::ChangeValue(int32_t Num)
{
	static UFunction* uFnChangeValue = nullptr;

	if (!uFnChangeValue)
	{
		uFnChangeValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.ChangeValue");
	}

	UGHM_DebugMenuItemList_execChangeValue_Params ChangeValue_Params;
	memcpy_s(&ChangeValue_Params.Num, 0x4, &Num, 0x4);

	uFnChangeValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnChangeValue, &ChangeValue_Params, nullptr);

	uFnChangeValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemList.UnRegist
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemList::UnRegist()
{
	static UFunction* uFnUnRegist = nullptr;

	if (!uFnUnRegist)
	{
		uFnUnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.UnRegist");
	}

	UGHM_DebugMenuItemList_execUnRegist_Params UnRegist_Params;

	uFnUnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnRegist, &UnRegist_Params, nullptr);

	uFnUnRegist->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemList.RegistF
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemList::RegistF(float& editvalue)
{
	static UFunction* uFnRegistF = nullptr;

	if (!uFnRegistF)
	{
		uFnRegistF = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.RegistF");
	}

	UGHM_DebugMenuItemList_execRegistF_Params RegistF_Params;
	memcpy_s(&RegistF_Params.editvalue, 0x4, &editvalue, 0x4);

	uFnRegistF->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegistF, &RegistF_Params, nullptr);

	uFnRegistF->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0x4, &RegistF_Params.editvalue, 0x4);
};

// Function GHMEngine.GHM_DebugMenuItemList.RegistI
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemList::RegistI(int32_t& editvalue)
{
	static UFunction* uFnRegistI = nullptr;

	if (!uFnRegistI)
	{
		uFnRegistI = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemList.RegistI");
	}

	UGHM_DebugMenuItemList_execRegistI_Params RegistI_Params;
	memcpy_s(&RegistI_Params.editvalue, 0x4, &editvalue, 0x4);

	uFnRegistI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegistI, &RegistI_Params, nullptr);

	uFnRegistI->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0x4, &RegistI_Params.editvalue, 0x4);
};

// Function GHMEngine.GHM_DebugMenuItemVector.LeftStick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItemVector::LeftStick(float moveX, float moveY)
{
	static UFunction* uFnLeftStick = nullptr;

	if (!uFnLeftStick)
	{
		uFnLeftStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.LeftStick");
	}

	UGHM_DebugMenuItemVector_execLeftStick_Params LeftStick_Params;
	memcpy_s(&LeftStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&LeftStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnLeftStick, &LeftStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemVector.KeyXButton
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugMenuItemVector::KeyXButton(uint8_t btn)
{
	static UFunction* uFnKeyXButton = nullptr;

	if (!uFnKeyXButton)
	{
		uFnKeyXButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.KeyXButton");
	}

	UGHM_DebugMenuItemVector_execKeyXButton_Params KeyXButton_Params;
	memcpy_s(&KeyXButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyXButton, &KeyXButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemVector.KeyRight
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemVector::KeyRight()
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.KeyRight");
	}

	UGHM_DebugMenuItemVector_execKeyRight_Params KeyRight_Params;

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemVector.KeyLeft
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemVector::KeyLeft()
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.KeyLeft");
	}

	UGHM_DebugMenuItemVector_execKeyLeft_Params KeyLeft_Params;

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemVector.KeyDown
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemVector::KeyDown()
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.KeyDown");
	}

	UGHM_DebugMenuItemVector_execKeyDown_Params KeyDown_Params;

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemVector.KeyUp
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemVector::KeyUp()
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.KeyUp");
	}

	UGHM_DebugMenuItemVector_execKeyUp_Params KeyUp_Params;

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemVector.SetNum
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 Num                            (CPF_Parm)

void UGHM_DebugMenuItemVector::SetNum(struct FVector Num)
{
	static UFunction* uFnSetNum = nullptr;

	if (!uFnSetNum)
	{
		uFnSetNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.SetNum");
	}

	UGHM_DebugMenuItemVector_execSetNum_Params SetNum_Params;
	memcpy_s(&SetNum_Params.Num, 0xC, &Num, 0xC);

	this->ProcessEvent(uFnSetNum, &SetNum_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemVector.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemVector::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.DrawMenuItem");
	}

	UGHM_DebugMenuItemVector_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemVector.Rev
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemVector::Rev()
{
	static UFunction* uFnRev = nullptr;

	if (!uFnRev)
	{
		uFnRev = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.Rev");
	}

	UGHM_DebugMenuItemVector_execRev_Params Rev_Params;

	uFnRev->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRev, &Rev_Params, nullptr);

	uFnRev->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemVector.UpdateRegistValue
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemVector::UpdateRegistValue()
{
	static UFunction* uFnUpdateRegistValue = nullptr;

	if (!uFnUpdateRegistValue)
	{
		uFnUpdateRegistValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.UpdateRegistValue");
	}

	UGHM_DebugMenuItemVector_execUpdateRegistValue_Params UpdateRegistValue_Params;

	uFnUpdateRegistValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateRegistValue, &UpdateRegistValue_Params, nullptr);

	uFnUpdateRegistValue->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemVector.UnRegist
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemVector::UnRegist()
{
	static UFunction* uFnUnRegist = nullptr;

	if (!uFnUnRegist)
	{
		uFnUnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.UnRegist");
	}

	UGHM_DebugMenuItemVector_execUnRegist_Params UnRegist_Params;

	uFnUnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnRegist, &UnRegist_Params, nullptr);

	uFnUnRegist->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemVector.Regist
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 editvalue                      (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemVector::Regist(struct FVector& editvalue)
{
	static UFunction* uFnRegist = nullptr;

	if (!uFnRegist)
	{
		uFnRegist = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.Regist");
	}

	UGHM_DebugMenuItemVector_execRegist_Params Regist_Params;
	memcpy_s(&Regist_Params.editvalue, 0xC, &editvalue, 0xC);

	uFnRegist->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegist, &Regist_Params, nullptr);

	uFnRegist->FunctionFlags |= 0x400;

	memcpy_s(&editvalue, 0xC, &Regist_Params.editvalue, 0xC);
};

// Function GHMEngine.GHM_DebugMenuItemVector.ChangeNum
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        addnum                         (CPF_Parm)

void UGHM_DebugMenuItemVector::ChangeNum(int32_t addnum)
{
	static UFunction* uFnChangeNum = nullptr;

	if (!uFnChangeNum)
	{
		uFnChangeNum = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.ChangeNum");
	}

	UGHM_DebugMenuItemVector_execChangeNum_Params ChangeNum_Params;
	memcpy_s(&ChangeNum_Params.addnum, 0x4, &addnum, 0x4);

	uFnChangeNum->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnChangeNum, &ChangeNum_Params, nullptr);

	uFnChangeNum->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemVector.DrawSelectedItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemVector::DrawSelectedItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawSelectedItem = nullptr;

	if (!uFnDrawSelectedItem)
	{
		uFnDrawSelectedItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.DrawSelectedItem");
	}

	UGHM_DebugMenuItemVector_execDrawSelectedItem_Params DrawSelectedItem_Params;
	memcpy_s(&DrawSelectedItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawSelectedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawSelectedItem, &DrawSelectedItem_Params, nullptr);

	uFnDrawSelectedItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemVector.DrawDefaultItem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemVector::DrawDefaultItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawDefaultItem = nullptr;

	if (!uFnDrawDefaultItem)
	{
		uFnDrawDefaultItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemVector.DrawDefaultItem");
	}

	UGHM_DebugMenuItemVector_execDrawDefaultItem_Params DrawDefaultItem_Params;
	memcpy_s(&DrawDefaultItem_Params.Canvas, 0x8, &Canvas, 0x8);

	uFnDrawDefaultItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDrawDefaultItem, &DrawDefaultItem_Params, nullptr);

	uFnDrawDefaultItem->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_DebugMenuItemWindow.LeftStick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItemWindow::LeftStick(float moveX, float moveY)
{
	static UFunction* uFnLeftStick = nullptr;

	if (!uFnLeftStick)
	{
		uFnLeftStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemWindow.LeftStick");
	}

	UGHM_DebugMenuItemWindow_execLeftStick_Params LeftStick_Params;
	memcpy_s(&LeftStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&LeftStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnLeftStick, &LeftStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemWindow.RightStick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItemWindow::RightStick(float moveX, float moveY)
{
	static UFunction* uFnRightStick = nullptr;

	if (!uFnRightStick)
	{
		uFnRightStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemWindow.RightStick");
	}

	UGHM_DebugMenuItemWindow_execRightStick_Params RightStick_Params;
	memcpy_s(&RightStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&RightStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnRightStick, &RightStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemWindow.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemWindow::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemWindow.DrawMenuItem");
	}

	UGHM_DebugMenuItemWindow_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemWindow.SetWindowName
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  wname                          (CPF_Parm | CPF_NeedCtorLink)

void UGHM_DebugMenuItemWindow::SetWindowName(class FString wname)
{
	static UFunction* uFnSetWindowName = nullptr;

	if (!uFnSetWindowName)
	{
		uFnSetWindowName = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemWindow.SetWindowName");
	}

	UGHM_DebugMenuItemWindow_execSetWindowName_Params SetWindowName_Params;
	memcpy_s(&SetWindowName_Params.wname, 0x10, &wname, 0x10);

	this->ProcessEvent(uFnSetWindowName, &SetWindowName_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.Select
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemColorPicker::Select()
{
	static UFunction* uFnSelect = nullptr;

	if (!uFnSelect)
	{
		uFnSelect = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColorPicker.Select");
	}

	UGHM_DebugMenuItemColorPicker_execSelect_Params Select_Params;

	this->ProcessEvent(uFnSelect, &Select_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.LeftStick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          moveX                          (CPF_Parm)
// float                          moveY                          (CPF_Parm)

void UGHM_DebugMenuItemColorPicker::LeftStick(float moveX, float moveY)
{
	static UFunction* uFnLeftStick = nullptr;

	if (!uFnLeftStick)
	{
		uFnLeftStick = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColorPicker.LeftStick");
	}

	UGHM_DebugMenuItemColorPicker_execLeftStick_Params LeftStick_Params;
	memcpy_s(&LeftStick_Params.moveX, 0x4, &moveX, 0x4);
	memcpy_s(&LeftStick_Params.moveY, 0x4, &moveY, 0x4);

	this->ProcessEvent(uFnLeftStick, &LeftStick_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.GetColor
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FColor UGHM_DebugMenuItemColorPicker::GetColor()
{
	static UFunction* uFnGetColor = nullptr;

	if (!uFnGetColor)
	{
		uFnGetColor = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColorPicker.GetColor");
	}

	UGHM_DebugMenuItemColorPicker_execGetColor_Params GetColor_Params;

	this->ProcessEvent(uFnGetColor, &GetColor_Params, nullptr);

	return GetColor_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.SetColor
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  SetColor                       (CPF_Parm)

void UGHM_DebugMenuItemColorPicker::SetColor(struct FColor SetColor)
{
	static UFunction* uFnSetColor = nullptr;

	if (!uFnSetColor)
	{
		uFnSetColor = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColorPicker.SetColor");
	}

	UGHM_DebugMenuItemColorPicker_execSetColor_Params SetColor_Params;
	memcpy_s(&SetColor_Params.SetColor, 0x4, &SetColor, 0x4);

	this->ProcessEvent(uFnSetColor, &SetColor_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.DrawMenuItem
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemColorPicker::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColorPicker.DrawMenuItem");
	}

	UGHM_DebugMenuItemColorPicker_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.RGB2HSV
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        R                              (CPF_Parm)
// uint8_t                        G                              (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)
// int32_t                        H                              (CPF_Parm | CPF_OutParm)
// uint8_t                        S                              (CPF_Parm | CPF_OutParm)
// uint8_t                        V                              (CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemColorPicker::RGB2HSV(uint8_t R, uint8_t G, uint8_t B, int32_t& H, uint8_t& S, uint8_t& V)
{
	static UFunction* uFnRGB2HSV = nullptr;

	if (!uFnRGB2HSV)
	{
		uFnRGB2HSV = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColorPicker.RGB2HSV");
	}

	UGHM_DebugMenuItemColorPicker_execRGB2HSV_Params RGB2HSV_Params;
	memcpy_s(&RGB2HSV_Params.R, 0x1, &R, 0x1);
	memcpy_s(&RGB2HSV_Params.G, 0x1, &G, 0x1);
	memcpy_s(&RGB2HSV_Params.B, 0x1, &B, 0x1);
	memcpy_s(&RGB2HSV_Params.H, 0x4, &H, 0x4);
	memcpy_s(&RGB2HSV_Params.S, 0x1, &S, 0x1);
	memcpy_s(&RGB2HSV_Params.V, 0x1, &V, 0x1);

	uFnRGB2HSV->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRGB2HSV, &RGB2HSV_Params, nullptr);

	uFnRGB2HSV->FunctionFlags |= 0x400;

	memcpy_s(&H, 0x4, &RGB2HSV_Params.H, 0x4);
	memcpy_s(&S, 0x1, &RGB2HSV_Params.S, 0x1);
	memcpy_s(&V, 0x1, &RGB2HSV_Params.V, 0x1);
};

// Function GHMEngine.GHM_DebugMenuItemColorPicker.HSV2RGB
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        H                              (CPF_Parm)
// uint8_t                        S                              (CPF_Parm)
// uint8_t                        V                              (CPF_Parm)
// uint8_t                        R                              (CPF_Parm | CPF_OutParm)
// uint8_t                        G                              (CPF_Parm | CPF_OutParm)
// uint8_t                        B                              (CPF_Parm | CPF_OutParm)

void UGHM_DebugMenuItemColorPicker::HSV2RGB(int32_t H, uint8_t S, uint8_t V, uint8_t& R, uint8_t& G, uint8_t& B)
{
	static UFunction* uFnHSV2RGB = nullptr;

	if (!uFnHSV2RGB)
	{
		uFnHSV2RGB = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemColorPicker.HSV2RGB");
	}

	UGHM_DebugMenuItemColorPicker_execHSV2RGB_Params HSV2RGB_Params;
	memcpy_s(&HSV2RGB_Params.H, 0x4, &H, 0x4);
	memcpy_s(&HSV2RGB_Params.S, 0x1, &S, 0x1);
	memcpy_s(&HSV2RGB_Params.V, 0x1, &V, 0x1);
	memcpy_s(&HSV2RGB_Params.R, 0x1, &R, 0x1);
	memcpy_s(&HSV2RGB_Params.G, 0x1, &G, 0x1);
	memcpy_s(&HSV2RGB_Params.B, 0x1, &B, 0x1);

	uFnHSV2RGB->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHSV2RGB, &HSV2RGB_Params, nullptr);

	uFnHSV2RGB->FunctionFlags |= 0x400;

	memcpy_s(&R, 0x1, &HSV2RGB_Params.R, 0x1);
	memcpy_s(&G, 0x1, &HSV2RGB_Params.G, 0x1);
	memcpy_s(&B, 0x1, &HSV2RGB_Params.B, 0x1);
};

// Function GHMEngine.GHM_HitCheck.HitCheck_Capsule_Sphere
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 CapPos1                        (CPF_Parm)
// struct FVector                 CapPos2                        (CPF_Parm)
// float                          CapR                           (CPF_Parm)
// struct FVector                 SpherePos                      (CPF_Parm)
// float                          SphereR                        (CPF_Parm)

bool UGHM_HitCheck::HitCheck_Capsule_Sphere(struct FVector CapPos1, struct FVector CapPos2, float CapR, struct FVector SpherePos, float SphereR)
{
	static UFunction* uFnHitCheck_Capsule_Sphere = nullptr;

	if (!uFnHitCheck_Capsule_Sphere)
	{
		uFnHitCheck_Capsule_Sphere = UFunction::FindFunction("Function GHMEngine.GHM_HitCheck.HitCheck_Capsule_Sphere");
	}

	UGHM_HitCheck_execHitCheck_Capsule_Sphere_Params HitCheck_Capsule_Sphere_Params;
	memcpy_s(&HitCheck_Capsule_Sphere_Params.CapPos1, 0xC, &CapPos1, 0xC);
	memcpy_s(&HitCheck_Capsule_Sphere_Params.CapPos2, 0xC, &CapPos2, 0xC);
	memcpy_s(&HitCheck_Capsule_Sphere_Params.CapR, 0x4, &CapR, 0x4);
	memcpy_s(&HitCheck_Capsule_Sphere_Params.SpherePos, 0xC, &SpherePos, 0xC);
	memcpy_s(&HitCheck_Capsule_Sphere_Params.SphereR, 0x4, &SphereR, 0x4);

	uFnHitCheck_Capsule_Sphere->FunctionFlags |= ~0x400;

	UGHM_HitCheck::StaticClass()->ProcessEvent(uFnHitCheck_Capsule_Sphere, &HitCheck_Capsule_Sphere_Params, nullptr);

	uFnHitCheck_Capsule_Sphere->FunctionFlags |= 0x400;

	return HitCheck_Capsule_Sphere_Params.ReturnValue;
};

// Function GHMEngine.GHM_HitCheck.HitCheck_Segment_Triangle
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 SegmentPos1                    (CPF_Parm)
// struct FVector                 LinePos2                       (CPF_Parm)
// struct FVector                 TrianglePos1                   (CPF_Parm)
// struct FVector                 TrianglePos2                   (CPF_Parm)
// struct FVector                 TrianglePos3                   (CPF_Parm)
// struct FVector                 HitPos                         (CPF_Parm | CPF_OutParm)

bool UGHM_HitCheck::HitCheck_Segment_Triangle(struct FVector SegmentPos1, struct FVector LinePos2, struct FVector TrianglePos1, struct FVector TrianglePos2, struct FVector TrianglePos3, struct FVector& HitPos)
{
	static UFunction* uFnHitCheck_Segment_Triangle = nullptr;

	if (!uFnHitCheck_Segment_Triangle)
	{
		uFnHitCheck_Segment_Triangle = UFunction::FindFunction("Function GHMEngine.GHM_HitCheck.HitCheck_Segment_Triangle");
	}

	UGHM_HitCheck_execHitCheck_Segment_Triangle_Params HitCheck_Segment_Triangle_Params;
	memcpy_s(&HitCheck_Segment_Triangle_Params.SegmentPos1, 0xC, &SegmentPos1, 0xC);
	memcpy_s(&HitCheck_Segment_Triangle_Params.LinePos2, 0xC, &LinePos2, 0xC);
	memcpy_s(&HitCheck_Segment_Triangle_Params.TrianglePos1, 0xC, &TrianglePos1, 0xC);
	memcpy_s(&HitCheck_Segment_Triangle_Params.TrianglePos2, 0xC, &TrianglePos2, 0xC);
	memcpy_s(&HitCheck_Segment_Triangle_Params.TrianglePos3, 0xC, &TrianglePos3, 0xC);
	memcpy_s(&HitCheck_Segment_Triangle_Params.HitPos, 0xC, &HitPos, 0xC);

	uFnHitCheck_Segment_Triangle->FunctionFlags |= ~0x400;

	UGHM_HitCheck::StaticClass()->ProcessEvent(uFnHitCheck_Segment_Triangle, &HitCheck_Segment_Triangle_Params, nullptr);

	uFnHitCheck_Segment_Triangle->FunctionFlags |= 0x400;

	memcpy_s(&HitPos, 0xC, &HitCheck_Segment_Triangle_Params.HitPos, 0xC);

	return HitCheck_Segment_Triangle_Params.ReturnValue;
};

// Function GHMEngine.GHM_HitCheck.HitCheck_Capsule_Capsule
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Cap1Pos1                       (CPF_Parm)
// struct FVector                 Cap1Pos2                       (CPF_Parm)
// float                          Cap1R                          (CPF_Parm)
// struct FVector                 Cap2Pos1                       (CPF_Parm)
// struct FVector                 Cap2Pos2                       (CPF_Parm)
// float                          Cap2R                          (CPF_Parm)

bool UGHM_HitCheck::HitCheck_Capsule_Capsule(struct FVector Cap1Pos1, struct FVector Cap1Pos2, float Cap1R, struct FVector Cap2Pos1, struct FVector Cap2Pos2, float Cap2R)
{
	static UFunction* uFnHitCheck_Capsule_Capsule = nullptr;

	if (!uFnHitCheck_Capsule_Capsule)
	{
		uFnHitCheck_Capsule_Capsule = UFunction::FindFunction("Function GHMEngine.GHM_HitCheck.HitCheck_Capsule_Capsule");
	}

	UGHM_HitCheck_execHitCheck_Capsule_Capsule_Params HitCheck_Capsule_Capsule_Params;
	memcpy_s(&HitCheck_Capsule_Capsule_Params.Cap1Pos1, 0xC, &Cap1Pos1, 0xC);
	memcpy_s(&HitCheck_Capsule_Capsule_Params.Cap1Pos2, 0xC, &Cap1Pos2, 0xC);
	memcpy_s(&HitCheck_Capsule_Capsule_Params.Cap1R, 0x4, &Cap1R, 0x4);
	memcpy_s(&HitCheck_Capsule_Capsule_Params.Cap2Pos1, 0xC, &Cap2Pos1, 0xC);
	memcpy_s(&HitCheck_Capsule_Capsule_Params.Cap2Pos2, 0xC, &Cap2Pos2, 0xC);
	memcpy_s(&HitCheck_Capsule_Capsule_Params.Cap2R, 0x4, &Cap2R, 0x4);

	uFnHitCheck_Capsule_Capsule->FunctionFlags |= ~0x400;

	UGHM_HitCheck::StaticClass()->ProcessEvent(uFnHitCheck_Capsule_Capsule, &HitCheck_Capsule_Capsule_Params, nullptr);

	uFnHitCheck_Capsule_Capsule->FunctionFlags |= 0x400;

	return HitCheck_Capsule_Capsule_Params.ReturnValue;
};

// Function GHMEngine.GHM_HitCheck.HitCheck_Capsule_Triangle
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 CapPos1                        (CPF_Parm)
// struct FVector                 CapPos2                        (CPF_Parm)
// float                          CapR                           (CPF_Parm)
// struct FVector                 TrianglePos1                   (CPF_Parm)
// struct FVector                 TrianglePos2                   (CPF_Parm)
// struct FVector                 TrianglePos3                   (CPF_Parm)

bool UGHM_HitCheck::HitCheck_Capsule_Triangle(struct FVector CapPos1, struct FVector CapPos2, float CapR, struct FVector TrianglePos1, struct FVector TrianglePos2, struct FVector TrianglePos3)
{
	static UFunction* uFnHitCheck_Capsule_Triangle = nullptr;

	if (!uFnHitCheck_Capsule_Triangle)
	{
		uFnHitCheck_Capsule_Triangle = UFunction::FindFunction("Function GHMEngine.GHM_HitCheck.HitCheck_Capsule_Triangle");
	}

	UGHM_HitCheck_execHitCheck_Capsule_Triangle_Params HitCheck_Capsule_Triangle_Params;
	memcpy_s(&HitCheck_Capsule_Triangle_Params.CapPos1, 0xC, &CapPos1, 0xC);
	memcpy_s(&HitCheck_Capsule_Triangle_Params.CapPos2, 0xC, &CapPos2, 0xC);
	memcpy_s(&HitCheck_Capsule_Triangle_Params.CapR, 0x4, &CapR, 0x4);
	memcpy_s(&HitCheck_Capsule_Triangle_Params.TrianglePos1, 0xC, &TrianglePos1, 0xC);
	memcpy_s(&HitCheck_Capsule_Triangle_Params.TrianglePos2, 0xC, &TrianglePos2, 0xC);
	memcpy_s(&HitCheck_Capsule_Triangle_Params.TrianglePos3, 0xC, &TrianglePos3, 0xC);

	uFnHitCheck_Capsule_Triangle->FunctionFlags |= ~0x400;

	UGHM_HitCheck::StaticClass()->ProcessEvent(uFnHitCheck_Capsule_Triangle, &HitCheck_Capsule_Triangle_Params, nullptr);

	uFnHitCheck_Capsule_Triangle->FunctionFlags |= 0x400;

	return HitCheck_Capsule_Triangle_Params.ReturnValue;
};

// Function GHMEngine.GHM_HitCheck.TriangleBarycenter
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 TrianglePos1                   (CPF_Parm)
// struct FVector                 TrianglePos2                   (CPF_Parm)
// struct FVector                 TrianglePos3                   (CPF_Parm)
// struct FVector                 Position                       (CPF_Parm)
// float                          U                              (CPF_Parm | CPF_OutParm)
// float                          V                              (CPF_Parm | CPF_OutParm)
// float                          W                              (CPF_Parm | CPF_OutParm)

void UGHM_HitCheck::TriangleBarycenter(struct FVector TrianglePos1, struct FVector TrianglePos2, struct FVector TrianglePos3, struct FVector Position, float& U, float& V, float& W)
{
	static UFunction* uFnTriangleBarycenter = nullptr;

	if (!uFnTriangleBarycenter)
	{
		uFnTriangleBarycenter = UFunction::FindFunction("Function GHMEngine.GHM_HitCheck.TriangleBarycenter");
	}

	UGHM_HitCheck_execTriangleBarycenter_Params TriangleBarycenter_Params;
	memcpy_s(&TriangleBarycenter_Params.TrianglePos1, 0xC, &TrianglePos1, 0xC);
	memcpy_s(&TriangleBarycenter_Params.TrianglePos2, 0xC, &TrianglePos2, 0xC);
	memcpy_s(&TriangleBarycenter_Params.TrianglePos3, 0xC, &TrianglePos3, 0xC);
	memcpy_s(&TriangleBarycenter_Params.Position, 0xC, &Position, 0xC);
	memcpy_s(&TriangleBarycenter_Params.U, 0x4, &U, 0x4);
	memcpy_s(&TriangleBarycenter_Params.V, 0x4, &V, 0x4);
	memcpy_s(&TriangleBarycenter_Params.W, 0x4, &W, 0x4);

	uFnTriangleBarycenter->FunctionFlags |= ~0x400;

	UGHM_HitCheck::StaticClass()->ProcessEvent(uFnTriangleBarycenter, &TriangleBarycenter_Params, nullptr);

	uFnTriangleBarycenter->FunctionFlags |= 0x400;

	memcpy_s(&U, 0x4, &TriangleBarycenter_Params.U, 0x4);
	memcpy_s(&V, 0x4, &TriangleBarycenter_Params.V, 0x4);
	memcpy_s(&W, 0x4, &TriangleBarycenter_Params.W, 0x4);
};

// Function GHMEngine.GHM_HitCheck.Segment_Triangle_MinLength
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 SegmentPos1                    (CPF_Parm)
// struct FVector                 SegmentPos2                    (CPF_Parm)
// struct FVector                 TrianglePos1                   (CPF_Parm)
// struct FVector                 TrianglePos2                   (CPF_Parm)
// struct FVector                 TrianglePos3                   (CPF_Parm)

float UGHM_HitCheck::Segment_Triangle_MinLength(struct FVector SegmentPos1, struct FVector SegmentPos2, struct FVector TrianglePos1, struct FVector TrianglePos2, struct FVector TrianglePos3)
{
	static UFunction* uFnSegment_Triangle_MinLength = nullptr;

	if (!uFnSegment_Triangle_MinLength)
	{
		uFnSegment_Triangle_MinLength = UFunction::FindFunction("Function GHMEngine.GHM_HitCheck.Segment_Triangle_MinLength");
	}

	UGHM_HitCheck_execSegment_Triangle_MinLength_Params Segment_Triangle_MinLength_Params;
	memcpy_s(&Segment_Triangle_MinLength_Params.SegmentPos1, 0xC, &SegmentPos1, 0xC);
	memcpy_s(&Segment_Triangle_MinLength_Params.SegmentPos2, 0xC, &SegmentPos2, 0xC);
	memcpy_s(&Segment_Triangle_MinLength_Params.TrianglePos1, 0xC, &TrianglePos1, 0xC);
	memcpy_s(&Segment_Triangle_MinLength_Params.TrianglePos2, 0xC, &TrianglePos2, 0xC);
	memcpy_s(&Segment_Triangle_MinLength_Params.TrianglePos3, 0xC, &TrianglePos3, 0xC);

	uFnSegment_Triangle_MinLength->FunctionFlags |= ~0x400;

	UGHM_HitCheck::StaticClass()->ProcessEvent(uFnSegment_Triangle_MinLength, &Segment_Triangle_MinLength_Params, nullptr);

	uFnSegment_Triangle_MinLength->FunctionFlags |= 0x400;

	return Segment_Triangle_MinLength_Params.ReturnValue;
};

// Function GHMEngine.GHM_HitCheck.Get_Segment_Point_MinPosition
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 SegmentPos1                    (CPF_Parm)
// struct FVector                 SegmentPos2                    (CPF_Parm)
// struct FVector                 PointPos                       (CPF_Parm)

struct FVector UGHM_HitCheck::Get_Segment_Point_MinPosition(struct FVector SegmentPos1, struct FVector SegmentPos2, struct FVector PointPos)
{
	static UFunction* uFnGet_Segment_Point_MinPosition = nullptr;

	if (!uFnGet_Segment_Point_MinPosition)
	{
		uFnGet_Segment_Point_MinPosition = UFunction::FindFunction("Function GHMEngine.GHM_HitCheck.Get_Segment_Point_MinPosition");
	}

	UGHM_HitCheck_execGet_Segment_Point_MinPosition_Params Get_Segment_Point_MinPosition_Params;
	memcpy_s(&Get_Segment_Point_MinPosition_Params.SegmentPos1, 0xC, &SegmentPos1, 0xC);
	memcpy_s(&Get_Segment_Point_MinPosition_Params.SegmentPos2, 0xC, &SegmentPos2, 0xC);
	memcpy_s(&Get_Segment_Point_MinPosition_Params.PointPos, 0xC, &PointPos, 0xC);

	uFnGet_Segment_Point_MinPosition->FunctionFlags |= ~0x400;

	UGHM_HitCheck::StaticClass()->ProcessEvent(uFnGet_Segment_Point_MinPosition, &Get_Segment_Point_MinPosition_Params, nullptr);

	uFnGet_Segment_Point_MinPosition->FunctionFlags |= 0x400;

	return Get_Segment_Point_MinPosition_Params.ReturnValue;
};

// Function GHMEngine.GHM_HitCheck.Segment_Point_MinLength
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 SegmentPos1                    (CPF_Parm)
// struct FVector                 SegmentPos2                    (CPF_Parm)
// struct FVector                 PointPos                       (CPF_Parm)

float UGHM_HitCheck::Segment_Point_MinLength(struct FVector SegmentPos1, struct FVector SegmentPos2, struct FVector PointPos)
{
	static UFunction* uFnSegment_Point_MinLength = nullptr;

	if (!uFnSegment_Point_MinLength)
	{
		uFnSegment_Point_MinLength = UFunction::FindFunction("Function GHMEngine.GHM_HitCheck.Segment_Point_MinLength");
	}

	UGHM_HitCheck_execSegment_Point_MinLength_Params Segment_Point_MinLength_Params;
	memcpy_s(&Segment_Point_MinLength_Params.SegmentPos1, 0xC, &SegmentPos1, 0xC);
	memcpy_s(&Segment_Point_MinLength_Params.SegmentPos2, 0xC, &SegmentPos2, 0xC);
	memcpy_s(&Segment_Point_MinLength_Params.PointPos, 0xC, &PointPos, 0xC);

	uFnSegment_Point_MinLength->FunctionFlags |= ~0x400;

	UGHM_HitCheck::StaticClass()->ProcessEvent(uFnSegment_Point_MinLength, &Segment_Point_MinLength_Params, nullptr);

	uFnSegment_Point_MinLength->FunctionFlags |= 0x400;

	return Segment_Point_MinLength_Params.ReturnValue;
};

// Function GHMEngine.GHM_HitCheck.Segment_Segment_MinLength
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 SegmentAPos1                   (CPF_Parm)
// struct FVector                 SegmentAPos2                   (CPF_Parm)
// struct FVector                 SegmentBPos1                   (CPF_Parm)
// struct FVector                 SegmentBPos2                   (CPF_Parm)

float UGHM_HitCheck::Segment_Segment_MinLength(struct FVector SegmentAPos1, struct FVector SegmentAPos2, struct FVector SegmentBPos1, struct FVector SegmentBPos2)
{
	static UFunction* uFnSegment_Segment_MinLength = nullptr;

	if (!uFnSegment_Segment_MinLength)
	{
		uFnSegment_Segment_MinLength = UFunction::FindFunction("Function GHMEngine.GHM_HitCheck.Segment_Segment_MinLength");
	}

	UGHM_HitCheck_execSegment_Segment_MinLength_Params Segment_Segment_MinLength_Params;
	memcpy_s(&Segment_Segment_MinLength_Params.SegmentAPos1, 0xC, &SegmentAPos1, 0xC);
	memcpy_s(&Segment_Segment_MinLength_Params.SegmentAPos2, 0xC, &SegmentAPos2, 0xC);
	memcpy_s(&Segment_Segment_MinLength_Params.SegmentBPos1, 0xC, &SegmentBPos1, 0xC);
	memcpy_s(&Segment_Segment_MinLength_Params.SegmentBPos2, 0xC, &SegmentBPos2, 0xC);

	uFnSegment_Segment_MinLength->FunctionFlags |= ~0x400;

	UGHM_HitCheck::StaticClass()->ProcessEvent(uFnSegment_Segment_MinLength, &Segment_Segment_MinLength_Params, nullptr);

	uFnSegment_Segment_MinLength->FunctionFlags |= 0x400;

	return Segment_Segment_MinLength_Params.ReturnValue;
};

// Function GHMEngine.GHM_HitCheck.Get_Line_Point_MinPosition
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 LinePos1                       (CPF_Parm)
// struct FVector                 LinePos2                       (CPF_Parm)

struct FVector UGHM_HitCheck::Get_Line_Point_MinPosition(struct FVector Point, struct FVector LinePos1, struct FVector LinePos2)
{
	static UFunction* uFnGet_Line_Point_MinPosition = nullptr;

	if (!uFnGet_Line_Point_MinPosition)
	{
		uFnGet_Line_Point_MinPosition = UFunction::FindFunction("Function GHMEngine.GHM_HitCheck.Get_Line_Point_MinPosition");
	}

	UGHM_HitCheck_execGet_Line_Point_MinPosition_Params Get_Line_Point_MinPosition_Params;
	memcpy_s(&Get_Line_Point_MinPosition_Params.Point, 0xC, &Point, 0xC);
	memcpy_s(&Get_Line_Point_MinPosition_Params.LinePos1, 0xC, &LinePos1, 0xC);
	memcpy_s(&Get_Line_Point_MinPosition_Params.LinePos2, 0xC, &LinePos2, 0xC);

	uFnGet_Line_Point_MinPosition->FunctionFlags |= ~0x400;

	UGHM_HitCheck::StaticClass()->ProcessEvent(uFnGet_Line_Point_MinPosition, &Get_Line_Point_MinPosition_Params, nullptr);

	uFnGet_Line_Point_MinPosition->FunctionFlags |= 0x400;

	return Get_Line_Point_MinPosition_Params.ReturnValue;
};

// Function GHMEngine.GHM_ParticleModuleCameraShake.PlayWorldCameraShake
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Owner                          (CPF_Parm)
// struct FVector                 Epicenter                      (CPF_Parm)

void UGHM_ParticleModuleCameraShake::eventPlayWorldCameraShake(class AActor* Owner, struct FVector Epicenter)
{
	static UFunction* uFnPlayWorldCameraShake = nullptr;

	if (!uFnPlayWorldCameraShake)
	{
		uFnPlayWorldCameraShake = UFunction::FindFunction("Function GHMEngine.GHM_ParticleModuleCameraShake.PlayWorldCameraShake");
	}

	UGHM_ParticleModuleCameraShake_eventPlayWorldCameraShake_Params PlayWorldCameraShake_Params;
	memcpy_s(&PlayWorldCameraShake_Params.Owner, 0x8, &Owner, 0x8);
	memcpy_s(&PlayWorldCameraShake_Params.Epicenter, 0xC, &Epicenter, 0xC);

	this->ProcessEvent(uFnPlayWorldCameraShake, &PlayWorldCameraShake_Params, nullptr);
};

// Function GHMEngine.GHM_ParticleModuleCollisionLazy.IsTestCollision
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGHM_ParticleModuleCollisionLazy* pThis                          (CPF_Parm)

bool UGHM_ParticleModuleCollisionLazy::eventIsTestCollision(class UGHM_ParticleModuleCollisionLazy* pThis)
{
	static UFunction* uFnIsTestCollision = nullptr;

	if (!uFnIsTestCollision)
	{
		uFnIsTestCollision = UFunction::FindFunction("Function GHMEngine.GHM_ParticleModuleCollisionLazy.IsTestCollision");
	}

	UGHM_ParticleModuleCollisionLazy_eventIsTestCollision_Params IsTestCollision_Params;
	memcpy_s(&IsTestCollision_Params.pThis, 0x8, &pThis, 0x8);

	this->ProcessEvent(uFnIsTestCollision, &IsTestCollision_Params, nullptr);

	return IsTestCollision_Params.ReturnValue;
};

// Function GHMEngine.GHM_ParticleModuleCollisionLazy.OnParticleCollision
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UParticleSystemComponent* OwnerComponent                 (CPF_Parm | CPF_EditInline)
// class UParticleLODLevel*       LODLevel                       (CPF_Const | CPF_Parm)
// class AActor*                  HitActor                       (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_Parm)
// struct FVector                 MoveDirection                  (CPF_Parm)

void UGHM_ParticleModuleCollisionLazy::eventOnParticleCollision(class UParticleSystemComponent* OwnerComponent, class UParticleLODLevel* LODLevel, class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal, struct FTraceHitInfo HitInfo, struct FVector MoveDirection)
{
	static UFunction* uFnOnParticleCollision = nullptr;

	if (!uFnOnParticleCollision)
	{
		uFnOnParticleCollision = UFunction::FindFunction("Function GHMEngine.GHM_ParticleModuleCollisionLazy.OnParticleCollision");
	}

	UGHM_ParticleModuleCollisionLazy_eventOnParticleCollision_Params OnParticleCollision_Params;
	memcpy_s(&OnParticleCollision_Params.OwnerComponent, 0x8, &OwnerComponent, 0x8);
	memcpy_s(&OnParticleCollision_Params.LODLevel, 0x8, &LODLevel, 0x8);
	memcpy_s(&OnParticleCollision_Params.HitActor, 0x8, &HitActor, 0x8);
	memcpy_s(&OnParticleCollision_Params.HitLocation, 0xC, &HitLocation, 0xC);
	memcpy_s(&OnParticleCollision_Params.HitNormal, 0xC, &HitNormal, 0xC);
	memcpy_s(&OnParticleCollision_Params.HitInfo, 0x28, &HitInfo, 0x28);
	memcpy_s(&OnParticleCollision_Params.MoveDirection, 0xC, &MoveDirection, 0xC);

	this->ProcessEvent(uFnOnParticleCollision, &OnParticleCollision_Params, nullptr);
};

// Function GHMEngine.GHM_ParticleModuleRumble.PlayForceFeedbackWaveform
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Owner                          (CPF_Parm)

void UGHM_ParticleModuleRumble::eventPlayForceFeedbackWaveform(class AActor* Owner)
{
	static UFunction* uFnPlayForceFeedbackWaveform = nullptr;

	if (!uFnPlayForceFeedbackWaveform)
	{
		uFnPlayForceFeedbackWaveform = UFunction::FindFunction("Function GHMEngine.GHM_ParticleModuleRumble.PlayForceFeedbackWaveform");
	}

	UGHM_ParticleModuleRumble_eventPlayForceFeedbackWaveform_Params PlayForceFeedbackWaveform_Params;
	memcpy_s(&PlayForceFeedbackWaveform_Params.Owner, 0x8, &Owner, 0x8);

	this->ProcessEvent(uFnPlayForceFeedbackWaveform, &PlayForceFeedbackWaveform_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_ControlMovie.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_SeqAct_ControlMovie::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ControlMovie.GetObjClassVersion");
	}

	UGHM_SeqAct_ControlMovie_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	UGHM_SeqAct_ControlMovie::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqAct_ControlMovie.ClearInput
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_ControlMovie::eventClearInput()
{
	static UFunction* uFnClearInput = nullptr;

	if (!uFnClearInput)
	{
		uFnClearInput = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ControlMovie.ClearInput");
	}

	UGHM_SeqAct_ControlMovie_eventClearInput_Params ClearInput_Params;

	this->ProcessEvent(uFnClearInput, &ClearInput_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_DspFXChain.SetParameterValue
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_DspFXChain::eventSetParameterValue()
{
	static UFunction* uFnSetParameterValue = nullptr;

	if (!uFnSetParameterValue)
	{
		uFnSetParameterValue = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_DspFXChain.SetParameterValue");
	}

	UGHM_SeqAct_DspFXChain_eventSetParameterValue_Params SetParameterValue_Params;

	this->ProcessEvent(uFnSetParameterValue, &SetParameterValue_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_DspFXChain.ToggleEffect
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  inOnOff                        (CPF_Parm)

void UGHM_SeqAct_DspFXChain::eventToggleEffect(unsigned long inOnOff)
{
	static UFunction* uFnToggleEffect = nullptr;

	if (!uFnToggleEffect)
	{
		uFnToggleEffect = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_DspFXChain.ToggleEffect");
	}

	UGHM_SeqAct_DspFXChain_eventToggleEffect_Params ToggleEffect_Params;
	ToggleEffect_Params.inOnOff = inOnOff;

	this->ProcessEvent(uFnToggleEffect, &ToggleEffect_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_DspFXChain.DestroyChain
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_DspFXChain::eventDestroyChain()
{
	static UFunction* uFnDestroyChain = nullptr;

	if (!uFnDestroyChain)
	{
		uFnDestroyChain = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_DspFXChain.DestroyChain");
	}

	UGHM_SeqAct_DspFXChain_eventDestroyChain_Params DestroyChain_Params;

	this->ProcessEvent(uFnDestroyChain, &DestroyChain_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_DspFXChain.CreateChain
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_DspFXChain::eventCreateChain()
{
	static UFunction* uFnCreateChain = nullptr;

	if (!uFnCreateChain)
	{
		uFnCreateChain = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_DspFXChain.CreateChain");
	}

	UGHM_SeqAct_DspFXChain_eventCreateChain_Params CreateChain_Params;

	this->ProcessEvent(uFnCreateChain, &CreateChain_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_DspFXChain.GetEffectName
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        inEffectType                   (CPF_Parm)

struct FName UGHM_SeqAct_DspFXChain::GetEffectName(uint8_t inEffectType)
{
	static UFunction* uFnGetEffectName = nullptr;

	if (!uFnGetEffectName)
	{
		uFnGetEffectName = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_DspFXChain.GetEffectName");
	}

	UGHM_SeqAct_DspFXChain_execGetEffectName_Params GetEffectName_Params;
	memcpy_s(&GetEffectName_Params.inEffectType, 0x1, &inEffectType, 0x1);

	this->ProcessEvent(uFnGetEffectName, &GetEffectName_Params, nullptr);

	return GetEffectName_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqAct_ObjectFade.HideActors
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_ObjectFade::eventHideActors()
{
	static UFunction* uFnHideActors = nullptr;

	if (!uFnHideActors)
	{
		uFnHideActors = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ObjectFade.HideActors");
	}

	UGHM_SeqAct_ObjectFade_eventHideActors_Params HideActors_Params;

	this->ProcessEvent(uFnHideActors, &HideActors_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_ObjectFade.DestroyTargets
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_ObjectFade::eventDestroyTargets()
{
	static UFunction* uFnDestroyTargets = nullptr;

	if (!uFnDestroyTargets)
	{
		uFnDestroyTargets = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ObjectFade.DestroyTargets");
	}

	UGHM_SeqAct_ObjectFade_eventDestroyTargets_Params DestroyTargets_Params;

	this->ProcessEvent(uFnDestroyTargets, &DestroyTargets_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_ObjectFade.StartFade
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_ObjectFade::eventStartFade()
{
	static UFunction* uFnStartFade = nullptr;

	if (!uFnStartFade)
	{
		uFnStartFade = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ObjectFade.StartFade");
	}

	UGHM_SeqAct_ObjectFade_eventStartFade_Params StartFade_Params;

	this->ProcessEvent(uFnStartFade, &StartFade_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_PlayBgm.TriggerEventClass
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_PlayBgm::eventTriggerEventClass()
{
	static UFunction* uFnTriggerEventClass = nullptr;

	if (!uFnTriggerEventClass)
	{
		uFnTriggerEventClass = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_PlayBgm.TriggerEventClass");
	}

	UGHM_SeqAct_PlayBgm_eventTriggerEventClass_Params TriggerEventClass_Params;

	this->ProcessEvent(uFnTriggerEventClass, &TriggerEventClass_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_PlayBgm.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_SeqAct_PlayBgm::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_PlayBgm.GetObjClassVersion");
	}

	UGHM_SeqAct_PlayBgm_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	UGHM_SeqAct_PlayBgm::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqAct_PlaySound.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_SeqAct_PlaySound::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_PlaySound.GetObjClassVersion");
	}

	UGHM_SeqAct_PlaySound_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	UGHM_SeqAct_PlaySound::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.OverrideNext
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  inActionName                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        inTrackIndex                   (CPF_OptionalParm | CPF_Parm)
// class FString                  inMarkerLabel                  (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class FString                  inEndMarkerLabel               (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UGHM_SeqAct_PlaySoundMarker::OverrideNext(class FString inActionName, int32_t inTrackIndex, class FString inMarkerLabel, class FString inEndMarkerLabel)
{
	static UFunction* uFnOverrideNext = nullptr;

	if (!uFnOverrideNext)
	{
		uFnOverrideNext = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_PlaySoundMarker.OverrideNext");
	}

	UGHM_SeqAct_PlaySoundMarker_execOverrideNext_Params OverrideNext_Params;
	memcpy_s(&OverrideNext_Params.inActionName, 0x10, &inActionName, 0x10);
	memcpy_s(&OverrideNext_Params.inTrackIndex, 0x4, &inTrackIndex, 0x4);
	memcpy_s(&OverrideNext_Params.inMarkerLabel, 0x10, &inMarkerLabel, 0x10);
	memcpy_s(&OverrideNext_Params.inEndMarkerLabel, 0x10, &inEndMarkerLabel, 0x10);

	uFnOverrideNext->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOverrideNext, &OverrideNext_Params, nullptr);

	uFnOverrideNext->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.SetActionEnabled
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  inIsEnabled                    (CPF_Parm)
// class FString                  inActionName                   (CPF_Parm | CPF_NeedCtorLink)

void UGHM_SeqAct_PlaySoundMarker::SetActionEnabled(unsigned long inIsEnabled, class FString inActionName)
{
	static UFunction* uFnSetActionEnabled = nullptr;

	if (!uFnSetActionEnabled)
	{
		uFnSetActionEnabled = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_PlaySoundMarker.SetActionEnabled");
	}

	UGHM_SeqAct_PlaySoundMarker_execSetActionEnabled_Params SetActionEnabled_Params;
	SetActionEnabled_Params.inIsEnabled = inIsEnabled;
	memcpy_s(&SetActionEnabled_Params.inActionName, 0x10, &inActionName, 0x10);

	uFnSetActionEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetActionEnabled, &SetActionEnabled_Params, nullptr);

	uFnSetActionEnabled->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.PerformPresetAction_Manual
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  inActionName                   (CPF_Parm | CPF_NeedCtorLink)

void UGHM_SeqAct_PlaySoundMarker::PerformPresetAction_Manual(class FString inActionName)
{
	static UFunction* uFnPerformPresetAction_Manual = nullptr;

	if (!uFnPerformPresetAction_Manual)
	{
		uFnPerformPresetAction_Manual = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_PlaySoundMarker.PerformPresetAction_Manual");
	}

	UGHM_SeqAct_PlaySoundMarker_execPerformPresetAction_Manual_Params PerformPresetAction_Manual_Params;
	memcpy_s(&PerformPresetAction_Manual_Params.inActionName, 0x10, &inActionName, 0x10);

	uFnPerformPresetAction_Manual->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPerformPresetAction_Manual, &PerformPresetAction_Manual_Params, nullptr);

	uFnPerformPresetAction_Manual->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.SetPerformMode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        inNewMode                      (CPF_Parm)

void UGHM_SeqAct_PlaySoundMarker::SetPerformMode(uint8_t inNewMode)
{
	static UFunction* uFnSetPerformMode = nullptr;

	if (!uFnSetPerformMode)
	{
		uFnSetPerformMode = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_PlaySoundMarker.SetPerformMode");
	}

	UGHM_SeqAct_PlaySoundMarker_execSetPerformMode_Params SetPerformMode_Params;
	memcpy_s(&SetPerformMode_Params.inNewMode, 0x1, &inNewMode, 0x1);

	uFnSetPerformMode->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPerformMode, &SetPerformMode_Params, nullptr);

	uFnSetPerformMode->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.MarkerNotification
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          Time                           (CPF_Parm)
// int32_t                        markerIndex                    (CPF_Parm)
// class FString                  markerName                     (CPF_Parm | CPF_NeedCtorLink)

void UGHM_SeqAct_PlaySoundMarker::MarkerNotification(float Time, int32_t markerIndex, class FString markerName)
{
	static UFunction* uFnMarkerNotification = nullptr;

	if (!uFnMarkerNotification)
	{
		uFnMarkerNotification = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_PlaySoundMarker.MarkerNotification");
	}

	UGHM_SeqAct_PlaySoundMarker_execMarkerNotification_Params MarkerNotification_Params;
	memcpy_s(&MarkerNotification_Params.Time, 0x4, &Time, 0x4);
	memcpy_s(&MarkerNotification_Params.markerIndex, 0x4, &markerIndex, 0x4);
	memcpy_s(&MarkerNotification_Params.markerName, 0x10, &markerName, 0x10);

	uFnMarkerNotification->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnMarkerNotification, &MarkerNotification_Params, nullptr);

	uFnMarkerNotification->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.Unregister
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_PlaySoundMarker::eventUnregister()
{
	static UFunction* uFnUnregister = nullptr;

	if (!uFnUnregister)
	{
		uFnUnregister = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_PlaySoundMarker.Unregister");
	}

	UGHM_SeqAct_PlaySoundMarker_eventUnregister_Params Unregister_Params;

	this->ProcessEvent(uFnUnregister, &Unregister_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_PlaySoundMarker.RegisterForMarkerCallback
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_PlaySoundMarker::eventRegisterForMarkerCallback()
{
	static UFunction* uFnRegisterForMarkerCallback = nullptr;

	if (!uFnRegisterForMarkerCallback)
	{
		uFnRegisterForMarkerCallback = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_PlaySoundMarker.RegisterForMarkerCallback");
	}

	UGHM_SeqAct_PlaySoundMarker_eventRegisterForMarkerCallback_Params RegisterForMarkerCallback_Params;

	this->ProcessEvent(uFnRegisterForMarkerCallback, &RegisterForMarkerCallback_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_RawInput.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_SeqAct_RawInput::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_RawInput.GetObjClassVersion");
	}

	UGHM_SeqAct_RawInput_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	UGHM_SeqAct_RawInput::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqAct_RawInput.Update
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UGHM_SeqAct_RawInput::eventUpdate(float DeltaTime)
{
	static UFunction* uFnUpdate = nullptr;

	if (!uFnUpdate)
	{
		uFnUpdate = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_RawInput.Update");
	}

	UGHM_SeqAct_RawInput_eventUpdate_Params Update_Params;
	memcpy_s(&Update_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnUpdate, &Update_Params, nullptr);

	return Update_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqAct_RawInput.Activated
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_RawInput::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_RawInput.Activated");
	}

	UGHM_SeqAct_RawInput_eventActivated_Params Activated_Params;

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_SetAudioParameter.SendSignal
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_SetAudioParameter::eventSendSignal()
{
	static UFunction* uFnSendSignal = nullptr;

	if (!uFnSendSignal)
	{
		uFnSendSignal = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_SetAudioParameter.SendSignal");
	}

	UGHM_SeqAct_SetAudioParameter_eventSendSignal_Params SendSignal_Params;

	this->ProcessEvent(uFnSendSignal, &SendSignal_Params, nullptr);
};

// Function GHMEngine.GHM_SeqCond_SwitchString.RemoveValueEntry
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        RemoveIndex                    (CPF_Parm)

void UGHM_SeqCond_SwitchString::eventRemoveValueEntry(int32_t RemoveIndex)
{
	static UFunction* uFnRemoveValueEntry = nullptr;

	if (!uFnRemoveValueEntry)
	{
		uFnRemoveValueEntry = UFunction::FindFunction("Function GHMEngine.GHM_SeqCond_SwitchString.RemoveValueEntry");
	}

	UGHM_SeqCond_SwitchString_eventRemoveValueEntry_Params RemoveValueEntry_Params;
	memcpy_s(&RemoveValueEntry_Params.RemoveIndex, 0x4, &RemoveIndex, 0x4);

	this->ProcessEvent(uFnRemoveValueEntry, &RemoveValueEntry_Params, nullptr);
};

// Function GHMEngine.GHM_SeqCond_SwitchString.InsertValueEntry
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        InsertIndex                    (CPF_Parm)

void UGHM_SeqCond_SwitchString::eventInsertValueEntry(int32_t InsertIndex)
{
	static UFunction* uFnInsertValueEntry = nullptr;

	if (!uFnInsertValueEntry)
	{
		uFnInsertValueEntry = UFunction::FindFunction("Function GHMEngine.GHM_SeqCond_SwitchString.InsertValueEntry");
	}

	UGHM_SeqCond_SwitchString_eventInsertValueEntry_Params InsertValueEntry_Params;
	memcpy_s(&InsertValueEntry_Params.InsertIndex, 0x4, &InsertIndex, 0x4);

	this->ProcessEvent(uFnInsertValueEntry, &InsertValueEntry_Params, nullptr);
};

// Function GHMEngine.GHM_SeqCond_SwitchString.IsFallThruEnabled
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ValueIndex                     (CPF_Parm)

bool UGHM_SeqCond_SwitchString::eventIsFallThruEnabled(int32_t ValueIndex)
{
	static UFunction* uFnIsFallThruEnabled = nullptr;

	if (!uFnIsFallThruEnabled)
	{
		uFnIsFallThruEnabled = UFunction::FindFunction("Function GHMEngine.GHM_SeqCond_SwitchString.IsFallThruEnabled");
	}

	UGHM_SeqCond_SwitchString_eventIsFallThruEnabled_Params IsFallThruEnabled_Params;
	memcpy_s(&IsFallThruEnabled_Params.ValueIndex, 0x4, &ValueIndex, 0x4);

	this->ProcessEvent(uFnIsFallThruEnabled, &IsFallThruEnabled_Params, nullptr);

	return IsFallThruEnabled_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqCond_SwitchString.VerifyDefaultCaseValue
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqCond_SwitchString::eventVerifyDefaultCaseValue()
{
	static UFunction* uFnVerifyDefaultCaseValue = nullptr;

	if (!uFnVerifyDefaultCaseValue)
	{
		uFnVerifyDefaultCaseValue = UFunction::FindFunction("Function GHMEngine.GHM_SeqCond_SwitchString.VerifyDefaultCaseValue");
	}

	UGHM_SeqCond_SwitchString_eventVerifyDefaultCaseValue_Params VerifyDefaultCaseValue_Params;

	this->ProcessEvent(uFnVerifyDefaultCaseValue, &VerifyDefaultCaseValue_Params, nullptr);
};

// Function GHMEngine.GHM_SeqEvent_RawButtons.ButtonPressed
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ButtonName                     (CPF_Parm)
// uint8_t                        EventType                      (CPF_Parm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UGHM_SeqEvent_RawButtons::eventButtonPressed(struct FName ButtonName, uint8_t EventType, int32_t ControllerId)
{
	static UFunction* uFnButtonPressed = nullptr;

	if (!uFnButtonPressed)
	{
		uFnButtonPressed = UFunction::FindFunction("Function GHMEngine.GHM_SeqEvent_RawButtons.ButtonPressed");
	}

	UGHM_SeqEvent_RawButtons_eventButtonPressed_Params ButtonPressed_Params;
	memcpy_s(&ButtonPressed_Params.ButtonName, 0x8, &ButtonName, 0x8);
	memcpy_s(&ButtonPressed_Params.EventType, 0x1, &EventType, 0x1);
	memcpy_s(&ButtonPressed_Params.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(uFnButtonPressed, &ButtonPressed_Params, nullptr);

	return ButtonPressed_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqEvent_RawButtons.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_SeqEvent_RawButtons::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GHMEngine.GHM_SeqEvent_RawButtons.GetObjClassVersion");
	}

	UGHM_SeqEvent_RawButtons_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	UGHM_SeqEvent_RawButtons::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqEvent_RawButtons.Toggled
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqEvent_RawButtons::eventToggled()
{
	static UFunction* uFnToggled = nullptr;

	if (!uFnToggled)
	{
		uFnToggled = UFunction::FindFunction("Function GHMEngine.GHM_SeqEvent_RawButtons.Toggled");
	}

	UGHM_SeqEvent_RawButtons_eventToggled_Params Toggled_Params;

	this->ProcessEvent(uFnToggled, &Toggled_Params, nullptr);
};

// Function GHMEngine.GHM_SeqEvent_RawButtons.RegisterWithViewport
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqEvent_RawButtons::RegisterWithViewport()
{
	static UFunction* uFnRegisterWithViewport = nullptr;

	if (!uFnRegisterWithViewport)
	{
		uFnRegisterWithViewport = UFunction::FindFunction("Function GHMEngine.GHM_SeqEvent_RawButtons.RegisterWithViewport");
	}

	UGHM_SeqEvent_RawButtons_execRegisterWithViewport_Params RegisterWithViewport_Params;

	this->ProcessEvent(uFnRegisterWithViewport, &RegisterWithViewport_Params, nullptr);
};

// Function GHMEngine.GHM_SeqEvent_RawButtons.RegisterEvent
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqEvent_RawButtons::eventRegisterEvent()
{
	static UFunction* uFnRegisterEvent = nullptr;

	if (!uFnRegisterEvent)
	{
		uFnRegisterEvent = UFunction::FindFunction("Function GHMEngine.GHM_SeqEvent_RawButtons.RegisterEvent");
	}

	UGHM_SeqEvent_RawButtons_eventRegisterEvent_Params RegisterEvent_Params;

	this->ProcessEvent(uFnRegisterEvent, &RegisterEvent_Params, nullptr);
};

// Function GHMEngine.GHM_AmbientSoundMovable.ApplyCheckpointRecord
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct AGHM_AmbientSoundMovable_FCheckpointRecord Record                         (CPF_Const | CPF_Parm | CPF_OutParm)

void AGHM_AmbientSoundMovable::ApplyCheckpointRecord(struct AGHM_AmbientSoundMovable_FCheckpointRecord& Record)
{
	static UFunction* uFnApplyCheckpointRecord = nullptr;

	if (!uFnApplyCheckpointRecord)
	{
		uFnApplyCheckpointRecord = UFunction::FindFunction("Function GHMEngine.GHM_AmbientSoundMovable.ApplyCheckpointRecord");
	}

	AGHM_AmbientSoundMovable_execApplyCheckpointRecord_Params ApplyCheckpointRecord_Params;
	memcpy_s(&ApplyCheckpointRecord_Params.Record, 0x4, &Record, 0x4);

	this->ProcessEvent(uFnApplyCheckpointRecord, &ApplyCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, 0x4, &ApplyCheckpointRecord_Params.Record, 0x4);
};

// Function GHMEngine.GHM_AmbientSoundMovable.CreateCheckpointRecord
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct AGHM_AmbientSoundMovable_FCheckpointRecord Record                         (CPF_Parm | CPF_OutParm)

void AGHM_AmbientSoundMovable::CreateCheckpointRecord(struct AGHM_AmbientSoundMovable_FCheckpointRecord& Record)
{
	static UFunction* uFnCreateCheckpointRecord = nullptr;

	if (!uFnCreateCheckpointRecord)
	{
		uFnCreateCheckpointRecord = UFunction::FindFunction("Function GHMEngine.GHM_AmbientSoundMovable.CreateCheckpointRecord");
	}

	AGHM_AmbientSoundMovable_execCreateCheckpointRecord_Params CreateCheckpointRecord_Params;
	memcpy_s(&CreateCheckpointRecord_Params.Record, 0x4, &Record, 0x4);

	this->ProcessEvent(uFnCreateCheckpointRecord, &CreateCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, 0x4, &CreateCheckpointRecord_Params.Record, 0x4);
};

// Function GHMEngine.GHM_AmbientSoundMovable.OnToggle
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AGHM_AmbientSoundMovable::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function GHMEngine.GHM_AmbientSoundMovable.OnToggle");
	}

	AGHM_AmbientSoundMovable_execOnToggle_Params OnToggle_Params;
	memcpy_s(&OnToggle_Params.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function GHMEngine.GHM_AmbientSoundMovable.StopPlaying
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_AmbientSoundMovable::StopPlaying()
{
	static UFunction* uFnStopPlaying = nullptr;

	if (!uFnStopPlaying)
	{
		uFnStopPlaying = UFunction::FindFunction("Function GHMEngine.GHM_AmbientSoundMovable.StopPlaying");
	}

	AGHM_AmbientSoundMovable_execStopPlaying_Params StopPlaying_Params;

	this->ProcessEvent(uFnStopPlaying, &StopPlaying_Params, nullptr);
};

// Function GHMEngine.GHM_AmbientSoundMovable.StartPlaying
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_AmbientSoundMovable::StartPlaying()
{
	static UFunction* uFnStartPlaying = nullptr;

	if (!uFnStartPlaying)
	{
		uFnStartPlaying = UFunction::FindFunction("Function GHMEngine.GHM_AmbientSoundMovable.StartPlaying");
	}

	AGHM_AmbientSoundMovable_execStartPlaying_Params StartPlaying_Params;

	this->ProcessEvent(uFnStartPlaying, &StartPlaying_Params, nullptr);
};

// Function GHMEngine.GHM_AudioDspFX.UpdateParameter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGHM_AudioDspFXParameter* inDspFXParameter               (CPF_Parm)

bool UGHM_AudioDspFX::UpdateParameter(class UGHM_AudioDspFXParameter* inDspFXParameter)
{
	static UFunction* uFnUpdateParameter = nullptr;

	if (!uFnUpdateParameter)
	{
		uFnUpdateParameter = UFunction::FindFunction("Function GHMEngine.GHM_AudioDspFX.UpdateParameter");
	}

	UGHM_AudioDspFX_execUpdateParameter_Params UpdateParameter_Params;
	memcpy_s(&UpdateParameter_Params.inDspFXParameter, 0x8, &inDspFXParameter, 0x8);

	uFnUpdateParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateParameter, &UpdateParameter_Params, nullptr);

	uFnUpdateParameter->FunctionFlags |= 0x400;

	return UpdateParameter_Params.ReturnValue;
};

// Function GHMEngine.GHM_AudioDspFX.InitializeEffect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   inEffectName                   (CPF_Parm)
// class UGHM_AudioDspFXParams*   inDspFXParameters              (CPF_Parm)
// class UGHM_AudioDspFXLibrary*  inDspFXLibrary                 (CPF_Parm)

void UGHM_AudioDspFX::InitializeEffect(struct FName inEffectName, class UGHM_AudioDspFXParams* inDspFXParameters, class UGHM_AudioDspFXLibrary* inDspFXLibrary)
{
	static UFunction* uFnInitializeEffect = nullptr;

	if (!uFnInitializeEffect)
	{
		uFnInitializeEffect = UFunction::FindFunction("Function GHMEngine.GHM_AudioDspFX.InitializeEffect");
	}

	UGHM_AudioDspFX_execInitializeEffect_Params InitializeEffect_Params;
	memcpy_s(&InitializeEffect_Params.inEffectName, 0x8, &inEffectName, 0x8);
	memcpy_s(&InitializeEffect_Params.inDspFXParameters, 0x8, &inDspFXParameters, 0x8);
	memcpy_s(&InitializeEffect_Params.inDspFXLibrary, 0x8, &inDspFXLibrary, 0x8);

	uFnInitializeEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInitializeEffect, &InitializeEffect_Params, nullptr);

	uFnInitializeEffect->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_AudioDspFXManager.SetEffectParameter
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        inDspFXChainId                 (CPF_Parm)
// int32_t                        inDspFxEffectIndex             (CPF_Parm)
// class UGHM_AudioDspFXParameter* inDspFXParameter               (CPF_Parm)

void UGHM_AudioDspFXManager::SetEffectParameter(int32_t inDspFXChainId, int32_t inDspFxEffectIndex, class UGHM_AudioDspFXParameter* inDspFXParameter)
{
	static UFunction* uFnSetEffectParameter = nullptr;

	if (!uFnSetEffectParameter)
	{
		uFnSetEffectParameter = UFunction::FindFunction("Function GHMEngine.GHM_AudioDspFXManager.SetEffectParameter");
	}

	UGHM_AudioDspFXManager_execSetEffectParameter_Params SetEffectParameter_Params;
	memcpy_s(&SetEffectParameter_Params.inDspFXChainId, 0x4, &inDspFXChainId, 0x4);
	memcpy_s(&SetEffectParameter_Params.inDspFxEffectIndex, 0x4, &inDspFxEffectIndex, 0x4);
	memcpy_s(&SetEffectParameter_Params.inDspFXParameter, 0x8, &inDspFXParameter, 0x8);

	uFnSetEffectParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetEffectParameter, &SetEffectParameter_Params, nullptr);

	uFnSetEffectParameter->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_AudioDspFXManager.ToggleEffect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        inDspFXChainId                 (CPF_Parm)
// int32_t                        inDspFxEffectIndex             (CPF_Parm)
// unsigned long                  inDspOnOff                     (CPF_Parm)

void UGHM_AudioDspFXManager::ToggleEffect(int32_t inDspFXChainId, int32_t inDspFxEffectIndex, unsigned long inDspOnOff)
{
	static UFunction* uFnToggleEffect = nullptr;

	if (!uFnToggleEffect)
	{
		uFnToggleEffect = UFunction::FindFunction("Function GHMEngine.GHM_AudioDspFXManager.ToggleEffect");
	}

	UGHM_AudioDspFXManager_execToggleEffect_Params ToggleEffect_Params;
	memcpy_s(&ToggleEffect_Params.inDspFXChainId, 0x4, &inDspFXChainId, 0x4);
	memcpy_s(&ToggleEffect_Params.inDspFxEffectIndex, 0x4, &inDspFxEffectIndex, 0x4);
	ToggleEffect_Params.inDspOnOff = inDspOnOff;

	uFnToggleEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnToggleEffect, &ToggleEffect_Params, nullptr);

	uFnToggleEffect->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_AudioDspFXManager.DestroyEffectChain
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        inDspFXChainId                 (CPF_Parm)

void UGHM_AudioDspFXManager::DestroyEffectChain(int32_t inDspFXChainId)
{
	static UFunction* uFnDestroyEffectChain = nullptr;

	if (!uFnDestroyEffectChain)
	{
		uFnDestroyEffectChain = UFunction::FindFunction("Function GHMEngine.GHM_AudioDspFXManager.DestroyEffectChain");
	}

	UGHM_AudioDspFXManager_execDestroyEffectChain_Params DestroyEffectChain_Params;
	memcpy_s(&DestroyEffectChain_Params.inDspFXChainId, 0x4, &inDspFXChainId, 0x4);

	uFnDestroyEffectChain->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDestroyEffectChain, &DestroyEffectChain_Params, nullptr);

	uFnDestroyEffectChain->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_AudioDspFXManager.CreateEffectChain
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FName>           EffectsNames                   (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        inLevel                        (CPF_Parm)

int32_t UGHM_AudioDspFXManager::CreateEffectChain(TArray<struct FName> EffectsNames, uint8_t inLevel)
{
	static UFunction* uFnCreateEffectChain = nullptr;

	if (!uFnCreateEffectChain)
	{
		uFnCreateEffectChain = UFunction::FindFunction("Function GHMEngine.GHM_AudioDspFXManager.CreateEffectChain");
	}

	UGHM_AudioDspFXManager_execCreateEffectChain_Params CreateEffectChain_Params;
	memcpy_s(&CreateEffectChain_Params.EffectsNames, 0x10, &EffectsNames, 0x10);
	memcpy_s(&CreateEffectChain_Params.inLevel, 0x1, &inLevel, 0x1);

	uFnCreateEffectChain->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCreateEffectChain, &CreateEffectChain_Params, nullptr);

	uFnCreateEffectChain->FunctionFlags |= 0x400;

	return CreateEffectChain_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameSoundHelper.FindPlaySoundWithMarkerInstance
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_SeqAct_PlaySoundMarker* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  inSoundMarkerIdentifier        (CPF_Parm | CPF_NeedCtorLink)

class UGHM_SeqAct_PlaySoundMarker* UGHM_GameSoundHelper::FindPlaySoundWithMarkerInstance(class FString inSoundMarkerIdentifier)
{
	static UFunction* uFnFindPlaySoundWithMarkerInstance = nullptr;

	if (!uFnFindPlaySoundWithMarkerInstance)
	{
		uFnFindPlaySoundWithMarkerInstance = UFunction::FindFunction("Function GHMEngine.GHM_GameSoundHelper.FindPlaySoundWithMarkerInstance");
	}

	UGHM_GameSoundHelper_execFindPlaySoundWithMarkerInstance_Params FindPlaySoundWithMarkerInstance_Params;
	memcpy_s(&FindPlaySoundWithMarkerInstance_Params.inSoundMarkerIdentifier, 0x10, &inSoundMarkerIdentifier, 0x10);

	this->ProcessEvent(uFnFindPlaySoundWithMarkerInstance, &FindPlaySoundWithMarkerInstance_Params, nullptr);

	return FindPlaySoundWithMarkerInstance_Params.ReturnValue;
};

// Function GHMEngine.GHM_GameSoundHelper.SetGamePause
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  flag                           (CPF_Parm)

void UGHM_GameSoundHelper::SetGamePause(unsigned long flag)
{
	static UFunction* uFnSetGamePause = nullptr;

	if (!uFnSetGamePause)
	{
		uFnSetGamePause = UFunction::FindFunction("Function GHMEngine.GHM_GameSoundHelper.SetGamePause");
	}

	UGHM_GameSoundHelper_execSetGamePause_Params SetGamePause_Params;
	SetGamePause_Params.flag = flag;

	this->ProcessEvent(uFnSetGamePause, &SetGamePause_Params, nullptr);
};

// Function GHMEngine.GHM_GameSoundHelper.GamePause
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bInSetPause                    (CPF_Parm)

void UGHM_GameSoundHelper::eventGamePause(unsigned long bInSetPause)
{
	static UFunction* uFnGamePause = nullptr;

	if (!uFnGamePause)
	{
		uFnGamePause = UFunction::FindFunction("Function GHMEngine.GHM_GameSoundHelper.GamePause");
	}

	UGHM_GameSoundHelper_eventGamePause_Params GamePause_Params;
	GamePause_Params.bInSetPause = bInSetPause;

	this->ProcessEvent(uFnGamePause, &GamePause_Params, nullptr);
};

// Function GHMEngine.GHM_GameSoundHelper.Initialize
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_GameSoundHelper::eventInitialize()
{
	static UFunction* uFnInitialize = nullptr;

	if (!uFnInitialize)
	{
		uFnInitialize = UFunction::FindFunction("Function GHMEngine.GHM_GameSoundHelper.Initialize");
	}

	UGHM_GameSoundHelper_eventInitialize_Params Initialize_Params;

	this->ProcessEvent(uFnInitialize, &Initialize_Params, nullptr);
};

// Function GHMEngine.GHM_GameSoundHelper.UnregisterAll
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_GameSoundHelper::eventUnregisterAll()
{
	static UFunction* uFnUnregisterAll = nullptr;

	if (!uFnUnregisterAll)
	{
		uFnUnregisterAll = UFunction::FindFunction("Function GHMEngine.GHM_GameSoundHelper.UnregisterAll");
	}

	UGHM_GameSoundHelper_eventUnregisterAll_Params UnregisterAll_Params;

	this->ProcessEvent(uFnUnregisterAll, &UnregisterAll_Params, nullptr);
};

// Function GHMEngine.GHM_GameSoundHelper.UnregisterPlaySoundWithMarker
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_SeqAct_PlaySoundMarker* inPlaySoundMarkerToUnRegister  (CPF_Parm)

void UGHM_GameSoundHelper::UnregisterPlaySoundWithMarker(class UGHM_SeqAct_PlaySoundMarker* inPlaySoundMarkerToUnRegister)
{
	static UFunction* uFnUnregisterPlaySoundWithMarker = nullptr;

	if (!uFnUnregisterPlaySoundWithMarker)
	{
		uFnUnregisterPlaySoundWithMarker = UFunction::FindFunction("Function GHMEngine.GHM_GameSoundHelper.UnregisterPlaySoundWithMarker");
	}

	UGHM_GameSoundHelper_execUnregisterPlaySoundWithMarker_Params UnregisterPlaySoundWithMarker_Params;
	memcpy_s(&UnregisterPlaySoundWithMarker_Params.inPlaySoundMarkerToUnRegister, 0x8, &inPlaySoundMarkerToUnRegister, 0x8);

	this->ProcessEvent(uFnUnregisterPlaySoundWithMarker, &UnregisterPlaySoundWithMarker_Params, nullptr);
};

// Function GHMEngine.GHM_GameSoundHelper.RegisterPlaySoundWithMarker
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_SeqAct_PlaySoundMarker* inPlaySoundMarkerToRegister    (CPF_Parm)

void UGHM_GameSoundHelper::RegisterPlaySoundWithMarker(class UGHM_SeqAct_PlaySoundMarker* inPlaySoundMarkerToRegister)
{
	static UFunction* uFnRegisterPlaySoundWithMarker = nullptr;

	if (!uFnRegisterPlaySoundWithMarker)
	{
		uFnRegisterPlaySoundWithMarker = UFunction::FindFunction("Function GHMEngine.GHM_GameSoundHelper.RegisterPlaySoundWithMarker");
	}

	UGHM_GameSoundHelper_execRegisterPlaySoundWithMarker_Params RegisterPlaySoundWithMarker_Params;
	memcpy_s(&RegisterPlaySoundWithMarker_Params.inPlaySoundMarkerToRegister, 0x8, &inPlaySoundMarkerToRegister, 0x8);

	this->ProcessEvent(uFnRegisterPlaySoundWithMarker, &RegisterPlaySoundWithMarker_Params, nullptr);
};

// Function GHMEngine.GHM_GameSoundHelper.ReceiveSoundMarker
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          inTime                         (CPF_Parm)
// int32_t                        inMarkerIndex                  (CPF_Parm)
// class FString                  inMarkerName                   (CPF_Parm | CPF_NeedCtorLink)

void UGHM_GameSoundHelper::ReceiveSoundMarker(float inTime, int32_t inMarkerIndex, class FString inMarkerName)
{
	static UFunction* uFnReceiveSoundMarker = nullptr;

	if (!uFnReceiveSoundMarker)
	{
		uFnReceiveSoundMarker = UFunction::FindFunction("Function GHMEngine.GHM_GameSoundHelper.ReceiveSoundMarker");
	}

	UGHM_GameSoundHelper_execReceiveSoundMarker_Params ReceiveSoundMarker_Params;
	memcpy_s(&ReceiveSoundMarker_Params.inTime, 0x4, &inTime, 0x4);
	memcpy_s(&ReceiveSoundMarker_Params.inMarkerIndex, 0x4, &inMarkerIndex, 0x4);
	memcpy_s(&ReceiveSoundMarker_Params.inMarkerName, 0x10, &inMarkerName, 0x10);

	this->ProcessEvent(uFnReceiveSoundMarker, &ReceiveSoundMarker_Params, nullptr);
};

// Function GHMEngine.GHM_SoundDebugUtility.ResetSoundDisplay2DValues
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundDebugUtility::ResetSoundDisplay2DValues()
{
	static UFunction* uFnResetSoundDisplay2DValues = nullptr;

	if (!uFnResetSoundDisplay2DValues)
	{
		uFnResetSoundDisplay2DValues = UFunction::FindFunction("Function GHMEngine.GHM_SoundDebugUtility.ResetSoundDisplay2DValues");
	}

	UGHM_SoundDebugUtility_execResetSoundDisplay2DValues_Params ResetSoundDisplay2DValues_Params;

	this->ProcessEvent(uFnResetSoundDisplay2DValues, &ResetSoundDisplay2DValues_Params, nullptr);
};

// Function GHMEngine.GHM_SoundDebugUtility.SetSoundCue
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               InSoundCue                     (CPF_Parm)

void UGHM_SoundDebugUtility::eventSetSoundCue(class USoundCue* InSoundCue)
{
	static UFunction* uFnSetSoundCue = nullptr;

	if (!uFnSetSoundCue)
	{
		uFnSetSoundCue = UFunction::FindFunction("Function GHMEngine.GHM_SoundDebugUtility.SetSoundCue");
	}

	UGHM_SoundDebugUtility_eventSetSoundCue_Params SetSoundCue_Params;
	memcpy_s(&SetSoundCue_Params.InSoundCue, 0x8, &InSoundCue, 0x8);

	this->ProcessEvent(uFnSetSoundCue, &SetSoundCue_Params, nullptr);
};

// Function GHMEngine.GHM_SoundDebugUtility.Instance
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_SoundDebugUtility*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_SoundDebugUtility* UGHM_SoundDebugUtility::Instance()
{
	static UFunction* uFnInstance = nullptr;

	if (!uFnInstance)
	{
		uFnInstance = UFunction::FindFunction("Function GHMEngine.GHM_SoundDebugUtility.Instance");
	}

	UGHM_SoundDebugUtility_execInstance_Params Instance_Params;

	uFnInstance->FunctionFlags |= ~0x400;

	UGHM_SoundDebugUtility::StaticClass()->ProcessEvent(uFnInstance, &Instance_Params, nullptr);

	uFnInstance->FunctionFlags |= 0x400;

	return Instance_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.ToggleTweekSoundVolume
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::ToggleTweekSoundVolume()
{
	static UFunction* uFnToggleTweekSoundVolume = nullptr;

	if (!uFnToggleTweekSoundVolume)
	{
		uFnToggleTweekSoundVolume = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.ToggleTweekSoundVolume");
	}

	UGHM_SoundManager_execToggleTweekSoundVolume_Params ToggleTweekSoundVolume_Params;

	this->ProcessEvent(uFnToggleTweekSoundVolume, &ToggleTweekSoundVolume_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.DumpSoundVolumeSettings
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::DumpSoundVolumeSettings()
{
	static UFunction* uFnDumpSoundVolumeSettings = nullptr;

	if (!uFnDumpSoundVolumeSettings)
	{
		uFnDumpSoundVolumeSettings = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DumpSoundVolumeSettings");
	}

	UGHM_SoundManager_execDumpSoundVolumeSettings_Params DumpSoundVolumeSettings_Params;

	uFnDumpSoundVolumeSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDumpSoundVolumeSettings, &DumpSoundVolumeSettings_Params, nullptr);

	uFnDumpSoundVolumeSettings->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.DeleteDebugMenuItems
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenu*          DebugMenu                      (CPF_Parm)

void UGHM_SoundManager::eventDeleteDebugMenuItems(class UGHM_DebugMenu* DebugMenu)
{
	static UFunction* uFnDeleteDebugMenuItems = nullptr;

	if (!uFnDeleteDebugMenuItems)
	{
		uFnDeleteDebugMenuItems = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DeleteDebugMenuItems");
	}

	UGHM_SoundManager_eventDeleteDebugMenuItems_Params DeleteDebugMenuItems_Params;
	memcpy_s(&DeleteDebugMenuItems_Params.DebugMenu, 0x8, &DebugMenu, 0x8);

	this->ProcessEvent(uFnDeleteDebugMenuItems, &DeleteDebugMenuItems_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.GetSoundDebugUtility
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_SoundDebugUtility*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_SoundDebugUtility* UGHM_SoundManager::GetSoundDebugUtility()
{
	static UFunction* uFnGetSoundDebugUtility = nullptr;

	if (!uFnGetSoundDebugUtility)
	{
		uFnGetSoundDebugUtility = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.GetSoundDebugUtility");
	}

	UGHM_SoundManager_execGetSoundDebugUtility_Params GetSoundDebugUtility_Params;

	uFnGetSoundDebugUtility->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetSoundDebugUtility, &GetSoundDebugUtility_Params, nullptr);

	uFnGetSoundDebugUtility->FunctionFlags |= 0x400;

	return GetSoundDebugUtility_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.ResetSoundDisplay2DValues
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::ResetSoundDisplay2DValues()
{
	static UFunction* uFnResetSoundDisplay2DValues = nullptr;

	if (!uFnResetSoundDisplay2DValues)
	{
		uFnResetSoundDisplay2DValues = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.ResetSoundDisplay2DValues");
	}

	UGHM_SoundManager_execResetSoundDisplay2DValues_Params ResetSoundDisplay2DValues_Params;

	this->ProcessEvent(uFnResetSoundDisplay2DValues, &ResetSoundDisplay2DValues_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.SeeSound
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::SeeSound()
{
	static UFunction* uFnSeeSound = nullptr;

	if (!uFnSeeSound)
	{
		uFnSeeSound = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SeeSound");
	}

	UGHM_SoundManager_execSeeSound_Params SeeSound_Params;

	this->ProcessEvent(uFnSeeSound, &SeeSound_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.SeeSound2D
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::SeeSound2D()
{
	static UFunction* uFnSeeSound2D = nullptr;

	if (!uFnSeeSound2D)
	{
		uFnSeeSound2D = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SeeSound2D");
	}

	UGHM_SoundManager_execSeeSound2D_Params SeeSound2D_Params;

	this->ProcessEvent(uFnSeeSound2D, &SeeSound2D_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_DisplayFilterOwnerActor
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::DebugMenuExecCommand_DisplayFilterOwnerActor()
{
	static UFunction* uFnDebugMenuExecCommand_DisplayFilterOwnerActor = nullptr;

	if (!uFnDebugMenuExecCommand_DisplayFilterOwnerActor)
	{
		uFnDebugMenuExecCommand_DisplayFilterOwnerActor = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_DisplayFilterOwnerActor");
	}

	UGHM_SoundManager_execDebugMenuExecCommand_DisplayFilterOwnerActor_Params DebugMenuExecCommand_DisplayFilterOwnerActor_Params;

	this->ProcessEvent(uFnDebugMenuExecCommand_DisplayFilterOwnerActor, &DebugMenuExecCommand_DisplayFilterOwnerActor_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_ResetSoundDisplayActorList
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::DebugMenuExecCommand_ResetSoundDisplayActorList()
{
	static UFunction* uFnDebugMenuExecCommand_ResetSoundDisplayActorList = nullptr;

	if (!uFnDebugMenuExecCommand_ResetSoundDisplayActorList)
	{
		uFnDebugMenuExecCommand_ResetSoundDisplayActorList = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_ResetSoundDisplayActorList");
	}

	UGHM_SoundManager_execDebugMenuExecCommand_ResetSoundDisplayActorList_Params DebugMenuExecCommand_ResetSoundDisplayActorList_Params;

	this->ProcessEvent(uFnDebugMenuExecCommand_ResetSoundDisplayActorList, &DebugMenuExecCommand_ResetSoundDisplayActorList_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_ClearDisplayFilterSoundClass
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::DebugMenuExecCommand_ClearDisplayFilterSoundClass()
{
	static UFunction* uFnDebugMenuExecCommand_ClearDisplayFilterSoundClass = nullptr;

	if (!uFnDebugMenuExecCommand_ClearDisplayFilterSoundClass)
	{
		uFnDebugMenuExecCommand_ClearDisplayFilterSoundClass = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_ClearDisplayFilterSoundClass");
	}

	UGHM_SoundManager_execDebugMenuExecCommand_ClearDisplayFilterSoundClass_Params DebugMenuExecCommand_ClearDisplayFilterSoundClass_Params;

	this->ProcessEvent(uFnDebugMenuExecCommand_ClearDisplayFilterSoundClass, &DebugMenuExecCommand_ClearDisplayFilterSoundClass_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_DisplayFilterSoundClass
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::DebugMenuExecCommand_DisplayFilterSoundClass()
{
	static UFunction* uFnDebugMenuExecCommand_DisplayFilterSoundClass = nullptr;

	if (!uFnDebugMenuExecCommand_DisplayFilterSoundClass)
	{
		uFnDebugMenuExecCommand_DisplayFilterSoundClass = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DebugMenuExecCommand_DisplayFilterSoundClass");
	}

	UGHM_SoundManager_execDebugMenuExecCommand_DisplayFilterSoundClass_Params DebugMenuExecCommand_DisplayFilterSoundClass_Params;

	this->ProcessEvent(uFnDebugMenuExecCommand_DisplayFilterSoundClass, &DebugMenuExecCommand_DisplayFilterSoundClass_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.MyConsoleCommand
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Cmd                            (CPF_Parm | CPF_NeedCtorLink)

void UGHM_SoundManager::MyConsoleCommand(class FString Cmd)
{
	static UFunction* uFnMyConsoleCommand = nullptr;

	if (!uFnMyConsoleCommand)
	{
		uFnMyConsoleCommand = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.MyConsoleCommand");
	}

	UGHM_SoundManager_execMyConsoleCommand_Params MyConsoleCommand_Params;
	memcpy_s(&MyConsoleCommand_Params.Cmd, 0x10, &Cmd, 0x10);

	this->ProcessEvent(uFnMyConsoleCommand, &MyConsoleCommand_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.ToggleDisplayRadioFilterState
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::ToggleDisplayRadioFilterState()
{
	static UFunction* uFnToggleDisplayRadioFilterState = nullptr;

	if (!uFnToggleDisplayRadioFilterState)
	{
		uFnToggleDisplayRadioFilterState = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.ToggleDisplayRadioFilterState");
	}

	UGHM_SoundManager_execToggleDisplayRadioFilterState_Params ToggleDisplayRadioFilterState_Params;

	this->ProcessEvent(uFnToggleDisplayRadioFilterState, &ToggleDisplayRadioFilterState_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.SetRadioFilterForMusicToDebugMenu
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  InEnableRadioFilterForMusic    (CPF_Parm)

void UGHM_SoundManager::eventSetRadioFilterForMusicToDebugMenu(unsigned long InEnableRadioFilterForMusic)
{
	static UFunction* uFnSetRadioFilterForMusicToDebugMenu = nullptr;

	if (!uFnSetRadioFilterForMusicToDebugMenu)
	{
		uFnSetRadioFilterForMusicToDebugMenu = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetRadioFilterForMusicToDebugMenu");
	}

	UGHM_SoundManager_eventSetRadioFilterForMusicToDebugMenu_Params SetRadioFilterForMusicToDebugMenu_Params;
	SetRadioFilterForMusicToDebugMenu_Params.InEnableRadioFilterForMusic = InEnableRadioFilterForMusic;

	this->ProcessEvent(uFnSetRadioFilterForMusicToDebugMenu, &SetRadioFilterForMusicToDebugMenu_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.SetRadioFilterForMusic
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  enableRadioFilterForMusic      (CPF_Parm)

void UGHM_SoundManager::SetRadioFilterForMusic(unsigned long enableRadioFilterForMusic)
{
	static UFunction* uFnSetRadioFilterForMusic = nullptr;

	if (!uFnSetRadioFilterForMusic)
	{
		uFnSetRadioFilterForMusic = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetRadioFilterForMusic");
	}

	UGHM_SoundManager_execSetRadioFilterForMusic_Params SetRadioFilterForMusic_Params;
	SetRadioFilterForMusic_Params.enableRadioFilterForMusic = enableRadioFilterForMusic;

	uFnSetRadioFilterForMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetRadioFilterForMusic, &SetRadioFilterForMusic_Params, nullptr);

	uFnSetRadioFilterForMusic->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.ToggleRadioFilterForMusic
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::ToggleRadioFilterForMusic()
{
	static UFunction* uFnToggleRadioFilterForMusic = nullptr;

	if (!uFnToggleRadioFilterForMusic)
	{
		uFnToggleRadioFilterForMusic = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.ToggleRadioFilterForMusic");
	}

	UGHM_SoundManager_execToggleRadioFilterForMusic_Params ToggleRadioFilterForMusic_Params;

	this->ProcessEvent(uFnToggleRadioFilterForMusic, &ToggleRadioFilterForMusic_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.DumpReverbAll
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::DumpReverbAll()
{
	static UFunction* uFnDumpReverbAll = nullptr;

	if (!uFnDumpReverbAll)
	{
		uFnDumpReverbAll = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DumpReverbAll");
	}

	UGHM_SoundManager_execDumpReverbAll_Params DumpReverbAll_Params;

	uFnDumpReverbAll->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDumpReverbAll, &DumpReverbAll_Params, nullptr);

	uFnDumpReverbAll->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.ToggleDisplayReverbName
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::ToggleDisplayReverbName()
{
	static UFunction* uFnToggleDisplayReverbName = nullptr;

	if (!uFnToggleDisplayReverbName)
	{
		uFnToggleDisplayReverbName = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.ToggleDisplayReverbName");
	}

	UGHM_SoundManager_execToggleDisplayReverbName_Params ToggleDisplayReverbName_Params;

	this->ProcessEvent(uFnToggleDisplayReverbName, &ToggleDisplayReverbName_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.ApplyReverbTuning
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FReverbTuningParam      InReverbTuningParam            (CPF_Parm)

void UGHM_SoundManager::ApplyReverbTuning(struct FReverbTuningParam InReverbTuningParam)
{
	static UFunction* uFnApplyReverbTuning = nullptr;

	if (!uFnApplyReverbTuning)
	{
		uFnApplyReverbTuning = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.ApplyReverbTuning");
	}

	UGHM_SoundManager_execApplyReverbTuning_Params ApplyReverbTuning_Params;
	memcpy_s(&ApplyReverbTuning_Params.InReverbTuningParam, 0x34, &InReverbTuningParam, 0x34);

	uFnApplyReverbTuning->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnApplyReverbTuning, &ApplyReverbTuning_Params, nullptr);

	uFnApplyReverbTuning->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.ApplyReverbTuningDelegate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SoundManager::ApplyReverbTuningDelegate()
{
	static UFunction* uFnApplyReverbTuningDelegate = nullptr;

	if (!uFnApplyReverbTuningDelegate)
	{
		uFnApplyReverbTuningDelegate = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.ApplyReverbTuningDelegate");
	}

	UGHM_SoundManager_execApplyReverbTuningDelegate_Params ApplyReverbTuningDelegate_Params;

	this->ProcessEvent(uFnApplyReverbTuningDelegate, &ApplyReverbTuningDelegate_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.ReverbChanged
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FReverbTuningParam      InReverbTuningParam            (CPF_Parm)

void UGHM_SoundManager::eventReverbChanged(struct FReverbTuningParam InReverbTuningParam)
{
	static UFunction* uFnReverbChanged = nullptr;

	if (!uFnReverbChanged)
	{
		uFnReverbChanged = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.ReverbChanged");
	}

	UGHM_SoundManager_eventReverbChanged_Params ReverbChanged_Params;
	memcpy_s(&ReverbChanged_Params.InReverbTuningParam, 0x34, &InReverbTuningParam, 0x34);

	this->ProcessEvent(uFnReverbChanged, &ReverbChanged_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.AddDebugMenuTuningReverb
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenu*          DebugMenu                      (CPF_Parm)

void UGHM_SoundManager::AddDebugMenuTuningReverb(class UGHM_DebugMenu* DebugMenu)
{
	static UFunction* uFnAddDebugMenuTuningReverb = nullptr;

	if (!uFnAddDebugMenuTuningReverb)
	{
		uFnAddDebugMenuTuningReverb = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.AddDebugMenuTuningReverb");
	}

	UGHM_SoundManager_execAddDebugMenuTuningReverb_Params AddDebugMenuTuningReverb_Params;
	memcpy_s(&AddDebugMenuTuningReverb_Params.DebugMenu, 0x8, &DebugMenu, 0x8);

	this->ProcessEvent(uFnAddDebugMenuTuningReverb, &AddDebugMenuTuningReverb_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.AddDebugMenuDisplaySoundClassMenu
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenu*          DebugMenu                      (CPF_Parm)

void UGHM_SoundManager::AddDebugMenuDisplaySoundClassMenu(class UGHM_DebugMenu* DebugMenu)
{
	static UFunction* uFnAddDebugMenuDisplaySoundClassMenu = nullptr;

	if (!uFnAddDebugMenuDisplaySoundClassMenu)
	{
		uFnAddDebugMenuDisplaySoundClassMenu = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.AddDebugMenuDisplaySoundClassMenu");
	}

	UGHM_SoundManager_execAddDebugMenuDisplaySoundClassMenu_Params AddDebugMenuDisplaySoundClassMenu_Params;
	memcpy_s(&AddDebugMenuDisplaySoundClassMenu_Params.DebugMenu, 0x8, &DebugMenu, 0x8);

	this->ProcessEvent(uFnAddDebugMenuDisplaySoundClassMenu, &AddDebugMenuDisplaySoundClassMenu_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.GetSoundClassList
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FName>           OutSoundClassList              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGHM_SoundManager::GetSoundClassList(TArray<struct FName>& OutSoundClassList)
{
	static UFunction* uFnGetSoundClassList = nullptr;

	if (!uFnGetSoundClassList)
	{
		uFnGetSoundClassList = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.GetSoundClassList");
	}

	UGHM_SoundManager_execGetSoundClassList_Params GetSoundClassList_Params;
	memcpy_s(&GetSoundClassList_Params.OutSoundClassList, 0x10, &OutSoundClassList, 0x10);

	uFnGetSoundClassList->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetSoundClassList, &GetSoundClassList_Params, nullptr);

	uFnGetSoundClassList->FunctionFlags |= 0x400;

	memcpy_s(&OutSoundClassList, 0x10, &GetSoundClassList_Params.OutSoundClassList, 0x10);

	return GetSoundClassList_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.AddDebugMenuItems
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_DebugMenu*          DebugMenu                      (CPF_Parm)

void UGHM_SoundManager::AddDebugMenuItems(class UGHM_DebugMenu* DebugMenu)
{
	static UFunction* uFnAddDebugMenuItems = nullptr;

	if (!uFnAddDebugMenuItems)
	{
		uFnAddDebugMenuItems = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.AddDebugMenuItems");
	}

	UGHM_SoundManager_execAddDebugMenuItems_Params AddDebugMenuItems_Params;
	memcpy_s(&AddDebugMenuItems_Params.DebugMenu, 0x8, &DebugMenu, 0x8);

	this->ProcessEvent(uFnAddDebugMenuItems, &AddDebugMenuItems_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.DspFXToggleEffect
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        inFxChainId                    (CPF_Parm)
// struct FName                   inEffectName                   (CPF_Parm)
// unsigned long                  inEnabled                      (CPF_Parm)

bool UGHM_SoundManager::DspFXToggleEffect(int32_t inFxChainId, struct FName inEffectName, unsigned long inEnabled)
{
	static UFunction* uFnDspFXToggleEffect = nullptr;

	if (!uFnDspFXToggleEffect)
	{
		uFnDspFXToggleEffect = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DspFXToggleEffect");
	}

	UGHM_SoundManager_execDspFXToggleEffect_Params DspFXToggleEffect_Params;
	memcpy_s(&DspFXToggleEffect_Params.inFxChainId, 0x4, &inFxChainId, 0x4);
	memcpy_s(&DspFXToggleEffect_Params.inEffectName, 0x8, &inEffectName, 0x8);
	DspFXToggleEffect_Params.inEnabled = inEnabled;

	uFnDspFXToggleEffect->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDspFXToggleEffect, &DspFXToggleEffect_Params, nullptr);

	uFnDspFXToggleEffect->FunctionFlags |= 0x400;

	return DspFXToggleEffect_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.DspFXSetParameterValue
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        inFxChainId                    (CPF_Parm)
// struct FName                   inEffectName                   (CPF_Parm)
// struct FName                   inParameterName                (CPF_Parm)
// float                          inFloatParam                   (CPF_OptionalParm | CPF_Parm)
// float                          inInterpolation                (CPF_OptionalParm | CPF_Parm)

bool UGHM_SoundManager::DspFXSetParameterValue(int32_t inFxChainId, struct FName inEffectName, struct FName inParameterName, float inFloatParam, float inInterpolation)
{
	static UFunction* uFnDspFXSetParameterValue = nullptr;

	if (!uFnDspFXSetParameterValue)
	{
		uFnDspFXSetParameterValue = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DspFXSetParameterValue");
	}

	UGHM_SoundManager_execDspFXSetParameterValue_Params DspFXSetParameterValue_Params;
	memcpy_s(&DspFXSetParameterValue_Params.inFxChainId, 0x4, &inFxChainId, 0x4);
	memcpy_s(&DspFXSetParameterValue_Params.inEffectName, 0x8, &inEffectName, 0x8);
	memcpy_s(&DspFXSetParameterValue_Params.inParameterName, 0x8, &inParameterName, 0x8);
	memcpy_s(&DspFXSetParameterValue_Params.inFloatParam, 0x4, &inFloatParam, 0x4);
	memcpy_s(&DspFXSetParameterValue_Params.inInterpolation, 0x4, &inInterpolation, 0x4);

	uFnDspFXSetParameterValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDspFXSetParameterValue, &DspFXSetParameterValue_Params, nullptr);

	uFnDspFXSetParameterValue->FunctionFlags |= 0x400;

	return DspFXSetParameterValue_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.DspFXDestroyChain
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        inFxChainId                    (CPF_Parm)

void UGHM_SoundManager::DspFXDestroyChain(int32_t inFxChainId)
{
	static UFunction* uFnDspFXDestroyChain = nullptr;

	if (!uFnDspFXDestroyChain)
	{
		uFnDspFXDestroyChain = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DspFXDestroyChain");
	}

	UGHM_SoundManager_execDspFXDestroyChain_Params DspFXDestroyChain_Params;
	memcpy_s(&DspFXDestroyChain_Params.inFxChainId, 0x4, &inFxChainId, 0x4);

	uFnDspFXDestroyChain->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDspFXDestroyChain, &DspFXDestroyChain_Params, nullptr);

	uFnDspFXDestroyChain->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.DspFXCreateChain
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FName>           inEffectNames                  (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        inLevel                        (CPF_OptionalParm | CPF_Parm)

int32_t UGHM_SoundManager::DspFXCreateChain(TArray<struct FName> inEffectNames, uint8_t inLevel)
{
	static UFunction* uFnDspFXCreateChain = nullptr;

	if (!uFnDspFXCreateChain)
	{
		uFnDspFXCreateChain = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.DspFXCreateChain");
	}

	UGHM_SoundManager_execDspFXCreateChain_Params DspFXCreateChain_Params;
	memcpy_s(&DspFXCreateChain_Params.inEffectNames, 0x10, &inEffectNames, 0x10);
	memcpy_s(&DspFXCreateChain_Params.inLevel, 0x1, &inLevel, 0x1);

	uFnDspFXCreateChain->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDspFXCreateChain, &DspFXCreateChain_Params, nullptr);

	uFnDspFXCreateChain->FunctionFlags |= 0x400;

	return DspFXCreateChain_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.MarkerEvent
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          inTime                         (CPF_Parm)
// int32_t                        inMarkerIndex                  (CPF_Parm)
// class FString                  inMarkerName                   (CPF_Parm | CPF_NeedCtorLink)

void UGHM_SoundManager::eventMarkerEvent(float inTime, int32_t inMarkerIndex, class FString inMarkerName)
{
	static UFunction* uFnMarkerEvent = nullptr;

	if (!uFnMarkerEvent)
	{
		uFnMarkerEvent = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.MarkerEvent");
	}

	UGHM_SoundManager_eventMarkerEvent_Params MarkerEvent_Params;
	memcpy_s(&MarkerEvent_Params.inTime, 0x4, &inTime, 0x4);
	memcpy_s(&MarkerEvent_Params.inMarkerIndex, 0x4, &inMarkerIndex, 0x4);
	memcpy_s(&MarkerEvent_Params.inMarkerName, 0x10, &inMarkerName, 0x10);

	this->ProcessEvent(uFnMarkerEvent, &MarkerEvent_Params, nullptr);
};

// Function GHMEngine.GHM_SoundManager.SetSoundClassVolume
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   SoundClassName                 (CPF_Parm)
// float                          Volume                         (CPF_Parm)

void UGHM_SoundManager::SetSoundClassVolume(struct FName SoundClassName, float Volume)
{
	static UFunction* uFnSetSoundClassVolume = nullptr;

	if (!uFnSetSoundClassVolume)
	{
		uFnSetSoundClassVolume = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetSoundClassVolume");
	}

	UGHM_SoundManager_execSetSoundClassVolume_Params SetSoundClassVolume_Params;
	memcpy_s(&SetSoundClassVolume_Params.SoundClassName, 0x8, &SoundClassName, 0x8);
	memcpy_s(&SetSoundClassVolume_Params.Volume, 0x4, &Volume, 0x4);

	uFnSetSoundClassVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSoundClassVolume, &SetSoundClassVolume_Params, nullptr);

	uFnSetSoundClassVolume->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.FadeOutBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Handle                         (CPF_Parm)
// float                          FadeOutDuration                (CPF_Parm)
// float                          FadeVolumeLevel                (CPF_Parm)

void UGHM_SoundManager::FadeOutBgm(int32_t Handle, float FadeOutDuration, float FadeVolumeLevel)
{
	static UFunction* uFnFadeOutBgm = nullptr;

	if (!uFnFadeOutBgm)
	{
		uFnFadeOutBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.FadeOutBgm");
	}

	UGHM_SoundManager_execFadeOutBgm_Params FadeOutBgm_Params;
	memcpy_s(&FadeOutBgm_Params.Handle, 0x4, &Handle, 0x4);
	memcpy_s(&FadeOutBgm_Params.FadeOutDuration, 0x4, &FadeOutDuration, 0x4);
	memcpy_s(&FadeOutBgm_Params.FadeVolumeLevel, 0x4, &FadeVolumeLevel, 0x4);

	uFnFadeOutBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFadeOutBgm, &FadeOutBgm_Params, nullptr);

	uFnFadeOutBgm->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.FadeInBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Handle                         (CPF_Parm)
// float                          FadeInDuration                 (CPF_Parm)
// float                          FadeVolumeLevel                (CPF_Parm)

void UGHM_SoundManager::FadeInBgm(int32_t Handle, float FadeInDuration, float FadeVolumeLevel)
{
	static UFunction* uFnFadeInBgm = nullptr;

	if (!uFnFadeInBgm)
	{
		uFnFadeInBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.FadeInBgm");
	}

	UGHM_SoundManager_execFadeInBgm_Params FadeInBgm_Params;
	memcpy_s(&FadeInBgm_Params.Handle, 0x4, &Handle, 0x4);
	memcpy_s(&FadeInBgm_Params.FadeInDuration, 0x4, &FadeInDuration, 0x4);
	memcpy_s(&FadeInBgm_Params.FadeVolumeLevel, 0x4, &FadeVolumeLevel, 0x4);

	uFnFadeInBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFadeInBgm, &FadeInBgm_Params, nullptr);

	uFnFadeInBgm->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.GetBgmUsedMemorySize
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_SoundManager::GetBgmUsedMemorySize()
{
	static UFunction* uFnGetBgmUsedMemorySize = nullptr;

	if (!uFnGetBgmUsedMemorySize)
	{
		uFnGetBgmUsedMemorySize = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.GetBgmUsedMemorySize");
	}

	UGHM_SoundManager_execGetBgmUsedMemorySize_Params GetBgmUsedMemorySize_Params;

	uFnGetBgmUsedMemorySize->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetBgmUsedMemorySize, &GetBgmUsedMemorySize_Params, nullptr);

	uFnGetBgmUsedMemorySize->FunctionFlags |= 0x400;

	return GetBgmUsedMemorySize_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.IsPlayBgmN
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   Filename                       (CPF_Parm)

bool UGHM_SoundManager::IsPlayBgmN(struct FName Filename)
{
	static UFunction* uFnIsPlayBgmN = nullptr;

	if (!uFnIsPlayBgmN)
	{
		uFnIsPlayBgmN = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.IsPlayBgmN");
	}

	UGHM_SoundManager_execIsPlayBgmN_Params IsPlayBgmN_Params;
	memcpy_s(&IsPlayBgmN_Params.Filename, 0x8, &Filename, 0x8);

	uFnIsPlayBgmN->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPlayBgmN, &IsPlayBgmN_Params, nullptr);

	uFnIsPlayBgmN->FunctionFlags |= 0x400;

	return IsPlayBgmN_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.IsPlayBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Handle                         (CPF_Parm)

bool UGHM_SoundManager::IsPlayBgm(int32_t Handle)
{
	static UFunction* uFnIsPlayBgm = nullptr;

	if (!uFnIsPlayBgm)
	{
		uFnIsPlayBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.IsPlayBgm");
	}

	UGHM_SoundManager_execIsPlayBgm_Params IsPlayBgm_Params;
	memcpy_s(&IsPlayBgm_Params.Handle, 0x4, &Handle, 0x4);

	uFnIsPlayBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPlayBgm, &IsPlayBgm_Params, nullptr);

	uFnIsPlayBgm->FunctionFlags |= 0x400;

	return IsPlayBgm_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.IsFadingOutBgmN
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   Filename                       (CPF_Parm)

bool UGHM_SoundManager::IsFadingOutBgmN(struct FName Filename)
{
	static UFunction* uFnIsFadingOutBgmN = nullptr;

	if (!uFnIsFadingOutBgmN)
	{
		uFnIsFadingOutBgmN = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.IsFadingOutBgmN");
	}

	UGHM_SoundManager_execIsFadingOutBgmN_Params IsFadingOutBgmN_Params;
	memcpy_s(&IsFadingOutBgmN_Params.Filename, 0x8, &Filename, 0x8);

	uFnIsFadingOutBgmN->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsFadingOutBgmN, &IsFadingOutBgmN_Params, nullptr);

	uFnIsFadingOutBgmN->FunctionFlags |= 0x400;

	return IsFadingOutBgmN_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.IsFadingOutBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Handle                         (CPF_Parm)

bool UGHM_SoundManager::IsFadingOutBgm(int32_t Handle)
{
	static UFunction* uFnIsFadingOutBgm = nullptr;

	if (!uFnIsFadingOutBgm)
	{
		uFnIsFadingOutBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.IsFadingOutBgm");
	}

	UGHM_SoundManager_execIsFadingOutBgm_Params IsFadingOutBgm_Params;
	memcpy_s(&IsFadingOutBgm_Params.Handle, 0x4, &Handle, 0x4);

	uFnIsFadingOutBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsFadingOutBgm, &IsFadingOutBgm_Params, nullptr);

	uFnIsFadingOutBgm->FunctionFlags |= 0x400;

	return IsFadingOutBgm_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.IsFadingInBgmN
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   Filename                       (CPF_Parm)

bool UGHM_SoundManager::IsFadingInBgmN(struct FName Filename)
{
	static UFunction* uFnIsFadingInBgmN = nullptr;

	if (!uFnIsFadingInBgmN)
	{
		uFnIsFadingInBgmN = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.IsFadingInBgmN");
	}

	UGHM_SoundManager_execIsFadingInBgmN_Params IsFadingInBgmN_Params;
	memcpy_s(&IsFadingInBgmN_Params.Filename, 0x8, &Filename, 0x8);

	uFnIsFadingInBgmN->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsFadingInBgmN, &IsFadingInBgmN_Params, nullptr);

	uFnIsFadingInBgmN->FunctionFlags |= 0x400;

	return IsFadingInBgmN_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.IsFadingInBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Handle                         (CPF_Parm)

bool UGHM_SoundManager::IsFadingInBgm(int32_t Handle)
{
	static UFunction* uFnIsFadingInBgm = nullptr;

	if (!uFnIsFadingInBgm)
	{
		uFnIsFadingInBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.IsFadingInBgm");
	}

	UGHM_SoundManager_execIsFadingInBgm_Params IsFadingInBgm_Params;
	memcpy_s(&IsFadingInBgm_Params.Handle, 0x4, &Handle, 0x4);

	uFnIsFadingInBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsFadingInBgm, &IsFadingInBgm_Params, nullptr);

	uFnIsFadingInBgm->FunctionFlags |= 0x400;

	return IsFadingInBgm_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.UnPauseBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Handle                         (CPF_Parm)

void UGHM_SoundManager::UnPauseBgm(int32_t Handle)
{
	static UFunction* uFnUnPauseBgm = nullptr;

	if (!uFnUnPauseBgm)
	{
		uFnUnPauseBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.UnPauseBgm");
	}

	UGHM_SoundManager_execUnPauseBgm_Params UnPauseBgm_Params;
	memcpy_s(&UnPauseBgm_Params.Handle, 0x4, &Handle, 0x4);

	uFnUnPauseBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnPauseBgm, &UnPauseBgm_Params, nullptr);

	uFnUnPauseBgm->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.UnPauseBgmN
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Filename                       (CPF_Parm)

void UGHM_SoundManager::UnPauseBgmN(struct FName Filename)
{
	static UFunction* uFnUnPauseBgmN = nullptr;

	if (!uFnUnPauseBgmN)
	{
		uFnUnPauseBgmN = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.UnPauseBgmN");
	}

	UGHM_SoundManager_execUnPauseBgmN_Params UnPauseBgmN_Params;
	memcpy_s(&UnPauseBgmN_Params.Filename, 0x8, &Filename, 0x8);

	uFnUnPauseBgmN->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnPauseBgmN, &UnPauseBgmN_Params, nullptr);

	uFnUnPauseBgmN->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.PauseBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Handle                         (CPF_Parm)

void UGHM_SoundManager::PauseBgm(int32_t Handle)
{
	static UFunction* uFnPauseBgm = nullptr;

	if (!uFnPauseBgm)
	{
		uFnPauseBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.PauseBgm");
	}

	UGHM_SoundManager_execPauseBgm_Params PauseBgm_Params;
	memcpy_s(&PauseBgm_Params.Handle, 0x4, &Handle, 0x4);

	uFnPauseBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPauseBgm, &PauseBgm_Params, nullptr);

	uFnPauseBgm->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.PauseBgmN
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Filename                       (CPF_Parm)

void UGHM_SoundManager::PauseBgmN(struct FName Filename)
{
	static UFunction* uFnPauseBgmN = nullptr;

	if (!uFnPauseBgmN)
	{
		uFnPauseBgmN = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.PauseBgmN");
	}

	UGHM_SoundManager_execPauseBgmN_Params PauseBgmN_Params;
	memcpy_s(&PauseBgmN_Params.Filename, 0x8, &Filename, 0x8);

	uFnPauseBgmN->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPauseBgmN, &PauseBgmN_Params, nullptr);

	uFnPauseBgmN->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.StopAllMatineeSkipBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          in_fadeTime                    (CPF_Parm)

void UGHM_SoundManager::StopAllMatineeSkipBgm(float in_fadeTime)
{
	static UFunction* uFnStopAllMatineeSkipBgm = nullptr;

	if (!uFnStopAllMatineeSkipBgm)
	{
		uFnStopAllMatineeSkipBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.StopAllMatineeSkipBgm");
	}

	UGHM_SoundManager_execStopAllMatineeSkipBgm_Params StopAllMatineeSkipBgm_Params;
	memcpy_s(&StopAllMatineeSkipBgm_Params.in_fadeTime, 0x4, &in_fadeTime, 0x4);

	uFnStopAllMatineeSkipBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopAllMatineeSkipBgm, &StopAllMatineeSkipBgm_Params, nullptr);

	uFnStopAllMatineeSkipBgm->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.StopAllBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          in_fadeTime                    (CPF_Parm)

void UGHM_SoundManager::StopAllBgm(float in_fadeTime)
{
	static UFunction* uFnStopAllBgm = nullptr;

	if (!uFnStopAllBgm)
	{
		uFnStopAllBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.StopAllBgm");
	}

	UGHM_SoundManager_execStopAllBgm_Params StopAllBgm_Params;
	memcpy_s(&StopAllBgm_Params.in_fadeTime, 0x4, &in_fadeTime, 0x4);

	uFnStopAllBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopAllBgm, &StopAllBgm_Params, nullptr);

	uFnStopAllBgm->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.StopBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Handle                         (CPF_Parm)
// float                          in_fadeTime                    (CPF_Parm)

void UGHM_SoundManager::StopBgm(int32_t Handle, float in_fadeTime)
{
	static UFunction* uFnStopBgm = nullptr;

	if (!uFnStopBgm)
	{
		uFnStopBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.StopBgm");
	}

	UGHM_SoundManager_execStopBgm_Params StopBgm_Params;
	memcpy_s(&StopBgm_Params.Handle, 0x4, &Handle, 0x4);
	memcpy_s(&StopBgm_Params.in_fadeTime, 0x4, &in_fadeTime, 0x4);

	uFnStopBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopBgm, &StopBgm_Params, nullptr);

	uFnStopBgm->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.StopBgmN
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Filename                       (CPF_Parm)
// float                          in_fadeTime                    (CPF_Parm)

void UGHM_SoundManager::StopBgmN(struct FName Filename, float in_fadeTime)
{
	static UFunction* uFnStopBgmN = nullptr;

	if (!uFnStopBgmN)
	{
		uFnStopBgmN = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.StopBgmN");
	}

	UGHM_SoundManager_execStopBgmN_Params StopBgmN_Params;
	memcpy_s(&StopBgmN_Params.Filename, 0x8, &Filename, 0x8);
	memcpy_s(&StopBgmN_Params.in_fadeTime, 0x4, &in_fadeTime, 0x4);

	uFnStopBgmN->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopBgmN, &StopBgmN_Params, nullptr);

	uFnStopBgmN->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.PlayBgm
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Handle                         (CPF_Parm)
// float                          in_startVol                    (CPF_Parm)
// float                          in_endVol                      (CPF_Parm)
// float                          in_fadeTime                    (CPF_Parm)
// struct FName                   SoundClass                     (CPF_Parm)
// float                          in_RearChannelVolumeMultiplier (CPF_Parm)
// unsigned long                  m_bOneShot                     (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bMatineeSkip                   (CPF_OptionalParm | CPF_Parm)

void UGHM_SoundManager::PlayBgm(int32_t Handle, float in_startVol, float in_endVol, float in_fadeTime, struct FName SoundClass, float in_RearChannelVolumeMultiplier, unsigned long m_bOneShot, unsigned long bMatineeSkip)
{
	static UFunction* uFnPlayBgm = nullptr;

	if (!uFnPlayBgm)
	{
		uFnPlayBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.PlayBgm");
	}

	UGHM_SoundManager_execPlayBgm_Params PlayBgm_Params;
	memcpy_s(&PlayBgm_Params.Handle, 0x4, &Handle, 0x4);
	memcpy_s(&PlayBgm_Params.in_startVol, 0x4, &in_startVol, 0x4);
	memcpy_s(&PlayBgm_Params.in_endVol, 0x4, &in_endVol, 0x4);
	memcpy_s(&PlayBgm_Params.in_fadeTime, 0x4, &in_fadeTime, 0x4);
	memcpy_s(&PlayBgm_Params.SoundClass, 0x8, &SoundClass, 0x8);
	memcpy_s(&PlayBgm_Params.in_RearChannelVolumeMultiplier, 0x4, &in_RearChannelVolumeMultiplier, 0x4);
	PlayBgm_Params.m_bOneShot = m_bOneShot;
	PlayBgm_Params.bMatineeSkip = bMatineeSkip;

	uFnPlayBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlayBgm, &PlayBgm_Params, nullptr);

	uFnPlayBgm->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.PlayBgmN
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Filename                       (CPF_Parm)
// float                          in_startVol                    (CPF_Parm)
// float                          in_endVol                      (CPF_Parm)
// float                          in_fadeTime                    (CPF_Parm)
// struct FName                   SoundClass                     (CPF_Parm)
// float                          in_RearChannelVolumeMultiplier (CPF_Parm)
// unsigned long                  m_bOneShot                     (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bMatineeSkip                   (CPF_OptionalParm | CPF_Parm)

void UGHM_SoundManager::PlayBgmN(struct FName Filename, float in_startVol, float in_endVol, float in_fadeTime, struct FName SoundClass, float in_RearChannelVolumeMultiplier, unsigned long m_bOneShot, unsigned long bMatineeSkip)
{
	static UFunction* uFnPlayBgmN = nullptr;

	if (!uFnPlayBgmN)
	{
		uFnPlayBgmN = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.PlayBgmN");
	}

	UGHM_SoundManager_execPlayBgmN_Params PlayBgmN_Params;
	memcpy_s(&PlayBgmN_Params.Filename, 0x8, &Filename, 0x8);
	memcpy_s(&PlayBgmN_Params.in_startVol, 0x4, &in_startVol, 0x4);
	memcpy_s(&PlayBgmN_Params.in_endVol, 0x4, &in_endVol, 0x4);
	memcpy_s(&PlayBgmN_Params.in_fadeTime, 0x4, &in_fadeTime, 0x4);
	memcpy_s(&PlayBgmN_Params.SoundClass, 0x8, &SoundClass, 0x8);
	memcpy_s(&PlayBgmN_Params.in_RearChannelVolumeMultiplier, 0x4, &in_RearChannelVolumeMultiplier, 0x4);
	PlayBgmN_Params.m_bOneShot = m_bOneShot;
	PlayBgmN_Params.bMatineeSkip = bMatineeSkip;

	uFnPlayBgmN->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlayBgmN, &PlayBgmN_Params, nullptr);

	uFnPlayBgmN->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.IsPreLoadedN
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   Filename                       (CPF_Parm)

bool UGHM_SoundManager::IsPreLoadedN(struct FName Filename)
{
	static UFunction* uFnIsPreLoadedN = nullptr;

	if (!uFnIsPreLoadedN)
	{
		uFnIsPreLoadedN = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.IsPreLoadedN");
	}

	UGHM_SoundManager_execIsPreLoadedN_Params IsPreLoadedN_Params;
	memcpy_s(&IsPreLoadedN_Params.Filename, 0x8, &Filename, 0x8);

	uFnIsPreLoadedN->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPreLoadedN, &IsPreLoadedN_Params, nullptr);

	uFnIsPreLoadedN->FunctionFlags |= 0x400;

	return IsPreLoadedN_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.IsPreLoaded
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        InHandle                       (CPF_Parm)

bool UGHM_SoundManager::IsPreLoaded(int32_t InHandle)
{
	static UFunction* uFnIsPreLoaded = nullptr;

	if (!uFnIsPreLoaded)
	{
		uFnIsPreLoaded = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.IsPreLoaded");
	}

	UGHM_SoundManager_execIsPreLoaded_Params IsPreLoaded_Params;
	memcpy_s(&IsPreLoaded_Params.InHandle, 0x4, &InHandle, 0x4);

	uFnIsPreLoaded->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPreLoaded, &IsPreLoaded_Params, nullptr);

	uFnIsPreLoaded->FunctionFlags |= 0x400;

	return IsPreLoaded_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.PreLoadBgm
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   Filename                       (CPF_Parm)

int32_t UGHM_SoundManager::PreLoadBgm(struct FName Filename)
{
	static UFunction* uFnPreLoadBgm = nullptr;

	if (!uFnPreLoadBgm)
	{
		uFnPreLoadBgm = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.PreLoadBgm");
	}

	UGHM_SoundManager_execPreLoadBgm_Params PreLoadBgm_Params;
	memcpy_s(&PreLoadBgm_Params.Filename, 0x8, &Filename, 0x8);

	uFnPreLoadBgm->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPreLoadBgm, &PreLoadBgm_Params, nullptr);

	uFnPreLoadBgm->FunctionFlags |= 0x400;

	return PreLoadBgm_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.GetGameSoundHelper
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_GameSoundHelper*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_GameSoundHelper* UGHM_SoundManager::GetGameSoundHelper()
{
	static UFunction* uFnGetGameSoundHelper = nullptr;

	if (!uFnGetGameSoundHelper)
	{
		uFnGetGameSoundHelper = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.GetGameSoundHelper");
	}

	UGHM_SoundManager_execGetGameSoundHelper_Params GetGameSoundHelper_Params;

	uFnGetGameSoundHelper->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetGameSoundHelper, &GetGameSoundHelper_Params, nullptr);

	uFnGetGameSoundHelper->FunctionFlags |= 0x400;

	return GetGameSoundHelper_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.SetSoundClassToBypassUserMusic
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   inSoundClassName               (CPF_Parm)

void UGHM_SoundManager::SetSoundClassToBypassUserMusic(struct FName inSoundClassName)
{
	static UFunction* uFnSetSoundClassToBypassUserMusic = nullptr;

	if (!uFnSetSoundClassToBypassUserMusic)
	{
		uFnSetSoundClassToBypassUserMusic = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetSoundClassToBypassUserMusic");
	}

	UGHM_SoundManager_execSetSoundClassToBypassUserMusic_Params SetSoundClassToBypassUserMusic_Params;
	memcpy_s(&SetSoundClassToBypassUserMusic_Params.inSoundClassName, 0x8, &inSoundClassName, 0x8);

	uFnSetSoundClassToBypassUserMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSoundClassToBypassUserMusic, &SetSoundClassToBypassUserMusic_Params, nullptr);

	uFnSetSoundClassToBypassUserMusic->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.SetSoundClassToOneSoundPerActor
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  inSoundClassName               (CPF_Parm | CPF_NeedCtorLink)

void UGHM_SoundManager::SetSoundClassToOneSoundPerActor(class FString inSoundClassName)
{
	static UFunction* uFnSetSoundClassToOneSoundPerActor = nullptr;

	if (!uFnSetSoundClassToOneSoundPerActor)
	{
		uFnSetSoundClassToOneSoundPerActor = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetSoundClassToOneSoundPerActor");
	}

	UGHM_SoundManager_execSetSoundClassToOneSoundPerActor_Params SetSoundClassToOneSoundPerActor_Params;
	memcpy_s(&SetSoundClassToOneSoundPerActor_Params.inSoundClassName, 0x10, &inSoundClassName, 0x10);

	uFnSetSoundClassToOneSoundPerActor->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSoundClassToOneSoundPerActor, &SetSoundClassToOneSoundPerActor_Params, nullptr);

	uFnSetSoundClassToOneSoundPerActor->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.SetPropertyValueInSoundNodes
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               InSoundCue                     (CPF_Parm)
// class AActor*                  owningActor                    (CPF_Parm)
// class UClass*                  inSoundNodeClass               (CPF_Parm)
// struct FName                   inPropertyName                 (CPF_Parm)
// float                          inFloatValue                   (CPF_Parm)
// class FString                  inNodeInstanceName             (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::SetPropertyValueInSoundNodes(class USoundCue* InSoundCue, class AActor* owningActor, class UClass* inSoundNodeClass, struct FName inPropertyName, float inFloatValue, class FString inNodeInstanceName, uint8_t& opResult)
{
	static UFunction* uFnSetPropertyValueInSoundNodes = nullptr;

	if (!uFnSetPropertyValueInSoundNodes)
	{
		uFnSetPropertyValueInSoundNodes = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetPropertyValueInSoundNodes");
	}

	UGHM_SoundManager_execSetPropertyValueInSoundNodes_Params SetPropertyValueInSoundNodes_Params;
	memcpy_s(&SetPropertyValueInSoundNodes_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&SetPropertyValueInSoundNodes_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&SetPropertyValueInSoundNodes_Params.inSoundNodeClass, 0x8, &inSoundNodeClass, 0x8);
	memcpy_s(&SetPropertyValueInSoundNodes_Params.inPropertyName, 0x8, &inPropertyName, 0x8);
	memcpy_s(&SetPropertyValueInSoundNodes_Params.inFloatValue, 0x4, &inFloatValue, 0x4);
	memcpy_s(&SetPropertyValueInSoundNodes_Params.inNodeInstanceName, 0x10, &inNodeInstanceName, 0x10);
	memcpy_s(&SetPropertyValueInSoundNodes_Params.opResult, 0x1, &opResult, 0x1);

	uFnSetPropertyValueInSoundNodes->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPropertyValueInSoundNodes, &SetPropertyValueInSoundNodes_Params, nullptr);

	uFnSetPropertyValueInSoundNodes->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &SetPropertyValueInSoundNodes_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.GetPropertyValueInSoundNode
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class USoundCue*               InSoundCue                     (CPF_Parm)
// class AActor*                  owningActor                    (CPF_Parm)
// class UClass*                  inSoundNodeClass               (CPF_Parm)
// struct FName                   inPropertyName                 (CPF_Parm)
// unsigned long                  inGetOnlyDefaultValue          (CPF_OptionalParm | CPF_Parm)
// class FString                  inNodeInstanceName             (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UGHM_SoundManager::GetPropertyValueInSoundNode(class USoundCue* InSoundCue, class AActor* owningActor, class UClass* inSoundNodeClass, struct FName inPropertyName, unsigned long inGetOnlyDefaultValue, class FString inNodeInstanceName, uint8_t& opResult)
{
	static UFunction* uFnGetPropertyValueInSoundNode = nullptr;

	if (!uFnGetPropertyValueInSoundNode)
	{
		uFnGetPropertyValueInSoundNode = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.GetPropertyValueInSoundNode");
	}

	UGHM_SoundManager_execGetPropertyValueInSoundNode_Params GetPropertyValueInSoundNode_Params;
	memcpy_s(&GetPropertyValueInSoundNode_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&GetPropertyValueInSoundNode_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&GetPropertyValueInSoundNode_Params.inSoundNodeClass, 0x8, &inSoundNodeClass, 0x8);
	memcpy_s(&GetPropertyValueInSoundNode_Params.inPropertyName, 0x8, &inPropertyName, 0x8);
	GetPropertyValueInSoundNode_Params.inGetOnlyDefaultValue = inGetOnlyDefaultValue;
	memcpy_s(&GetPropertyValueInSoundNode_Params.inNodeInstanceName, 0x10, &inNodeInstanceName, 0x10);
	memcpy_s(&GetPropertyValueInSoundNode_Params.opResult, 0x1, &opResult, 0x1);

	uFnGetPropertyValueInSoundNode->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetPropertyValueInSoundNode, &GetPropertyValueInSoundNode_Params, nullptr);

	uFnGetPropertyValueInSoundNode->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &GetPropertyValueInSoundNode_Params.opResult, 0x1);

	return GetPropertyValueInSoundNode_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.ScaleInRange
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          inputValue                     (CPF_Parm)
// float                          minInputRange                  (CPF_Parm)
// float                          maxInputRange                  (CPF_Parm)
// float                          minOutputRange                 (CPF_Parm)
// float                          maxOutputRange                 (CPF_Parm)
// unsigned long                  invert                         (CPF_Parm)

float UGHM_SoundManager::ScaleInRange(float inputValue, float minInputRange, float maxInputRange, float minOutputRange, float maxOutputRange, unsigned long invert)
{
	static UFunction* uFnScaleInRange = nullptr;

	if (!uFnScaleInRange)
	{
		uFnScaleInRange = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.ScaleInRange");
	}

	UGHM_SoundManager_execScaleInRange_Params ScaleInRange_Params;
	memcpy_s(&ScaleInRange_Params.inputValue, 0x4, &inputValue, 0x4);
	memcpy_s(&ScaleInRange_Params.minInputRange, 0x4, &minInputRange, 0x4);
	memcpy_s(&ScaleInRange_Params.maxInputRange, 0x4, &maxInputRange, 0x4);
	memcpy_s(&ScaleInRange_Params.minOutputRange, 0x4, &minOutputRange, 0x4);
	memcpy_s(&ScaleInRange_Params.maxOutputRange, 0x4, &maxOutputRange, 0x4);
	ScaleInRange_Params.invert = invert;

	uFnScaleInRange->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnScaleInRange, &ScaleInRange_Params, nullptr);

	uFnScaleInRange->FunctionFlags |= 0x400;

	return ScaleInRange_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.EnablePadSpeaker
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        PadNo                          (CPF_Parm)
// unsigned long                  isPadSpeakerEnable             (CPF_Parm)

void UGHM_SoundManager::EnablePadSpeaker(int32_t PadNo, unsigned long isPadSpeakerEnable)
{
	static UFunction* uFnEnablePadSpeaker = nullptr;

	if (!uFnEnablePadSpeaker)
	{
		uFnEnablePadSpeaker = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.EnablePadSpeaker");
	}

	UGHM_SoundManager_execEnablePadSpeaker_Params EnablePadSpeaker_Params;
	memcpy_s(&EnablePadSpeaker_Params.PadNo, 0x4, &PadNo, 0x4);
	EnablePadSpeaker_Params.isPadSpeakerEnable = isPadSpeakerEnable;

	uFnEnablePadSpeaker->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEnablePadSpeaker, &EnablePadSpeaker_Params, nullptr);

	uFnEnablePadSpeaker->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.SetAudioLanguage
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  inNewLanguage                  (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bReloadObjects                 (CPF_OptionalParm | CPF_Parm)

void UGHM_SoundManager::SetAudioLanguage(class FString inNewLanguage, unsigned long bReloadObjects)
{
	static UFunction* uFnSetAudioLanguage = nullptr;

	if (!uFnSetAudioLanguage)
	{
		uFnSetAudioLanguage = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetAudioLanguage");
	}

	UGHM_SoundManager_execSetAudioLanguage_Params SetAudioLanguage_Params;
	memcpy_s(&SetAudioLanguage_Params.inNewLanguage, 0x10, &inNewLanguage, 0x10);
	SetAudioLanguage_Params.bReloadObjects = bReloadObjects;

	uFnSetAudioLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetAudioLanguage, &SetAudioLanguage_Params, nullptr);

	uFnSetAudioLanguage->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.GetAudioLanguage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGHM_SoundManager::GetAudioLanguage()
{
	static UFunction* uFnGetAudioLanguage = nullptr;

	if (!uFnGetAudioLanguage)
	{
		uFnGetAudioLanguage = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.GetAudioLanguage");
	}

	UGHM_SoundManager_execGetAudioLanguage_Params GetAudioLanguage_Params;

	uFnGetAudioLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetAudioLanguage, &GetAudioLanguage_Params, nullptr);

	uFnGetAudioLanguage->FunctionFlags |= 0x400;

	return GetAudioLanguage_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.SetMultiChannelMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        inSelectedMultiChannelMode     (CPF_Parm)

void UGHM_SoundManager::SetMultiChannelMode(uint8_t inSelectedMultiChannelMode)
{
	static UFunction* uFnSetMultiChannelMode = nullptr;

	if (!uFnSetMultiChannelMode)
	{
		uFnSetMultiChannelMode = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetMultiChannelMode");
	}

	UGHM_SoundManager_execSetMultiChannelMode_Params SetMultiChannelMode_Params;
	memcpy_s(&SetMultiChannelMode_Params.inSelectedMultiChannelMode, 0x1, &inSelectedMultiChannelMode, 0x1);

	uFnSetMultiChannelMode->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetMultiChannelMode, &SetMultiChannelMode_Params, nullptr);

	uFnSetMultiChannelMode->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.GetMultiChannelMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t UGHM_SoundManager::GetMultiChannelMode()
{
	static UFunction* uFnGetMultiChannelMode = nullptr;

	if (!uFnGetMultiChannelMode)
	{
		uFnGetMultiChannelMode = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.GetMultiChannelMode");
	}

	UGHM_SoundManager_execGetMultiChannelMode_Params GetMultiChannelMode_Params;

	uFnGetMultiChannelMode->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetMultiChannelMode, &GetMultiChannelMode_Params, nullptr);

	uFnGetMultiChannelMode->FunctionFlags |= 0x400;

	return GetMultiChannelMode_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.IsAudioEnabled
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_SoundManager::IsAudioEnabled()
{
	static UFunction* uFnIsAudioEnabled = nullptr;

	if (!uFnIsAudioEnabled)
	{
		uFnIsAudioEnabled = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.IsAudioEnabled");
	}

	UGHM_SoundManager_execIsAudioEnabled_Params IsAudioEnabled_Params;

	uFnIsAudioEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsAudioEnabled, &IsAudioEnabled_Params, nullptr);

	uFnIsAudioEnabled->FunctionFlags |= 0x400;

	return IsAudioEnabled_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.SetNPCTalkMode
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Enable                         (CPF_Parm)
// unsigned long                  ResetAllClassProperties        (CPF_OptionalParm | CPF_Parm)

void UGHM_SoundManager::SetNPCTalkMode(unsigned long Enable, unsigned long ResetAllClassProperties)
{
	static UFunction* uFnSetNPCTalkMode = nullptr;

	if (!uFnSetNPCTalkMode)
	{
		uFnSetNPCTalkMode = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetNPCTalkMode");
	}

	UGHM_SoundManager_execSetNPCTalkMode_Params SetNPCTalkMode_Params;
	SetNPCTalkMode_Params.Enable = Enable;
	SetNPCTalkMode_Params.ResetAllClassProperties = ResetAllClassProperties;

	uFnSetNPCTalkMode->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetNPCTalkMode, &SetNPCTalkMode_Params, nullptr);

	uFnSetNPCTalkMode->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.SetSoundModeBody
// [0x00444401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FName                   newSoundMode                   (CPF_Parm)
// unsigned long                  bResetAllClassProperties       (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::SetSoundModeBody(struct FName newSoundMode, unsigned long bResetAllClassProperties, uint8_t& opResult)
{
	static UFunction* uFnSetSoundModeBody = nullptr;

	if (!uFnSetSoundModeBody)
	{
		uFnSetSoundModeBody = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetSoundModeBody");
	}

	UGHM_SoundManager_execSetSoundModeBody_Params SetSoundModeBody_Params;
	memcpy_s(&SetSoundModeBody_Params.newSoundMode, 0x8, &newSoundMode, 0x8);
	SetSoundModeBody_Params.bResetAllClassProperties = bResetAllClassProperties;
	memcpy_s(&SetSoundModeBody_Params.opResult, 0x1, &opResult, 0x1);

	uFnSetSoundModeBody->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSoundModeBody, &SetSoundModeBody_Params, nullptr);

	uFnSetSoundModeBody->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &SetSoundModeBody_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.SetSoundMode
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FName                   newSoundMode                   (CPF_Parm)
// unsigned long                  bResetAllClassProperties       (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::SetSoundMode(struct FName newSoundMode, unsigned long bResetAllClassProperties, uint8_t& opResult)
{
	static UFunction* uFnSetSoundMode = nullptr;

	if (!uFnSetSoundMode)
	{
		uFnSetSoundMode = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetSoundMode");
	}

	UGHM_SoundManager_execSetSoundMode_Params SetSoundMode_Params;
	memcpy_s(&SetSoundMode_Params.newSoundMode, 0x8, &newSoundMode, 0x8);
	SetSoundMode_Params.bResetAllClassProperties = bResetAllClassProperties;
	memcpy_s(&SetSoundMode_Params.opResult, 0x1, &opResult, 0x1);

	uFnSetSoundMode->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSoundMode, &SetSoundMode_Params, nullptr);

	uFnSetSoundMode->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &SetSoundMode_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.GetCurrentSoundMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UGHM_SoundManager::GetCurrentSoundMode()
{
	static UFunction* uFnGetCurrentSoundMode = nullptr;

	if (!uFnGetCurrentSoundMode)
	{
		uFnGetCurrentSoundMode = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.GetCurrentSoundMode");
	}

	UGHM_SoundManager_execGetCurrentSoundMode_Params GetCurrentSoundMode_Params;

	uFnGetCurrentSoundMode->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetCurrentSoundMode, &GetCurrentSoundMode_Params, nullptr);

	uFnGetCurrentSoundMode->FunctionFlags |= 0x400;

	return GetCurrentSoundMode_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.FadeOutAllSounds
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldStopUISounds            (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::FadeOutAllSounds(float FadeTime, unsigned long bShouldStopUISounds, uint8_t& opResult)
{
	static UFunction* uFnFadeOutAllSounds = nullptr;

	if (!uFnFadeOutAllSounds)
	{
		uFnFadeOutAllSounds = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.FadeOutAllSounds");
	}

	UGHM_SoundManager_execFadeOutAllSounds_Params FadeOutAllSounds_Params;
	memcpy_s(&FadeOutAllSounds_Params.FadeTime, 0x4, &FadeTime, 0x4);
	FadeOutAllSounds_Params.bShouldStopUISounds = bShouldStopUISounds;
	memcpy_s(&FadeOutAllSounds_Params.opResult, 0x1, &opResult, 0x1);

	uFnFadeOutAllSounds->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFadeOutAllSounds, &FadeOutAllSounds_Params, nullptr);

	uFnFadeOutAllSounds->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &FadeOutAllSounds_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.StopSoundsSoundClassesNotMatched
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// TArray<class USoundClass*>     inSoundClasses                 (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::StopSoundsSoundClassesNotMatched(float FadeTime, TArray<class USoundClass*>& inSoundClasses, uint8_t& opResult)
{
	static UFunction* uFnStopSoundsSoundClassesNotMatched = nullptr;

	if (!uFnStopSoundsSoundClassesNotMatched)
	{
		uFnStopSoundsSoundClassesNotMatched = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.StopSoundsSoundClassesNotMatched");
	}

	UGHM_SoundManager_execStopSoundsSoundClassesNotMatched_Params StopSoundsSoundClassesNotMatched_Params;
	memcpy_s(&StopSoundsSoundClassesNotMatched_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&StopSoundsSoundClassesNotMatched_Params.inSoundClasses, 0x10, &inSoundClasses, 0x10);
	memcpy_s(&StopSoundsSoundClassesNotMatched_Params.opResult, 0x1, &opResult, 0x1);

	uFnStopSoundsSoundClassesNotMatched->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopSoundsSoundClassesNotMatched, &StopSoundsSoundClassesNotMatched_Params, nullptr);

	uFnStopSoundsSoundClassesNotMatched->FunctionFlags |= 0x400;

	memcpy_s(&inSoundClasses, 0x10, &StopSoundsSoundClassesNotMatched_Params.inSoundClasses, 0x10);
	memcpy_s(&opResult, 0x1, &StopSoundsSoundClassesNotMatched_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.StopSoundsSoundClassesMatched
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// TArray<class USoundClass*>     inSoundClasses                 (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::StopSoundsSoundClassesMatched(float FadeTime, TArray<class USoundClass*>& inSoundClasses, uint8_t& opResult)
{
	static UFunction* uFnStopSoundsSoundClassesMatched = nullptr;

	if (!uFnStopSoundsSoundClassesMatched)
	{
		uFnStopSoundsSoundClassesMatched = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.StopSoundsSoundClassesMatched");
	}

	UGHM_SoundManager_execStopSoundsSoundClassesMatched_Params StopSoundsSoundClassesMatched_Params;
	memcpy_s(&StopSoundsSoundClassesMatched_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&StopSoundsSoundClassesMatched_Params.inSoundClasses, 0x10, &inSoundClasses, 0x10);
	memcpy_s(&StopSoundsSoundClassesMatched_Params.opResult, 0x1, &opResult, 0x1);

	uFnStopSoundsSoundClassesMatched->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopSoundsSoundClassesMatched, &StopSoundsSoundClassesMatched_Params, nullptr);

	uFnStopSoundsSoundClassesMatched->FunctionFlags |= 0x400;

	memcpy_s(&inSoundClasses, 0x10, &StopSoundsSoundClassesMatched_Params.inSoundClasses, 0x10);
	memcpy_s(&opResult, 0x1, &StopSoundsSoundClassesMatched_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.StopAllSounds
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldStopUISounds            (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::StopAllSounds(float FadeTime, unsigned long bShouldStopUISounds, uint8_t& opResult)
{
	static UFunction* uFnStopAllSounds = nullptr;

	if (!uFnStopAllSounds)
	{
		uFnStopAllSounds = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.StopAllSounds");
	}

	UGHM_SoundManager_execStopAllSounds_Params StopAllSounds_Params;
	memcpy_s(&StopAllSounds_Params.FadeTime, 0x4, &FadeTime, 0x4);
	StopAllSounds_Params.bShouldStopUISounds = bShouldStopUISounds;
	memcpy_s(&StopAllSounds_Params.opResult, 0x1, &opResult, 0x1);

	uFnStopAllSounds->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopAllSounds, &StopAllSounds_Params, nullptr);

	uFnStopAllSounds->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &StopAllSounds_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.UnPauseAllSounds
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::UnPauseAllSounds(float FadeTime, uint8_t& opResult)
{
	static UFunction* uFnUnPauseAllSounds = nullptr;

	if (!uFnUnPauseAllSounds)
	{
		uFnUnPauseAllSounds = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.UnPauseAllSounds");
	}

	UGHM_SoundManager_execUnPauseAllSounds_Params UnPauseAllSounds_Params;
	memcpy_s(&UnPauseAllSounds_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&UnPauseAllSounds_Params.opResult, 0x1, &opResult, 0x1);

	uFnUnPauseAllSounds->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnPauseAllSounds, &UnPauseAllSounds_Params, nullptr);

	uFnUnPauseAllSounds->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &UnPauseAllSounds_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.PauseAllSounds
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::PauseAllSounds(float FadeTime, uint8_t& opResult)
{
	static UFunction* uFnPauseAllSounds = nullptr;

	if (!uFnPauseAllSounds)
	{
		uFnPauseAllSounds = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.PauseAllSounds");
	}

	UGHM_SoundManager_execPauseAllSounds_Params PauseAllSounds_Params;
	memcpy_s(&PauseAllSounds_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&PauseAllSounds_Params.opResult, 0x1, &opResult, 0x1);

	uFnPauseAllSounds->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPauseAllSounds, &PauseAllSounds_Params, nullptr);

	uFnPauseAllSounds->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &PauseAllSounds_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.StopSoundsOnActor
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AActor*                  owningActor                    (CPF_Parm)
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::StopSoundsOnActor(class AActor* owningActor, float FadeTime, uint8_t& opResult)
{
	static UFunction* uFnStopSoundsOnActor = nullptr;

	if (!uFnStopSoundsOnActor)
	{
		uFnStopSoundsOnActor = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.StopSoundsOnActor");
	}

	UGHM_SoundManager_execStopSoundsOnActor_Params StopSoundsOnActor_Params;
	memcpy_s(&StopSoundsOnActor_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&StopSoundsOnActor_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&StopSoundsOnActor_Params.opResult, 0x1, &opResult, 0x1);

	uFnStopSoundsOnActor->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopSoundsOnActor, &StopSoundsOnActor_Params, nullptr);

	uFnStopSoundsOnActor->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &StopSoundsOnActor_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.SetRealtimeParameterValue
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UAudioComponent*         InAudioComponent               (CPF_Parm | CPF_EditInline)
// uint8_t                        inParameterType                (CPF_Parm)
// float                          inValue                        (CPF_Parm)

float UGHM_SoundManager::SetRealtimeParameterValue(class UAudioComponent* InAudioComponent, uint8_t inParameterType, float inValue)
{
	static UFunction* uFnSetRealtimeParameterValue = nullptr;

	if (!uFnSetRealtimeParameterValue)
	{
		uFnSetRealtimeParameterValue = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetRealtimeParameterValue");
	}

	UGHM_SoundManager_execSetRealtimeParameterValue_Params SetRealtimeParameterValue_Params;
	memcpy_s(&SetRealtimeParameterValue_Params.InAudioComponent, 0x8, &InAudioComponent, 0x8);
	memcpy_s(&SetRealtimeParameterValue_Params.inParameterType, 0x1, &inParameterType, 0x1);
	memcpy_s(&SetRealtimeParameterValue_Params.inValue, 0x4, &inValue, 0x4);

	uFnSetRealtimeParameterValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetRealtimeParameterValue, &SetRealtimeParameterValue_Params, nullptr);

	uFnSetRealtimeParameterValue->FunctionFlags |= 0x400;

	return SetRealtimeParameterValue_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.UnPauseAudioComponent
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UAudioComponent*         Component                      (CPF_Parm | CPF_EditInline)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::UnPauseAudioComponent(class UAudioComponent* Component, uint8_t& opResult)
{
	static UFunction* uFnUnPauseAudioComponent = nullptr;

	if (!uFnUnPauseAudioComponent)
	{
		uFnUnPauseAudioComponent = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.UnPauseAudioComponent");
	}

	UGHM_SoundManager_execUnPauseAudioComponent_Params UnPauseAudioComponent_Params;
	memcpy_s(&UnPauseAudioComponent_Params.Component, 0x8, &Component, 0x8);
	memcpy_s(&UnPauseAudioComponent_Params.opResult, 0x1, &opResult, 0x1);

	uFnUnPauseAudioComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnPauseAudioComponent, &UnPauseAudioComponent_Params, nullptr);

	uFnUnPauseAudioComponent->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &UnPauseAudioComponent_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.PauseAudioComponent
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UAudioComponent*         Component                      (CPF_Parm | CPF_EditInline)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::PauseAudioComponent(class UAudioComponent* Component, uint8_t& opResult)
{
	static UFunction* uFnPauseAudioComponent = nullptr;

	if (!uFnPauseAudioComponent)
	{
		uFnPauseAudioComponent = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.PauseAudioComponent");
	}

	UGHM_SoundManager_execPauseAudioComponent_Params PauseAudioComponent_Params;
	memcpy_s(&PauseAudioComponent_Params.Component, 0x8, &Component, 0x8);
	memcpy_s(&PauseAudioComponent_Params.opResult, 0x1, &opResult, 0x1);

	uFnPauseAudioComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPauseAudioComponent, &PauseAudioComponent_Params, nullptr);

	uFnPauseAudioComponent->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &PauseAudioComponent_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.StopAudioComponent
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UAudioComponent*         Component                      (CPF_Parm | CPF_EditInline)
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// float                          Volume                         (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::StopAudioComponent(class UAudioComponent* Component, float FadeTime, float Volume, uint8_t& opResult)
{
	static UFunction* uFnStopAudioComponent = nullptr;

	if (!uFnStopAudioComponent)
	{
		uFnStopAudioComponent = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.StopAudioComponent");
	}

	UGHM_SoundManager_execStopAudioComponent_Params StopAudioComponent_Params;
	memcpy_s(&StopAudioComponent_Params.Component, 0x8, &Component, 0x8);
	memcpy_s(&StopAudioComponent_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&StopAudioComponent_Params.Volume, 0x4, &Volume, 0x4);
	memcpy_s(&StopAudioComponent_Params.opResult, 0x1, &opResult, 0x1);

	uFnStopAudioComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopAudioComponent, &StopAudioComponent_Params, nullptr);

	uFnStopAudioComponent->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &StopAudioComponent_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.PlayAudioComponent
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UAudioComponent*         Component                      (CPF_Parm | CPF_EditInline)
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// float                          Volume                         (CPF_OptionalParm | CPF_Parm)
// class FString                  inStartMarkerLabel             (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class FString                  inEndMarkerLabel               (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::PlayAudioComponent(class UAudioComponent* Component, float FadeTime, float Volume, class FString inStartMarkerLabel, class FString inEndMarkerLabel, uint8_t& opResult)
{
	static UFunction* uFnPlayAudioComponent = nullptr;

	if (!uFnPlayAudioComponent)
	{
		uFnPlayAudioComponent = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.PlayAudioComponent");
	}

	UGHM_SoundManager_execPlayAudioComponent_Params PlayAudioComponent_Params;
	memcpy_s(&PlayAudioComponent_Params.Component, 0x8, &Component, 0x8);
	memcpy_s(&PlayAudioComponent_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&PlayAudioComponent_Params.Volume, 0x4, &Volume, 0x4);
	memcpy_s(&PlayAudioComponent_Params.inStartMarkerLabel, 0x10, &inStartMarkerLabel, 0x10);
	memcpy_s(&PlayAudioComponent_Params.inEndMarkerLabel, 0x10, &inEndMarkerLabel, 0x10);
	memcpy_s(&PlayAudioComponent_Params.opResult, 0x1, &opResult, 0x1);

	uFnPlayAudioComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlayAudioComponent, &PlayAudioComponent_Params, nullptr);

	uFnPlayAudioComponent->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &PlayAudioComponent_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.FindAudioComponent
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UAudioComponent*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// class USoundCue*               InSoundCue                     (CPF_OptionalParm | CPF_Parm)
// class AActor*                  owingActor                     (CPF_OptionalParm | CPF_Parm)
// TArray<class UAudioComponent*> IgnoreList                     (CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink | CPF_EditInline)

class UAudioComponent* UGHM_SoundManager::FindAudioComponent(class USoundCue* InSoundCue, class AActor* owingActor, TArray<class UAudioComponent*>& IgnoreList)
{
	static UFunction* uFnFindAudioComponent = nullptr;

	if (!uFnFindAudioComponent)
	{
		uFnFindAudioComponent = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.FindAudioComponent");
	}

	UGHM_SoundManager_execFindAudioComponent_Params FindAudioComponent_Params;
	memcpy_s(&FindAudioComponent_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&FindAudioComponent_Params.owingActor, 0x8, &owingActor, 0x8);
	memcpy_s(&FindAudioComponent_Params.IgnoreList, 0x10, &IgnoreList, 0x10);

	uFnFindAudioComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFindAudioComponent, &FindAudioComponent_Params, nullptr);

	uFnFindAudioComponent->FunctionFlags |= 0x400;

	memcpy_s(&IgnoreList, 0x10, &FindAudioComponent_Params.IgnoreList, 0x10);

	return FindAudioComponent_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.SetSoundParameter
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class USoundCue*               InSoundCue                     (CPF_Parm)
// uint8_t                        inParameterType                (CPF_Parm)
// float                          inValue                        (CPF_Parm)

float UGHM_SoundManager::SetSoundParameter(class USoundCue* InSoundCue, uint8_t inParameterType, float inValue)
{
	static UFunction* uFnSetSoundParameter = nullptr;

	if (!uFnSetSoundParameter)
	{
		uFnSetSoundParameter = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetSoundParameter");
	}

	UGHM_SoundManager_execSetSoundParameter_Params SetSoundParameter_Params;
	memcpy_s(&SetSoundParameter_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&SetSoundParameter_Params.inParameterType, 0x1, &inParameterType, 0x1);
	memcpy_s(&SetSoundParameter_Params.inValue, 0x4, &inValue, 0x4);

	uFnSetSoundParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSoundParameter, &SetSoundParameter_Params, nullptr);

	uFnSetSoundParameter->FunctionFlags |= 0x400;

	return SetSoundParameter_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.GetVolume
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class USoundCue*               InSoundCue                     (CPF_Parm)
// class AActor*                  owningActor                    (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UGHM_SoundManager::GetVolume(class USoundCue* InSoundCue, class AActor* owningActor, uint8_t& opResult)
{
	static UFunction* uFnGetVolume = nullptr;

	if (!uFnGetVolume)
	{
		uFnGetVolume = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.GetVolume");
	}

	UGHM_SoundManager_execGetVolume_Params GetVolume_Params;
	memcpy_s(&GetVolume_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&GetVolume_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&GetVolume_Params.opResult, 0x1, &opResult, 0x1);

	uFnGetVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetVolume, &GetVolume_Params, nullptr);

	uFnGetVolume->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &GetVolume_Params.opResult, 0x1);

	return GetVolume_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.SetVolume
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               InSoundCue                     (CPF_Parm)
// float                          NewVolume                      (CPF_Parm)
// class AActor*                  owningActor                    (CPF_OptionalParm | CPF_Parm)
// float                          InterpolationTime              (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::SetVolume(class USoundCue* InSoundCue, float NewVolume, class AActor* owningActor, float InterpolationTime, uint8_t& opResult)
{
	static UFunction* uFnSetVolume = nullptr;

	if (!uFnSetVolume)
	{
		uFnSetVolume = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SetVolume");
	}

	UGHM_SoundManager_execSetVolume_Params SetVolume_Params;
	memcpy_s(&SetVolume_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&SetVolume_Params.NewVolume, 0x4, &NewVolume, 0x4);
	memcpy_s(&SetVolume_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&SetVolume_Params.InterpolationTime, 0x4, &InterpolationTime, 0x4);
	memcpy_s(&SetVolume_Params.opResult, 0x1, &opResult, 0x1);

	uFnSetVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetVolume, &SetVolume_Params, nullptr);

	uFnSetVolume->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &SetVolume_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.UnPause
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               InSoundCue                     (CPF_Parm)
// class AActor*                  owningActor                    (CPF_OptionalParm | CPF_Parm)
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::UnPause(class USoundCue* InSoundCue, class AActor* owningActor, float FadeTime, uint8_t& opResult)
{
	static UFunction* uFnUnPause = nullptr;

	if (!uFnUnPause)
	{
		uFnUnPause = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.UnPause");
	}

	UGHM_SoundManager_execUnPause_Params UnPause_Params;
	memcpy_s(&UnPause_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&UnPause_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&UnPause_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&UnPause_Params.opResult, 0x1, &opResult, 0x1);

	uFnUnPause->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnPause, &UnPause_Params, nullptr);

	uFnUnPause->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &UnPause_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.Pause
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               InSoundCue                     (CPF_Parm)
// class AActor*                  owningActor                    (CPF_OptionalParm | CPF_Parm)
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::Pause(class USoundCue* InSoundCue, class AActor* owningActor, float FadeTime, uint8_t& opResult)
{
	static UFunction* uFnPause = nullptr;

	if (!uFnPause)
	{
		uFnPause = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.Pause");
	}

	UGHM_SoundManager_execPause_Params Pause_Params;
	memcpy_s(&Pause_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&Pause_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&Pause_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&Pause_Params.opResult, 0x1, &opResult, 0x1);

	uFnPause->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPause, &Pause_Params, nullptr);

	uFnPause->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &Pause_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.SwitchTrack
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               inSoundCueToSwitch             (CPF_Parm)
// class USoundCue*               inNewSoundCue                  (CPF_Parm)
// class AActor*                  owningActor                    (CPF_Parm)
// class FString                  inStartMarkerLabel             (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class FString                  inEndMarkerLabel               (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  isSampleAccurate               (CPF_OptionalParm | CPF_Parm)

void UGHM_SoundManager::SwitchTrack(class USoundCue* inSoundCueToSwitch, class USoundCue* inNewSoundCue, class AActor* owningActor, class FString inStartMarkerLabel, class FString inEndMarkerLabel, unsigned long isSampleAccurate)
{
	static UFunction* uFnSwitchTrack = nullptr;

	if (!uFnSwitchTrack)
	{
		uFnSwitchTrack = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.SwitchTrack");
	}

	UGHM_SoundManager_execSwitchTrack_Params SwitchTrack_Params;
	memcpy_s(&SwitchTrack_Params.inSoundCueToSwitch, 0x8, &inSoundCueToSwitch, 0x8);
	memcpy_s(&SwitchTrack_Params.inNewSoundCue, 0x8, &inNewSoundCue, 0x8);
	memcpy_s(&SwitchTrack_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&SwitchTrack_Params.inStartMarkerLabel, 0x10, &inStartMarkerLabel, 0x10);
	memcpy_s(&SwitchTrack_Params.inEndMarkerLabel, 0x10, &inEndMarkerLabel, 0x10);
	SwitchTrack_Params.isSampleAccurate = isSampleAccurate;

	uFnSwitchTrack->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSwitchTrack, &SwitchTrack_Params, nullptr);

	uFnSwitchTrack->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.Jump
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               InSoundCue                     (CPF_Parm)
// class AActor*                  owningActor                    (CPF_Parm)
// class FString                  inStartMarkerLabel             (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class FString                  inEndMarkerLabel               (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  isSampleAccurate               (CPF_OptionalParm | CPF_Parm)

void UGHM_SoundManager::Jump(class USoundCue* InSoundCue, class AActor* owningActor, class FString inStartMarkerLabel, class FString inEndMarkerLabel, unsigned long isSampleAccurate)
{
	static UFunction* uFnJump = nullptr;

	if (!uFnJump)
	{
		uFnJump = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.Jump");
	}

	UGHM_SoundManager_execJump_Params Jump_Params;
	memcpy_s(&Jump_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&Jump_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&Jump_Params.inStartMarkerLabel, 0x10, &inStartMarkerLabel, 0x10);
	memcpy_s(&Jump_Params.inEndMarkerLabel, 0x10, &inEndMarkerLabel, 0x10);
	Jump_Params.isSampleAccurate = isSampleAccurate;

	uFnJump->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnJump, &Jump_Params, nullptr);

	uFnJump->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.Stop
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               InSoundCue                     (CPF_Parm)
// class AActor*                  owningActor                    (CPF_OptionalParm | CPF_Parm)
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// float                          fadeVolume                     (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::Stop(class USoundCue* InSoundCue, class AActor* owningActor, float FadeTime, float fadeVolume, uint8_t& opResult)
{
	static UFunction* uFnStop = nullptr;

	if (!uFnStop)
	{
		uFnStop = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.Stop");
	}

	UGHM_SoundManager_execStop_Params Stop_Params;
	memcpy_s(&Stop_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&Stop_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&Stop_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&Stop_Params.fadeVolume, 0x4, &fadeVolume, 0x4);
	memcpy_s(&Stop_Params.opResult, 0x1, &opResult, 0x1);

	uFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStop, &Stop_Params, nullptr);

	uFnStop->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &Stop_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.PlayPadSpeaker
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               InSoundCue                     (CPF_Parm)
// int32_t                        PadNo                          (CPF_Parm)
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::PlayPadSpeaker(class USoundCue* InSoundCue, int32_t PadNo, float FadeTime, uint8_t& opResult)
{
	static UFunction* uFnPlayPadSpeaker = nullptr;

	if (!uFnPlayPadSpeaker)
	{
		uFnPlayPadSpeaker = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.PlayPadSpeaker");
	}

	UGHM_SoundManager_execPlayPadSpeaker_Params PlayPadSpeaker_Params;
	memcpy_s(&PlayPadSpeaker_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&PlayPadSpeaker_Params.PadNo, 0x4, &PadNo, 0x4);
	memcpy_s(&PlayPadSpeaker_Params.FadeTime, 0x4, &FadeTime, 0x4);
	memcpy_s(&PlayPadSpeaker_Params.opResult, 0x1, &opResult, 0x1);

	uFnPlayPadSpeaker->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlayPadSpeaker, &PlayPadSpeaker_Params, nullptr);

	uFnPlayPadSpeaker->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &PlayPadSpeaker_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.Play
// [0x00424400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               InSoundCue                     (CPF_Parm)
// class AActor*                  owningActor                    (CPF_OptionalParm | CPF_Parm)
// float                          FadeTime                       (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bStopWhenOwnerDestroyed        (CPF_OptionalParm | CPF_Parm)
// struct FVector                 Location                       (CPF_OptionalParm | CPF_Parm)
// class FString                  inStartMarkerLabel             (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class FString                  inEndMarkerLabel               (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        opResult                       (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

void UGHM_SoundManager::Play(class USoundCue* InSoundCue, class AActor* owningActor, float FadeTime, unsigned long bStopWhenOwnerDestroyed, struct FVector Location, class FString inStartMarkerLabel, class FString inEndMarkerLabel, uint8_t& opResult)
{
	static UFunction* uFnPlay = nullptr;

	if (!uFnPlay)
	{
		uFnPlay = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.Play");
	}

	UGHM_SoundManager_execPlay_Params Play_Params;
	memcpy_s(&Play_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&Play_Params.owningActor, 0x8, &owningActor, 0x8);
	memcpy_s(&Play_Params.FadeTime, 0x4, &FadeTime, 0x4);
	Play_Params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
	memcpy_s(&Play_Params.Location, 0xC, &Location, 0xC);
	memcpy_s(&Play_Params.inStartMarkerLabel, 0x10, &inStartMarkerLabel, 0x10);
	memcpy_s(&Play_Params.inEndMarkerLabel, 0x10, &inEndMarkerLabel, 0x10);
	memcpy_s(&Play_Params.opResult, 0x1, &opResult, 0x1);

	uFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlay, &Play_Params, nullptr);

	uFnPlay->FunctionFlags |= 0x400;

	memcpy_s(&opResult, 0x1, &Play_Params.opResult, 0x1);
};

// Function GHMEngine.GHM_SoundManager.IsPlaying
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class USoundCue*               InSoundCue                     (CPF_Parm)
// class AActor*                  owningActor                    (CPF_OptionalParm | CPF_Parm)

bool UGHM_SoundManager::IsPlaying(class USoundCue* InSoundCue, class AActor* owningActor)
{
	static UFunction* uFnIsPlaying = nullptr;

	if (!uFnIsPlaying)
	{
		uFnIsPlaying = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.IsPlaying");
	}

	UGHM_SoundManager_execIsPlaying_Params IsPlaying_Params;
	memcpy_s(&IsPlaying_Params.InSoundCue, 0x8, &InSoundCue, 0x8);
	memcpy_s(&IsPlaying_Params.owningActor, 0x8, &owningActor, 0x8);

	uFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPlaying, &IsPlaying_Params, nullptr);

	uFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundManager.Muting
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsMuted                       (CPF_Parm)
// struct FName                   SoundClassFName                (CPF_OptionalParm | CPF_Parm)

void UGHM_SoundManager::Muting(unsigned long bIsMuted, struct FName SoundClassFName)
{
	static UFunction* uFnMuting = nullptr;

	if (!uFnMuting)
	{
		uFnMuting = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.Muting");
	}

	UGHM_SoundManager_execMuting_Params Muting_Params;
	Muting_Params.bIsMuted = bIsMuted;
	memcpy_s(&Muting_Params.SoundClassFName, 0x8, &SoundClassFName, 0x8);

	uFnMuting->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnMuting, &Muting_Params, nullptr);

	uFnMuting->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SoundManager.Instance
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGHM_SoundManager*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGHM_SoundManager* UGHM_SoundManager::Instance()
{
	static UFunction* uFnInstance = nullptr;

	if (!uFnInstance)
	{
		uFnInstance = UFunction::FindFunction("Function GHMEngine.GHM_SoundManager.Instance");
	}

	UGHM_SoundManager_execInstance_Params Instance_Params;

	uFnInstance->FunctionFlags |= ~0x400;

	UGHM_SoundManager::StaticClass()->ProcessEvent(uFnInstance, &Instance_Params, nullptr);

	uFnInstance->FunctionFlags |= 0x400;

	return Instance_Params.ReturnValue;
};

// Function GHMEngine.GHM_SoundNode_ParameterControl.SetValue
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        inType                         (CPF_Parm)
// float                          inValue                        (CPF_Parm)

void UGHM_SoundNode_ParameterControl::eventSetValue(uint8_t inType, float inValue)
{
	static UFunction* uFnSetValue = nullptr;

	if (!uFnSetValue)
	{
		uFnSetValue = UFunction::FindFunction("Function GHMEngine.GHM_SoundNode_ParameterControl.SetValue");
	}

	UGHM_SoundNode_ParameterControl_eventSetValue_Params SetValue_Params;
	memcpy_s(&SetValue_Params.inType, 0x1, &inType, 0x1);
	memcpy_s(&SetValue_Params.inValue, 0x4, &inValue, 0x4);

	this->ProcessEvent(uFnSetValue, &SetValue_Params, nullptr);
};

// Function GHMEngine.GHM_SoundNode_ParameterControl.GetValue
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        inType                         (CPF_Parm)

float UGHM_SoundNode_ParameterControl::eventGetValue(uint8_t inType)
{
	static UFunction* uFnGetValue = nullptr;

	if (!uFnGetValue)
	{
		uFnGetValue = UFunction::FindFunction("Function GHMEngine.GHM_SoundNode_ParameterControl.GetValue");
	}

	UGHM_SoundNode_ParameterControl_eventGetValue_Params GetValue_Params;
	memcpy_s(&GetValue_Params.inType, 0x1, &inType, 0x1);

	this->ProcessEvent(uFnGetValue, &GetValue_Params, nullptr);

	return GetValue_Params.ReturnValue;
};

// Function GHMEngine.GHM_SplineActor.UpdateSplineComponents
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_SplineActor::UpdateSplineComponents()
{
	static UFunction* uFnUpdateSplineComponents = nullptr;

	if (!uFnUpdateSplineComponents)
	{
		uFnUpdateSplineComponents = UFunction::FindFunction("Function GHMEngine.GHM_SplineActor.UpdateSplineComponents");
	}

	AGHM_SplineActor_execUpdateSplineComponents_Params UpdateSplineComponents_Params;

	uFnUpdateSplineComponents->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateSplineComponents, &UpdateSplineComponents_Params, nullptr);

	uFnUpdateSplineComponents->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SplineComponent.EstimateClosestPointRelative
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 TestPoint                      (CPF_Parm)
// int32_t                        iIterations                    (CPF_Parm)
// float                          fStartDistAlongSpline          (CPF_Parm)
// float                          fMaxDistFromStart              (CPF_Parm)
// struct FSplineClosestPointResult OutResult                      (CPF_Parm | CPF_OutParm)

void UGHM_SplineComponent::EstimateClosestPointRelative(struct FVector TestPoint, int32_t iIterations, float fStartDistAlongSpline, float fMaxDistFromStart, struct FSplineClosestPointResult& OutResult)
{
	static UFunction* uFnEstimateClosestPointRelative = nullptr;

	if (!uFnEstimateClosestPointRelative)
	{
		uFnEstimateClosestPointRelative = UFunction::FindFunction("Function GHMEngine.GHM_SplineComponent.EstimateClosestPointRelative");
	}

	UGHM_SplineComponent_execEstimateClosestPointRelative_Params EstimateClosestPointRelative_Params;
	memcpy_s(&EstimateClosestPointRelative_Params.TestPoint, 0xC, &TestPoint, 0xC);
	memcpy_s(&EstimateClosestPointRelative_Params.iIterations, 0x4, &iIterations, 0x4);
	memcpy_s(&EstimateClosestPointRelative_Params.fStartDistAlongSpline, 0x4, &fStartDistAlongSpline, 0x4);
	memcpy_s(&EstimateClosestPointRelative_Params.fMaxDistFromStart, 0x4, &fMaxDistFromStart, 0x4);
	memcpy_s(&EstimateClosestPointRelative_Params.OutResult, 0x1C, &OutResult, 0x1C);

	uFnEstimateClosestPointRelative->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEstimateClosestPointRelative, &EstimateClosestPointRelative_Params, nullptr);

	uFnEstimateClosestPointRelative->FunctionFlags |= 0x400;

	memcpy_s(&OutResult, 0x1C, &EstimateClosestPointRelative_Params.OutResult, 0x1C);
};

// Function GHMEngine.GHM_SplineComponent.EstimateClosestPoint
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 TestPoint                      (CPF_Parm)
// int32_t                        iIterations                    (CPF_Parm)
// struct FSplineClosestPointResult OutResult                      (CPF_Parm | CPF_OutParm)

void UGHM_SplineComponent::EstimateClosestPoint(struct FVector TestPoint, int32_t iIterations, struct FSplineClosestPointResult& OutResult)
{
	static UFunction* uFnEstimateClosestPoint = nullptr;

	if (!uFnEstimateClosestPoint)
	{
		uFnEstimateClosestPoint = UFunction::FindFunction("Function GHMEngine.GHM_SplineComponent.EstimateClosestPoint");
	}

	UGHM_SplineComponent_execEstimateClosestPoint_Params EstimateClosestPoint_Params;
	memcpy_s(&EstimateClosestPoint_Params.TestPoint, 0xC, &TestPoint, 0xC);
	memcpy_s(&EstimateClosestPoint_Params.iIterations, 0x4, &iIterations, 0x4);
	memcpy_s(&EstimateClosestPoint_Params.OutResult, 0x1C, &OutResult, 0x1C);

	uFnEstimateClosestPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEstimateClosestPoint, &EstimateClosestPoint_Params, nullptr);

	uFnEstimateClosestPoint->FunctionFlags |= 0x400;

	memcpy_s(&OutResult, 0x1C, &EstimateClosestPoint_Params.OutResult, 0x1C);
};

// Function GHMEngine.GHM_SplineComponent.UpdateSplineReparamTable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SplineComponent::UpdateSplineReparamTable()
{
	static UFunction* uFnUpdateSplineReparamTable = nullptr;

	if (!uFnUpdateSplineReparamTable)
	{
		uFnUpdateSplineReparamTable = UFunction::FindFunction("Function GHMEngine.GHM_SplineComponent.UpdateSplineReparamTable");
	}

	UGHM_SplineComponent_execUpdateSplineReparamTable_Params UpdateSplineReparamTable_Params;

	uFnUpdateSplineReparamTable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateSplineReparamTable, &UpdateSplineReparamTable_Params, nullptr);

	uFnUpdateSplineReparamTable->FunctionFlags |= 0x400;
};

// Function GHMEngine.GHM_SplinePath.GetRotation
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FRotator UGHM_SplinePath::GetRotation()
{
	static UFunction* uFnGetRotation = nullptr;

	if (!uFnGetRotation)
	{
		uFnGetRotation = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.GetRotation");
	}

	UGHM_SplinePath_execGetRotation_Params GetRotation_Params;

	this->ProcessEvent(uFnGetRotation, &GetRotation_Params, nullptr);

	return GetRotation_Params.ReturnValue;
};

// Function GHMEngine.GHM_SplinePath.GetLocation
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector UGHM_SplinePath::GetLocation()
{
	static UFunction* uFnGetLocation = nullptr;

	if (!uFnGetLocation)
	{
		uFnGetLocation = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.GetLocation");
	}

	UGHM_SplinePath_execGetLocation_Params GetLocation_Params;

	this->ProcessEvent(uFnGetLocation, &GetLocation_Params, nullptr);

	return GetLocation_Params.ReturnValue;
};

// Function GHMEngine.GHM_SplinePath.SetRotation
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                NewRotation                    (CPF_Parm)

void UGHM_SplinePath::SetRotation(struct FRotator NewRotation)
{
	static UFunction* uFnSetRotation = nullptr;

	if (!uFnSetRotation)
	{
		uFnSetRotation = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.SetRotation");
	}

	UGHM_SplinePath_execSetRotation_Params SetRotation_Params;
	memcpy_s(&SetRotation_Params.NewRotation, 0xC, &NewRotation, 0xC);

	this->ProcessEvent(uFnSetRotation, &SetRotation_Params, nullptr);
};

// Function GHMEngine.GHM_SplinePath.SetLocation
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 NewLocation                    (CPF_Parm)

void UGHM_SplinePath::SetLocation(struct FVector NewLocation)
{
	static UFunction* uFnSetLocation = nullptr;

	if (!uFnSetLocation)
	{
		uFnSetLocation = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.SetLocation");
	}

	UGHM_SplinePath_execSetLocation_Params SetLocation_Params;
	memcpy_s(&SetLocation_Params.NewLocation, 0xC, &NewLocation, 0xC);

	this->ProcessEvent(uFnSetLocation, &SetLocation_Params, nullptr);
};

// Function GHMEngine.GHM_SplinePath.Tick
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGHM_SplinePath::eventTick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.Tick");
	}

	UGHM_SplinePath_eventTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GHMEngine.GHM_SplinePath.IsAtEndOfPath
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_SplinePath::IsAtEndOfPath()
{
	static UFunction* uFnIsAtEndOfPath = nullptr;

	if (!uFnIsAtEndOfPath)
	{
		uFnIsAtEndOfPath = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.IsAtEndOfPath");
	}

	UGHM_SplinePath_execIsAtEndOfPath_Params IsAtEndOfPath_Params;

	this->ProcessEvent(uFnIsAtEndOfPath, &IsAtEndOfPath_Params, nullptr);

	return IsAtEndOfPath_Params.ReturnValue;
};

// Function GHMEngine.GHM_SplinePath.MoveToEnd
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void UGHM_SplinePath::MoveToEnd()
{
	static UFunction* uFnMoveToEnd = nullptr;

	if (!uFnMoveToEnd)
	{
		uFnMoveToEnd = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.MoveToEnd");
	}

	UGHM_SplinePath_execMoveToEnd_Params MoveToEnd_Params;

	this->ProcessEvent(uFnMoveToEnd, &MoveToEnd_Params, nullptr);
};

// Function GHMEngine.GHM_SplinePath.MoveToNextSpline
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SplinePath::MoveToNextSpline()
{
	static UFunction* uFnMoveToNextSpline = nullptr;

	if (!uFnMoveToNextSpline)
	{
		uFnMoveToNextSpline = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.MoveToNextSpline");
	}

	UGHM_SplinePath_execMoveToNextSpline_Params MoveToNextSpline_Params;

	this->ProcessEvent(uFnMoveToNextSpline, &MoveToNextSpline_Params, nullptr);
};

// Function GHMEngine.GHM_SplinePath.MoveToStart
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void UGHM_SplinePath::MoveToStart()
{
	static UFunction* uFnMoveToStart = nullptr;

	if (!uFnMoveToStart)
	{
		uFnMoveToStart = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.MoveToStart");
	}

	UGHM_SplinePath_execMoveToStart_Params MoveToStart_Params;

	this->ProcessEvent(uFnMoveToStart, &MoveToStart_Params, nullptr);
};

// Function GHMEngine.GHM_SplinePath.UpdateMovementAlongSpline
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGHM_SplinePath::UpdateMovementAlongSpline(float DeltaTime)
{
	static UFunction* uFnUpdateMovementAlongSpline = nullptr;

	if (!uFnUpdateMovementAlongSpline)
	{
		uFnUpdateMovementAlongSpline = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.UpdateMovementAlongSpline");
	}

	UGHM_SplinePath_execUpdateMovementAlongSpline_Params UpdateMovementAlongSpline_Params;
	memcpy_s(&UpdateMovementAlongSpline_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnUpdateMovementAlongSpline, &UpdateMovementAlongSpline_Params, nullptr);
};

// Function GHMEngine.GHM_SplinePath.EstimateClosestPointRelative
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 TestPoint                      (CPF_Parm)
// int32_t                        iIterations                    (CPF_Parm)
// float                          fMaxMoveDistance               (CPF_Parm)
// float                          fPrevDistAlongSpline           (CPF_Parm)
// class AGHM_SplineActor*        PrevClosestSplineActor         (CPF_Parm)
// struct FSplineClosestPointResult OutResult                      (CPF_Parm | CPF_OutParm)

void UGHM_SplinePath::EstimateClosestPointRelative(struct FVector TestPoint, int32_t iIterations, float fMaxMoveDistance, float fPrevDistAlongSpline, class AGHM_SplineActor* PrevClosestSplineActor, struct FSplineClosestPointResult& OutResult)
{
	static UFunction* uFnEstimateClosestPointRelative = nullptr;

	if (!uFnEstimateClosestPointRelative)
	{
		uFnEstimateClosestPointRelative = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.EstimateClosestPointRelative");
	}

	UGHM_SplinePath_execEstimateClosestPointRelative_Params EstimateClosestPointRelative_Params;
	memcpy_s(&EstimateClosestPointRelative_Params.TestPoint, 0xC, &TestPoint, 0xC);
	memcpy_s(&EstimateClosestPointRelative_Params.iIterations, 0x4, &iIterations, 0x4);
	memcpy_s(&EstimateClosestPointRelative_Params.fMaxMoveDistance, 0x4, &fMaxMoveDistance, 0x4);
	memcpy_s(&EstimateClosestPointRelative_Params.fPrevDistAlongSpline, 0x4, &fPrevDistAlongSpline, 0x4);
	memcpy_s(&EstimateClosestPointRelative_Params.PrevClosestSplineActor, 0x8, &PrevClosestSplineActor, 0x8);
	memcpy_s(&EstimateClosestPointRelative_Params.OutResult, 0x1C, &OutResult, 0x1C);

	uFnEstimateClosestPointRelative->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEstimateClosestPointRelative, &EstimateClosestPointRelative_Params, nullptr);

	uFnEstimateClosestPointRelative->FunctionFlags |= 0x400;

	memcpy_s(&OutResult, 0x1C, &EstimateClosestPointRelative_Params.OutResult, 0x1C);
};

// Function GHMEngine.GHM_SplinePath.EstimateClosestPoint
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector                 TestPoint                      (CPF_Parm)
// int32_t                        iIterations                    (CPF_Parm)
// struct FSplineClosestPointResult ClosestPointResult             (CPF_Parm | CPF_OutParm)

void UGHM_SplinePath::EstimateClosestPoint(struct FVector TestPoint, int32_t iIterations, struct FSplineClosestPointResult& ClosestPointResult)
{
	static UFunction* uFnEstimateClosestPoint = nullptr;

	if (!uFnEstimateClosestPoint)
	{
		uFnEstimateClosestPoint = UFunction::FindFunction("Function GHMEngine.GHM_SplinePath.EstimateClosestPoint");
	}

	UGHM_SplinePath_execEstimateClosestPoint_Params EstimateClosestPoint_Params;
	memcpy_s(&EstimateClosestPoint_Params.TestPoint, 0xC, &TestPoint, 0xC);
	memcpy_s(&EstimateClosestPoint_Params.iIterations, 0x4, &iIterations, 0x4);
	memcpy_s(&EstimateClosestPoint_Params.ClosestPointResult, 0x1C, &ClosestPointResult, 0x1C);

	uFnEstimateClosestPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEstimateClosestPoint, &EstimateClosestPoint_Params, nullptr);

	uFnEstimateClosestPoint->FunctionFlags |= 0x400;

	memcpy_s(&ClosestPointResult, 0x1C, &EstimateClosestPoint_Params.ClosestPointResult, 0x1C);
};

// Function GHMEngine.GHM_StackablePhysicsActorInterface.StackNotify
// [0x00020100] (FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_StackablePhysicsActorInterface::StackNotify()
{
	static UFunction* uFnStackNotify = nullptr;

	if (!uFnStackNotify)
	{
		uFnStackNotify = UFunction::FindFunction("Function GHMEngine.GHM_StackablePhysicsActorInterface.StackNotify");
	}

	UGHM_StackablePhysicsActorInterface_execStackNotify_Params StackNotify_Params;

	this->ProcessEvent(uFnStackNotify, &StackNotify_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObjectManager.RequestBreakableSpawn
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        iRequestedSpawns               (CPF_Parm)

int32_t AGHM_BreakableObjectManager::RequestBreakableSpawn(int32_t iRequestedSpawns)
{
	static UFunction* uFnRequestBreakableSpawn = nullptr;

	if (!uFnRequestBreakableSpawn)
	{
		uFnRequestBreakableSpawn = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObjectManager.RequestBreakableSpawn");
	}

	AGHM_BreakableObjectManager_execRequestBreakableSpawn_Params RequestBreakableSpawn_Params;
	memcpy_s(&RequestBreakableSpawn_Params.iRequestedSpawns, 0x4, &iRequestedSpawns, 0x4);

	this->ProcessEvent(uFnRequestBreakableSpawn, &RequestBreakableSpawn_Params, nullptr);

	return RequestBreakableSpawn_Params.ReturnValue;
};

// Function GHMEngine.GHM_BreakableObjectManager.StopBreaking
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObjectManager::StopBreaking()
{
	static UFunction* uFnStopBreaking = nullptr;

	if (!uFnStopBreaking)
	{
		uFnStopBreaking = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObjectManager.StopBreaking");
	}

	AGHM_BreakableObjectManager_execStopBreaking_Params StopBreaking_Params;

	this->ProcessEvent(uFnStopBreaking, &StopBreaking_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObjectManager.StartBreaking
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObjectManager::StartBreaking()
{
	static UFunction* uFnStartBreaking = nullptr;

	if (!uFnStartBreaking)
	{
		uFnStartBreaking = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObjectManager.StartBreaking");
	}

	AGHM_BreakableObjectManager_execStartBreaking_Params StartBreaking_Params;

	this->ProcessEvent(uFnStartBreaking, &StartBreaking_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObjectManager.SplitNavMesh
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObjectManager::SplitNavMesh()
{
	static UFunction* uFnSplitNavMesh = nullptr;

	if (!uFnSplitNavMesh)
	{
		uFnSplitNavMesh = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObjectManager.SplitNavMesh");
	}

	AGHM_BreakableObjectManager_execSplitNavMesh_Params SplitNavMesh_Params;

	this->ProcessEvent(uFnSplitNavMesh, &SplitNavMesh_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObjectManager.RequestNavMeshSplit
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGHM_BreakableObject*    Breakable                      (CPF_Parm)

void AGHM_BreakableObjectManager::RequestNavMeshSplit(class AGHM_BreakableObject* Breakable)
{
	static UFunction* uFnRequestNavMeshSplit = nullptr;

	if (!uFnRequestNavMeshSplit)
	{
		uFnRequestNavMeshSplit = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObjectManager.RequestNavMeshSplit");
	}

	AGHM_BreakableObjectManager_execRequestNavMeshSplit_Params RequestNavMeshSplit_Params;
	memcpy_s(&RequestNavMeshSplit_Params.Breakable, 0x8, &Breakable, 0x8);

	this->ProcessEvent(uFnRequestNavMeshSplit, &RequestNavMeshSplit_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObjectManager.Tick
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void AGHM_BreakableObjectManager::eventTick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObjectManager.Tick");
	}

	AGHM_BreakableObjectManager_eventTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObjectManager.RecycleFragment
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGHM_KActorSpawnable*    Fragment                       (CPF_Parm)

void AGHM_BreakableObjectManager::RecycleFragment(class AGHM_KActorSpawnable* Fragment)
{
	static UFunction* uFnRecycleFragment = nullptr;

	if (!uFnRecycleFragment)
	{
		uFnRecycleFragment = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObjectManager.RecycleFragment");
	}

	AGHM_BreakableObjectManager_execRecycleFragment_Params RecycleFragment_Params;
	memcpy_s(&RecycleFragment_Params.Fragment, 0x8, &Fragment, 0x8);

	this->ProcessEvent(uFnRecycleFragment, &RecycleFragment_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObjectManager.EnforceSoftLimit
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_BreakableObjectManager::EnforceSoftLimit()
{
	static UFunction* uFnEnforceSoftLimit = nullptr;

	if (!uFnEnforceSoftLimit)
	{
		uFnEnforceSoftLimit = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObjectManager.EnforceSoftLimit");
	}

	AGHM_BreakableObjectManager_execEnforceSoftLimit_Params EnforceSoftLimit_Params;

	this->ProcessEvent(uFnEnforceSoftLimit, &EnforceSoftLimit_Params, nullptr);
};

// Function GHMEngine.GHM_BreakableObjectManager.GetFreeRBFragment
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGHM_KActorSpawnable*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 SpawnLocation                  (CPF_Parm)
// struct FRotator                SpawnRotation                  (CPF_Parm)

class AGHM_KActorSpawnable* AGHM_BreakableObjectManager::GetFreeRBFragment(struct FVector SpawnLocation, struct FRotator SpawnRotation)
{
	static UFunction* uFnGetFreeRBFragment = nullptr;

	if (!uFnGetFreeRBFragment)
	{
		uFnGetFreeRBFragment = UFunction::FindFunction("Function GHMEngine.GHM_BreakableObjectManager.GetFreeRBFragment");
	}

	AGHM_BreakableObjectManager_execGetFreeRBFragment_Params GetFreeRBFragment_Params;
	memcpy_s(&GetFreeRBFragment_Params.SpawnLocation, 0xC, &SpawnLocation, 0xC);
	memcpy_s(&GetFreeRBFragment_Params.SpawnRotation, 0xC, &SpawnRotation, 0xC);

	this->ProcessEvent(uFnGetFreeRBFragment, &GetFreeRBFragment_Params, nullptr);

	return GetFreeRBFragment_Params.ReturnValue;
};

// Function GHMEngine.GHM_CheatManager.DisableDebug
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGHM_DebugController*    DC                             (CPF_Parm)

void UGHM_CheatManager::DisableDebug(class AGHM_DebugController* DC)
{
	static UFunction* uFnDisableDebug = nullptr;

	if (!uFnDisableDebug)
	{
		uFnDisableDebug = UFunction::FindFunction("Function GHMEngine.GHM_CheatManager.DisableDebug");
	}

	UGHM_CheatManager_execDisableDebug_Params DisableDebug_Params;
	memcpy_s(&DisableDebug_Params.DC, 0x8, &DC, 0x8);

	this->ProcessEvent(uFnDisableDebug, &DisableDebug_Params, nullptr);
};

// Function GHMEngine.GHM_CheatManager.EnableDebug
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       PC                             (CPF_Parm)
// class UClass*                  cDC                            (CPF_Parm)

void UGHM_CheatManager::EnableDebug(class APlayerController* PC, class UClass* cDC)
{
	static UFunction* uFnEnableDebug = nullptr;

	if (!uFnEnableDebug)
	{
		uFnEnableDebug = UFunction::FindFunction("Function GHMEngine.GHM_CheatManager.EnableDebug");
	}

	UGHM_CheatManager_execEnableDebug_Params EnableDebug_Params;
	memcpy_s(&EnableDebug_Params.PC, 0x8, &PC, 0x8);
	memcpy_s(&EnableDebug_Params.cDC, 0x8, &cDC, 0x8);

	this->ProcessEvent(uFnEnableDebug, &EnableDebug_Params, nullptr);
};

// Function GHMEngine.GHM_CheatManager.StartDebug
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UClass*                  cDC                            (CPF_Parm)

void UGHM_CheatManager::StartDebug(class UClass* cDC)
{
	static UFunction* uFnStartDebug = nullptr;

	if (!uFnStartDebug)
	{
		uFnStartDebug = UFunction::FindFunction("Function GHMEngine.GHM_CheatManager.StartDebug");
	}

	UGHM_CheatManager_execStartDebug_Params StartDebug_Params;
	memcpy_s(&StartDebug_Params.cDC, 0x8, &cDC, 0x8);

	this->ProcessEvent(uFnStartDebug, &StartDebug_Params, nullptr);
};

// Function GHMEngine.GHM_CheatManager.DebugMenu
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_CheatManager::DebugMenu()
{
	static UFunction* uFnDebugMenu = nullptr;

	if (!uFnDebugMenu)
	{
		uFnDebugMenu = UFunction::FindFunction("Function GHMEngine.GHM_CheatManager.DebugMenu");
	}

	UGHM_CheatManager_execDebugMenu_Params DebugMenu_Params;

	this->ProcessEvent(uFnDebugMenu, &DebugMenu_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyRBButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyRBButton(uint8_t btn)
{
	static UFunction* uFnKeyRBButton = nullptr;

	if (!uFnKeyRBButton)
	{
		uFnKeyRBButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyRBButton");
	}

	AGHM_DebugController_execKeyRBButton_Params KeyRBButton_Params;
	memcpy_s(&KeyRBButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyRBButton, &KeyRBButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyLBButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyLBButton(uint8_t btn)
{
	static UFunction* uFnKeyLBButton = nullptr;

	if (!uFnKeyLBButton)
	{
		uFnKeyLBButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyLBButton");
	}

	AGHM_DebugController_execKeyLBButton_Params KeyLBButton_Params;
	memcpy_s(&KeyLBButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyLBButton, &KeyLBButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyRTButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyRTButton(uint8_t btn)
{
	static UFunction* uFnKeyRTButton = nullptr;

	if (!uFnKeyRTButton)
	{
		uFnKeyRTButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyRTButton");
	}

	AGHM_DebugController_execKeyRTButton_Params KeyRTButton_Params;
	memcpy_s(&KeyRTButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyRTButton, &KeyRTButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyLTButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyLTButton(uint8_t btn)
{
	static UFunction* uFnKeyLTButton = nullptr;

	if (!uFnKeyLTButton)
	{
		uFnKeyLTButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyLTButton");
	}

	AGHM_DebugController_execKeyLTButton_Params KeyLTButton_Params;
	memcpy_s(&KeyLTButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyLTButton, &KeyLTButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyYButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyYButton(uint8_t btn)
{
	static UFunction* uFnKeyYButton = nullptr;

	if (!uFnKeyYButton)
	{
		uFnKeyYButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyYButton");
	}

	AGHM_DebugController_execKeyYButton_Params KeyYButton_Params;
	memcpy_s(&KeyYButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyYButton, &KeyYButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyXButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyXButton(uint8_t btn)
{
	static UFunction* uFnKeyXButton = nullptr;

	if (!uFnKeyXButton)
	{
		uFnKeyXButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyXButton");
	}

	AGHM_DebugController_execKeyXButton_Params KeyXButton_Params;
	memcpy_s(&KeyXButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyXButton, &KeyXButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyBButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyBButton(uint8_t btn)
{
	static UFunction* uFnKeyBButton = nullptr;

	if (!uFnKeyBButton)
	{
		uFnKeyBButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyBButton");
	}

	AGHM_DebugController_execKeyBButton_Params KeyBButton_Params;
	memcpy_s(&KeyBButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyBButton, &KeyBButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyAButton
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyAButton(uint8_t btn)
{
	static UFunction* uFnKeyAButton = nullptr;

	if (!uFnKeyAButton)
	{
		uFnKeyAButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyAButton");
	}

	AGHM_DebugController_execKeyAButton_Params KeyAButton_Params;
	memcpy_s(&KeyAButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyAButton, &KeyAButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyRight
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyRight(uint8_t btn)
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyRight");
	}

	AGHM_DebugController_execKeyRight_Params KeyRight_Params;
	memcpy_s(&KeyRight_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyLeft
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyLeft(uint8_t btn)
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyLeft");
	}

	AGHM_DebugController_execKeyLeft_Params KeyLeft_Params;
	memcpy_s(&KeyLeft_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyDown
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyDown(uint8_t btn)
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyDown");
	}

	AGHM_DebugController_execKeyDown_Params KeyDown_Params;
	memcpy_s(&KeyDown_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.KeyUp
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void AGHM_DebugController::KeyUp(uint8_t btn)
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.KeyUp");
	}

	AGHM_DebugController_execKeyUp_Params KeyUp_Params;
	memcpy_s(&KeyUp_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.SwitchDefCamera
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_DebugController::SwitchDefCamera()
{
	static UFunction* uFnSwitchDefCamera = nullptr;

	if (!uFnSwitchDefCamera)
	{
		uFnSwitchDefCamera = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.SwitchDefCamera");
	}

	AGHM_DebugController_execSwitchDefCamera_Params SwitchDefCamera_Params;

	this->ProcessEvent(uFnSwitchDefCamera, &SwitchDefCamera_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.SwitchRootCamera
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_DebugController::SwitchRootCamera()
{
	static UFunction* uFnSwitchRootCamera = nullptr;

	if (!uFnSwitchRootCamera)
	{
		uFnSwitchRootCamera = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.SwitchRootCamera");
	}

	AGHM_DebugController_execSwitchRootCamera_Params SwitchRootCamera_Params;

	this->ProcessEvent(uFnSwitchRootCamera, &SwitchRootCamera_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.Terminate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_DebugController::Terminate()
{
	static UFunction* uFnTerminate = nullptr;

	if (!uFnTerminate)
	{
		uFnTerminate = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.Terminate");
	}

	AGHM_DebugController_execTerminate_Params Terminate_Params;

	this->ProcessEvent(uFnTerminate, &Terminate_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.DisableDebug
// [0x00020203] (FUNC_Final | FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_DebugController::DisableDebug()
{
	static UFunction* uFnDisableDebug = nullptr;

	if (!uFnDisableDebug)
	{
		uFnDisableDebug = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.DisableDebug");
	}

	AGHM_DebugController_execDisableDebug_Params DisableDebug_Params;

	this->ProcessEvent(uFnDisableDebug, &DisableDebug_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.DebugMenu
// [0x00020203] (FUNC_Final | FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_DebugController::DebugMenu()
{
	static UFunction* uFnDebugMenu = nullptr;

	if (!uFnDebugMenu)
	{
		uFnDebugMenu = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.DebugMenu");
	}

	AGHM_DebugController_execDebugMenu_Params DebugMenu_Params;

	this->ProcessEvent(uFnDebugMenu, &DebugMenu_Params, nullptr);
};

// Function GHMEngine.GHM_DebugController.PostBeginPlay
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGHM_DebugController::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GHMEngine.GHM_DebugController.PostBeginPlay");
	}

	AGHM_DebugController_eventPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyRBButton
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyRBButton(uint8_t btn)
{
	static UFunction* uFnKeyRBButton = nullptr;

	if (!uFnKeyRBButton)
	{
		uFnKeyRBButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyRBButton");
	}

	UGHM_DebugInput_execKeyRBButton_Params KeyRBButton_Params;
	memcpy_s(&KeyRBButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyRBButton, &KeyRBButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyLBButton
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyLBButton(uint8_t btn)
{
	static UFunction* uFnKeyLBButton = nullptr;

	if (!uFnKeyLBButton)
	{
		uFnKeyLBButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyLBButton");
	}

	UGHM_DebugInput_execKeyLBButton_Params KeyLBButton_Params;
	memcpy_s(&KeyLBButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyLBButton, &KeyLBButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyLTButton
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyLTButton(uint8_t btn)
{
	static UFunction* uFnKeyLTButton = nullptr;

	if (!uFnKeyLTButton)
	{
		uFnKeyLTButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyLTButton");
	}

	UGHM_DebugInput_execKeyLTButton_Params KeyLTButton_Params;
	memcpy_s(&KeyLTButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyLTButton, &KeyLTButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyRTButton
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyRTButton(uint8_t btn)
{
	static UFunction* uFnKeyRTButton = nullptr;

	if (!uFnKeyRTButton)
	{
		uFnKeyRTButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyRTButton");
	}

	UGHM_DebugInput_execKeyRTButton_Params KeyRTButton_Params;
	memcpy_s(&KeyRTButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyRTButton, &KeyRTButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyYButton
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyYButton(uint8_t btn)
{
	static UFunction* uFnKeyYButton = nullptr;

	if (!uFnKeyYButton)
	{
		uFnKeyYButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyYButton");
	}

	UGHM_DebugInput_execKeyYButton_Params KeyYButton_Params;
	memcpy_s(&KeyYButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyYButton, &KeyYButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyXButton
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyXButton(uint8_t btn)
{
	static UFunction* uFnKeyXButton = nullptr;

	if (!uFnKeyXButton)
	{
		uFnKeyXButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyXButton");
	}

	UGHM_DebugInput_execKeyXButton_Params KeyXButton_Params;
	memcpy_s(&KeyXButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyXButton, &KeyXButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyBButton
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyBButton(uint8_t btn)
{
	static UFunction* uFnKeyBButton = nullptr;

	if (!uFnKeyBButton)
	{
		uFnKeyBButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyBButton");
	}

	UGHM_DebugInput_execKeyBButton_Params KeyBButton_Params;
	memcpy_s(&KeyBButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyBButton, &KeyBButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyAButton
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyAButton(uint8_t btn)
{
	static UFunction* uFnKeyAButton = nullptr;

	if (!uFnKeyAButton)
	{
		uFnKeyAButton = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyAButton");
	}

	UGHM_DebugInput_execKeyAButton_Params KeyAButton_Params;
	memcpy_s(&KeyAButton_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyAButton, &KeyAButton_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyRight
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyRight(uint8_t btn)
{
	static UFunction* uFnKeyRight = nullptr;

	if (!uFnKeyRight)
	{
		uFnKeyRight = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyRight");
	}

	UGHM_DebugInput_execKeyRight_Params KeyRight_Params;
	memcpy_s(&KeyRight_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyRight, &KeyRight_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyLeft
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyLeft(uint8_t btn)
{
	static UFunction* uFnKeyLeft = nullptr;

	if (!uFnKeyLeft)
	{
		uFnKeyLeft = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyLeft");
	}

	UGHM_DebugInput_execKeyLeft_Params KeyLeft_Params;
	memcpy_s(&KeyLeft_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyLeft, &KeyLeft_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyDown
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyDown(uint8_t btn)
{
	static UFunction* uFnKeyDown = nullptr;

	if (!uFnKeyDown)
	{
		uFnKeyDown = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyDown");
	}

	UGHM_DebugInput_execKeyDown_Params KeyDown_Params;
	memcpy_s(&KeyDown_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyDown, &KeyDown_Params, nullptr);
};

// Function GHMEngine.GHM_DebugInput.KeyUp
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        btn                            (CPF_Parm)

void UGHM_DebugInput::KeyUp(uint8_t btn)
{
	static UFunction* uFnKeyUp = nullptr;

	if (!uFnKeyUp)
	{
		uFnKeyUp = UFunction::FindFunction("Function GHMEngine.GHM_DebugInput.KeyUp");
	}

	UGHM_DebugInput_execKeyUp_Params KeyUp_Params;
	memcpy_s(&KeyUp_Params.btn, 0x1, &btn, 0x1);

	this->ProcessEvent(uFnKeyUp, &KeyUp_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemButton.Cancel
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemButton::Cancel()
{
	static UFunction* uFnCancel = nullptr;

	if (!uFnCancel)
	{
		uFnCancel = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemButton.Cancel");
	}

	UGHM_DebugMenuItemButton_execCancel_Params Cancel_Params;

	this->ProcessEvent(uFnCancel, &Cancel_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemButton.Select
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_DebugMenuItemButton::Select()
{
	static UFunction* uFnSelect = nullptr;

	if (!uFnSelect)
	{
		uFnSelect = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemButton.Select");
	}

	UGHM_DebugMenuItemButton_execSelect_Params Select_Params;

	this->ProcessEvent(uFnSelect, &Select_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemButton.DrawMenuItem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemButton::DrawMenuItem(class UCanvas* Canvas)
{
	static UFunction* uFnDrawMenuItem = nullptr;

	if (!uFnDrawMenuItem)
	{
		uFnDrawMenuItem = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemButton.DrawMenuItem");
	}

	UGHM_DebugMenuItemButton_execDrawMenuItem_Params DrawMenuItem_Params;
	memcpy_s(&DrawMenuItem_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawMenuItem, &DrawMenuItem_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.SetAutoLabelSpikes
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bLabelSpikes                   (CPF_Parm)

void UGHM_DebugMenuItemValueTimeGraph::SetAutoLabelSpikes(unsigned long bLabelSpikes)
{
	static UFunction* uFnSetAutoLabelSpikes = nullptr;

	if (!uFnSetAutoLabelSpikes)
	{
		uFnSetAutoLabelSpikes = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.SetAutoLabelSpikes");
	}

	UGHM_DebugMenuItemValueTimeGraph_execSetAutoLabelSpikes_Params SetAutoLabelSpikes_Params;
	SetAutoLabelSpikes_Params.bLabelSpikes = bLabelSpikes;

	this->ProcessEvent(uFnSetAutoLabelSpikes, &SetAutoLabelSpikes_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.SetAutoSizePositiveYAxis
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAutoSizeNegativeYAxis         (CPF_Parm)

void UGHM_DebugMenuItemValueTimeGraph::SetAutoSizePositiveYAxis(unsigned long bAutoSizeNegativeYAxis)
{
	static UFunction* uFnSetAutoSizePositiveYAxis = nullptr;

	if (!uFnSetAutoSizePositiveYAxis)
	{
		uFnSetAutoSizePositiveYAxis = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.SetAutoSizePositiveYAxis");
	}

	UGHM_DebugMenuItemValueTimeGraph_execSetAutoSizePositiveYAxis_Params SetAutoSizePositiveYAxis_Params;
	SetAutoSizePositiveYAxis_Params.bAutoSizeNegativeYAxis = bAutoSizeNegativeYAxis;

	this->ProcessEvent(uFnSetAutoSizePositiveYAxis, &SetAutoSizePositiveYAxis_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.SetAutoSizeNegativeYAxis
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bAutoSizeNegativeYAxis         (CPF_Parm)

void UGHM_DebugMenuItemValueTimeGraph::SetAutoSizeNegativeYAxis(unsigned long bAutoSizeNegativeYAxis)
{
	static UFunction* uFnSetAutoSizeNegativeYAxis = nullptr;

	if (!uFnSetAutoSizeNegativeYAxis)
	{
		uFnSetAutoSizeNegativeYAxis = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.SetAutoSizeNegativeYAxis");
	}

	UGHM_DebugMenuItemValueTimeGraph_execSetAutoSizeNegativeYAxis_Params SetAutoSizeNegativeYAxis_Params;
	SetAutoSizeNegativeYAxis_Params.bAutoSizeNegativeYAxis = bAutoSizeNegativeYAxis;

	this->ProcessEvent(uFnSetAutoSizeNegativeYAxis, &SetAutoSizeNegativeYAxis_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.AddValue
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// float                          Value                          (CPF_Parm)

void UGHM_DebugMenuItemValueTimeGraph::AddValue(float Value)
{
	static UFunction* uFnAddValue = nullptr;

	if (!uFnAddValue)
	{
		uFnAddValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.AddValue");
	}

	UGHM_DebugMenuItemValueTimeGraph_execAddValue_Params AddValue_Params;
	memcpy_s(&AddValue_Params.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(uFnAddValue, &AddValue_Params, nullptr);
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.GetNextIndex
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

int32_t UGHM_DebugMenuItemValueTimeGraph::GetNextIndex(int32_t Index)
{
	static UFunction* uFnGetNextIndex = nullptr;

	if (!uFnGetNextIndex)
	{
		uFnGetNextIndex = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.GetNextIndex");
	}

	UGHM_DebugMenuItemValueTimeGraph_execGetNextIndex_Params GetNextIndex_Params;
	memcpy_s(&GetNextIndex_Params.Index, 0x4, &Index, 0x4);

	this->ProcessEvent(uFnGetNextIndex, &GetNextIndex_Params, nullptr);

	return GetNextIndex_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.ComputeAverageValue
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UGHM_DebugMenuItemValueTimeGraph::ComputeAverageValue()
{
	static UFunction* uFnComputeAverageValue = nullptr;

	if (!uFnComputeAverageValue)
	{
		uFnComputeAverageValue = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.ComputeAverageValue");
	}

	UGHM_DebugMenuItemValueTimeGraph_execComputeAverageValue_Params ComputeAverageValue_Params;

	this->ProcessEvent(uFnComputeAverageValue, &ComputeAverageValue_Params, nullptr);

	return ComputeAverageValue_Params.ReturnValue;
};

// Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.DrawGraphWindow
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_DebugMenuItemValueTimeGraph::DrawGraphWindow(class UCanvas* Canvas)
{
	static UFunction* uFnDrawGraphWindow = nullptr;

	if (!uFnDrawGraphWindow)
	{
		uFnDrawGraphWindow = UFunction::FindFunction("Function GHMEngine.GHM_DebugMenuItemValueTimeGraph.DrawGraphWindow");
	}

	UGHM_DebugMenuItemValueTimeGraph_execDrawGraphWindow_Params DrawGraphWindow_Params;
	memcpy_s(&DrawGraphWindow_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawGraphWindow, &DrawGraphWindow_Params, nullptr);
};

// Function GHMEngine.GHM_HUDSub.DelDisplay
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         dgt                            (CPF_Parm | CPF_NeedCtorLink)

bool UGHM_HUDSub::DelDisplay(struct FScriptDelegate dgt)
{
	static UFunction* uFnDelDisplay = nullptr;

	if (!uFnDelDisplay)
	{
		uFnDelDisplay = UFunction::FindFunction("Function GHMEngine.GHM_HUDSub.DelDisplay");
	}

	UGHM_HUDSub_execDelDisplay_Params DelDisplay_Params;
	memcpy_s(&DelDisplay_Params.dgt, 0x10, &dgt, 0x10);

	this->ProcessEvent(uFnDelDisplay, &DelDisplay_Params, nullptr);

	return DelDisplay_Params.ReturnValue;
};

// Function GHMEngine.GHM_HUDSub.AddDisplay
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         dgt                            (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        prio                           (CPF_OptionalParm | CPF_Parm)

bool UGHM_HUDSub::AddDisplay(struct FScriptDelegate dgt, int32_t prio)
{
	static UFunction* uFnAddDisplay = nullptr;

	if (!uFnAddDisplay)
	{
		uFnAddDisplay = UFunction::FindFunction("Function GHMEngine.GHM_HUDSub.AddDisplay");
	}

	UGHM_HUDSub_execAddDisplay_Params AddDisplay_Params;
	memcpy_s(&AddDisplay_Params.dgt, 0x10, &dgt, 0x10);
	memcpy_s(&AddDisplay_Params.prio, 0x4, &prio, 0x4);

	this->ProcessEvent(uFnAddDisplay, &AddDisplay_Params, nullptr);

	return AddDisplay_Params.ReturnValue;
};

// Function GHMEngine.GHM_HUDSub.DrawDisplayList
// [0x00820003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_HUDSub::DrawDisplayList(class UCanvas* Canvas)
{
	static UFunction* uFnDrawDisplayList = nullptr;

	if (!uFnDrawDisplayList)
	{
		uFnDrawDisplayList = UFunction::FindFunction("Function GHMEngine.GHM_HUDSub.DrawDisplayList");
	}

	UGHM_HUDSub_execDrawDisplayList_Params DrawDisplayList_Params;
	memcpy_s(&DrawDisplayList_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawDisplayList, &DrawDisplayList_Params, nullptr);
};

// Function GHMEngine.GHM_HUDSub.Initialize
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_HUDSub::Initialize()
{
	static UFunction* uFnInitialize = nullptr;

	if (!uFnInitialize)
	{
		uFnInitialize = UFunction::FindFunction("Function GHMEngine.GHM_HUDSub.Initialize");
	}

	UGHM_HUDSub_execInitialize_Params Initialize_Params;

	this->ProcessEvent(uFnInitialize, &Initialize_Params, nullptr);
};

// Function GHMEngine.GHM_HUDSub.DrawDisplay
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_HUDSub::DrawDisplay(class UCanvas* Canvas)
{
	static UFunction* uFnDrawDisplay = nullptr;

	if (!uFnDrawDisplay)
	{
		uFnDrawDisplay = UFunction::FindFunction("Function GHMEngine.GHM_HUDSub.DrawDisplay");
	}

	UGHM_HUDSub_execDrawDisplay_Params DrawDisplay_Params;
	memcpy_s(&DrawDisplay_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawDisplay, &DrawDisplay_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.SetTextureKey
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        matnum                         (CPF_Const | CPF_Parm)
// struct FName                   ParamName                      (CPF_Const | CPF_Parm)
// float                          KeyTime                        (CPF_Const | CPF_Parm)
// class UTexture*                Value                          (CPF_Const | CPF_Parm)

void UGHM_MaterialAnim::SetTextureKey(int32_t matnum, struct FName ParamName, float KeyTime, class UTexture* Value)
{
	static UFunction* uFnSetTextureKey = nullptr;

	if (!uFnSetTextureKey)
	{
		uFnSetTextureKey = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.SetTextureKey");
	}

	UGHM_MaterialAnim_execSetTextureKey_Params SetTextureKey_Params;
	memcpy_s(&SetTextureKey_Params.matnum, 0x4, &matnum, 0x4);
	memcpy_s(&SetTextureKey_Params.ParamName, 0x8, &ParamName, 0x8);
	memcpy_s(&SetTextureKey_Params.KeyTime, 0x4, &KeyTime, 0x4);
	memcpy_s(&SetTextureKey_Params.Value, 0x8, &Value, 0x8);

	this->ProcessEvent(uFnSetTextureKey, &SetTextureKey_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.ChangeTextureKey
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        matnum                         (CPF_Const | CPF_Parm)
// struct FName                   ParamName                      (CPF_Const | CPF_Parm)
// int32_t                        KeyNum                         (CPF_Const | CPF_Parm)
// float                          KeyTime                        (CPF_Const | CPF_Parm)
// class UTexture*                Value                          (CPF_Const | CPF_Parm)

void UGHM_MaterialAnim::ChangeTextureKey(int32_t matnum, struct FName ParamName, int32_t KeyNum, float KeyTime, class UTexture* Value)
{
	static UFunction* uFnChangeTextureKey = nullptr;

	if (!uFnChangeTextureKey)
	{
		uFnChangeTextureKey = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.ChangeTextureKey");
	}

	UGHM_MaterialAnim_execChangeTextureKey_Params ChangeTextureKey_Params;
	memcpy_s(&ChangeTextureKey_Params.matnum, 0x4, &matnum, 0x4);
	memcpy_s(&ChangeTextureKey_Params.ParamName, 0x8, &ParamName, 0x8);
	memcpy_s(&ChangeTextureKey_Params.KeyNum, 0x4, &KeyNum, 0x4);
	memcpy_s(&ChangeTextureKey_Params.KeyTime, 0x4, &KeyTime, 0x4);
	memcpy_s(&ChangeTextureKey_Params.Value, 0x8, &Value, 0x8);

	this->ProcessEvent(uFnChangeTextureKey, &ChangeTextureKey_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.SetVectorKey
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        matnum                         (CPF_Const | CPF_Parm)
// struct FName                   ParamName                      (CPF_Const | CPF_Parm)
// float                          KeyTime                        (CPF_Const | CPF_Parm)
// struct FLinearColor            Value                          (CPF_Const | CPF_Parm)

void UGHM_MaterialAnim::SetVectorKey(int32_t matnum, struct FName ParamName, float KeyTime, struct FLinearColor Value)
{
	static UFunction* uFnSetVectorKey = nullptr;

	if (!uFnSetVectorKey)
	{
		uFnSetVectorKey = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.SetVectorKey");
	}

	UGHM_MaterialAnim_execSetVectorKey_Params SetVectorKey_Params;
	memcpy_s(&SetVectorKey_Params.matnum, 0x4, &matnum, 0x4);
	memcpy_s(&SetVectorKey_Params.ParamName, 0x8, &ParamName, 0x8);
	memcpy_s(&SetVectorKey_Params.KeyTime, 0x4, &KeyTime, 0x4);
	memcpy_s(&SetVectorKey_Params.Value, 0x10, &Value, 0x10);

	this->ProcessEvent(uFnSetVectorKey, &SetVectorKey_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.ChangeScalarKey
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        matnum                         (CPF_Const | CPF_Parm)
// struct FName                   ParamName                      (CPF_Const | CPF_Parm)
// int32_t                        KeyNum                         (CPF_Const | CPF_Parm)
// float                          KeyTime                        (CPF_Const | CPF_Parm)
// float                          Value                          (CPF_Const | CPF_Parm)

void UGHM_MaterialAnim::ChangeScalarKey(int32_t matnum, struct FName ParamName, int32_t KeyNum, float KeyTime, float Value)
{
	static UFunction* uFnChangeScalarKey = nullptr;

	if (!uFnChangeScalarKey)
	{
		uFnChangeScalarKey = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.ChangeScalarKey");
	}

	UGHM_MaterialAnim_execChangeScalarKey_Params ChangeScalarKey_Params;
	memcpy_s(&ChangeScalarKey_Params.matnum, 0x4, &matnum, 0x4);
	memcpy_s(&ChangeScalarKey_Params.ParamName, 0x8, &ParamName, 0x8);
	memcpy_s(&ChangeScalarKey_Params.KeyNum, 0x4, &KeyNum, 0x4);
	memcpy_s(&ChangeScalarKey_Params.KeyTime, 0x4, &KeyTime, 0x4);
	memcpy_s(&ChangeScalarKey_Params.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(uFnChangeScalarKey, &ChangeScalarKey_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.SetScalarKey
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        matnum                         (CPF_Const | CPF_Parm)
// struct FName                   ParamName                      (CPF_Const | CPF_Parm)
// float                          KeyTime                        (CPF_Const | CPF_Parm)
// float                          Value                          (CPF_Const | CPF_Parm)

void UGHM_MaterialAnim::SetScalarKey(int32_t matnum, struct FName ParamName, float KeyTime, float Value)
{
	static UFunction* uFnSetScalarKey = nullptr;

	if (!uFnSetScalarKey)
	{
		uFnSetScalarKey = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.SetScalarKey");
	}

	UGHM_MaterialAnim_execSetScalarKey_Params SetScalarKey_Params;
	memcpy_s(&SetScalarKey_Params.matnum, 0x4, &matnum, 0x4);
	memcpy_s(&SetScalarKey_Params.ParamName, 0x8, &ParamName, 0x8);
	memcpy_s(&SetScalarKey_Params.KeyTime, 0x4, &KeyTime, 0x4);
	memcpy_s(&SetScalarKey_Params.Value, 0x4, &Value, 0x4);

	this->ProcessEvent(uFnSetScalarKey, &SetScalarKey_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.SetMaterialChangeTime
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        matnum                         (CPF_Parm)
// float                          ChangeTime                     (CPF_Parm)

void UGHM_MaterialAnim::SetMaterialChangeTime(int32_t matnum, float ChangeTime)
{
	static UFunction* uFnSetMaterialChangeTime = nullptr;

	if (!uFnSetMaterialChangeTime)
	{
		uFnSetMaterialChangeTime = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.SetMaterialChangeTime");
	}

	UGHM_MaterialAnim_execSetMaterialChangeTime_Params SetMaterialChangeTime_Params;
	memcpy_s(&SetMaterialChangeTime_Params.matnum, 0x4, &matnum, 0x4);
	memcpy_s(&SetMaterialChangeTime_Params.ChangeTime, 0x4, &ChangeTime, 0x4);

	this->ProcessEvent(uFnSetMaterialChangeTime, &SetMaterialChangeTime_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.ResetMover
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UGHM_MaterialAnim::ResetMover()
{
	static UFunction* uFnResetMover = nullptr;

	if (!uFnResetMover)
	{
		uFnResetMover = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.ResetMover");
	}

	UGHM_MaterialAnim_execResetMover_Params ResetMover_Params;

	this->ProcessEvent(uFnResetMover, &ResetMover_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.InitMover
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FGHMMaterialAnimContainer container                      (CPF_Parm | CPF_NeedCtorLink)

void UGHM_MaterialAnim::InitMover(struct FGHMMaterialAnimContainer container)
{
	static UFunction* uFnInitMover = nullptr;

	if (!uFnInitMover)
	{
		uFnInitMover = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.InitMover");
	}

	UGHM_MaterialAnim_execInitMover_Params InitMover_Params;
	memcpy_s(&InitMover_Params.container, 0x3C, &container, 0x3C);

	this->ProcessEvent(uFnInitMover, &InitMover_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.Animate
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void UGHM_MaterialAnim::Animate()
{
	static UFunction* uFnAnimate = nullptr;

	if (!uFnAnimate)
	{
		uFnAnimate = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.Animate");
	}

	UGHM_MaterialAnim_execAnimate_Params Animate_Params;

	this->ProcessEvent(uFnAnimate, &Animate_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.Interp
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void UGHM_MaterialAnim::Interp()
{
	static UFunction* uFnInterp = nullptr;

	if (!uFnInterp)
	{
		uFnInterp = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.Interp");
	}

	UGHM_MaterialAnim_execInterp_Params Interp_Params;

	this->ProcessEvent(uFnInterp, &Interp_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.SetMaterial
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void UGHM_MaterialAnim::SetMaterial()
{
	static UFunction* uFnSetMaterial = nullptr;

	if (!uFnSetMaterial)
	{
		uFnSetMaterial = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.SetMaterial");
	}

	UGHM_MaterialAnim_execSetMaterial_Params SetMaterial_Params;

	this->ProcessEvent(uFnSetMaterial, &SetMaterial_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.MaterialAnimTick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGHM_MaterialAnim::MaterialAnimTick(float DeltaTime)
{
	static UFunction* uFnMaterialAnimTick = nullptr;

	if (!uFnMaterialAnimTick)
	{
		uFnMaterialAnimTick = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.MaterialAnimTick");
	}

	UGHM_MaterialAnim_execMaterialAnimTick_Params MaterialAnimTick_Params;
	memcpy_s(&MaterialAnimTick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnMaterialAnimTick, &MaterialAnimTick_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.StopMaterialAnim
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_MaterialAnim::StopMaterialAnim()
{
	static UFunction* uFnStopMaterialAnim = nullptr;

	if (!uFnStopMaterialAnim)
	{
		uFnStopMaterialAnim = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.StopMaterialAnim");
	}

	UGHM_MaterialAnim_execStopMaterialAnim_Params StopMaterialAnim_Params;

	this->ProcessEvent(uFnStopMaterialAnim, &StopMaterialAnim_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.PlayMaterialAnim
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_MaterialAnim::PlayMaterialAnim()
{
	static UFunction* uFnPlayMaterialAnim = nullptr;

	if (!uFnPlayMaterialAnim)
	{
		uFnPlayMaterialAnim = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.PlayMaterialAnim");
	}

	UGHM_MaterialAnim_execPlayMaterialAnim_Params PlayMaterialAnim_Params;

	this->ProcessEvent(uFnPlayMaterialAnim, &PlayMaterialAnim_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.SetTargetMaterialIndex
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Idx                            (CPF_Parm)

void UGHM_MaterialAnim::SetTargetMaterialIndex(int32_t Idx)
{
	static UFunction* uFnSetTargetMaterialIndex = nullptr;

	if (!uFnSetTargetMaterialIndex)
	{
		uFnSetTargetMaterialIndex = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.SetTargetMaterialIndex");
	}

	UGHM_MaterialAnim_execSetTargetMaterialIndex_Params SetTargetMaterialIndex_Params;
	memcpy_s(&SetTargetMaterialIndex_Params.Idx, 0x4, &Idx, 0x4);

	this->ProcessEvent(uFnSetTargetMaterialIndex, &SetTargetMaterialIndex_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.SetTargetStaticMesh
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UStaticMeshComponent*    Target                         (CPF_Parm | CPF_EditInline)

void UGHM_MaterialAnim::SetTargetStaticMesh(class UStaticMeshComponent* Target)
{
	static UFunction* uFnSetTargetStaticMesh = nullptr;

	if (!uFnSetTargetStaticMesh)
	{
		uFnSetTargetStaticMesh = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.SetTargetStaticMesh");
	}

	UGHM_MaterialAnim_execSetTargetStaticMesh_Params SetTargetStaticMesh_Params;
	memcpy_s(&SetTargetStaticMesh_Params.Target, 0x8, &Target, 0x8);

	this->ProcessEvent(uFnSetTargetStaticMesh, &SetTargetStaticMesh_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.SetTargetSkeletalMesh
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USkeletalMeshComponent*  Target                         (CPF_Parm | CPF_EditInline)

void UGHM_MaterialAnim::SetTargetSkeletalMesh(class USkeletalMeshComponent* Target)
{
	static UFunction* uFnSetTargetSkeletalMesh = nullptr;

	if (!uFnSetTargetSkeletalMesh)
	{
		uFnSetTargetSkeletalMesh = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.SetTargetSkeletalMesh");
	}

	UGHM_MaterialAnim_execSetTargetSkeletalMesh_Params SetTargetSkeletalMesh_Params;
	memcpy_s(&SetTargetSkeletalMesh_Params.Target, 0x8, &Target, 0x8);

	this->ProcessEvent(uFnSetTargetSkeletalMesh, &SetTargetSkeletalMesh_Params, nullptr);
};

// Function GHMEngine.GHM_MaterialAnim.AddMaterialInstance
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMaterialInstanceConstant* MIC                            (CPF_Parm)

void UGHM_MaterialAnim::AddMaterialInstance(class UMaterialInstanceConstant* MIC)
{
	static UFunction* uFnAddMaterialInstance = nullptr;

	if (!uFnAddMaterialInstance)
	{
		uFnAddMaterialInstance = UFunction::FindFunction("Function GHMEngine.GHM_MaterialAnim.AddMaterialInstance");
	}

	UGHM_MaterialAnim_execAddMaterialInstance_Params AddMaterialInstance_Params;
	memcpy_s(&AddMaterialInstance_Params.MIC, 0x8, &MIC, 0x8);

	this->ProcessEvent(uFnAddMaterialInstance, &AddMaterialInstance_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.DrawString
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// int32_t                        col_r                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        col_g                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        col_b                          (CPF_OptionalParm | CPF_Parm)
// unsigned long                  outline                        (CPF_OptionalParm | CPF_Parm)

void UGHM_MessageBoard::DrawString(class UCanvas* Canvas, int32_t col_r, int32_t col_g, int32_t col_b, unsigned long outline)
{
	static UFunction* uFnDrawString = nullptr;

	if (!uFnDrawString)
	{
		uFnDrawString = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.DrawString");
	}

	UGHM_MessageBoard_execDrawString_Params DrawString_Params;
	memcpy_s(&DrawString_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&DrawString_Params.col_r, 0x4, &col_r, 0x4);
	memcpy_s(&DrawString_Params.col_g, 0x4, &col_g, 0x4);
	memcpy_s(&DrawString_Params.col_b, 0x4, &col_b, 0x4);
	DrawString_Params.outline = outline;

	this->ProcessEvent(uFnDrawString, &DrawString_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.DrawLine
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// int32_t                        col_r                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        col_g                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        col_b                          (CPF_OptionalParm | CPF_Parm)
// unsigned long                  outline                        (CPF_OptionalParm | CPF_Parm)

void UGHM_MessageBoard::DrawLine(class UCanvas* Canvas, int32_t col_r, int32_t col_g, int32_t col_b, unsigned long outline)
{
	static UFunction* uFnDrawLine = nullptr;

	if (!uFnDrawLine)
	{
		uFnDrawLine = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.DrawLine");
	}

	UGHM_MessageBoard_execDrawLine_Params DrawLine_Params;
	memcpy_s(&DrawLine_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&DrawLine_Params.col_r, 0x4, &col_r, 0x4);
	memcpy_s(&DrawLine_Params.col_g, 0x4, &col_g, 0x4);
	memcpy_s(&DrawLine_Params.col_b, 0x4, &col_b, 0x4);
	DrawLine_Params.outline = outline;

	this->ProcessEvent(uFnDrawLine, &DrawLine_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.DrawWord
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// int32_t                        col_r                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        col_g                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        col_b                          (CPF_OptionalParm | CPF_Parm)
// unsigned long                  outline                        (CPF_OptionalParm | CPF_Parm)

void UGHM_MessageBoard::DrawWord(class UCanvas* Canvas, int32_t col_r, int32_t col_g, int32_t col_b, unsigned long outline)
{
	static UFunction* uFnDrawWord = nullptr;

	if (!uFnDrawWord)
	{
		uFnDrawWord = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.DrawWord");
	}

	UGHM_MessageBoard_execDrawWord_Params DrawWord_Params;
	memcpy_s(&DrawWord_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&DrawWord_Params.col_r, 0x4, &col_r, 0x4);
	memcpy_s(&DrawWord_Params.col_g, 0x4, &col_g, 0x4);
	memcpy_s(&DrawWord_Params.col_b, 0x4, &col_b, 0x4);
	DrawWord_Params.outline = outline;

	this->ProcessEvent(uFnDrawWord, &DrawWord_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.DrawDisplay
// [0x00080003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UGHM_MessageBoard::DrawDisplay(class UCanvas* Canvas)
{
	static UFunction* uFnDrawDisplay = nullptr;

	if (!uFnDrawDisplay)
	{
		uFnDrawDisplay = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.DrawDisplay");
	}

	UGHM_MessageBoard_execDrawDisplay_Params DrawDisplay_Params;
	memcpy_s(&DrawDisplay_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnDrawDisplay, &DrawDisplay_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.SetMessagePosType
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ptype                          (CPF_Parm)

void UGHM_MessageBoard::SetMessagePosType(uint8_t ptype)
{
	static UFunction* uFnSetMessagePosType = nullptr;

	if (!uFnSetMessagePosType)
	{
		uFnSetMessagePosType = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.SetMessagePosType");
	}

	UGHM_MessageBoard_execSetMessagePosType_Params SetMessagePosType_Params;
	memcpy_s(&SetMessagePosType_Params.ptype, 0x1, &ptype, 0x1);

	this->ProcessEvent(uFnSetMessagePosType, &SetMessagePosType_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.SetMessageDrawType
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        dtype                          (CPF_Parm)

void UGHM_MessageBoard::SetMessageDrawType(uint8_t dtype)
{
	static UFunction* uFnSetMessageDrawType = nullptr;

	if (!uFnSetMessageDrawType)
	{
		uFnSetMessageDrawType = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.SetMessageDrawType");
	}

	UGHM_MessageBoard_execSetMessageDrawType_Params SetMessageDrawType_Params;
	memcpy_s(&SetMessageDrawType_Params.dtype, 0x1, &dtype, 0x1);

	this->ProcessEvent(uFnSetMessageDrawType, &SetMessageDrawType_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.SetMessageSpeed
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          spd                            (CPF_Parm)

void UGHM_MessageBoard::SetMessageSpeed(float spd)
{
	static UFunction* uFnSetMessageSpeed = nullptr;

	if (!uFnSetMessageSpeed)
	{
		uFnSetMessageSpeed = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.SetMessageSpeed");
	}

	UGHM_MessageBoard_execSetMessageSpeed_Params SetMessageSpeed_Params;
	memcpy_s(&SetMessageSpeed_Params.spd, 0x4, &spd, 0x4);

	this->ProcessEvent(uFnSetMessageSpeed, &SetMessageSpeed_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.ClearString
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_MessageBoard::ClearString()
{
	static UFunction* uFnClearString = nullptr;

	if (!uFnClearString)
	{
		uFnClearString = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.ClearString");
	}

	UGHM_MessageBoard_execClearString_Params ClearString_Params;

	this->ProcessEvent(uFnClearString, &ClearString_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.AddString
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Message                        (CPF_Parm | CPF_NeedCtorLink)

void UGHM_MessageBoard::AddString(class FString Message)
{
	static UFunction* uFnAddString = nullptr;

	if (!uFnAddString)
	{
		uFnAddString = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.AddString");
	}

	UGHM_MessageBoard_execAddString_Params AddString_Params;
	memcpy_s(&AddString_Params.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(uFnAddString, &AddString_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.SetFontType
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        font_type                      (CPF_Parm)

void UGHM_MessageBoard::SetFontType(int32_t font_type)
{
	static UFunction* uFnSetFontType = nullptr;

	if (!uFnSetFontType)
	{
		uFnSetFontType = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.SetFontType");
	}

	UGHM_MessageBoard_execSetFontType_Params SetFontType_Params;
	memcpy_s(&SetFontType_Params.font_type, 0x4, &font_type, 0x4);

	this->ProcessEvent(uFnSetFontType, &SetFontType_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.SetDisplayRightPosX
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          pos_x                          (CPF_Parm)

void UGHM_MessageBoard::SetDisplayRightPosX(float pos_x)
{
	static UFunction* uFnSetDisplayRightPosX = nullptr;

	if (!uFnSetDisplayRightPosX)
	{
		uFnSetDisplayRightPosX = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.SetDisplayRightPosX");
	}

	UGHM_MessageBoard_execSetDisplayRightPosX_Params SetDisplayRightPosX_Params;
	memcpy_s(&SetDisplayRightPosX_Params.pos_x, 0x4, &pos_x, 0x4);

	this->ProcessEvent(uFnSetDisplayRightPosX, &SetDisplayRightPosX_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.SetDisplayLeftPosX
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          pos_x                          (CPF_Parm)

void UGHM_MessageBoard::SetDisplayLeftPosX(float pos_x)
{
	static UFunction* uFnSetDisplayLeftPosX = nullptr;

	if (!uFnSetDisplayLeftPosX)
	{
		uFnSetDisplayLeftPosX = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.SetDisplayLeftPosX");
	}

	UGHM_MessageBoard_execSetDisplayLeftPosX_Params SetDisplayLeftPosX_Params;
	memcpy_s(&SetDisplayLeftPosX_Params.pos_x, 0x4, &pos_x, 0x4);

	this->ProcessEvent(uFnSetDisplayLeftPosX, &SetDisplayLeftPosX_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.SetDisplayPosY
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          pos_y                          (CPF_Parm)

void UGHM_MessageBoard::SetDisplayPosY(float pos_y)
{
	static UFunction* uFnSetDisplayPosY = nullptr;

	if (!uFnSetDisplayPosY)
	{
		uFnSetDisplayPosY = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.SetDisplayPosY");
	}

	UGHM_MessageBoard_execSetDisplayPosY_Params SetDisplayPosY_Params;
	memcpy_s(&SetDisplayPosY_Params.pos_y, 0x4, &pos_y, 0x4);

	this->ProcessEvent(uFnSetDisplayPosY, &SetDisplayPosY_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.SetDisplayTime
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          disptime                       (CPF_Parm)

void UGHM_MessageBoard::SetDisplayTime(float disptime)
{
	static UFunction* uFnSetDisplayTime = nullptr;

	if (!uFnSetDisplayTime)
	{
		uFnSetDisplayTime = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.SetDisplayTime");
	}

	UGHM_MessageBoard_execSetDisplayTime_Params SetDisplayTime_Params;
	memcpy_s(&SetDisplayTime_Params.disptime, 0x4, &disptime, 0x4);

	this->ProcessEvent(uFnSetDisplayTime, &SetDisplayTime_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.Hide
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_MessageBoard::Hide()
{
	static UFunction* uFnHide = nullptr;

	if (!uFnHide)
	{
		uFnHide = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.Hide");
	}

	UGHM_MessageBoard_execHide_Params Hide_Params;

	this->ProcessEvent(uFnHide, &Hide_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.Show
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_MessageBoard::Show()
{
	static UFunction* uFnShow = nullptr;

	if (!uFnShow)
	{
		uFnShow = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.Show");
	}

	UGHM_MessageBoard_execShow_Params Show_Params;

	this->ProcessEvent(uFnShow, &Show_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.Reset
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_MessageBoard::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.Reset");
	}

	UGHM_MessageBoard_execReset_Params Reset_Params;

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.Terminate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_MessageBoard::Terminate()
{
	static UFunction* uFnTerminate = nullptr;

	if (!uFnTerminate)
	{
		uFnTerminate = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.Terminate");
	}

	UGHM_MessageBoard_execTerminate_Params Terminate_Params;

	this->ProcessEvent(uFnTerminate, &Terminate_Params, nullptr);
};

// Function GHMEngine.GHM_MessageBoard.Initialize
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_MessageBoard::Initialize()
{
	static UFunction* uFnInitialize = nullptr;

	if (!uFnInitialize)
	{
		uFnInitialize = UFunction::FindFunction("Function GHMEngine.GHM_MessageBoard.Initialize");
	}

	UGHM_MessageBoard_execInitialize_Params Initialize_Params;

	this->ProcessEvent(uFnInitialize, &Initialize_Params, nullptr);
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.ShowNuiTroubleshooterUI
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_OnlinePlayerInterfaceNui::ShowNuiTroubleshooterUI()
{
	static UFunction* uFnShowNuiTroubleshooterUI = nullptr;

	if (!uFnShowNuiTroubleshooterUI)
	{
		uFnShowNuiTroubleshooterUI = UFunction::FindFunction("Function GHMEngine.GHM_OnlinePlayerInterfaceNui.ShowNuiTroubleshooterUI");
	}

	UGHM_OnlinePlayerInterfaceNui_execShowNuiTroubleshooterUI_Params ShowNuiTroubleshooterUI_Params;

	this->ProcessEvent(uFnShowNuiTroubleshooterUI, &ShowNuiTroubleshooterUI_Params, nullptr);

	return ShowNuiTroubleshooterUI_Params.ReturnValue;
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.ShowNuiGuideUI
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGHM_OnlinePlayerInterfaceNui::ShowNuiGuideUI()
{
	static UFunction* uFnShowNuiGuideUI = nullptr;

	if (!uFnShowNuiGuideUI)
	{
		uFnShowNuiGuideUI = UFunction::FindFunction("Function GHMEngine.GHM_OnlinePlayerInterfaceNui.ShowNuiGuideUI");
	}

	UGHM_OnlinePlayerInterfaceNui_execShowNuiGuideUI_Params ShowNuiGuideUI_Params;

	this->ProcessEvent(uFnShowNuiGuideUI, &ShowNuiGuideUI_Params, nullptr);

	return ShowNuiGuideUI_Params.ReturnValue;
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.ClearNuiSystemGestureDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         SystemGestureDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UGHM_OnlinePlayerInterfaceNui::ClearNuiSystemGestureDelegate(struct FScriptDelegate SystemGestureDelegate)
{
	static UFunction* uFnClearNuiSystemGestureDelegate = nullptr;

	if (!uFnClearNuiSystemGestureDelegate)
	{
		uFnClearNuiSystemGestureDelegate = UFunction::FindFunction("Function GHMEngine.GHM_OnlinePlayerInterfaceNui.ClearNuiSystemGestureDelegate");
	}

	UGHM_OnlinePlayerInterfaceNui_execClearNuiSystemGestureDelegate_Params ClearNuiSystemGestureDelegate_Params;
	memcpy_s(&ClearNuiSystemGestureDelegate_Params.SystemGestureDelegate, 0x10, &SystemGestureDelegate, 0x10);

	this->ProcessEvent(uFnClearNuiSystemGestureDelegate, &ClearNuiSystemGestureDelegate_Params, nullptr);
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.AddNuiSystemGestureDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         SystemGestureDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UGHM_OnlinePlayerInterfaceNui::AddNuiSystemGestureDelegate(struct FScriptDelegate SystemGestureDelegate)
{
	static UFunction* uFnAddNuiSystemGestureDelegate = nullptr;

	if (!uFnAddNuiSystemGestureDelegate)
	{
		uFnAddNuiSystemGestureDelegate = UFunction::FindFunction("Function GHMEngine.GHM_OnlinePlayerInterfaceNui.AddNuiSystemGestureDelegate");
	}

	UGHM_OnlinePlayerInterfaceNui_execAddNuiSystemGestureDelegate_Params AddNuiSystemGestureDelegate_Params;
	memcpy_s(&AddNuiSystemGestureDelegate_Params.SystemGestureDelegate, 0x10, &SystemGestureDelegate, 0x10);

	this->ProcessEvent(uFnAddNuiSystemGestureDelegate, &AddNuiSystemGestureDelegate_Params, nullptr);
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.OnNuiSystemGesture
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        TrackingID                     (CPF_Parm)
// int32_t                        bProcessed                     (CPF_Parm | CPF_OutParm)

void UGHM_OnlinePlayerInterfaceNui::OnNuiSystemGesture(int32_t TrackingID, int32_t& bProcessed)
{
	static UFunction* uFnOnNuiSystemGesture = nullptr;

	if (!uFnOnNuiSystemGesture)
	{
		uFnOnNuiSystemGesture = UFunction::FindFunction("Function GHMEngine.GHM_OnlinePlayerInterfaceNui.OnNuiSystemGesture");
	}

	UGHM_OnlinePlayerInterfaceNui_execOnNuiSystemGesture_Params OnNuiSystemGesture_Params;
	memcpy_s(&OnNuiSystemGesture_Params.TrackingID, 0x4, &TrackingID, 0x4);
	memcpy_s(&OnNuiSystemGesture_Params.bProcessed, 0x4, &bProcessed, 0x4);

	this->ProcessEvent(uFnOnNuiSystemGesture, &OnNuiSystemGesture_Params, nullptr);

	memcpy_s(&bProcessed, 0x4, &OnNuiSystemGesture_Params.bProcessed, 0x4);
};

// Function GHMEngine.GHM_OnlinePlayerInterfaceNui.SetPlayerTrackingID
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        TrackingID                     (CPF_Parm)

bool UGHM_OnlinePlayerInterfaceNui::SetPlayerTrackingID(int32_t TrackingID)
{
	static UFunction* uFnSetPlayerTrackingID = nullptr;

	if (!uFnSetPlayerTrackingID)
	{
		uFnSetPlayerTrackingID = UFunction::FindFunction("Function GHMEngine.GHM_OnlinePlayerInterfaceNui.SetPlayerTrackingID");
	}

	UGHM_OnlinePlayerInterfaceNui_execSetPlayerTrackingID_Params SetPlayerTrackingID_Params;
	memcpy_s(&SetPlayerTrackingID_Params.TrackingID, 0x4, &TrackingID, 0x4);

	this->ProcessEvent(uFnSetPlayerTrackingID, &SetPlayerTrackingID_Params, nullptr);

	return SetPlayerTrackingID_Params.ReturnValue;
};

// Function GHMEngine.GHM_PhysicalMaterialProperty.MatchEff
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UParticleSystem*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        effType                        (CPF_Parm)

class UParticleSystem* UGHM_PhysicalMaterialProperty::MatchEff(int32_t effType)
{
	static UFunction* uFnMatchEff = nullptr;

	if (!uFnMatchEff)
	{
		uFnMatchEff = UFunction::FindFunction("Function GHMEngine.GHM_PhysicalMaterialProperty.MatchEff");
	}

	UGHM_PhysicalMaterialProperty_execMatchEff_Params MatchEff_Params;
	memcpy_s(&MatchEff_Params.effType, 0x4, &effType, 0x4);

	this->ProcessEvent(uFnMatchEff, &MatchEff_Params, nullptr);

	return MatchEff_Params.ReturnValue;
};

// Function GHMEngine.GHM_PhysicalMaterialProperty.MatchSE
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USoundCue*               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        seType                         (CPF_Parm)

class USoundCue* UGHM_PhysicalMaterialProperty::MatchSE(int32_t seType)
{
	static UFunction* uFnMatchSE = nullptr;

	if (!uFnMatchSE)
	{
		uFnMatchSE = UFunction::FindFunction("Function GHMEngine.GHM_PhysicalMaterialProperty.MatchSE");
	}

	UGHM_PhysicalMaterialProperty_execMatchSE_Params MatchSE_Params;
	memcpy_s(&MatchSE_Params.seType, 0x4, &seType, 0x4);

	this->ProcessEvent(uFnMatchSE, &MatchSE_Params, nullptr);

	return MatchSE_Params.ReturnValue;
};

// Function GHMEngine.GHM_PhysicalMaterialVolume.iGetEffectType
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t AGHM_PhysicalMaterialVolume::iGetEffectType()
{
	static UFunction* uFniGetEffectType = nullptr;

	if (!uFniGetEffectType)
	{
		uFniGetEffectType = UFunction::FindFunction("Function GHMEngine.GHM_PhysicalMaterialVolume.iGetEffectType");
	}

	AGHM_PhysicalMaterialVolume_execiGetEffectType_Params iGetEffectType_Params;

	this->ProcessEvent(uFniGetEffectType, &iGetEffectType_Params, nullptr);

	return iGetEffectType_Params.ReturnValue;
};

// Function GHMEngine.GHM_PhysicalMaterialVolume.iGetSoundCueType
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t AGHM_PhysicalMaterialVolume::iGetSoundCueType()
{
	static UFunction* uFniGetSoundCueType = nullptr;

	if (!uFniGetSoundCueType)
	{
		uFniGetSoundCueType = UFunction::FindFunction("Function GHMEngine.GHM_PhysicalMaterialVolume.iGetSoundCueType");
	}

	AGHM_PhysicalMaterialVolume_execiGetSoundCueType_Params iGetSoundCueType_Params;

	this->ProcessEvent(uFniGetSoundCueType, &iGetSoundCueType_Params, nullptr);

	return iGetSoundCueType_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqAct_SetRichPresence.GetRichPresenceId
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_SeqAct_SetRichPresence::GetRichPresenceId()
{
	static UFunction* uFnGetRichPresenceId = nullptr;

	if (!uFnGetRichPresenceId)
	{
		uFnGetRichPresenceId = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_SetRichPresence.GetRichPresenceId");
	}

	UGHM_SeqAct_SetRichPresence_execGetRichPresenceId_Params GetRichPresenceId_Params;

	this->ProcessEvent(uFnGetRichPresenceId, &GetRichPresenceId_Params, nullptr);

	return GetRichPresenceId_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqAct_GetSoundModeName.Activated
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_GetSoundModeName::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_GetSoundModeName.Activated");
	}

	UGHM_SeqAct_GetSoundModeName_eventActivated_Params Activated_Params;

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_Message.Activated
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_Message::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_Message.Activated");
	}

	UGHM_SeqAct_Message_eventActivated_Params Activated_Params;

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_Section.Activated
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_Section::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_Section.Activated");
	}

	UGHM_SeqAct_Section_eventActivated_Params Activated_Params;

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_StopSoundsFilterBySoundClasses.Activated
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_StopSoundsFilterBySoundClasses::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_StopSoundsFilterBySoundClasses.Activated");
	}

	UGHM_SeqAct_StopSoundsFilterBySoundClasses_eventActivated_Params Activated_Params;

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGHM_SeqAct_ToggleRadioFilterForMusic::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic.GetObjClassVersion");
	}

	UGHM_SeqAct_ToggleRadioFilterForMusic_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	UGHM_SeqAct_ToggleRadioFilterForMusic::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic.SetRadioFilterForMusic
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Enable                         (CPF_Parm)

void UGHM_SeqAct_ToggleRadioFilterForMusic::SetRadioFilterForMusic(unsigned long Enable)
{
	static UFunction* uFnSetRadioFilterForMusic = nullptr;

	if (!uFnSetRadioFilterForMusic)
	{
		uFnSetRadioFilterForMusic = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic.SetRadioFilterForMusic");
	}

	UGHM_SeqAct_ToggleRadioFilterForMusic_execSetRadioFilterForMusic_Params SetRadioFilterForMusic_Params;
	SetRadioFilterForMusic_Params.Enable = Enable;

	this->ProcessEvent(uFnSetRadioFilterForMusic, &SetRadioFilterForMusic_Params, nullptr);
};

// Function GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic.Activated
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGHM_SeqAct_ToggleRadioFilterForMusic::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function GHMEngine.GHM_SeqAct_ToggleRadioFilterForMusic.Activated");
	}

	UGHM_SeqAct_ToggleRadioFilterForMusic_eventActivated_Params Activated_Params;

	this->ProcessEvent(uFnActivated, &Activated_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
