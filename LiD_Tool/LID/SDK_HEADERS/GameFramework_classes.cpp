/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: GameFramework_classes.cpp
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

// Function GameFramework.GameAIController.GetActionString
// [0x00020903] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString AGameAIController::eventGetActionString()
{
	static UFunction* uFnGetActionString = nullptr;

	if (!uFnGetActionString)
	{
		uFnGetActionString = UFunction::FindFunction("Function GameFramework.GameAIController.GetActionString");
	}

	AGameAIController_eventGetActionString_Params GetActionString_Params;

	this->ProcessEvent(uFnGetActionString, &GetActionString_Params, nullptr);

	return GetActionString_Params.ReturnValue;
};

// Function GameFramework.GameAIController.SetDesiredRotation
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                TargetDesiredRotation          (CPF_Parm)
// unsigned long                  InLockDesiredRotation          (CPF_OptionalParm | CPF_Parm)
// unsigned long                  InUnlockWhenReached            (CPF_OptionalParm | CPF_Parm)
// float                          InterpolationTime              (CPF_OptionalParm | CPF_Parm)

void AGameAIController::SetDesiredRotation(struct FRotator TargetDesiredRotation, unsigned long InLockDesiredRotation, unsigned long InUnlockWhenReached, float InterpolationTime)
{
	static UFunction* uFnSetDesiredRotation = nullptr;

	if (!uFnSetDesiredRotation)
	{
		uFnSetDesiredRotation = UFunction::FindFunction("Function GameFramework.GameAIController.SetDesiredRotation");
	}

	AGameAIController_execSetDesiredRotation_Params SetDesiredRotation_Params;
	memcpy_s(&SetDesiredRotation_Params.TargetDesiredRotation, 0xC, &TargetDesiredRotation, 0xC);
	SetDesiredRotation_Params.InLockDesiredRotation = InLockDesiredRotation;
	SetDesiredRotation_Params.InUnlockWhenReached = InUnlockWhenReached;
	memcpy_s(&SetDesiredRotation_Params.InterpolationTime, 0x4, &InterpolationTime, 0x4);

	this->ProcessEvent(uFnSetDesiredRotation, &SetDesiredRotation_Params, nullptr);
};

// Function GameFramework.GameAIController.AILog_Internal
// [0x00024800] (FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  LogText                        (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FName                   LogCategory                    (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bForce                         (CPF_OptionalParm | CPF_Parm)

void AGameAIController::eventAILog_Internal(class FString LogText, struct FName LogCategory, unsigned long bForce)
{
	static UFunction* uFnAILog_Internal = nullptr;

	if (!uFnAILog_Internal)
	{
		uFnAILog_Internal = UFunction::FindFunction("Function GameFramework.GameAIController.AILog_Internal");
	}

	AGameAIController_eventAILog_Internal_Params AILog_Internal_Params;
	memcpy_s(&AILog_Internal_Params.LogText, 0x10, &LogText, 0x10);
	memcpy_s(&AILog_Internal_Params.LogCategory, 0x8, &LogCategory, 0x8);
	AILog_Internal_Params.bForce = bForce;

	this->ProcessEvent(uFnAILog_Internal, &AILog_Internal_Params, nullptr);
};

// Function GameFramework.GameAIController.RecordDemoAILog
// [0x00080000] (FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class FString                  LogText                        (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void AGameAIController::RecordDemoAILog(class FString LogText)
{
	static UFunction* uFnRecordDemoAILog = nullptr;

	if (!uFnRecordDemoAILog)
	{
		uFnRecordDemoAILog = UFunction::FindFunction("Function GameFramework.GameAIController.RecordDemoAILog");
	}

	AGameAIController_execRecordDemoAILog_Params RecordDemoAILog_Params;
	memcpy_s(&RecordDemoAILog_Params.LogText, 0x10, &LogText, 0x10);

	this->ProcessEvent(uFnRecordDemoAILog, &RecordDemoAILog_Params, nullptr);
};

// Function GameFramework.GameAIController.Destroyed
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameAIController::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function GameFramework.GameAIController.Destroyed");
	}

	AGameAIController_eventDestroyed_Params Destroyed_Params;

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameAIController::ReachedIntermediateMoveGoal()
{
	static UFunction* uFnReachedIntermediateMoveGoal = nullptr;

	if (!uFnReachedIntermediateMoveGoal)
	{
		uFnReachedIntermediateMoveGoal = UFunction::FindFunction("Function GameFramework.GameAIController.ReachedIntermediateMoveGoal");
	}

	AGameAIController_execReachedIntermediateMoveGoal_Params ReachedIntermediateMoveGoal_Params;

	this->ProcessEvent(uFnReachedIntermediateMoveGoal, &ReachedIntermediateMoveGoal_Params, nullptr);
};

// Function GameFramework.GameAIController.ReachedMoveGoal
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameAIController::ReachedMoveGoal()
{
	static UFunction* uFnReachedMoveGoal = nullptr;

	if (!uFnReachedMoveGoal)
	{
		uFnReachedMoveGoal = UFunction::FindFunction("Function GameFramework.GameAIController.ReachedMoveGoal");
	}

	AGameAIController_execReachedMoveGoal_Params ReachedMoveGoal_Params;

	this->ProcessEvent(uFnReachedMoveGoal, &ReachedMoveGoal_Params, nullptr);
};

// Function GameFramework.GameAIController.GetDestinationOffset
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AGameAIController::GetDestinationOffset()
{
	static UFunction* uFnGetDestinationOffset = nullptr;

	if (!uFnGetDestinationOffset)
	{
		uFnGetDestinationOffset = UFunction::FindFunction("Function GameFramework.GameAIController.GetDestinationOffset");
	}

	AGameAIController_execGetDestinationOffset_Params GetDestinationOffset_Params;

	this->ProcessEvent(uFnGetDestinationOffset, &GetDestinationOffset_Params, nullptr);

	return GetDestinationOffset_Params.ReturnValue;
};

// Function GameFramework.GameAIController.GetAICommandInStack
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameAICommand*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  InClass                        (CPF_Const | CPF_Parm)

class UGameAICommand* AGameAIController::GetAICommandInStack(class UClass* InClass)
{
	static UFunction* uFnGetAICommandInStack = nullptr;

	if (!uFnGetAICommandInStack)
	{
		uFnGetAICommandInStack = UFunction::FindFunction("Function GameFramework.GameAIController.GetAICommandInStack");
	}

	AGameAIController_execGetAICommandInStack_Params GetAICommandInStack_Params;
	memcpy_s(&GetAICommandInStack_Params.InClass, 0x8, &InClass, 0x8);

	uFnGetAICommandInStack->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetAICommandInStack, &GetAICommandInStack_Params, nullptr);

	uFnGetAICommandInStack->FunctionFlags |= 0x400;

	return GetAICommandInStack_Params.ReturnValue;
};

// Function GameFramework.GameAIController.FindCommandOfClass
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameAICommand*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm)
// class UClass*                  SearchClass                    (CPF_Parm)

class UGameAICommand* AGameAIController::FindCommandOfClass(class UClass* SearchClass)
{
	static UFunction* uFnFindCommandOfClass = nullptr;

	if (!uFnFindCommandOfClass)
	{
		uFnFindCommandOfClass = UFunction::FindFunction("Function GameFramework.GameAIController.FindCommandOfClass");
	}

	AGameAIController_execFindCommandOfClass_Params FindCommandOfClass_Params;
	memcpy_s(&FindCommandOfClass_Params.SearchClass, 0x8, &SearchClass, 0x8);

	uFnFindCommandOfClass->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFindCommandOfClass, &FindCommandOfClass_Params, nullptr);

	uFnFindCommandOfClass->FunctionFlags |= 0x400;

	return FindCommandOfClass_Params.ReturnValue;
};

// Function GameFramework.GameAIController.DumpCommandStack
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameAIController::DumpCommandStack()
{
	static UFunction* uFnDumpCommandStack = nullptr;

	if (!uFnDumpCommandStack)
	{
		uFnDumpCommandStack = UFunction::FindFunction("Function GameFramework.GameAIController.DumpCommandStack");
	}

	AGameAIController_execDumpCommandStack_Params DumpCommandStack_Params;

	uFnDumpCommandStack->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDumpCommandStack, &DumpCommandStack_Params, nullptr);

	uFnDumpCommandStack->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.CheckCommandCount
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameAIController::CheckCommandCount()
{
	static UFunction* uFnCheckCommandCount = nullptr;

	if (!uFnCheckCommandCount)
	{
		uFnCheckCommandCount = UFunction::FindFunction("Function GameFramework.GameAIController.CheckCommandCount");
	}

	AGameAIController_execCheckCommandCount_Params CheckCommandCount_Params;

	uFnCheckCommandCount->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCheckCommandCount, &CheckCommandCount_Params, nullptr);

	uFnCheckCommandCount->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.GetActiveCommand
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameAICommand*          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGameAICommand* AGameAIController::GetActiveCommand()
{
	static UFunction* uFnGetActiveCommand = nullptr;

	if (!uFnGetActiveCommand)
	{
		uFnGetActiveCommand = UFunction::FindFunction("Function GameFramework.GameAIController.GetActiveCommand");
	}

	AGameAIController_execGetActiveCommand_Params GetActiveCommand_Params;

	uFnGetActiveCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetActiveCommand, &GetActiveCommand_Params, nullptr);

	uFnGetActiveCommand->FunctionFlags |= 0x400;

	return GetActiveCommand_Params.ReturnValue;
};

// Function GameFramework.GameAIController.AbortCommand
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGameAICommand*          AbortCmd                       (CPF_Parm)
// class UClass*                  AbortClass                     (CPF_OptionalParm | CPF_Parm)

bool AGameAIController::AbortCommand(class UGameAICommand* AbortCmd, class UClass* AbortClass)
{
	static UFunction* uFnAbortCommand = nullptr;

	if (!uFnAbortCommand)
	{
		uFnAbortCommand = UFunction::FindFunction("Function GameFramework.GameAIController.AbortCommand");
	}

	AGameAIController_execAbortCommand_Params AbortCommand_Params;
	memcpy_s(&AbortCommand_Params.AbortCmd, 0x8, &AbortCmd, 0x8);
	memcpy_s(&AbortCommand_Params.AbortClass, 0x8, &AbortClass, 0x8);

	uFnAbortCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAbortCommand, &AbortCommand_Params, nullptr);

	uFnAbortCommand->FunctionFlags |= 0x400;

	return AbortCommand_Params.ReturnValue;
};

// Function GameFramework.GameAIController.PopCommand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameAICommand*          ToBePoppedCommand              (CPF_Parm)

void AGameAIController::PopCommand(class UGameAICommand* ToBePoppedCommand)
{
	static UFunction* uFnPopCommand = nullptr;

	if (!uFnPopCommand)
	{
		uFnPopCommand = UFunction::FindFunction("Function GameFramework.GameAIController.PopCommand");
	}

	AGameAIController_execPopCommand_Params PopCommand_Params;
	memcpy_s(&PopCommand_Params.ToBePoppedCommand, 0x8, &ToBePoppedCommand, 0x8);

	uFnPopCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPopCommand, &PopCommand_Params, nullptr);

	uFnPopCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.PushCommand
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameAICommand*          NewCommand                     (CPF_Parm)

void AGameAIController::PushCommand(class UGameAICommand* NewCommand)
{
	static UFunction* uFnPushCommand = nullptr;

	if (!uFnPushCommand)
	{
		uFnPushCommand = UFunction::FindFunction("Function GameFramework.GameAIController.PushCommand");
	}

	AGameAIController_execPushCommand_Params PushCommand_Params;
	memcpy_s(&PushCommand_Params.NewCommand, 0x8, &NewCommand, 0x8);

	uFnPushCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPushCommand, &PushCommand_Params, nullptr);

	uFnPushCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.AllCommands
// [0x00420405] (FUNC_Final | FUNC_BlueprintAuthorityOnly | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class UClass*                  BaseClass                      (CPF_Parm)
// class UGameAICommand*          Cmd                            (CPF_Parm | CPF_OutParm)

void AGameAIController::AllCommands(class UClass* BaseClass, class UGameAICommand*& Cmd)
{
	static UFunction* uFnAllCommands = nullptr;

	if (!uFnAllCommands)
	{
		uFnAllCommands = UFunction::FindFunction("Function GameFramework.GameAIController.AllCommands");
	}

	AGameAIController_execAllCommands_Params AllCommands_Params;
	memcpy_s(&AllCommands_Params.BaseClass, 0x8, &BaseClass, 0x8);
	memcpy_s(&AllCommands_Params.Cmd, 0x8, &Cmd, 0x8);

	uFnAllCommands->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAllCommands, &AllCommands_Params, nullptr);

	uFnAllCommands->FunctionFlags |= 0x400;

	memcpy_s(&Cmd, 0x8, &AllCommands_Params.Cmd, 0x8);
};

// Function GameFramework.GameAICommand.HandlePathObstruction
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  BlockedBy                      (CPF_Parm)

bool UGameAICommand::HandlePathObstruction(class AActor* BlockedBy)
{
	static UFunction* uFnHandlePathObstruction = nullptr;

	if (!uFnHandlePathObstruction)
	{
		uFnHandlePathObstruction = UFunction::FindFunction("Function GameFramework.GameAICommand.HandlePathObstruction");
	}

	UGameAICommand_execHandlePathObstruction_Params HandlePathObstruction_Params;
	memcpy_s(&HandlePathObstruction_Params.BlockedBy, 0x8, &BlockedBy, 0x8);

	this->ProcessEvent(uFnHandlePathObstruction, &HandlePathObstruction_Params, nullptr);

	return HandlePathObstruction_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.MoveUnreachable
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 AttemptedDest                  (CPF_Parm)
// class AActor*                  AttemptedTarget                (CPF_Parm)

bool UGameAICommand::MoveUnreachable(struct FVector AttemptedDest, class AActor* AttemptedTarget)
{
	static UFunction* uFnMoveUnreachable = nullptr;

	if (!uFnMoveUnreachable)
	{
		uFnMoveUnreachable = UFunction::FindFunction("Function GameFramework.GameAICommand.MoveUnreachable");
	}

	UGameAICommand_execMoveUnreachable_Params MoveUnreachable_Params;
	memcpy_s(&MoveUnreachable_Params.AttemptedDest, 0xC, &AttemptedDest, 0xC);
	memcpy_s(&MoveUnreachable_Params.AttemptedTarget, 0x8, &AttemptedTarget, 0x8);

	this->ProcessEvent(uFnMoveUnreachable, &MoveUnreachable_Params, nullptr);

	return MoveUnreachable_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.NotifyNeedRepath
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameAICommand::NotifyNeedRepath()
{
	static UFunction* uFnNotifyNeedRepath = nullptr;

	if (!uFnNotifyNeedRepath)
	{
		uFnNotifyNeedRepath = UFunction::FindFunction("Function GameFramework.GameAICommand.NotifyNeedRepath");
	}

	UGameAICommand_execNotifyNeedRepath_Params NotifyNeedRepath_Params;

	this->ProcessEvent(uFnNotifyNeedRepath, &NotifyNeedRepath_Params, nullptr);
};

// Function GameFramework.GameAICommand.GetDebugVerboseText
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameAICommand::eventGetDebugVerboseText()
{
	static UFunction* uFnGetDebugVerboseText = nullptr;

	if (!uFnGetDebugVerboseText)
	{
		uFnGetDebugVerboseText = UFunction::FindFunction("Function GameFramework.GameAICommand.GetDebugVerboseText");
	}

	UGameAICommand_eventGetDebugVerboseText_Params GetDebugVerboseText_Params;

	this->ProcessEvent(uFnGetDebugVerboseText, &GetDebugVerboseText_Params, nullptr);

	return GetDebugVerboseText_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       PC                             (CPF_Parm)
// TArray<class FString>          OutText                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGameAICommand::GetDebugOverheadText(class APlayerController* PC, TArray<class FString>& OutText)
{
	static UFunction* uFnGetDebugOverheadText = nullptr;

	if (!uFnGetDebugOverheadText)
	{
		uFnGetDebugOverheadText = UFunction::FindFunction("Function GameFramework.GameAICommand.GetDebugOverheadText");
	}

	UGameAICommand_execGetDebugOverheadText_Params GetDebugOverheadText_Params;
	memcpy_s(&GetDebugOverheadText_Params.PC, 0x8, &PC, 0x8);
	memcpy_s(&GetDebugOverheadText_Params.OutText, 0x10, &OutText, 0x10);

	this->ProcessEvent(uFnGetDebugOverheadText, &GetDebugOverheadText_Params, nullptr);

	memcpy_s(&OutText, 0x10, &GetDebugOverheadText_Params.OutText, 0x10);
};

// Function GameFramework.GameAICommand.DrawDebug
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AHUD*                    H                              (CPF_Parm)
// struct FName                   Category                       (CPF_Parm)

void UGameAICommand::eventDrawDebug(class AHUD* H, struct FName Category)
{
	static UFunction* uFnDrawDebug = nullptr;

	if (!uFnDrawDebug)
	{
		uFnDrawDebug = UFunction::FindFunction("Function GameFramework.GameAICommand.DrawDebug");
	}

	UGameAICommand_eventDrawDebug_Params DrawDebug_Params;
	memcpy_s(&DrawDebug_Params.H, 0x8, &H, 0x8);
	memcpy_s(&DrawDebug_Params.Category, 0x8, &Category, 0x8);

	this->ProcessEvent(uFnDrawDebug, &DrawDebug_Params, nullptr);
};

// Function GameFramework.GameAICommand.GetDumpString
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameAICommand::eventGetDumpString()
{
	static UFunction* uFnGetDumpString = nullptr;

	if (!uFnGetDumpString)
	{
		uFnGetDumpString = UFunction::FindFunction("Function GameFramework.GameAICommand.GetDumpString");
	}

	UGameAICommand_eventGetDumpString_Params GetDumpString_Params;

	this->ProcessEvent(uFnGetDumpString, &GetDumpString_Params, nullptr);

	return GetDumpString_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.Resumed
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   OldCommandName                 (CPF_Parm)

void UGameAICommand::Resumed(struct FName OldCommandName)
{
	static UFunction* uFnResumed = nullptr;

	if (!uFnResumed)
	{
		uFnResumed = UFunction::FindFunction("Function GameFramework.GameAICommand.Resumed");
	}

	UGameAICommand_execResumed_Params Resumed_Params;
	memcpy_s(&Resumed_Params.OldCommandName, 0x8, &OldCommandName, 0x8);

	this->ProcessEvent(uFnResumed, &Resumed_Params, nullptr);
};

// Function GameFramework.GameAICommand.Paused
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameAICommand*          NewCommand                     (CPF_Parm)

void UGameAICommand::Paused(class UGameAICommand* NewCommand)
{
	static UFunction* uFnPaused = nullptr;

	if (!uFnPaused)
	{
		uFnPaused = UFunction::FindFunction("Function GameFramework.GameAICommand.Paused");
	}

	UGameAICommand_execPaused_Params Paused_Params;
	memcpy_s(&Paused_Params.NewCommand, 0x8, &NewCommand, 0x8);

	this->ProcessEvent(uFnPaused, &Paused_Params, nullptr);
};

// Function GameFramework.GameAICommand.Popped
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameAICommand::Popped()
{
	static UFunction* uFnPopped = nullptr;

	if (!uFnPopped)
	{
		uFnPopped = UFunction::FindFunction("Function GameFramework.GameAICommand.Popped");
	}

	UGameAICommand_execPopped_Params Popped_Params;

	this->ProcessEvent(uFnPopped, &Popped_Params, nullptr);
};

// Function GameFramework.GameAICommand.Pushed
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameAICommand::Pushed()
{
	static UFunction* uFnPushed = nullptr;

	if (!uFnPushed)
	{
		uFnPushed = UFunction::FindFunction("Function GameFramework.GameAICommand.Pushed");
	}

	UGameAICommand_execPushed_Params Pushed_Params;

	this->ProcessEvent(uFnPushed, &Pushed_Params, nullptr);
};

// Function GameFramework.GameAICommand.PostPopped
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameAICommand::PostPopped()
{
	static UFunction* uFnPostPopped = nullptr;

	if (!uFnPostPopped)
	{
		uFnPostPopped = UFunction::FindFunction("Function GameFramework.GameAICommand.PostPopped");
	}

	UGameAICommand_execPostPopped_Params PostPopped_Params;

	this->ProcessEvent(uFnPostPopped, &PostPopped_Params, nullptr);
};

// Function GameFramework.GameAICommand.PrePushed
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameAIController*       AI                             (CPF_Parm)

void UGameAICommand::PrePushed(class AGameAIController* AI)
{
	static UFunction* uFnPrePushed = nullptr;

	if (!uFnPrePushed)
	{
		uFnPrePushed = UFunction::FindFunction("Function GameFramework.GameAICommand.PrePushed");
	}

	UGameAICommand_execPrePushed_Params PrePushed_Params;
	memcpy_s(&PrePushed_Params.AI, 0x8, &AI, 0x8);

	this->ProcessEvent(uFnPrePushed, &PrePushed_Params, nullptr);
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   StateName                      (CPF_Parm)

bool UGameAICommand::AllowStateTransitionTo(struct FName StateName)
{
	static UFunction* uFnAllowStateTransitionTo = nullptr;

	if (!uFnAllowStateTransitionTo)
	{
		uFnAllowStateTransitionTo = UFunction::FindFunction("Function GameFramework.GameAICommand.AllowStateTransitionTo");
	}

	UGameAICommand_execAllowStateTransitionTo_Params AllowStateTransitionTo_Params;
	memcpy_s(&AllowStateTransitionTo_Params.StateName, 0x8, &StateName, 0x8);

	this->ProcessEvent(uFnAllowStateTransitionTo, &AllowStateTransitionTo_Params, nullptr);

	return AllowStateTransitionTo_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.AllowTransitionTo
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  AttemptCommand                 (CPF_Parm)

bool UGameAICommand::AllowTransitionTo(class UClass* AttemptCommand)
{
	static UFunction* uFnAllowTransitionTo = nullptr;

	if (!uFnAllowTransitionTo)
	{
		uFnAllowTransitionTo = UFunction::FindFunction("Function GameFramework.GameAICommand.AllowTransitionTo");
	}

	UGameAICommand_execAllowTransitionTo_Params AllowTransitionTo_Params;
	memcpy_s(&AllowTransitionTo_Params.AttemptCommand, 0x8, &AttemptCommand, 0x8);

	this->ProcessEvent(uFnAllowTransitionTo, &AllowTransitionTo_Params, nullptr);

	return AllowTransitionTo_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.Tick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGameAICommand::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GameFramework.GameAICommand.Tick");
	}

	UGameAICommand_execTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameAICommand::ShouldIgnoreNotifies()
{
	static UFunction* uFnShouldIgnoreNotifies = nullptr;

	if (!uFnShouldIgnoreNotifies)
	{
		uFnShouldIgnoreNotifies = UFunction::FindFunction("Function GameFramework.GameAICommand.ShouldIgnoreNotifies");
	}

	UGameAICommand_execShouldIgnoreNotifies_Params ShouldIgnoreNotifies_Params;

	uFnShouldIgnoreNotifies->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShouldIgnoreNotifies, &ShouldIgnoreNotifies_Params, nullptr);

	uFnShouldIgnoreNotifies->FunctionFlags |= 0x400;

	return ShouldIgnoreNotifies_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.InternalTick
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGameAICommand::eventInternalTick(float DeltaTime)
{
	static UFunction* uFnInternalTick = nullptr;

	if (!uFnInternalTick)
	{
		uFnInternalTick = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalTick");
	}

	UGameAICommand_eventInternalTick_Params InternalTick_Params;
	memcpy_s(&InternalTick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnInternalTick, &InternalTick_Params, nullptr);
};

// Function GameFramework.GameAICommand.InternalResumed
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   OldCommandName                 (CPF_Parm)

void UGameAICommand::eventInternalResumed(struct FName OldCommandName)
{
	static UFunction* uFnInternalResumed = nullptr;

	if (!uFnInternalResumed)
	{
		uFnInternalResumed = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalResumed");
	}

	UGameAICommand_eventInternalResumed_Params InternalResumed_Params;
	memcpy_s(&InternalResumed_Params.OldCommandName, 0x8, &OldCommandName, 0x8);

	this->ProcessEvent(uFnInternalResumed, &InternalResumed_Params, nullptr);
};

// Function GameFramework.GameAICommand.InternalPaused
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameAICommand*          NewCommand                     (CPF_Parm)

void UGameAICommand::eventInternalPaused(class UGameAICommand* NewCommand)
{
	static UFunction* uFnInternalPaused = nullptr;

	if (!uFnInternalPaused)
	{
		uFnInternalPaused = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalPaused");
	}

	UGameAICommand_eventInternalPaused_Params InternalPaused_Params;
	memcpy_s(&InternalPaused_Params.NewCommand, 0x8, &NewCommand, 0x8);

	this->ProcessEvent(uFnInternalPaused, &InternalPaused_Params, nullptr);
};

// Function GameFramework.GameAICommand.InternalPopped
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameAICommand::eventInternalPopped()
{
	static UFunction* uFnInternalPopped = nullptr;

	if (!uFnInternalPopped)
	{
		uFnInternalPopped = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalPopped");
	}

	UGameAICommand_eventInternalPopped_Params InternalPopped_Params;

	this->ProcessEvent(uFnInternalPopped, &InternalPopped_Params, nullptr);
};

// Function GameFramework.GameAICommand.InternalPushed
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameAICommand::eventInternalPushed()
{
	static UFunction* uFnInternalPushed = nullptr;

	if (!uFnInternalPushed)
	{
		uFnInternalPushed = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalPushed");
	}

	UGameAICommand_eventInternalPushed_Params InternalPushed_Params;

	this->ProcessEvent(uFnInternalPushed, &InternalPushed_Params, nullptr);
};

// Function GameFramework.GameAICommand.InternalPrePushed
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameAIController*       AI                             (CPF_Parm)

void UGameAICommand::eventInternalPrePushed(class AGameAIController* AI)
{
	static UFunction* uFnInternalPrePushed = nullptr;

	if (!uFnInternalPrePushed)
	{
		uFnInternalPrePushed = UFunction::FindFunction("Function GameFramework.GameAICommand.InternalPrePushed");
	}

	UGameAICommand_eventInternalPrePushed_Params InternalPrePushed_Params;
	memcpy_s(&InternalPrePushed_Params.AI, 0x8, &AI, 0x8);

	this->ProcessEvent(uFnInternalPrePushed, &InternalPrePushed_Params, nullptr);
};

// Function GameFramework.GameAICommand.InitCommand
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)

bool UGameAICommand::InitCommand(class AGameAIController* AI)
{
	static UFunction* uFnInitCommand = nullptr;

	if (!uFnInitCommand)
	{
		uFnInitCommand = UFunction::FindFunction("Function GameFramework.GameAICommand.InitCommand");
	}

	UGameAICommand_execInitCommand_Params InitCommand_Params;
	memcpy_s(&InitCommand_Params.AI, 0x8, &AI, 0x8);

	UGameAICommand::StaticClass()->ProcessEvent(uFnInitCommand, &InitCommand_Params, nullptr);

	return InitCommand_Params.ReturnValue;
};

// Function GameFramework.GameAICommand.InitCommandUserActor
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)
// class AActor*                  UserActor                      (CPF_Parm)

bool UGameAICommand::InitCommandUserActor(class AGameAIController* AI, class AActor* UserActor)
{
	static UFunction* uFnInitCommandUserActor = nullptr;

	if (!uFnInitCommandUserActor)
	{
		uFnInitCommandUserActor = UFunction::FindFunction("Function GameFramework.GameAICommand.InitCommandUserActor");
	}

	UGameAICommand_execInitCommandUserActor_Params InitCommandUserActor_Params;
	memcpy_s(&InitCommandUserActor_Params.AI, 0x8, &AI, 0x8);
	memcpy_s(&InitCommandUserActor_Params.UserActor, 0x8, &UserActor, 0x8);

	UGameAICommand::StaticClass()->ProcessEvent(uFnInitCommandUserActor, &InitCommandUserActor_Params, nullptr);

	return InitCommandUserActor_Params.ReturnValue;
};

// Function GameFramework.GamePlayerController.ClientColorFade
// [0x010201C0] (FUNC_Net | FUNC_NetReliable | FUNC_NetRequest | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter info:
// struct FColor                  FadeColor                      (CPF_Parm)
// uint8_t                        FromAlpha                      (CPF_Parm)
// uint8_t                        ToAlpha                        (CPF_Parm)
// float                          FadeTime                       (CPF_Parm)

void AGamePlayerController::ClientColorFade(struct FColor FadeColor, uint8_t FromAlpha, uint8_t ToAlpha, float FadeTime)
{
	static UFunction* uFnClientColorFade = nullptr;

	if (!uFnClientColorFade)
	{
		uFnClientColorFade = UFunction::FindFunction("Function GameFramework.GamePlayerController.ClientColorFade");
	}

	AGamePlayerController_execClientColorFade_Params ClientColorFade_Params;
	memcpy_s(&ClientColorFade_Params.FadeColor, 0x4, &FadeColor, 0x4);
	memcpy_s(&ClientColorFade_Params.FromAlpha, 0x1, &FromAlpha, 0x1);
	memcpy_s(&ClientColorFade_Params.ToAlpha, 0x1, &ToAlpha, 0x1);
	memcpy_s(&ClientColorFade_Params.FadeTime, 0x4, &FadeTime, 0x4);

	this->ProcessEvent(uFnClientColorFade, &ClientColorFade_Params, nullptr);
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bDesiredPauseState             (CPF_Parm)

void AGamePlayerController::eventWarmupPause(unsigned long bDesiredPauseState)
{
	static UFunction* uFnWarmupPause = nullptr;

	if (!uFnWarmupPause)
	{
		uFnWarmupPause = UFunction::FindFunction("Function GameFramework.GamePlayerController.WarmupPause");
	}

	AGamePlayerController_eventWarmupPause_Params WarmupPause_Params;
	WarmupPause_Params.bDesiredPauseState = bDesiredPauseState;

	this->ProcessEvent(uFnWarmupPause, &WarmupPause_Params, nullptr);
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGamePlayerController::CanUnpauseWarmup()
{
	static UFunction* uFnCanUnpauseWarmup = nullptr;

	if (!uFnCanUnpauseWarmup)
	{
		uFnCanUnpauseWarmup = UFunction::FindFunction("Function GameFramework.GamePlayerController.CanUnpauseWarmup");
	}

	AGamePlayerController_execCanUnpauseWarmup_Params CanUnpauseWarmup_Params;

	this->ProcessEvent(uFnCanUnpauseWarmup, &CanUnpauseWarmup_Params, nullptr);

	return CanUnpauseWarmup_Params.ReturnValue;
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  MovieName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGamePlayerController::GetCurrentMovie(class FString& MovieName)
{
	static UFunction* uFnGetCurrentMovie = nullptr;

	if (!uFnGetCurrentMovie)
	{
		uFnGetCurrentMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.GetCurrentMovie");
	}

	AGamePlayerController_execGetCurrentMovie_Params GetCurrentMovie_Params;
	memcpy_s(&GetCurrentMovie_Params.MovieName, 0x10, &MovieName, 0x10);

	uFnGetCurrentMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetCurrentMovie, &GetCurrentMovie_Params, nullptr);

	uFnGetCurrentMovie->FunctionFlags |= 0x400;

	memcpy_s(&MovieName, 0x10, &GetCurrentMovie_Params.MovieName, 0x10);
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0x01020DC1] (FUNC_Final | FUNC_Net | FUNC_NetReliable | FUNC_NetRequest | FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter info:
// float                          DelayInSeconds                 (CPF_Parm)
// unsigned long                  bAllowMovieToFinish            (CPF_Parm)
// unsigned long                  bForceStopNonSkippable         (CPF_Parm)
// unsigned long                  bForceStopLoadingMovie         (CPF_Parm)

void AGamePlayerController::eventClientStopMovie(float DelayInSeconds, unsigned long bAllowMovieToFinish, unsigned long bForceStopNonSkippable, unsigned long bForceStopLoadingMovie)
{
	static UFunction* uFnClientStopMovie = nullptr;

	if (!uFnClientStopMovie)
	{
		uFnClientStopMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.ClientStopMovie");
	}

	AGamePlayerController_eventClientStopMovie_Params ClientStopMovie_Params;
	memcpy_s(&ClientStopMovie_Params.DelayInSeconds, 0x4, &DelayInSeconds, 0x4);
	ClientStopMovie_Params.bAllowMovieToFinish = bAllowMovieToFinish;
	ClientStopMovie_Params.bForceStopNonSkippable = bForceStopNonSkippable;
	ClientStopMovie_Params.bForceStopLoadingMovie = bForceStopLoadingMovie;

	uFnClientStopMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClientStopMovie, &ClientStopMovie_Params, nullptr);

	uFnClientStopMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0x01020DC1] (FUNC_Final | FUNC_Net | FUNC_NetReliable | FUNC_NetRequest | FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter info:
// class FString                  MovieName                      (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        InStartOfRenderingMovieFrame   (CPF_Parm)
// int32_t                        InEndOfRenderingMovieFrame     (CPF_Parm)
// unsigned long                  bRestrictPausing               (CPF_Parm)
// unsigned long                  bPlayOnceFromStream            (CPF_Parm)
// unsigned long                  bOnlyBackButtonSkipsMovie      (CPF_Parm)

void AGamePlayerController::eventClientPlayMovie(class FString MovieName, int32_t InStartOfRenderingMovieFrame, int32_t InEndOfRenderingMovieFrame, unsigned long bRestrictPausing, unsigned long bPlayOnceFromStream, unsigned long bOnlyBackButtonSkipsMovie)
{
	static UFunction* uFnClientPlayMovie = nullptr;

	if (!uFnClientPlayMovie)
	{
		uFnClientPlayMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.ClientPlayMovie");
	}

	AGamePlayerController_eventClientPlayMovie_Params ClientPlayMovie_Params;
	memcpy_s(&ClientPlayMovie_Params.MovieName, 0x10, &MovieName, 0x10);
	memcpy_s(&ClientPlayMovie_Params.InStartOfRenderingMovieFrame, 0x4, &InStartOfRenderingMovieFrame, 0x4);
	memcpy_s(&ClientPlayMovie_Params.InEndOfRenderingMovieFrame, 0x4, &InEndOfRenderingMovieFrame, 0x4);
	ClientPlayMovie_Params.bRestrictPausing = bRestrictPausing;
	ClientPlayMovie_Params.bPlayOnceFromStream = bPlayOnceFromStream;
	ClientPlayMovie_Params.bOnlyBackButtonSkipsMovie = bOnlyBackButtonSkipsMovie;

	uFnClientPlayMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClientPlayMovie, &ClientPlayMovie_Params, nullptr);

	uFnClientPlayMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGamePlayerController::KeepPlayingLoadingMovie()
{
	static UFunction* uFnKeepPlayingLoadingMovie = nullptr;

	if (!uFnKeepPlayingLoadingMovie)
	{
		uFnKeepPlayingLoadingMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie");
	}

	AGamePlayerController_execKeepPlayingLoadingMovie_Params KeepPlayingLoadingMovie_Params;

	uFnKeepPlayingLoadingMovie->FunctionFlags |= ~0x400;

	AGamePlayerController::StaticClass()->ProcessEvent(uFnKeepPlayingLoadingMovie, &KeepPlayingLoadingMovie_Params, nullptr);

	uFnKeepPlayingLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bShowMovie                     (CPF_Parm)
// unsigned long                  bPauseAfterHide                (CPF_OptionalParm | CPF_Parm)
// float                          PauseDuration                  (CPF_OptionalParm | CPF_Parm)
// float                          KeepPlayingDuration            (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bOverridePreviousDelays        (CPF_OptionalParm | CPF_Parm)

void AGamePlayerController::ShowLoadingMovie(unsigned long bShowMovie, unsigned long bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, unsigned long bOverridePreviousDelays)
{
	static UFunction* uFnShowLoadingMovie = nullptr;

	if (!uFnShowLoadingMovie)
	{
		uFnShowLoadingMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.ShowLoadingMovie");
	}

	AGamePlayerController_execShowLoadingMovie_Params ShowLoadingMovie_Params;
	ShowLoadingMovie_Params.bShowMovie = bShowMovie;
	ShowLoadingMovie_Params.bPauseAfterHide = bPauseAfterHide;
	memcpy_s(&ShowLoadingMovie_Params.PauseDuration, 0x4, &PauseDuration, 0x4);
	memcpy_s(&ShowLoadingMovie_Params.KeepPlayingDuration, 0x4, &KeepPlayingDuration, 0x4);
	ShowLoadingMovie_Params.bOverridePreviousDelays = bOverridePreviousDelays;

	uFnShowLoadingMovie->FunctionFlags |= ~0x400;

	AGamePlayerController::StaticClass()->ProcessEvent(uFnShowLoadingMovie, &ShowLoadingMovie_Params, nullptr);

	uFnShowLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   InSoundModeName                (CPF_Parm)

void AGamePlayerController::SetSoundMode(struct FName InSoundModeName)
{
	static UFunction* uFnSetSoundMode = nullptr;

	if (!uFnSetSoundMode)
	{
		uFnSetSoundMode = UFunction::FindFunction("Function GameFramework.GamePlayerController.SetSoundMode");
	}

	AGamePlayerController_execSetSoundMode_Params SetSoundMode_Params;
	memcpy_s(&SetSoundMode_Params.InSoundModeName, 0x8, &InSoundModeName, 0x8);

	this->ProcessEvent(uFnSetSoundMode, &SetSoundMode_Params, nullptr);
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00080102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class UCameraShake*            ShakeData                      (CPF_Parm)
// float                          Scale                          (CPF_Parm)

void AGamePlayerController::DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale)
{
	static UFunction* uFnDoForceFeedbackForScreenShake = nullptr;

	if (!uFnDoForceFeedbackForScreenShake)
	{
		uFnDoForceFeedbackForScreenShake = UFunction::FindFunction("Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake");
	}

	AGamePlayerController_execDoForceFeedbackForScreenShake_Params DoForceFeedbackForScreenShake_Params;
	memcpy_s(&DoForceFeedbackForScreenShake_Params.ShakeData, 0x8, &ShakeData, 0x8);
	memcpy_s(&DoForceFeedbackForScreenShake_Params.Scale, 0x4, &Scale, 0x4);

	this->ProcessEvent(uFnDoForceFeedbackForScreenShake, &DoForceFeedbackForScreenShake_Params, nullptr);
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGamePlayerController::eventNotifyCrowdAgentInRadius(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnNotifyCrowdAgentInRadius = nullptr;

	if (!uFnNotifyCrowdAgentInRadius)
	{
		uFnNotifyCrowdAgentInRadius = UFunction::FindFunction("Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius");
	}

	AGamePlayerController_eventNotifyCrowdAgentInRadius_Params NotifyCrowdAgentInRadius_Params;
	memcpy_s(&NotifyCrowdAgentInRadius_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnNotifyCrowdAgentInRadius, &NotifyCrowdAgentInRadius_Params, nullptr);
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGamePlayerController::eventNotifyCrowdAgentRefresh()
{
	static UFunction* uFnNotifyCrowdAgentRefresh = nullptr;

	if (!uFnNotifyCrowdAgentRefresh)
	{
		uFnNotifyCrowdAgentRefresh = UFunction::FindFunction("Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh");
	}

	AGamePlayerController_eventNotifyCrowdAgentRefresh_Params NotifyCrowdAgentRefresh_Params;

	this->ProcessEvent(uFnNotifyCrowdAgentRefresh, &NotifyCrowdAgentRefresh_Params, nullptr);
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bEnabled                       (CPF_Parm)

void AGamePlayerController::CrowdDebug(unsigned long bEnabled)
{
	static UFunction* uFnCrowdDebug = nullptr;

	if (!uFnCrowdDebug)
	{
		uFnCrowdDebug = UFunction::FindFunction("Function GameFramework.GamePlayerController.CrowdDebug");
	}

	AGamePlayerController_execCrowdDebug_Params CrowdDebug_Params;
	CrowdDebug_Params.bEnabled = bEnabled;

	this->ProcessEvent(uFnCrowdDebug, &CrowdDebug_Params, nullptr);
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t AGamePlayerController::GetUIPlayerIndex()
{
	static UFunction* uFnGetUIPlayerIndex = nullptr;

	if (!uFnGetUIPlayerIndex)
	{
		uFnGetUIPlayerIndex = UFunction::FindFunction("Function GameFramework.GamePlayerController.GetUIPlayerIndex");
	}

	AGamePlayerController_execGetUIPlayerIndex_Params GetUIPlayerIndex_Params;

	uFnGetUIPlayerIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetUIPlayerIndex, &GetUIPlayerIndex_Params, nullptr);

	uFnGetUIPlayerIndex->FunctionFlags |= 0x400;

	return GetUIPlayerIndex_Params.ReturnValue;
};

// Function GameFramework.GamePlayerController.OnToggleMouseCursor
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqAct_ToggleMouseCursor* inAction                       (CPF_Parm)

void AGamePlayerController::OnToggleMouseCursor(class USeqAct_ToggleMouseCursor* inAction)
{
	static UFunction* uFnOnToggleMouseCursor = nullptr;

	if (!uFnOnToggleMouseCursor)
	{
		uFnOnToggleMouseCursor = UFunction::FindFunction("Function GameFramework.GamePlayerController.OnToggleMouseCursor");
	}

	AGamePlayerController_execOnToggleMouseCursor_Params OnToggleMouseCursor_Params;
	memcpy_s(&OnToggleMouseCursor_Params.inAction, 0x8, &inAction, 0x8);

	this->ProcessEvent(uFnOnToggleMouseCursor, &OnToggleMouseCursor_Params, nullptr);
};

// Function GameFramework.GameCheatManager.OnRequestComplete
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UGameCheatManager::OnRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* uFnOnRequestComplete = nullptr;

	if (!uFnOnRequestComplete)
	{
		uFnOnRequestComplete = UFunction::FindFunction("Function GameFramework.GameCheatManager.OnRequestComplete");
	}

	UGameCheatManager_execOnRequestComplete_Params OnRequestComplete_Params;
	memcpy_s(&OnRequestComplete_Params.OriginalRequest, 0x8, &OriginalRequest, 0x8);
	memcpy_s(&OnRequestComplete_Params.Response, 0x8, &Response, 0x8);
	OnRequestComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnOnRequestComplete, &OnRequestComplete_Params, nullptr);
};

// Function GameFramework.GameCheatManager.TestHttp
// [0x00024202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Verb                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Payload                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  URL                            (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bSendParallelRequest           (CPF_OptionalParm | CPF_Parm)

void UGameCheatManager::TestHttp(class FString Verb, class FString Payload, class FString URL, unsigned long bSendParallelRequest)
{
	static UFunction* uFnTestHttp = nullptr;

	if (!uFnTestHttp)
	{
		uFnTestHttp = UFunction::FindFunction("Function GameFramework.GameCheatManager.TestHttp");
	}

	UGameCheatManager_execTestHttp_Params TestHttp_Params;
	memcpy_s(&TestHttp_Params.Verb, 0x10, &Verb, 0x10);
	memcpy_s(&TestHttp_Params.Payload, 0x10, &Payload, 0x10);
	memcpy_s(&TestHttp_Params.URL, 0x10, &URL, 0x10);
	TestHttp_Params.bSendParallelRequest = bSendParallelRequest;

	this->ProcessEvent(uFnTestHttp, &TestHttp_Params, nullptr);
};

// Function GameFramework.GameCheatManager.EnableDebugCamera
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bEnableDebugText               (CPF_Parm)

void UGameCheatManager::EnableDebugCamera(unsigned long bEnableDebugText)
{
	static UFunction* uFnEnableDebugCamera = nullptr;

	if (!uFnEnableDebugCamera)
	{
		uFnEnableDebugCamera = UFunction::FindFunction("Function GameFramework.GameCheatManager.EnableDebugCamera");
	}

	UGameCheatManager_execEnableDebugCamera_Params EnableDebugCamera_Params;
	EnableDebugCamera_Params.bEnableDebugText = bEnableDebugText;

	this->ProcessEvent(uFnEnableDebugCamera, &EnableDebugCamera_Params, nullptr);
};

// Function GameFramework.GameCheatManager.TeleportPawnToCamera
// [0x00824202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bToggleDebugCameraOff          (CPF_OptionalParm | CPF_Parm)

void UGameCheatManager::TeleportPawnToCamera(unsigned long bToggleDebugCameraOff)
{
	static UFunction* uFnTeleportPawnToCamera = nullptr;

	if (!uFnTeleportPawnToCamera)
	{
		uFnTeleportPawnToCamera = UFunction::FindFunction("Function GameFramework.GameCheatManager.TeleportPawnToCamera");
	}

	UGameCheatManager_execTeleportPawnToCamera_Params TeleportPawnToCamera_Params;
	TeleportPawnToCamera_Params.bToggleDebugCameraOff = bToggleDebugCameraOff;

	this->ProcessEvent(uFnTeleportPawnToCamera, &TeleportPawnToCamera_Params, nullptr);
};

// Function GameFramework.GameCheatManager.ToggleDebugCamera
// [0x00024202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bDrawDebugText                 (CPF_OptionalParm | CPF_Parm)

void UGameCheatManager::ToggleDebugCamera(unsigned long bDrawDebugText)
{
	static UFunction* uFnToggleDebugCamera = nullptr;

	if (!uFnToggleDebugCamera)
	{
		uFnToggleDebugCamera = UFunction::FindFunction("Function GameFramework.GameCheatManager.ToggleDebugCamera");
	}

	UGameCheatManager_execToggleDebugCamera_Params ToggleDebugCamera_Params;
	ToggleDebugCamera_Params.bDrawDebugText = bDrawDebugText;

	this->ProcessEvent(uFnToggleDebugCamera, &ToggleDebugCamera_Params, nullptr);
};

// Function GameFramework.GameCheatManager.PatchDebugCameraController
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCheatManager::PatchDebugCameraController()
{
	static UFunction* uFnPatchDebugCameraController = nullptr;

	if (!uFnPatchDebugCameraController)
	{
		uFnPatchDebugCameraController = UFunction::FindFunction("Function GameFramework.GameCheatManager.PatchDebugCameraController");
	}

	UGameCheatManager_execPatchDebugCameraController_Params PatchDebugCameraController_Params;

	this->ProcessEvent(uFnPatchDebugCameraController, &PatchDebugCameraController_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.InitDebugColor
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::InitDebugColor()
{
	static UFunction* uFnInitDebugColor = nullptr;

	if (!uFnInitDebugColor)
	{
		uFnInitDebugColor = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.InitDebugColor");
	}

	AGameCrowdAgent_execInitDebugColor_Params InitDebugColor_Params;

	this->ProcessEvent(uFnInitDebugColor, &InitDebugColor_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString AGameCrowdAgent::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.GetBehaviorString");
	}

	AGameCrowdAgent_execGetBehaviorString_Params GetBehaviorString_Params;

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.GetDestString
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString AGameCrowdAgent::GetDestString()
{
	static UFunction* uFnGetDestString = nullptr;

	if (!uFnGetDestString)
	{
		uFnGetDestString = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.GetDestString");
	}

	AGameCrowdAgent_execGetDestString_Params GetDestString_Params;

	this->ProcessEvent(uFnGetDestString, &GetDestString_Params, nullptr);

	return GetDestString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
// [0x00820902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       PC                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 CameraPosition                 (CPF_Parm)
// struct FVector                 CameraDir                      (CPF_Parm)

void AGameCrowdAgent::eventPostRenderFor(class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir)
{
	static UFunction* uFnPostRenderFor = nullptr;

	if (!uFnPostRenderFor)
	{
		uFnPostRenderFor = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PostRenderFor");
	}

	AGameCrowdAgent_eventPostRenderFor_Params PostRenderFor_Params;
	memcpy_s(&PostRenderFor_Params.PC, 0x8, &PC, 0x8);
	memcpy_s(&PostRenderFor_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&PostRenderFor_Params.CameraPosition, 0xC, &CameraPosition, 0xC);
	memcpy_s(&PostRenderFor_Params.CameraDir, 0xC, &CameraDir, 0xC);

	this->ProcessEvent(uFnPostRenderFor, &PostRenderFor_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// [0x00020500] (FUNC_NetRequest | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       PC                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 CameraPosition                 (CPF_Parm)
// struct FVector                 CameraDir                      (CPF_Parm)

void AGameCrowdAgent::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir)
{
	static UFunction* uFnNativePostRenderFor = nullptr;

	if (!uFnNativePostRenderFor)
	{
		uFnNativePostRenderFor = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.NativePostRenderFor");
	}

	AGameCrowdAgent_execNativePostRenderFor_Params NativePostRenderFor_Params;
	memcpy_s(&NativePostRenderFor_Params.PC, 0x8, &PC, 0x8);
	memcpy_s(&NativePostRenderFor_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&NativePostRenderFor_Params.CameraPosition, 0xC, &CameraPosition, 0xC);
	memcpy_s(&NativePostRenderFor_Params.CameraDir, 0xC, &CameraDir, 0xC);

	uFnNativePostRenderFor->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnNativePostRenderFor, &NativePostRenderFor_Params, nullptr);

	uFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// [0x00824802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Goal                           (CPF_Parm)
// float                          WithinDistance                 (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bAllowPartialPath              (CPF_OptionalParm | CPF_Parm)

struct FVector AGameCrowdAgent::eventGeneratePathToActor(class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath)
{
	static UFunction* uFnGeneratePathToActor = nullptr;

	if (!uFnGeneratePathToActor)
	{
		uFnGeneratePathToActor = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.GeneratePathToActor");
	}

	AGameCrowdAgent_eventGeneratePathToActor_Params GeneratePathToActor_Params;
	memcpy_s(&GeneratePathToActor_Params.Goal, 0x8, &Goal, 0x8);
	memcpy_s(&GeneratePathToActor_Params.WithinDistance, 0x4, &WithinDistance, 0x4);
	GeneratePathToActor_Params.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent(uFnGeneratePathToActor, &GeneratePathToActor_Params, nullptr);

	return GeneratePathToActor_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::eventInitNavigationHandle()
{
	static UFunction* uFnInitNavigationHandle = nullptr;

	if (!uFnInitNavigationHandle)
	{
		uFnInitNavigationHandle = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.InitNavigationHandle");
	}

	AGameCrowdAgent_eventInitNavigationHandle_Params InitNavigationHandle_Params;

	this->ProcessEvent(uFnInitNavigationHandle, &InitNavigationHandle_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  A                              (CPF_Parm)

void AGameCrowdAgent::eventOverlappedActorEvent(class AActor* A)
{
	static UFunction* uFnOverlappedActorEvent = nullptr;

	if (!uFnOverlappedActorEvent)
	{
		uFnOverlappedActorEvent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.OverlappedActorEvent");
	}

	AGameCrowdAgent_eventOverlappedActorEvent_Params OverlappedActorEvent_Params;
	memcpy_s(&OverlappedActorEvent_Params.A, 0x8, &A, 0x8);

	this->ProcessEvent(uFnOverlappedActorEvent, &OverlappedActorEvent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void AGameCrowdAgent::TakeDamage(int32_t DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.TakeDamage");
	}

	AGameCrowdAgent_execTakeDamage_Params TakeDamage_Params;
	memcpy_s(&TakeDamage_Params.DamageAmount, 0x4, &DamageAmount, 0x4);
	memcpy_s(&TakeDamage_Params.EventInstigator, 0x8, &EventInstigator, 0x8);
	memcpy_s(&TakeDamage_Params.HitLocation, 0xC, &HitLocation, 0xC);
	memcpy_s(&TakeDamage_Params.Momentum, 0xC, &Momentum, 0xC);
	memcpy_s(&TakeDamage_Params.DamageType, 0x8, &DamageType, 0x8);
	memcpy_s(&TakeDamage_Params.HitInfo, 0x28, &HitInfo, 0x28);
	memcpy_s(&TakeDamage_Params.DamageCauser, 0x8, &DamageCauser, 0x8);

	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::eventFireDeathEvent()
{
	static UFunction* uFnFireDeathEvent = nullptr;

	if (!uFnFireDeathEvent)
	{
		uFnFireDeathEvent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.FireDeathEvent");
	}

	AGameCrowdAgent_eventFireDeathEvent_Params FireDeathEvent_Params;

	this->ProcessEvent(uFnFireDeathEvent, &FireDeathEvent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 KillMomentum                   (CPF_Parm)

void AGameCrowdAgent::PlayDeath(struct FVector KillMomentum)
{
	static UFunction* uFnPlayDeath = nullptr;

	if (!uFnPlayDeath)
	{
		uFnPlayDeath = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PlayDeath");
	}

	AGameCrowdAgent_execPlayDeath_Params PlayDeath_Params;
	memcpy_s(&PlayDeath_Params.KillMomentum, 0xC, &KillMomentum, 0xC);

	uFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlayDeath, &PlayDeath_Params, nullptr);

	uFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// [0x00024802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  DestinationActor               (CPF_OptionalParm | CPF_Parm)

void AGameCrowdAgent::eventUpdateIntermediatePoint(class AActor* DestinationActor)
{
	static UFunction* uFnUpdateIntermediatePoint = nullptr;

	if (!uFnUpdateIntermediatePoint)
	{
		uFnUpdateIntermediatePoint = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint");
	}

	AGameCrowdAgent_eventUpdateIntermediatePoint_Params UpdateIntermediatePoint_Params;
	memcpy_s(&UpdateIntermediatePoint_Params.DestinationActor, 0x8, &DestinationActor, 0x8);

	this->ProcessEvent(uFnUpdateIntermediatePoint, &UpdateIntermediatePoint_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00C20102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          fDeltaTime                     (CPF_Parm)
// struct FVector                 out_CamLoc                     (CPF_Parm | CPF_OutParm)
// struct FRotator                out_CamRot                     (CPF_Parm | CPF_OutParm)
// float                          out_FOV                        (CPF_Parm | CPF_OutParm)

bool AGameCrowdAgent::CalcCamera(float fDeltaTime, struct FVector& out_CamLoc, struct FRotator& out_CamRot, float& out_FOV)
{
	static UFunction* uFnCalcCamera = nullptr;

	if (!uFnCalcCamera)
	{
		uFnCalcCamera = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.CalcCamera");
	}

	AGameCrowdAgent_execCalcCamera_Params CalcCamera_Params;
	memcpy_s(&CalcCamera_Params.fDeltaTime, 0x4, &fDeltaTime, 0x4);
	memcpy_s(&CalcCamera_Params.out_CamLoc, 0xC, &out_CamLoc, 0xC);
	memcpy_s(&CalcCamera_Params.out_CamRot, 0xC, &out_CamRot, 0xC);
	memcpy_s(&CalcCamera_Params.out_FOV, 0x4, &out_FOV, 0x4);

	this->ProcessEvent(uFnCalcCamera, &CalcCamera_Params, nullptr);

	memcpy_s(&out_CamLoc, 0xC, &CalcCamera_Params.out_CamLoc, 0xC);
	memcpy_s(&out_CamRot, 0xC, &CalcCamera_Params.out_CamRot, 0xC);
	memcpy_s(&out_FOV, 0x4, &CalcCamera_Params.out_FOV, 0x4);

	return CalcCamera_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.IsIdle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdAgent::IsIdle()
{
	static UFunction* uFnIsIdle = nullptr;

	if (!uFnIsIdle)
	{
		uFnIsIdle = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.IsIdle");
	}

	AGameCrowdAgent_execIsIdle_Params IsIdle_Params;

	uFnIsIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsIdle, &IsIdle_Params, nullptr);

	uFnIsIdle->FunctionFlags |= 0x400;

	return IsIdle_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameCrowdAgentBehavior* BehaviorArchetype              (CPF_Parm)

void AGameCrowdAgent::SetCurrentBehavior(class UGameCrowdAgentBehavior* BehaviorArchetype)
{
	static UFunction* uFnSetCurrentBehavior = nullptr;

	if (!uFnSetCurrentBehavior)
	{
		uFnSetCurrentBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.SetCurrentBehavior");
	}

	AGameCrowdAgent_execSetCurrentBehavior_Params SetCurrentBehavior_Params;
	memcpy_s(&SetCurrentBehavior_Params.BehaviorArchetype, 0x8, &BehaviorArchetype, 0x8);

	uFnSetCurrentBehavior->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetCurrentBehavior, &SetCurrentBehavior_Params, nullptr);

	uFnSetCurrentBehavior->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.StopBehavior
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::eventStopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.StopBehavior");
	}

	AGameCrowdAgent_eventStopBehavior_Params StopBehavior_Params;

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        EventType                      (CPF_Parm)
// class AActor*                  InInstigator                   (CPF_Parm)
// unsigned long                  bViralCause                    (CPF_Parm)
// unsigned long                  bPropagateViralFlag            (CPF_Parm)

void AGameCrowdAgent::eventHandleBehaviorEvent(uint8_t EventType, class AActor* InInstigator, unsigned long bViralCause, unsigned long bPropagateViralFlag)
{
	static UFunction* uFnHandleBehaviorEvent = nullptr;

	if (!uFnHandleBehaviorEvent)
	{
		uFnHandleBehaviorEvent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.HandleBehaviorEvent");
	}

	AGameCrowdAgent_eventHandleBehaviorEvent_Params HandleBehaviorEvent_Params;
	memcpy_s(&HandleBehaviorEvent_Params.EventType, 0x1, &EventType, 0x1);
	memcpy_s(&HandleBehaviorEvent_Params.InInstigator, 0x8, &InInstigator, 0x8);
	HandleBehaviorEvent_Params.bViralCause = bViralCause;
	HandleBehaviorEvent_Params.bPropagateViralFlag = bPropagateViralFlag;

	this->ProcessEvent(uFnHandleBehaviorEvent, &HandleBehaviorEvent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameCrowdAgentBehavior* NewBehaviorObject              (CPF_Parm)

void AGameCrowdAgent::ActivateInstancedBehavior(class UGameCrowdAgentBehavior* NewBehaviorObject)
{
	static UFunction* uFnActivateInstancedBehavior = nullptr;

	if (!uFnActivateInstancedBehavior)
	{
		uFnActivateInstancedBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior");
	}

	AGameCrowdAgent_execActivateInstancedBehavior_Params ActivateInstancedBehavior_Params;
	memcpy_s(&ActivateInstancedBehavior_Params.NewBehaviorObject, 0x8, &NewBehaviorObject, 0x8);

	this->ProcessEvent(uFnActivateInstancedBehavior, &ActivateInstancedBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
// [0x00024802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           (CPF_Parm)
// class AActor*                  LookAtActor                    (CPF_OptionalParm | CPF_Parm)

void AGameCrowdAgent::eventActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static UFunction* uFnActivateBehavior = nullptr;

	if (!uFnActivateBehavior)
	{
		uFnActivateBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.ActivateBehavior");
	}

	AGameCrowdAgent_eventActivateBehavior_Params ActivateBehavior_Params;
	memcpy_s(&ActivateBehavior_Params.NewBehaviorArchetype, 0x8, &NewBehaviorArchetype, 0x8);
	memcpy_s(&ActivateBehavior_Params.LookAtActor, 0x8, &LookAtActor, 0x8);

	this->ProcessEvent(uFnActivateBehavior, &ActivateBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::ResetSeePlayer()
{
	static UFunction* uFnResetSeePlayer = nullptr;

	if (!uFnResetSeePlayer)
	{
		uFnResetSeePlayer = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.ResetSeePlayer");
	}

	AGameCrowdAgent_execResetSeePlayer_Params ResetSeePlayer_Params;

	this->ProcessEvent(uFnResetSeePlayer, &ResetSeePlayer_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::TryRandomBehavior()
{
	static UFunction* uFnTryRandomBehavior = nullptr;

	if (!uFnTryRandomBehavior)
	{
		uFnTryRandomBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.TryRandomBehavior");
	}

	AGameCrowdAgent_execTryRandomBehavior_Params TryRandomBehavior_Params;

	this->ProcessEvent(uFnTryRandomBehavior, &TryRandomBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       PC                             (CPF_Parm)

void AGameCrowdAgent::eventNotifySeePlayer(class APlayerController* PC)
{
	static UFunction* uFnNotifySeePlayer = nullptr;

	if (!uFnNotifySeePlayer)
	{
		uFnNotifySeePlayer = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.NotifySeePlayer");
	}

	AGameCrowdAgent_eventNotifySeePlayer_Params NotifySeePlayer_Params;
	memcpy_s(&NotifySeePlayer_Params.PC, 0x8, &PC, 0x8);

	this->ProcessEvent(uFnNotifySeePlayer, &NotifySeePlayer_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::PlaySpawnBehavior()
{
	static UFunction* uFnPlaySpawnBehavior = nullptr;

	if (!uFnPlaySpawnBehavior)
	{
		uFnPlaySpawnBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PlaySpawnBehavior");
	}

	AGameCrowdAgent_execPlaySpawnBehavior_Params PlaySpawnBehavior_Params;

	this->ProcessEvent(uFnPlaySpawnBehavior, &PlaySpawnBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::eventHandlePotentialAgentEncounter()
{
	static UFunction* uFnHandlePotentialAgentEncounter = nullptr;

	if (!uFnHandlePotentialAgentEncounter)
	{
		uFnHandlePotentialAgentEncounter = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter");
	}

	AGameCrowdAgent_eventHandlePotentialAgentEncounter_Params HandlePotentialAgentEncounter_Params;

	this->ProcessEvent(uFnHandlePotentialAgentEncounter, &HandlePotentialAgentEncounter_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// [0x00020900] (FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::eventStopIdleAnimation()
{
	static UFunction* uFnStopIdleAnimation = nullptr;

	if (!uFnStopIdleAnimation)
	{
		uFnStopIdleAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.StopIdleAnimation");
	}

	AGameCrowdAgent_eventStopIdleAnimation_Params StopIdleAnimation_Params;

	this->ProcessEvent(uFnStopIdleAnimation, &StopIdleAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// [0x00020900] (FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::eventPlayIdleAnimation()
{
	static UFunction* uFnPlayIdleAnimation = nullptr;

	if (!uFnPlayIdleAnimation)
	{
		uFnPlayIdleAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PlayIdleAnimation");
	}

	AGameCrowdAgent_eventPlayIdleAnimation_Params PlayIdleAnimation_Params;

	this->ProcessEvent(uFnPlayIdleAnimation, &PlayIdleAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqAct_PlayAgentAnimation* Action                         (CPF_Parm)

void AGameCrowdAgent::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static UFunction* uFnOnPlayAgentAnimation = nullptr;

	if (!uFnOnPlayAgentAnimation)
	{
		uFnOnPlayAgentAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation");
	}

	AGameCrowdAgent_execOnPlayAgentAnimation_Params OnPlayAgentAnimation_Params;
	memcpy_s(&OnPlayAgentAnimation_Params.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(uFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00C20102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class AActor*                  SpawnLoc                       (CPF_Parm)
// class AGameCrowdAgent*         AgentTemplate                  (CPF_Parm)
// class UGameCrowdGroup*         NewGroup                       (CPF_Parm)
// float                          AgentWarmupTime                (CPF_Parm)
// unsigned long                  bWarmupPosition                (CPF_Parm)
// unsigned long                  bCheckWarmupVisibility         (CPF_Parm)
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdAgent::InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, unsigned long bWarmupPosition, unsigned long bCheckWarmupVisibility, TArray<struct FCrowdSpawnerPlayerInfo>& PlayerInfo)
{
	static UFunction* uFnInitializeAgent = nullptr;

	if (!uFnInitializeAgent)
	{
		uFnInitializeAgent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.InitializeAgent");
	}

	AGameCrowdAgent_execInitializeAgent_Params InitializeAgent_Params;
	memcpy_s(&InitializeAgent_Params.SpawnLoc, 0x8, &SpawnLoc, 0x8);
	memcpy_s(&InitializeAgent_Params.AgentTemplate, 0x8, &AgentTemplate, 0x8);
	memcpy_s(&InitializeAgent_Params.NewGroup, 0x8, &NewGroup, 0x8);
	memcpy_s(&InitializeAgent_Params.AgentWarmupTime, 0x4, &AgentWarmupTime, 0x4);
	InitializeAgent_Params.bWarmupPosition = bWarmupPosition;
	InitializeAgent_Params.bCheckWarmupVisibility = bCheckWarmupVisibility;
	memcpy_s(&InitializeAgent_Params.PlayerInfo, 0x10, &PlayerInfo, 0x10);

	this->ProcessEvent(uFnInitializeAgent, &InitializeAgent_Params, nullptr);

	memcpy_s(&PlayerInfo, 0x10, &InitializeAgent_Params.PlayerInfo, 0x10);
};

// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
// [0x00820102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Pct                            (CPF_Parm)
// struct FVector                 CurPos                         (CPF_Parm)
// float                          CurRadius                      (CPF_Parm)
// struct FVector                 DestPos                        (CPF_Parm)
// float                          DestRadius                     (CPF_Parm)

struct FVector AGameCrowdAgent::GetAttemptedSpawnLocation(float Pct, struct FVector CurPos, float CurRadius, struct FVector DestPos, float DestRadius)
{
	static UFunction* uFnGetAttemptedSpawnLocation = nullptr;

	if (!uFnGetAttemptedSpawnLocation)
	{
		uFnGetAttemptedSpawnLocation = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation");
	}

	AGameCrowdAgent_execGetAttemptedSpawnLocation_Params GetAttemptedSpawnLocation_Params;
	memcpy_s(&GetAttemptedSpawnLocation_Params.Pct, 0x4, &Pct, 0x4);
	memcpy_s(&GetAttemptedSpawnLocation_Params.CurPos, 0xC, &CurPos, 0xC);
	memcpy_s(&GetAttemptedSpawnLocation_Params.CurRadius, 0x4, &CurRadius, 0x4);
	memcpy_s(&GetAttemptedSpawnLocation_Params.DestPos, 0xC, &DestPos, 0xC);
	memcpy_s(&GetAttemptedSpawnLocation_Params.DestRadius, 0x4, &DestRadius, 0x4);

	this->ProcessEvent(uFnGetAttemptedSpawnLocation, &GetAttemptedSpawnLocation_Params, nullptr);

	return GetAttemptedSpawnLocation_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetLighting
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bEnableLightEnvironment        (CPF_Parm)
// struct FLightingChannelContainer AgentLightingChannel           (CPF_Parm)
// unsigned long                  bCastShadows                   (CPF_Parm)

void AGameCrowdAgent::SetLighting(unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows)
{
	static UFunction* uFnSetLighting = nullptr;

	if (!uFnSetLighting)
	{
		uFnSetLighting = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.SetLighting");
	}

	AGameCrowdAgent_execSetLighting_Params SetLighting_Params;
	SetLighting_Params.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy_s(&SetLighting_Params.AgentLightingChannel, 0x4, &AgentLightingChannel, 0x4);
	SetLighting_Params.bCastShadows = bCastShadows;

	this->ProcessEvent(uFnSetLighting, &SetLighting_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00420102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AGameCrowdAgent::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.DisplayDebug");
	}

	AGameCrowdAgent_execDisplayDebug_Params DisplayDebug_Params;
	memcpy_s(&DisplayDebug_Params.HUD, 0x8, &HUD, 0x8);
	memcpy_s(&DisplayDebug_Params.out_YL, 0x4, &out_YL, 0x4);
	memcpy_s(&DisplayDebug_Params.out_YPos, 0x4, &out_YPos, 0x4);

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, 0x4, &DisplayDebug_Params.out_YL, 0x4);
	memcpy_s(&out_YPos, 0x4, &DisplayDebug_Params.out_YPos, 0x4);
};

// Function GameFramework.GameCrowdAgent.Destroyed
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::Destroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.Destroyed");
	}

	AGameCrowdAgent_execDestroyed_Params Destroyed_Params;

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::ResetPooledAgent()
{
	static UFunction* uFnResetPooledAgent = nullptr;

	if (!uFnResetPooledAgent)
	{
		uFnResetPooledAgent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.ResetPooledAgent");
	}

	AGameCrowdAgent_execResetPooledAgent_Params ResetPooledAgent_Params;

	this->ProcessEvent(uFnResetPooledAgent, &ResetPooledAgent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.KillAgent
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::eventKillAgent()
{
	static UFunction* uFnKillAgent = nullptr;

	if (!uFnKillAgent)
	{
		uFnKillAgent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.KillAgent");
	}

	AGameCrowdAgent_eventKillAgent_Params KillAgent_Params;

	this->ProcessEvent(uFnKillAgent, &KillAgent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
// [0x00820102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PostBeginPlay");
	}

	AGameCrowdAgent_execPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::SetMaxSpeed()
{
	static UFunction* uFnSetMaxSpeed = nullptr;

	if (!uFnSetMaxSpeed)
	{
		uFnSetMaxSpeed = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.SetMaxSpeed");
	}

	AGameCrowdAgent_execSetMaxSpeed_Params SetMaxSpeed_Params;

	this->ProcessEvent(uFnSetMaxSpeed, &SetMaxSpeed_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdDestination*   NewDest                        (CPF_Parm)

void AGameCrowdAgent::eventSetCurrentDestination(class AGameCrowdDestination* NewDest)
{
	static UFunction* uFnSetCurrentDestination = nullptr;

	if (!uFnSetCurrentDestination)
	{
		uFnSetCurrentDestination = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.SetCurrentDestination");
	}

	AGameCrowdAgent_eventSetCurrentDestination_Params SetCurrentDestination_Params;
	memcpy_s(&SetCurrentDestination_Params.NewDest, 0x8, &NewDest, 0x8);

	this->ProcessEvent(uFnSetCurrentDestination, &SetCurrentDestination_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgent::eventWaitForGroupMembers()
{
	static UFunction* uFnWaitForGroupMembers = nullptr;

	if (!uFnWaitForGroupMembers)
	{
		uFnWaitForGroupMembers = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.WaitForGroupMembers");
	}

	AGameCrowdAgent_eventWaitForGroupMembers_Params WaitForGroupMembers_Params;

	this->ProcessEvent(uFnWaitForGroupMembers, &WaitForGroupMembers_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// [0x00824002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FBehaviorEntry>  BehaviorList                   (CPF_Parm | CPF_NeedCtorLink)
// struct FVector                 BestCameraLoc                  (CPF_OptionalParm | CPF_Parm)

bool AGameCrowdAgent::PickBehaviorFrom(TArray<struct FBehaviorEntry> BehaviorList, struct FVector BestCameraLoc)
{
	static UFunction* uFnPickBehaviorFrom = nullptr;

	if (!uFnPickBehaviorFrom)
	{
		uFnPickBehaviorFrom = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PickBehaviorFrom");
	}

	AGameCrowdAgent_execPickBehaviorFrom_Params PickBehaviorFrom_Params;
	memcpy_s(&PickBehaviorFrom_Params.BehaviorList, 0x10, &BehaviorList, 0x10);
	memcpy_s(&PickBehaviorFrom_Params.BestCameraLoc, 0xC, &BestCameraLoc, 0xC);

	this->ProcessEvent(uFnPickBehaviorFrom, &PickBehaviorFrom_Params, nullptr);

	return PickBehaviorFrom_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.IsPanicked
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdAgent::IsPanicked()
{
	static UFunction* uFnIsPanicked = nullptr;

	if (!uFnIsPanicked)
	{
		uFnIsPanicked = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.IsPanicked");
	}

	AGameCrowdAgent_execIsPanicked_Params IsPanicked_Params;

	uFnIsPanicked->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPanicked, &IsPanicked_Params, nullptr);

	uFnIsPanicked->FunctionFlags |= 0x400;

	return IsPanicked_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UClass*                  dmgType                        (CPF_Parm)

void AGameCrowdAgent::eventFellOutOfWorld(class UClass* dmgType)
{
	static UFunction* uFnFellOutOfWorld = nullptr;

	if (!uFnFellOutOfWorld)
	{
		uFnFellOutOfWorld = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.FellOutOfWorld");
	}

	AGameCrowdAgent_eventFellOutOfWorld_Params FellOutOfWorld_Params;
	memcpy_s(&FellOutOfWorld_Params.dmgType, 0x8, &dmgType, 0x8);

	this->ProcessEvent(uFnFellOutOfWorld, &FellOutOfWorld_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.GetCollisionExtent
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector AGameCrowdAgent::GetCollisionExtent()
{
	static UFunction* uFnGetCollisionExtent = nullptr;

	if (!uFnGetCollisionExtent)
	{
		uFnGetCollisionExtent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.GetCollisionExtent");
	}

	AGameCrowdAgent_execGetCollisionExtent_Params GetCollisionExtent_Params;

	uFnGetCollisionExtent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetCollisionExtent, &GetCollisionExtent_Params, nullptr);

	uFnGetCollisionExtent->FunctionFlags |= 0x400;

	return GetCollisionExtent_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgentSkeletal::CreateAttachments()
{
	static UFunction* uFnCreateAttachments = nullptr;

	if (!uFnCreateAttachments)
	{
		uFnCreateAttachments = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments");
	}

	AGameCrowdAgentSkeletal_execCreateAttachments_Params CreateAttachments_Params;

	this->ProcessEvent(uFnCreateAttachments, &CreateAttachments_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void AGameCrowdAgentSkeletal::eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnOnAnimEnd = nullptr;

	if (!uFnOnAnimEnd)
	{
		uFnOnAnimEnd = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd");
	}

	AGameCrowdAgentSkeletal_eventOnAnimEnd_Params OnAnimEnd_Params;
	memcpy_s(&OnAnimEnd_Params.SeqNode, 0x8, &SeqNode, 0x8);
	memcpy_s(&OnAnimEnd_Params.PlayedTime, 0x4, &PlayedTime, 0x4);
	memcpy_s(&OnAnimEnd_Params.ExcessTime, 0x4, &ExcessTime, 0x4);

	this->ProcessEvent(uFnOnAnimEnd, &OnAnimEnd_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgentSkeletal::eventStopIdleAnimation()
{
	static UFunction* uFnStopIdleAnimation = nullptr;

	if (!uFnStopIdleAnimation)
	{
		uFnStopIdleAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation");
	}

	AGameCrowdAgentSkeletal_eventStopIdleAnimation_Params StopIdleAnimation_Params;

	this->ProcessEvent(uFnStopIdleAnimation, &StopIdleAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgentSkeletal::eventPlayIdleAnimation()
{
	static UFunction* uFnPlayIdleAnimation = nullptr;

	if (!uFnPlayIdleAnimation)
	{
		uFnPlayIdleAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation");
	}

	AGameCrowdAgentSkeletal_eventPlayIdleAnimation_Params PlayIdleAnimation_Params;

	this->ProcessEvent(uFnPlayIdleAnimation, &PlayIdleAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgentSkeletal::eventClearLatentAnimation()
{
	static UFunction* uFnClearLatentAnimation = nullptr;

	if (!uFnClearLatentAnimation)
	{
		uFnClearLatentAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation");
	}

	AGameCrowdAgentSkeletal_eventClearLatentAnimation_Params ClearLatentAnimation_Params;

	this->ProcessEvent(uFnClearLatentAnimation, &ClearLatentAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqAct_PlayAgentAnimation* Action                         (CPF_Parm)

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static UFunction* uFnOnPlayAgentAnimation = nullptr;

	if (!uFnOnPlayAgentAnimation)
	{
		uFnOnPlayAgentAnimation = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation");
	}

	AGameCrowdAgentSkeletal_execOnPlayAgentAnimation_Params OnPlayAgentAnimation_Params;
	memcpy_s(&OnPlayAgentAnimation_Params.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(uFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRootMotionEnabled             (CPF_Parm)

void AGameCrowdAgentSkeletal::SetRootMotion(unsigned long bRootMotionEnabled)
{
	static UFunction* uFnSetRootMotion = nullptr;

	if (!uFnSetRootMotion)
	{
		uFnSetRootMotion = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion");
	}

	AGameCrowdAgentSkeletal_execSetRootMotion_Params SetRootMotion_Params;
	SetRootMotion_Params.bRootMotionEnabled = bRootMotionEnabled;

	uFnSetRootMotion->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetRootMotion, &SetRootMotion_Params, nullptr);

	uFnSetRootMotion->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 KillMomentum                   (CPF_Parm)

void AGameCrowdAgentSkeletal::PlayDeath(struct FVector KillMomentum)
{
	static UFunction* uFnPlayDeath = nullptr;

	if (!uFnPlayDeath)
	{
		uFnPlayDeath = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.PlayDeath");
	}

	AGameCrowdAgentSkeletal_execPlayDeath_Params PlayDeath_Params;
	memcpy_s(&PlayDeath_Params.KillMomentum, 0xC, &KillMomentum, 0xC);

	uFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlayDeath, &PlayDeath_Params, nullptr);

	uFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bEnableLightEnvironment        (CPF_Parm)
// struct FLightingChannelContainer AgentLightingChannel           (CPF_Parm)
// unsigned long                  bCastShadows                   (CPF_Parm)

void AGameCrowdAgentSkeletal::SetLighting(unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows)
{
	static UFunction* uFnSetLighting = nullptr;

	if (!uFnSetLighting)
	{
		uFnSetLighting = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.SetLighting");
	}

	AGameCrowdAgentSkeletal_execSetLighting_Params SetLighting_Params;
	SetLighting_Params.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy_s(&SetLighting_Params.AgentLightingChannel, 0x4, &AgentLightingChannel, 0x4);
	SetLighting_Params.bCastShadows = bCastShadows;

	this->ProcessEvent(uFnSetLighting, &SetLighting_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgentSkeletal::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay");
	}

	AGameCrowdAgentSkeletal_execPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSM.StopBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgentSM::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSM.StopBehavior");
	}

	AGameCrowdAgentSM_execStopBehavior_Params StopBehavior_Params;

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           (CPF_Parm)
// class AActor*                  LookAtActor                    (CPF_OptionalParm | CPF_Parm)

void AGameCrowdAgentSM::ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static UFunction* uFnActivateBehavior = nullptr;

	if (!uFnActivateBehavior)
	{
		uFnActivateBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSM.ActivateBehavior");
	}

	AGameCrowdAgentSM_execActivateBehavior_Params ActivateBehavior_Params;
	memcpy_s(&ActivateBehavior_Params.NewBehaviorArchetype, 0x8, &NewBehaviorArchetype, 0x8);
	memcpy_s(&ActivateBehavior_Params.LookAtActor, 0x8, &LookAtActor, 0x8);

	this->ProcessEvent(uFnActivateBehavior, &ActivateBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
// [0x00820102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FColor                  InC                            (CPF_Parm)

void AGameCrowdAgentSM::ChangeDebugColor(struct FColor InC)
{
	static UFunction* uFnChangeDebugColor = nullptr;

	if (!uFnChangeDebugColor)
	{
		uFnChangeDebugColor = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSM.ChangeDebugColor");
	}

	AGameCrowdAgentSM_execChangeDebugColor_Params ChangeDebugColor_Params;
	memcpy_s(&ChangeDebugColor_Params.InC, 0x4, &InC, 0x4);

	this->ProcessEvent(uFnChangeDebugColor, &ChangeDebugColor_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSM.InitDebugColor
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgentSM::InitDebugColor()
{
	static UFunction* uFnInitDebugColor = nullptr;

	if (!uFnInitDebugColor)
	{
		uFnInitDebugColor = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSM.InitDebugColor");
	}

	AGameCrowdAgentSM_execInitDebugColor_Params InitDebugColor_Params;

	this->ProcessEvent(uFnInitDebugColor, &InitDebugColor_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdAgentSM::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSM.PostBeginPlay");
	}

	AGameCrowdAgentSM_execPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   Destination                    (CPF_Parm)

bool UGameCrowdAgentBehavior::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static UFunction* uFnAllowBehaviorAt = nullptr;

	if (!uFnAllowBehaviorAt)
	{
		uFnAllowBehaviorAt = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt");
	}

	UGameCrowdAgentBehavior_execAllowBehaviorAt_Params AllowBehaviorAt_Params;
	memcpy_s(&AllowBehaviorAt_Params.Destination, 0x8, &Destination, 0x8);

	this->ProcessEvent(uFnAllowBehaviorAt, &AllowBehaviorAt_Params, nullptr);

	return AllowBehaviorAt_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   Destination                    (CPF_Parm)

bool UGameCrowdAgentBehavior::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static UFunction* uFnAllowThisDestination = nullptr;

	if (!uFnAllowThisDestination)
	{
		uFnAllowThisDestination = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination");
	}

	UGameCrowdAgentBehavior_execAllowThisDestination_Params AllowThisDestination_Params;
	memcpy_s(&AllowThisDestination_Params.Destination, 0x8, &Destination, 0x8);

	this->ProcessEvent(uFnAllowThisDestination, &AllowThisDestination_Params, nullptr);

	return AllowThisDestination_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         OtherAgent                     (CPF_Parm)

void UGameCrowdAgentBehavior::eventPropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent)
{
	static UFunction* uFnPropagateViralBehaviorTo = nullptr;

	if (!uFnPropagateViralBehaviorTo)
	{
		uFnPropagateViralBehaviorTo = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo");
	}

	UGameCrowdAgentBehavior_eventPropagateViralBehaviorTo_Params PropagateViralBehaviorTo_Params;
	memcpy_s(&PropagateViralBehaviorTo_Params.OtherAgent, 0x8, &OtherAgent, 0x8);

	this->ProcessEvent(uFnPropagateViralBehaviorTo, &PropagateViralBehaviorTo_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameCrowdAgentBehavior::GetBehaviorInstigator()
{
	static UFunction* uFnGetBehaviorInstigator = nullptr;

	if (!uFnGetBehaviorInstigator)
	{
		uFnGetBehaviorInstigator = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator");
	}

	UGameCrowdAgentBehavior_execGetBehaviorInstigator_Params GetBehaviorInstigator_Params;

	this->ProcessEvent(uFnGetBehaviorInstigator, &GetBehaviorInstigator_Params, nullptr);

	return GetBehaviorInstigator_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  NewActionTarget                (CPF_Parm)

void UGameCrowdAgentBehavior::ActivatedBy(class AActor* NewActionTarget)
{
	static UFunction* uFnActivatedBy = nullptr;

	if (!uFnActivatedBy)
	{
		uFnActivatedBy = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.ActivatedBy");
	}

	UGameCrowdAgentBehavior_execActivatedBy_Params ActivatedBy_Params;
	memcpy_s(&ActivatedBy_Params.NewActionTarget, 0x8, &NewActionTarget, 0x8);

	this->ProcessEvent(uFnActivatedBy, &ActivatedBy_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameCrowdAgentBehavior::GetDestinationActor()
{
	static UFunction* uFnGetDestinationActor = nullptr;

	if (!uFnGetDestinationActor)
	{
		uFnGetDestinationActor = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor");
	}

	UGameCrowdAgentBehavior_execGetDestinationActor_Params GetDestinationActor_Params;

	this->ProcessEvent(uFnGetDestinationActor, &GetDestinationActor_Params, nullptr);

	return GetDestinationActor_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdDestination*   NewDest                        (CPF_Parm)

void UGameCrowdAgentBehavior::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static UFunction* uFnChangingDestination = nullptr;

	if (!uFnChangingDestination)
	{
		uFnChangingDestination = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.ChangingDestination");
	}

	UGameCrowdAgentBehavior_execChangingDestination_Params ChangingDestination_Params;
	memcpy_s(&ChangingDestination_Params.NewDest, 0x8, &NewDest, 0x8);

	this->ProcessEvent(uFnChangingDestination, &ChangingDestination_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameCrowdAgentBehavior::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString");
	}

	UGameCrowdAgentBehavior_execGetBehaviorString_Params GetBehaviorString_Params;

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void UGameCrowdAgentBehavior::eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnOnAnimEnd = nullptr;

	if (!uFnOnAnimEnd)
	{
		uFnOnAnimEnd = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd");
	}

	UGameCrowdAgentBehavior_eventOnAnimEnd_Params OnAnimEnd_Params;
	memcpy_s(&OnAnimEnd_Params.SeqNode, 0x8, &SeqNode, 0x8);
	memcpy_s(&OnAnimEnd_Params.PlayedTime, 0x4, &PlayedTime, 0x4);
	memcpy_s(&OnAnimEnd_Params.ExcessTime, 0x4, &ExcessTime, 0x4);

	this->ProcessEvent(uFnOnAnimEnd, &OnAnimEnd_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCrowdAgentBehavior::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.StopBehavior");
	}

	UGameCrowdAgentBehavior_execStopBehavior_Params StopBehavior_Params;

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdAgentBehavior::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnInitBehavior = nullptr;

	if (!uFnInitBehavior)
	{
		uFnInitBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.InitBehavior");
	}

	UGameCrowdAgentBehavior_execInitBehavior_Params InitBehavior_Params;
	memcpy_s(&InitBehavior_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnInitBehavior, &InitBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameCrowdAgentBehavior::HandleMovement()
{
	static UFunction* uFnHandleMovement = nullptr;

	if (!uFnHandleMovement)
	{
		uFnHandleMovement = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.HandleMovement");
	}

	UGameCrowdAgentBehavior_execHandleMovement_Params HandleMovement_Params;

	uFnHandleMovement->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHandleMovement, &HandleMovement_Params, nullptr);

	uFnHandleMovement->FunctionFlags |= 0x400;

	return HandleMovement_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCrowdAgentBehavior::eventFinishedTargetRotation()
{
	static UFunction* uFnFinishedTargetRotation = nullptr;

	if (!uFnFinishedTargetRotation)
	{
		uFnFinishedTargetRotation = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation");
	}

	UGameCrowdAgentBehavior_eventFinishedTargetRotation_Params FinishedTargetRotation_Params;

	this->ProcessEvent(uFnFinishedTargetRotation, &FinishedTargetRotation_Params, nullptr);
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// struct FVector                 CameraLoc                      (CPF_Parm)

bool UGameCrowdAgentBehavior::CanBeUsedBy(class AGameCrowdAgent* Agent, struct FVector CameraLoc)
{
	static UFunction* uFnCanBeUsedBy = nullptr;

	if (!uFnCanBeUsedBy)
	{
		uFnCanBeUsedBy = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy");
	}

	UGameCrowdAgentBehavior_execCanBeUsedBy_Params CanBeUsedBy_Params;
	memcpy_s(&CanBeUsedBy_Params.Agent, 0x8, &Agent, 0x8);
	memcpy_s(&CanBeUsedBy_Params.CameraLoc, 0xC, &CameraLoc, 0xC);

	this->ProcessEvent(uFnCanBeUsedBy, &CanBeUsedBy_Params, nullptr);

	return CanBeUsedBy_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGameCrowdAgentBehavior::eventTick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.Tick");
	}

	UGameCrowdAgentBehavior_eventTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);

	uFnTick->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameCrowdAgentBehavior::ShouldEndIdle()
{
	static UFunction* uFnShouldEndIdle = nullptr;

	if (!uFnShouldEndIdle)
	{
		uFnShouldEndIdle = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle");
	}

	UGameCrowdAgentBehavior_execShouldEndIdle_Params ShouldEndIdle_Params;

	uFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShouldEndIdle, &ShouldEndIdle_Params, nullptr);

	uFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
// [0x00026400] (FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdBehaviorPoint* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        EventType                      (CPF_Parm)
// class AActor*                  Instigator                     (CPF_Parm)
// struct FVector                 AtLocation                     (CPF_Parm)
// float                          InRange                        (CPF_Parm)
// float                          InDuration                     (CPF_Parm)
// class AActor*                  BaseActor                      (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bRequireLOS                    (CPF_OptionalParm | CPF_Parm)

class AGameCrowdBehaviorPoint* UGameCrowdAgentBehavior::TriggerCrowdBehavior(uint8_t EventType, class AActor* Instigator, struct FVector AtLocation, float InRange, float InDuration, class AActor* BaseActor, unsigned long bRequireLOS)
{
	static UFunction* uFnTriggerCrowdBehavior = nullptr;

	if (!uFnTriggerCrowdBehavior)
	{
		uFnTriggerCrowdBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior");
	}

	UGameCrowdAgentBehavior_execTriggerCrowdBehavior_Params TriggerCrowdBehavior_Params;
	memcpy_s(&TriggerCrowdBehavior_Params.EventType, 0x1, &EventType, 0x1);
	memcpy_s(&TriggerCrowdBehavior_Params.Instigator, 0x8, &Instigator, 0x8);
	memcpy_s(&TriggerCrowdBehavior_Params.AtLocation, 0xC, &AtLocation, 0xC);
	memcpy_s(&TriggerCrowdBehavior_Params.InRange, 0x4, &InRange, 0x4);
	memcpy_s(&TriggerCrowdBehavior_Params.InDuration, 0x4, &InDuration, 0x4);
	memcpy_s(&TriggerCrowdBehavior_Params.BaseActor, 0x8, &BaseActor, 0x8);
	TriggerCrowdBehavior_Params.bRequireLOS = bRequireLOS;

	uFnTriggerCrowdBehavior->FunctionFlags |= ~0x400;

	UGameCrowdAgentBehavior::StaticClass()->ProcessEvent(uFnTriggerCrowdBehavior, &TriggerCrowdBehavior_Params, nullptr);

	uFnTriggerCrowdBehavior->FunctionFlags |= 0x400;

	return TriggerCrowdBehavior_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString");
	}

	UGameCrowdBehavior_PlayAnimation_execGetBehaviorString_Params GetBehaviorString_Params;

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCrowdBehavior_PlayAnimation::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior");
	}

	UGameCrowdBehavior_PlayAnimation_execStopBehavior_Params StopBehavior_Params;

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow()
{
	static UFunction* uFnPlayAgentAnimationNow = nullptr;

	if (!uFnPlayAgentAnimationNow)
	{
		uFnPlayAgentAnimationNow = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow");
	}

	UGameCrowdBehavior_PlayAnimation_execPlayAgentAnimationNow_Params PlayAgentAnimationNow_Params;

	this->ProcessEvent(uFnPlayAgentAnimationNow, &PlayAgentAnimationNow_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void UGameCrowdBehavior_PlayAnimation::eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnOnAnimEnd = nullptr;

	if (!uFnOnAnimEnd)
	{
		uFnOnAnimEnd = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd");
	}

	UGameCrowdBehavior_PlayAnimation_eventOnAnimEnd_Params OnAnimEnd_Params;
	memcpy_s(&OnAnimEnd_Params.SeqNode, 0x8, &SeqNode, 0x8);
	memcpy_s(&OnAnimEnd_Params.PlayedTime, 0x4, &PlayedTime, 0x4);
	memcpy_s(&OnAnimEnd_Params.ExcessTime, 0x4, &ExcessTime, 0x4);

	this->ProcessEvent(uFnOnAnimEnd, &OnAnimEnd_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput()
{
	static UFunction* uFnSetSequenceOutput = nullptr;

	if (!uFnSetSequenceOutput)
	{
		uFnSetSequenceOutput = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput");
	}

	UGameCrowdBehavior_PlayAnimation_execSetSequenceOutput_Params SetSequenceOutput_Params;

	uFnSetSequenceOutput->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSequenceOutput, &SetSequenceOutput_Params, nullptr);

	uFnSetSequenceOutput->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCrowdBehavior_PlayAnimation::eventFinishedTargetRotation()
{
	static UFunction* uFnFinishedTargetRotation = nullptr;

	if (!uFnFinishedTargetRotation)
	{
		uFnFinishedTargetRotation = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation");
	}

	UGameCrowdBehavior_PlayAnimation_eventFinishedTargetRotation_Params FinishedTargetRotation_Params;

	this->ProcessEvent(uFnFinishedTargetRotation, &FinishedTargetRotation_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdBehavior_PlayAnimation::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnInitBehavior = nullptr;

	if (!uFnInitBehavior)
	{
		uFnInitBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior");
	}

	UGameCrowdBehavior_PlayAnimation_execInitBehavior_Params InitBehavior_Params;
	memcpy_s(&InitBehavior_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnInitBehavior, &InitBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString");
	}

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorString_Params GetBehaviorString_Params;

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   Destination                    (CPF_Parm)

bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static UFunction* uFnAllowBehaviorAt = nullptr;

	if (!uFnAllowBehaviorAt)
	{
		uFnAllowBehaviorAt = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt");
	}

	UGameCrowdBehavior_RunFromPanic_execAllowBehaviorAt_Params AllowBehaviorAt_Params;
	memcpy_s(&AllowBehaviorAt_Params.Destination, 0x8, &Destination, 0x8);

	this->ProcessEvent(uFnAllowBehaviorAt, &AllowBehaviorAt_Params, nullptr);

	return AllowBehaviorAt_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   Destination                    (CPF_Parm)

bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static UFunction* uFnAllowThisDestination = nullptr;

	if (!uFnAllowThisDestination)
	{
		uFnAllowThisDestination = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination");
	}

	UGameCrowdBehavior_RunFromPanic_execAllowThisDestination_Params AllowThisDestination_Params;
	memcpy_s(&AllowThisDestination_Params.Destination, 0x8, &Destination, 0x8);

	this->ProcessEvent(uFnAllowThisDestination, &AllowThisDestination_Params, nullptr);

	return AllowThisDestination_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameCrowdBehavior_RunFromPanic::GetBehaviorInstigator()
{
	static UFunction* uFnGetBehaviorInstigator = nullptr;

	if (!uFnGetBehaviorInstigator)
	{
		uFnGetBehaviorInstigator = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator");
	}

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorInstigator_Params GetBehaviorInstigator_Params;

	this->ProcessEvent(uFnGetBehaviorInstigator, &GetBehaviorInstigator_Params, nullptr);

	return GetBehaviorInstigator_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCrowdBehavior_RunFromPanic::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior");
	}

	UGameCrowdBehavior_RunFromPanic_execStopBehavior_Params StopBehavior_Params;

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdBehavior_RunFromPanic::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnInitBehavior = nullptr;

	if (!uFnInitBehavior)
	{
		uFnInitBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior");
	}

	UGameCrowdBehavior_RunFromPanic_execInitBehavior_Params InitBehavior_Params;
	memcpy_s(&InitBehavior_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnInitBehavior, &InitBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  NewActionTarget                (CPF_Parm)

void UGameCrowdBehavior_RunFromPanic::ActivatedBy(class AActor* NewActionTarget)
{
	static UFunction* uFnActivatedBy = nullptr;

	if (!uFnActivatedBy)
	{
		uFnActivatedBy = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy");
	}

	UGameCrowdBehavior_RunFromPanic_execActivatedBy_Params ActivatedBy_Params;
	memcpy_s(&ActivatedBy_Params.NewActionTarget, 0x8, &NewActionTarget, 0x8);

	this->ProcessEvent(uFnActivatedBy, &ActivatedBy_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCrowdBehavior_WaitForGroup::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior");
	}

	UGameCrowdBehavior_WaitForGroup_execStopBehavior_Params StopBehavior_Params;

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle()
{
	static UFunction* uFnShouldEndIdle = nullptr;

	if (!uFnShouldEndIdle)
	{
		uFnShouldEndIdle = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle");
	}

	UGameCrowdBehavior_WaitForGroup_execShouldEndIdle_Params ShouldEndIdle_Params;

	uFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShouldEndIdle, &ShouldEndIdle_Params, nullptr);

	uFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString");
	}

	UGameCrowdBehavior_WaitForGroup_execGetBehaviorString_Params GetBehaviorString_Params;

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdBehavior_WaitForGroup::InitBehavior(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnInitBehavior = nullptr;

	if (!uFnInitBehavior)
	{
		uFnInitBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior");
	}

	UGameCrowdBehavior_WaitForGroup_execInitBehavior_Params InitBehavior_Params;
	memcpy_s(&InitBehavior_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnInitBehavior, &InitBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCrowdBehavior_WaitInQueue::StopBehavior()
{
	static UFunction* uFnStopBehavior = nullptr;

	if (!uFnStopBehavior)
	{
		uFnStopBehavior = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior");
	}

	UGameCrowdBehavior_WaitInQueue_execStopBehavior_Params StopBehavior_Params;

	this->ProcessEvent(uFnStopBehavior, &StopBehavior_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle()
{
	static UFunction* uFnShouldEndIdle = nullptr;

	if (!uFnShouldEndIdle)
	{
		uFnShouldEndIdle = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle");
	}

	UGameCrowdBehavior_WaitInQueue_execShouldEndIdle_Params ShouldEndIdle_Params;

	uFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShouldEndIdle, &ShouldEndIdle_Params, nullptr);

	uFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString()
{
	static UFunction* uFnGetBehaviorString = nullptr;

	if (!uFnGetBehaviorString)
	{
		uFnGetBehaviorString = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString");
	}

	UGameCrowdBehavior_WaitInQueue_execGetBehaviorString_Params GetBehaviorString_Params;

	this->ProcessEvent(uFnGetBehaviorString, &GetBehaviorString_Params, nullptr);

	return GetBehaviorString_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor()
{
	static UFunction* uFnGetDestinationActor = nullptr;

	if (!uFnGetDestinationActor)
	{
		uFnGetDestinationActor = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor");
	}

	UGameCrowdBehavior_WaitInQueue_execGetDestinationActor_Params GetDestinationActor_Params;

	this->ProcessEvent(uFnGetDestinationActor, &GetDestinationActor_Params, nullptr);

	return GetDestinationActor_Params.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdDestination*   NewDest                        (CPF_Parm)

void UGameCrowdBehavior_WaitInQueue::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static UFunction* uFnChangingDestination = nullptr;

	if (!uFnChangingDestination)
	{
		uFnChangingDestination = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination");
	}

	UGameCrowdBehavior_WaitInQueue_execChangingDestination_Params ChangingDestination_Params;
	memcpy_s(&ChangingDestination_Params.NewDest, 0x8, &NewDest, 0x8);

	this->ProcessEvent(uFnChangingDestination, &ChangingDestination_Params, nullptr);
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::HandleMovement()
{
	static UFunction* uFnHandleMovement = nullptr;

	if (!uFnHandleMovement)
	{
		uFnHandleMovement = UFunction::FindFunction("Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement");
	}

	UGameCrowdBehavior_WaitInQueue_execHandleMovement_Params HandleMovement_Params;

	uFnHandleMovement->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHandleMovement, &HandleMovement_Params, nullptr);

	uFnHandleMovement->FunctionFlags |= 0x400;

	return HandleMovement_Params.ReturnValue;
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdDestination*   NewDestination                 (CPF_Parm)

void UGameCrowdGroup::UpdateDestinations(class AGameCrowdDestination* NewDestination)
{
	static UFunction* uFnUpdateDestinations = nullptr;

	if (!uFnUpdateDestinations)
	{
		uFnUpdateDestinations = UFunction::FindFunction("Function GameFramework.GameCrowdGroup.UpdateDestinations");
	}

	UGameCrowdGroup_execUpdateDestinations_Params UpdateDestinations_Params;
	memcpy_s(&UpdateDestinations_Params.NewDestination, 0x8, &NewDestination, 0x8);

	this->ProcessEvent(uFnUpdateDestinations, &UpdateDestinations_Params, nullptr);
};

// Function GameFramework.GameCrowdGroup.RemoveMember
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdGroup::RemoveMember(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnRemoveMember = nullptr;

	if (!uFnRemoveMember)
	{
		uFnRemoveMember = UFunction::FindFunction("Function GameFramework.GameCrowdGroup.RemoveMember");
	}

	UGameCrowdGroup_execRemoveMember_Params RemoveMember_Params;
	memcpy_s(&RemoveMember_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnRemoveMember, &RemoveMember_Params, nullptr);
};

// Function GameFramework.GameCrowdGroup.AddMember
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdGroup::AddMember(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAddMember = nullptr;

	if (!uFnAddMember)
	{
		uFnAddMember = UFunction::FindFunction("Function GameFramework.GameCrowdGroup.AddMember");
	}

	UGameCrowdGroup_execAddMember_Params AddMember_Params;
	memcpy_s(&AddMember_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnAddMember, &AddMember_Params, nullptr);
};

// Function GameFramework.GameCrowdInfoVolume.UnTouch
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Other                          (CPF_Parm)

void AGameCrowdInfoVolume::UnTouch(class AActor* Other)
{
	static UFunction* uFnUnTouch = nullptr;

	if (!uFnUnTouch)
	{
		uFnUnTouch = UFunction::FindFunction("Function GameFramework.GameCrowdInfoVolume.UnTouch");
	}

	AGameCrowdInfoVolume_execUnTouch_Params UnTouch_Params;
	memcpy_s(&UnTouch_Params.Other, 0x8, &Other, 0x8);

	this->ProcessEvent(uFnUnTouch, &UnTouch_Params, nullptr);
};

// Function GameFramework.GameCrowdInfoVolume.Touch
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AGameCrowdInfoVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal)
{
	static UFunction* uFnTouch = nullptr;

	if (!uFnTouch)
	{
		uFnTouch = UFunction::FindFunction("Function GameFramework.GameCrowdInfoVolume.Touch");
	}

	AGameCrowdInfoVolume_execTouch_Params Touch_Params;
	memcpy_s(&Touch_Params.Other, 0x8, &Other, 0x8);
	memcpy_s(&Touch_Params.OtherComp, 0x8, &OtherComp, 0x8);
	memcpy_s(&Touch_Params.HitLocation, 0xC, &HitLocation, 0xC);
	memcpy_s(&Touch_Params.HitNormal, 0xC, &HitNormal, 0xC);

	this->ProcessEvent(uFnTouch, &Touch_Params, nullptr);
};

// Function GameFramework.GameCrowdInteractionPoint.GHM_GameCrowdInteractionPoint_ApplyCheckpointRecord
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGHM_GameCrowdInteractionPoint_CheckpointRecord Record                         (CPF_Const | CPF_Parm | CPF_OutParm)

void AGameCrowdInteractionPoint::GHM_GameCrowdInteractionPoint_ApplyCheckpointRecord(struct FGHM_GameCrowdInteractionPoint_CheckpointRecord& Record)
{
	static UFunction* uFnGHM_GameCrowdInteractionPoint_ApplyCheckpointRecord = nullptr;

	if (!uFnGHM_GameCrowdInteractionPoint_ApplyCheckpointRecord)
	{
		uFnGHM_GameCrowdInteractionPoint_ApplyCheckpointRecord = UFunction::FindFunction("Function GameFramework.GameCrowdInteractionPoint.GHM_GameCrowdInteractionPoint_ApplyCheckpointRecord");
	}

	AGameCrowdInteractionPoint_execGHM_GameCrowdInteractionPoint_ApplyCheckpointRecord_Params GHM_GameCrowdInteractionPoint_ApplyCheckpointRecord_Params;
	memcpy_s(&GHM_GameCrowdInteractionPoint_ApplyCheckpointRecord_Params.Record, 0x4, &Record, 0x4);

	this->ProcessEvent(uFnGHM_GameCrowdInteractionPoint_ApplyCheckpointRecord, &GHM_GameCrowdInteractionPoint_ApplyCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, 0x4, &GHM_GameCrowdInteractionPoint_ApplyCheckpointRecord_Params.Record, 0x4);
};

// Function GameFramework.GameCrowdInteractionPoint.GHM_GameCrowdInteractionPoint_CreateCheckpointRecord
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGHM_GameCrowdInteractionPoint_CheckpointRecord Record                         (CPF_Parm | CPF_OutParm)

void AGameCrowdInteractionPoint::GHM_GameCrowdInteractionPoint_CreateCheckpointRecord(struct FGHM_GameCrowdInteractionPoint_CheckpointRecord& Record)
{
	static UFunction* uFnGHM_GameCrowdInteractionPoint_CreateCheckpointRecord = nullptr;

	if (!uFnGHM_GameCrowdInteractionPoint_CreateCheckpointRecord)
	{
		uFnGHM_GameCrowdInteractionPoint_CreateCheckpointRecord = UFunction::FindFunction("Function GameFramework.GameCrowdInteractionPoint.GHM_GameCrowdInteractionPoint_CreateCheckpointRecord");
	}

	AGameCrowdInteractionPoint_execGHM_GameCrowdInteractionPoint_CreateCheckpointRecord_Params GHM_GameCrowdInteractionPoint_CreateCheckpointRecord_Params;
	memcpy_s(&GHM_GameCrowdInteractionPoint_CreateCheckpointRecord_Params.Record, 0x4, &Record, 0x4);

	this->ProcessEvent(uFnGHM_GameCrowdInteractionPoint_CreateCheckpointRecord, &GHM_GameCrowdInteractionPoint_CreateCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, 0x4, &GHM_GameCrowdInteractionPoint_CreateCheckpointRecord_Params.Record, 0x4);
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AGameCrowdInteractionPoint::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function GameFramework.GameCrowdInteractionPoint.OnToggle");
	}

	AGameCrowdInteractionPoint_execOnToggle_Params OnToggle_Params;
	memcpy_s(&OnToggle_Params.Action, 0x8, &Action, 0x8);

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function GameFramework.GameCrowdBehaviorPoint.Touch
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm | CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AGameCrowdBehaviorPoint::eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal)
{
	static UFunction* uFnTouch = nullptr;

	if (!uFnTouch)
	{
		uFnTouch = UFunction::FindFunction("Function GameFramework.GameCrowdBehaviorPoint.Touch");
	}

	AGameCrowdBehaviorPoint_eventTouch_Params Touch_Params;
	memcpy_s(&Touch_Params.Other, 0x8, &Other, 0x8);
	memcpy_s(&Touch_Params.OtherComp, 0x8, &OtherComp, 0x8);
	memcpy_s(&Touch_Params.HitLocation, 0xC, &HitLocation, 0xC);
	memcpy_s(&Touch_Params.HitNormal, 0xC, &HitNormal, 0xC);

	this->ProcessEvent(uFnTouch, &Touch_Params, nullptr);
};

// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdBehaviorPoint::DestroySelf()
{
	static UFunction* uFnDestroySelf = nullptr;

	if (!uFnDestroySelf)
	{
		uFnDestroySelf = UFunction::FindFunction("Function GameFramework.GameCrowdBehaviorPoint.DestroySelf");
	}

	AGameCrowdBehaviorPoint_execDestroySelf_Params DestroySelf_Params;

	this->ProcessEvent(uFnDestroySelf, &DestroySelf_Params, nullptr);
};

// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdBehaviorPoint::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay");
	}

	AGameCrowdBehaviorPoint_eventPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.DrawDebug
// [0x00C24102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPresistent                    (CPF_OptionalParm | CPF_Parm)
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdDestination::DrawDebug(unsigned long bPresistent, TArray<struct FCrowdSpawnerPlayerInfo>& PlayerInfo)
{
	static UFunction* uFnDrawDebug = nullptr;

	if (!uFnDrawDebug)
	{
		uFnDrawDebug = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.DrawDebug");
	}

	AGameCrowdDestination_execDrawDebug_Params DrawDebug_Params;
	DrawDebug_Params.bPresistent = bPresistent;
	memcpy_s(&DrawDebug_Params.PlayerInfo, 0x10, &PlayerInfo, 0x10);

	this->ProcessEvent(uFnDrawDebug, &DrawDebug_Params, nullptr);

	memcpy_s(&PlayerInfo, 0x10, &DrawDebug_Params.PlayerInfo, 0x10);
};

// Function GameFramework.GameCrowdDestination.GetDestinationRadius
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AGameCrowdDestination::GetDestinationRadius()
{
	static UFunction* uFnGetDestinationRadius = nullptr;

	if (!uFnGetDestinationRadius)
	{
		uFnGetDestinationRadius = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.GetDestinationRadius");
	}

	AGameCrowdDestination_execGetDestinationRadius_Params GetDestinationRadius_Params;

	this->ProcessEvent(uFnGetDestinationRadius, &GetDestinationRadius_Params, nullptr);

	return GetDestinationRadius_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
// [0x00420102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          MaxSpawnDist                   (CPF_Parm)
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdDestination::PrioritizeSpawnPoint(float MaxSpawnDist, TArray<struct FCrowdSpawnerPlayerInfo>& PlayerInfo)
{
	static UFunction* uFnPrioritizeSpawnPoint = nullptr;

	if (!uFnPrioritizeSpawnPoint)
	{
		uFnPrioritizeSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint");
	}

	AGameCrowdDestination_execPrioritizeSpawnPoint_Params PrioritizeSpawnPoint_Params;
	memcpy_s(&PrioritizeSpawnPoint_Params.MaxSpawnDist, 0x4, &MaxSpawnDist, 0x4);
	memcpy_s(&PrioritizeSpawnPoint_Params.PlayerInfo, 0x10, &PlayerInfo, 0x10);

	this->ProcessEvent(uFnPrioritizeSpawnPoint, &PrioritizeSpawnPoint_Params, nullptr);

	memcpy_s(&PlayerInfo, 0x10, &PrioritizeSpawnPoint_Params.PlayerInfo, 0x10);
};

// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
// [0x00C20102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          MaxSpawnDistSq                 (CPF_Parm)
// unsigned long                  bForceNavMeshPathing           (CPF_Parm)
// class UNavigationHandle*       NavHandle                      (CPF_Parm)
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AGameCrowdDestination::AnalyzeSpawnPoint(float MaxSpawnDistSq, unsigned long bForceNavMeshPathing, class UNavigationHandle* NavHandle, TArray<struct FCrowdSpawnerPlayerInfo>& PlayerInfo)
{
	static UFunction* uFnAnalyzeSpawnPoint = nullptr;

	if (!uFnAnalyzeSpawnPoint)
	{
		uFnAnalyzeSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint");
	}

	AGameCrowdDestination_execAnalyzeSpawnPoint_Params AnalyzeSpawnPoint_Params;
	memcpy_s(&AnalyzeSpawnPoint_Params.MaxSpawnDistSq, 0x4, &MaxSpawnDistSq, 0x4);
	AnalyzeSpawnPoint_Params.bForceNavMeshPathing = bForceNavMeshPathing;
	memcpy_s(&AnalyzeSpawnPoint_Params.NavHandle, 0x8, &NavHandle, 0x8);
	memcpy_s(&AnalyzeSpawnPoint_Params.PlayerInfo, 0x10, &PlayerInfo, 0x10);

	this->ProcessEvent(uFnAnalyzeSpawnPoint, &AnalyzeSpawnPoint_Params, nullptr);

	memcpy_s(&PlayerInfo, 0x10, &AnalyzeSpawnPoint_Params.PlayerInfo, 0x10);

	return AnalyzeSpawnPoint_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// [0x00C20102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class USeqAct_GameCrowdSpawner* Spawner                        (CPF_Parm)
// struct FVector                 SpawnPos                       (CPF_Parm | CPF_OutParm)
// struct FRotator                SpawnRot                       (CPF_Parm | CPF_OutParm)

void AGameCrowdDestination::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector& SpawnPos, struct FRotator& SpawnRot)
{
	static UFunction* uFnGetSpawnPosition = nullptr;

	if (!uFnGetSpawnPosition)
	{
		uFnGetSpawnPosition = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.GetSpawnPosition");
	}

	AGameCrowdDestination_execGetSpawnPosition_Params GetSpawnPosition_Params;
	memcpy_s(&GetSpawnPosition_Params.Spawner, 0x8, &Spawner, 0x8);
	memcpy_s(&GetSpawnPosition_Params.SpawnPos, 0xC, &SpawnPos, 0xC);
	memcpy_s(&GetSpawnPosition_Params.SpawnRot, 0xC, &SpawnRot, 0xC);

	this->ProcessEvent(uFnGetSpawnPosition, &GetSpawnPosition_Params, nullptr);

	memcpy_s(&SpawnPos, 0xC, &GetSpawnPosition_Params.SpawnPos, 0xC);
	memcpy_s(&SpawnRot, 0xC, &GetSpawnPosition_Params.SpawnRot, 0xC);
};

// Function GameFramework.GameCrowdDestination.GetSpawnRadius
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float AGameCrowdDestination::GetSpawnRadius()
{
	static UFunction* uFnGetSpawnRadius = nullptr;

	if (!uFnGetSpawnRadius)
	{
		uFnGetSpawnRadius = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.GetSpawnRadius");
	}

	AGameCrowdDestination_execGetSpawnRadius_Params GetSpawnRadius_Params;

	this->ProcessEvent(uFnGetSpawnRadius, &GetSpawnRadius_Params, nullptr);

	return GetSpawnRadius_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

bool AGameCrowdDestination::eventAllowableDestinationFor(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAllowableDestinationFor = nullptr;

	if (!uFnAllowableDestinationFor)
	{
		uFnAllowableDestinationFor = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.AllowableDestinationFor");
	}

	AGameCrowdDestination_eventAllowableDestinationFor_Params AllowableDestinationFor_Params;
	memcpy_s(&AllowableDestinationFor_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnAllowableDestinationFor, &AllowableDestinationFor_Params, nullptr);

	return AllowableDestinationFor_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.AtCapacity
// [0x00024102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        CheckCnt                       (CPF_OptionalParm | CPF_Parm)

bool AGameCrowdDestination::AtCapacity(uint8_t CheckCnt)
{
	static UFunction* uFnAtCapacity = nullptr;

	if (!uFnAtCapacity)
	{
		uFnAtCapacity = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.AtCapacity");
	}

	AGameCrowdDestination_execAtCapacity_Params AtCapacity_Params;
	memcpy_s(&AtCapacity_Params.CheckCnt, 0x1, &CheckCnt, 0x1);

	this->ProcessEvent(uFnAtCapacity, &AtCapacity_Params, nullptr);

	return AtCapacity_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         ArrivingAgent                  (CPF_Parm)

void AGameCrowdDestination::eventIncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent)
{
	static UFunction* uFnIncrementCustomerCount = nullptr;

	if (!uFnIncrementCustomerCount)
	{
		uFnIncrementCustomerCount = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.IncrementCustomerCount");
	}

	AGameCrowdDestination_eventIncrementCustomerCount_Params IncrementCustomerCount_Params;
	memcpy_s(&IncrementCustomerCount_Params.ArrivingAgent, 0x8, &ArrivingAgent, 0x8);

	this->ProcessEvent(uFnIncrementCustomerCount, &IncrementCustomerCount_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         DepartingAgent                 (CPF_Parm)

void AGameCrowdDestination::eventDecrementCustomerCount(class AGameCrowdAgent* DepartingAgent)
{
	static UFunction* uFnDecrementCustomerCount = nullptr;

	if (!uFnDecrementCustomerCount)
	{
		uFnDecrementCustomerCount = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.DecrementCustomerCount");
	}

	AGameCrowdDestination_eventDecrementCustomerCount_Params DecrementCustomerCount_Params;
	memcpy_s(&DecrementCustomerCount_Params.DepartingAgent, 0x8, &DepartingAgent, 0x8);

	this->ProcessEvent(uFnDecrementCustomerCount, &DecrementCustomerCount_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// unsigned long                  bIgnoreRestrictions            (CPF_Parm)

void AGameCrowdDestination::PickNewDestinationFor(class AGameCrowdAgent* Agent, unsigned long bIgnoreRestrictions)
{
	static UFunction* uFnPickNewDestinationFor = nullptr;

	if (!uFnPickNewDestinationFor)
	{
		uFnPickNewDestinationFor = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.PickNewDestinationFor");
	}

	AGameCrowdDestination_execPickNewDestinationFor_Params PickNewDestinationFor_Params;
	memcpy_s(&PickNewDestinationFor_Params.Agent, 0x8, &Agent, 0x8);
	PickNewDestinationFor_Params.bIgnoreRestrictions = bIgnoreRestrictions;

	this->ProcessEvent(uFnPickNewDestinationFor, &PickNewDestinationFor_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGameCrowdDestination::eventReachedDestination(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnReachedDestination = nullptr;

	if (!uFnReachedDestination)
	{
		uFnReachedDestination = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.ReachedDestination");
	}

	AGameCrowdDestination_eventReachedDestination_Params ReachedDestination_Params;
	memcpy_s(&ReachedDestination_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnReachedDestination, &ReachedDestination_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.Destroyed
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdDestination::Destroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.Destroyed");
	}

	AGameCrowdDestination_execDestroyed_Params Destroyed_Params;

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdDestination::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.PostBeginPlay");
	}

	AGameCrowdDestination_execPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
// [0x00020500] (FUNC_NetRequest | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// struct FVector                 TestPosition                   (CPF_Parm)
// unsigned long                  bTestExactly                   (CPF_Parm)

bool AGameCrowdDestination::ReachedByAgent(class AGameCrowdAgent* Agent, struct FVector TestPosition, unsigned long bTestExactly)
{
	static UFunction* uFnReachedByAgent = nullptr;

	if (!uFnReachedByAgent)
	{
		uFnReachedByAgent = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.ReachedByAgent");
	}

	AGameCrowdDestination_execReachedByAgent_Params ReachedByAgent_Params;
	memcpy_s(&ReachedByAgent_Params.Agent, 0x8, &Agent, 0x8);
	memcpy_s(&ReachedByAgent_Params.TestPosition, 0xC, &TestPosition, 0xC);
	ReachedByAgent_Params.bTestExactly = bTestExactly;

	uFnReachedByAgent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReachedByAgent, &ReachedByAgent_Params, nullptr);

	uFnReachedByAgent->FunctionFlags |= 0x400;

	return ReachedByAgent_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasCustomer()
{
	static UFunction* uFnHasCustomer = nullptr;

	if (!uFnHasCustomer)
	{
		uFnHasCustomer = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer");
	}

	AGameCrowdDestinationQueuePoint_execHasCustomer_Params HasCustomer_Params;

	this->ProcessEvent(uFnHasCustomer, &HasCustomer_Params, nullptr);

	return HasCustomer_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         OldCustomer                    (CPF_Parm)

void AGameCrowdDestinationQueuePoint::ClearQueue(class AGameCrowdAgent* OldCustomer)
{
	static UFunction* uFnClearQueue = nullptr;

	if (!uFnClearQueue)
	{
		uFnClearQueue = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue");
	}

	AGameCrowdDestinationQueuePoint_execClearQueue_Params ClearQueue_Params;
	memcpy_s(&ClearQueue_Params.OldCustomer, 0x8, &OldCustomer, 0x8);

	this->ProcessEvent(uFnClearQueue, &ClearQueue_Params, nullptr);
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         NewCustomer                    (CPF_Parm)
// class AGameCrowdInteractionPoint* PreviousPosition               (CPF_Parm)

void AGameCrowdDestinationQueuePoint::AddCustomer(class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition)
{
	static UFunction* uFnAddCustomer = nullptr;

	if (!uFnAddCustomer)
	{
		uFnAddCustomer = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer");
	}

	AGameCrowdDestinationQueuePoint_execAddCustomer_Params AddCustomer_Params;
	memcpy_s(&AddCustomer_Params.NewCustomer, 0x8, &NewCustomer, 0x8);
	memcpy_s(&AddCustomer_Params.PreviousPosition, 0x8, &PreviousPosition, 0x8);

	this->ProcessEvent(uFnAddCustomer, &AddCustomer_Params, nullptr);
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00040103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Private | FUNC_AllFlags)
// Parameter info:

void AGameCrowdDestinationQueuePoint::ActuallyAdvance()
{
	static UFunction* uFnActuallyAdvance = nullptr;

	if (!uFnActuallyAdvance)
	{
		uFnActuallyAdvance = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance");
	}

	AGameCrowdDestinationQueuePoint_execActuallyAdvance_Params ActuallyAdvance_Params;

	this->ProcessEvent(uFnActuallyAdvance, &ActuallyAdvance_Params, nullptr);
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdInteractionPoint* FrontPosition                  (CPF_Parm)

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo(class AGameCrowdInteractionPoint* FrontPosition)
{
	static UFunction* uFnAdvanceCustomerTo = nullptr;

	if (!uFnAdvanceCustomerTo)
	{
		uFnAdvanceCustomerTo = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo");
	}

	AGameCrowdDestinationQueuePoint_execAdvanceCustomerTo_Params AdvanceCustomerTo_Params;
	memcpy_s(&AdvanceCustomerTo_Params.FrontPosition, 0x8, &FrontPosition, 0x8);

	this->ProcessEvent(uFnAdvanceCustomerTo, &AdvanceCustomerTo_Params, nullptr);
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGameCrowdDestinationQueuePoint::eventReachedDestination(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnReachedDestination = nullptr;

	if (!uFnReachedDestination)
	{
		uFnReachedDestination = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination");
	}

	AGameCrowdDestinationQueuePoint_eventReachedDestination_Params ReachedDestination_Params;
	memcpy_s(&ReachedDestination_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnReachedDestination, &ReachedDestination_Params, nullptr);
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasSpace()
{
	static UFunction* uFnHasSpace = nullptr;

	if (!uFnHasSpace)
	{
		uFnHasSpace = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace");
	}

	AGameCrowdDestinationQueuePoint_execHasSpace_Params HasSpace_Params;

	this->ProcessEvent(uFnHasSpace, &HasSpace_Params, nullptr);

	return HasSpace_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// struct FVector                 TestPosition                   (CPF_Parm)

bool AGameCrowdDestinationQueuePoint::QueueReachedBy(class AGameCrowdAgent* Agent, struct FVector TestPosition)
{
	static UFunction* uFnQueueReachedBy = nullptr;

	if (!uFnQueueReachedBy)
	{
		uFnQueueReachedBy = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy");
	}

	AGameCrowdDestinationQueuePoint_execQueueReachedBy_Params QueueReachedBy_Params;
	memcpy_s(&QueueReachedBy_Params.Agent, 0x8, &Agent, 0x8);
	memcpy_s(&QueueReachedBy_Params.TestPosition, 0xC, &TestPosition, 0xC);

	uFnQueueReachedBy->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnQueueReachedBy, &QueueReachedBy_Params, nullptr);

	uFnQueueReachedBy->FunctionFlags |= 0x400;

	return QueueReachedBy_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// [0x00C20802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   SpawnLoc                       (CPF_Parm)
// class AGameCrowdAgent*         AgentTemplate                  (CPF_Parm)
// class UGameCrowdGroup*         NewGroup                       (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class AGameCrowdAgent* AGameCrowdPopulationManager::eventCreateNewAgent(class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnCreateNewAgent = nullptr;

	if (!uFnCreateNewAgent)
	{
		uFnCreateNewAgent = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.CreateNewAgent");
	}

	AGameCrowdPopulationManager_eventCreateNewAgent_Params CreateNewAgent_Params;
	memcpy_s(&CreateNewAgent_Params.SpawnLoc, 0x8, &SpawnLoc, 0x8);
	memcpy_s(&CreateNewAgent_Params.AgentTemplate, 0x8, &AgentTemplate, 0x8);
	memcpy_s(&CreateNewAgent_Params.NewGroup, 0x8, &NewGroup, 0x8);
	memcpy_s(&CreateNewAgent_Params.Item, 0x90, &Item, 0x90);

	this->ProcessEvent(uFnCreateNewAgent, &CreateNewAgent_Params, nullptr);

	memcpy_s(&Item, 0x90, &CreateNewAgent_Params.Item, 0x90);

	return CreateNewAgent_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.Warmup
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        WarmupNum                      (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AGameCrowdPopulationManager::Warmup(int32_t WarmupNum, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnWarmup = nullptr;

	if (!uFnWarmup)
	{
		uFnWarmup = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.Warmup");
	}

	AGameCrowdPopulationManager_execWarmup_Params Warmup_Params;
	memcpy_s(&Warmup_Params.WarmupNum, 0x4, &WarmupNum, 0x4);
	memcpy_s(&Warmup_Params.Item, 0x90, &Item, 0x90);

	uFnWarmup->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnWarmup, &Warmup_Params, nullptr);

	uFnWarmup->FunctionFlags |= 0x400;

	memcpy_s(&Item, 0x90, &Warmup_Params.Item, 0x90);

	return Warmup_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   SpawnLoc                       (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgent(class AGameCrowdDestination* SpawnLoc, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnSpawnAgent = nullptr;

	if (!uFnSpawnAgent)
	{
		uFnSpawnAgent = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.SpawnAgent");
	}

	AGameCrowdPopulationManager_execSpawnAgent_Params SpawnAgent_Params;
	memcpy_s(&SpawnAgent_Params.SpawnLoc, 0x8, &SpawnLoc, 0x8);
	memcpy_s(&SpawnAgent_Params.Item, 0x90, &Item, 0x90);

	uFnSpawnAgent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSpawnAgent, &SpawnAgent_Params, nullptr);

	uFnSpawnAgent->FunctionFlags |= 0x400;

	memcpy_s(&Item, 0x90, &SpawnAgent_Params.Item, 0x90);

	return SpawnAgent_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        SpawnerIdx                     (CPF_Parm)
// class AGameCrowdDestination*   SpawnLoc                       (CPF_Parm)

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgentByIdx(int32_t SpawnerIdx, class AGameCrowdDestination* SpawnLoc)
{
	static UFunction* uFnSpawnAgentByIdx = nullptr;

	if (!uFnSpawnAgentByIdx)
	{
		uFnSpawnAgentByIdx = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx");
	}

	AGameCrowdPopulationManager_execSpawnAgentByIdx_Params SpawnAgentByIdx_Params;
	memcpy_s(&SpawnAgentByIdx_Params.SpawnerIdx, 0x4, &SpawnerIdx, 0x4);
	memcpy_s(&SpawnAgentByIdx_Params.SpawnLoc, 0x8, &SpawnLoc, 0x8);

	uFnSpawnAgentByIdx->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSpawnAgentByIdx, &SpawnAgentByIdx_Params, nullptr);

	uFnSpawnAgentByIdx->FunctionFlags |= 0x400;

	return SpawnAgentByIdx_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// [0x00C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdDestination*   Candidate                      (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AGameCrowdPopulationManager::ValidateSpawnAt(class AGameCrowdDestination* Candidate, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnValidateSpawnAt = nullptr;

	if (!uFnValidateSpawnAt)
	{
		uFnValidateSpawnAt = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt");
	}

	AGameCrowdPopulationManager_execValidateSpawnAt_Params ValidateSpawnAt_Params;
	memcpy_s(&ValidateSpawnAt_Params.Candidate, 0x8, &Candidate, 0x8);
	memcpy_s(&ValidateSpawnAt_Params.Item, 0x90, &Item, 0x90);

	this->ProcessEvent(uFnValidateSpawnAt, &ValidateSpawnAt_Params, nullptr);

	memcpy_s(&Item, 0x90, &ValidateSpawnAt_Params.Item, 0x90);

	return ValidateSpawnAt_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdDestination*   GCD                            (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint(class AGameCrowdDestination* GCD, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnAddPrioritizedSpawnPoint = nullptr;

	if (!uFnAddPrioritizedSpawnPoint)
	{
		uFnAddPrioritizedSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint");
	}

	AGameCrowdPopulationManager_execAddPrioritizedSpawnPoint_Params AddPrioritizedSpawnPoint_Params;
	memcpy_s(&AddPrioritizedSpawnPoint_Params.GCD, 0x8, &GCD, 0x8);
	memcpy_s(&AddPrioritizedSpawnPoint_Params.Item, 0x90, &Item, 0x90);

	this->ProcessEvent(uFnAddPrioritizedSpawnPoint, &AddPrioritizedSpawnPoint_Params, nullptr);

	memcpy_s(&Item, 0x90, &AddPrioritizedSpawnPoint_Params.Item, 0x90);
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        StartIndex                     (CPF_Parm)
// int32_t                        NumToUpdate                    (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdPopulationManager::AnalyzeSpawnPoints(int32_t StartIndex, int32_t NumToUpdate, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnAnalyzeSpawnPoints = nullptr;

	if (!uFnAnalyzeSpawnPoints)
	{
		uFnAnalyzeSpawnPoints = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints");
	}

	AGameCrowdPopulationManager_execAnalyzeSpawnPoints_Params AnalyzeSpawnPoints_Params;
	memcpy_s(&AnalyzeSpawnPoints_Params.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&AnalyzeSpawnPoints_Params.NumToUpdate, 0x4, &NumToUpdate, 0x4);
	memcpy_s(&AnalyzeSpawnPoints_Params.Item, 0x90, &Item, 0x90);

	this->ProcessEvent(uFnAnalyzeSpawnPoints, &AnalyzeSpawnPoints_Params, nullptr);

	memcpy_s(&Item, 0x90, &AnalyzeSpawnPoints_Params.Item, 0x90);
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// [0x00420802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGameCrowdPopulationManager::eventPrioritizeSpawnPoints(float DeltaTime, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnPrioritizeSpawnPoints = nullptr;

	if (!uFnPrioritizeSpawnPoints)
	{
		uFnPrioritizeSpawnPoints = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints");
	}

	AGameCrowdPopulationManager_eventPrioritizeSpawnPoints_Params PrioritizeSpawnPoints_Params;
	memcpy_s(&PrioritizeSpawnPoints_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&PrioritizeSpawnPoints_Params.Item, 0x90, &Item, 0x90);

	this->ProcessEvent(uFnPrioritizeSpawnPoints, &PrioritizeSpawnPoints_Params, nullptr);

	memcpy_s(&Item, 0x90, &PrioritizeSpawnPoints_Params.Item, 0x90);
};

// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
// [0x00422500] (FUNC_NetRequest | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<struct FCrowdSpawnerPlayerInfo> out_PlayerInfo                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AGameCrowdPopulationManager::StaticGetPlayerInfo(TArray<struct FCrowdSpawnerPlayerInfo>& out_PlayerInfo)
{
	static UFunction* uFnStaticGetPlayerInfo = nullptr;

	if (!uFnStaticGetPlayerInfo)
	{
		uFnStaticGetPlayerInfo = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo");
	}

	AGameCrowdPopulationManager_execStaticGetPlayerInfo_Params StaticGetPlayerInfo_Params;
	memcpy_s(&StaticGetPlayerInfo_Params.out_PlayerInfo, 0x10, &out_PlayerInfo, 0x10);

	uFnStaticGetPlayerInfo->FunctionFlags |= ~0x400;

	AGameCrowdPopulationManager::StaticClass()->ProcessEvent(uFnStaticGetPlayerInfo, &StaticGetPlayerInfo_Params, nullptr);

	uFnStaticGetPlayerInfo->FunctionFlags |= 0x400;

	memcpy_s(&out_PlayerInfo, 0x10, &StaticGetPlayerInfo_Params.out_PlayerInfo, 0x10);

	return StaticGetPlayerInfo_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
// [0x00020500] (FUNC_NetRequest | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdPopulationManager::GetPlayerInfo()
{
	static UFunction* uFnGetPlayerInfo = nullptr;

	if (!uFnGetPlayerInfo)
	{
		uFnGetPlayerInfo = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo");
	}

	AGameCrowdPopulationManager_execGetPlayerInfo_Params GetPlayerInfo_Params;

	uFnGetPlayerInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetPlayerInfo, &GetPlayerInfo_Params, nullptr);

	uFnGetPlayerInfo->FunctionFlags |= 0x400;

	return GetPlayerInfo_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// [0x00420802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdDestination*   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class AGameCrowdDestination* AGameCrowdPopulationManager::eventPickSpawnPoint(struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnPickSpawnPoint = nullptr;

	if (!uFnPickSpawnPoint)
	{
		uFnPickSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint");
	}

	AGameCrowdPopulationManager_eventPickSpawnPoint_Params PickSpawnPoint_Params;
	memcpy_s(&PickSpawnPoint_Params.Item, 0x90, &Item, 0x90);

	this->ProcessEvent(uFnPickSpawnPoint, &PickSpawnPoint_Params, nullptr);

	memcpy_s(&Item, 0x90, &PickSpawnPoint_Params.Item, 0x90);

	return PickSpawnPoint_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
// [0x00420802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AGameCrowdPopulationManager::eventUpdateSpawner(float DeltaTime, struct FCrowdSpawnInfoItem& Item)
{
	static UFunction* uFnUpdateSpawner = nullptr;

	if (!uFnUpdateSpawner)
	{
		uFnUpdateSpawner = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.UpdateSpawner");
	}

	AGameCrowdPopulationManager_eventUpdateSpawner_Params UpdateSpawner_Params;
	memcpy_s(&UpdateSpawner_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&UpdateSpawner_Params.Item, 0x90, &Item, 0x90);

	this->ProcessEvent(uFnUpdateSpawner, &UpdateSpawner_Params, nullptr);

	memcpy_s(&Item, 0x90, &UpdateSpawner_Params.Item, 0x90);

	return UpdateSpawner_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void AGameCrowdPopulationManager::UpdateAllSpawners(float DeltaTime)
{
	static UFunction* uFnUpdateAllSpawners = nullptr;

	if (!uFnUpdateAllSpawners)
	{
		uFnUpdateAllSpawners = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners");
	}

	AGameCrowdPopulationManager_execUpdateAllSpawners_Params UpdateAllSpawners_Params;
	memcpy_s(&UpdateAllSpawners_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnUpdateAllSpawners->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateAllSpawners, &UpdateAllSpawners_Params, nullptr);

	uFnUpdateAllSpawners->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdPopulationManager.Tick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void AGameCrowdPopulationManager::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.Tick");
	}

	AGameCrowdPopulationManager_execTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdPopulationManager::ShouldDebugDestinations()
{
	static UFunction* uFnShouldDebugDestinations = nullptr;

	if (!uFnShouldDebugDestinations)
	{
		uFnShouldDebugDestinations = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations");
	}

	AGameCrowdPopulationManager_execShouldDebugDestinations_Params ShouldDebugDestinations_Params;

	this->ProcessEvent(uFnShouldDebugDestinations, &ShouldDebugDestinations_Params, nullptr);

	return ShouldDebugDestinations_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGameCrowdPopulationManager::IsSpawningActive()
{
	static UFunction* uFnIsSpawningActive = nullptr;

	if (!uFnIsSpawningActive)
	{
		uFnIsSpawningActive = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.IsSpawningActive");
	}

	AGameCrowdPopulationManager_execIsSpawningActive_Params IsSpawningActive_Params;

	this->ProcessEvent(uFnIsSpawningActive, &IsSpawningActive_Params, nullptr);

	return IsSpawningActive_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// [0x00C20102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AGameCrowdPopulationManager::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.DisplayDebug");
	}

	AGameCrowdPopulationManager_execDisplayDebug_Params DisplayDebug_Params;
	memcpy_s(&DisplayDebug_Params.HUD, 0x8, &HUD, 0x8);
	memcpy_s(&DisplayDebug_Params.out_YL, 0x4, &out_YL, 0x4);
	memcpy_s(&DisplayDebug_Params.out_YPos, 0x4, &out_YPos, 0x4);

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, 0x4, &DisplayDebug_Params.out_YL, 0x4);
	memcpy_s(&out_YPos, 0x4, &DisplayDebug_Params.out_YPos, 0x4);
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGameCrowdPopulationManager::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAgentDestroyed = nullptr;

	if (!uFnAgentDestroyed)
	{
		uFnAgentDestroyed = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.AgentDestroyed");
	}

	AGameCrowdPopulationManager_execAgentDestroyed_Params AgentDestroyed_Params;
	memcpy_s(&AgentDestroyed_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnAgentDestroyed, &AgentDestroyed_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdPopulationManager::eventFlushAllAgents()
{
	static UFunction* uFnFlushAllAgents = nullptr;

	if (!uFnFlushAllAgents)
	{
		uFnFlushAllAgents = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.FlushAllAgents");
	}

	AGameCrowdPopulationManager_eventFlushAllAgents_Params FlushAllAgents_Params;

	this->ProcessEvent(uFnFlushAllAgents, &FlushAllAgents_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm | CPF_NeedCtorLink)

void AGameCrowdPopulationManager::eventFlushAgents(struct FCrowdSpawnInfoItem Item)
{
	static UFunction* uFnFlushAgents = nullptr;

	if (!uFnFlushAgents)
	{
		uFnFlushAgents = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.FlushAgents");
	}

	AGameCrowdPopulationManager_eventFlushAgents_Params FlushAgents_Params;
	memcpy_s(&FlushAgents_Params.Item, 0x90, &Item, 0x90);

	this->ProcessEvent(uFnFlushAgents, &FlushAgents_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class USeqAct_GameCrowdPopulationManagerToggle* inAction                       (CPF_Parm)

int32_t AGameCrowdPopulationManager::eventCreateSpawner(class USeqAct_GameCrowdPopulationManagerToggle* inAction)
{
	static UFunction* uFnCreateSpawner = nullptr;

	if (!uFnCreateSpawner)
	{
		uFnCreateSpawner = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.CreateSpawner");
	}

	AGameCrowdPopulationManager_eventCreateSpawner_Params CreateSpawner_Params;
	memcpy_s(&CreateSpawner_Params.inAction, 0x8, &inAction, 0x8);

	this->ProcessEvent(uFnCreateSpawner, &CreateSpawner_Params, nullptr);

	return CreateSpawner_Params.ReturnValue;
};

// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdInfoVolume*    Vol                            (CPF_Parm)

void AGameCrowdPopulationManager::SetCrowdInfoVolume(class AGameCrowdInfoVolume* Vol)
{
	static UFunction* uFnSetCrowdInfoVolume = nullptr;

	if (!uFnSetCrowdInfoVolume)
	{
		uFnSetCrowdInfoVolume = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume");
	}

	AGameCrowdPopulationManager_execSetCrowdInfoVolume_Params SetCrowdInfoVolume_Params;
	memcpy_s(&SetCrowdInfoVolume_Params.Vol, 0x8, &Vol, 0x8);

	this->ProcessEvent(uFnSetCrowdInfoVolume, &SetCrowdInfoVolume_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdDestination*   GCD                            (CPF_Parm)

void AGameCrowdPopulationManager::RemoveSpawnPoint(class AGameCrowdDestination* GCD)
{
	static UFunction* uFnRemoveSpawnPoint = nullptr;

	if (!uFnRemoveSpawnPoint)
	{
		uFnRemoveSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint");
	}

	AGameCrowdPopulationManager_execRemoveSpawnPoint_Params RemoveSpawnPoint_Params;
	memcpy_s(&RemoveSpawnPoint_Params.GCD, 0x8, &GCD, 0x8);

	this->ProcessEvent(uFnRemoveSpawnPoint, &RemoveSpawnPoint_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdDestination*   GCD                            (CPF_Parm)

void AGameCrowdPopulationManager::AddSpawnPoint(class AGameCrowdDestination* GCD)
{
	static UFunction* uFnAddSpawnPoint = nullptr;

	if (!uFnAddSpawnPoint)
	{
		uFnAddSpawnPoint = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint");
	}

	AGameCrowdPopulationManager_execAddSpawnPoint_Params AddSpawnPoint_Params;
	memcpy_s(&AddSpawnPoint_Params.GCD, 0x8, &GCD, 0x8);

	this->ProcessEvent(uFnAddSpawnPoint, &AddSpawnPoint_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdPopulationManager::eventNotifyPathChanged()
{
	static UFunction* uFnNotifyPathChanged = nullptr;

	if (!uFnNotifyPathChanged)
	{
		uFnNotifyPathChanged = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged");
	}

	AGameCrowdPopulationManager_eventNotifyPathChanged_Params NotifyPathChanged_Params;

	this->ProcessEvent(uFnNotifyPathChanged, &NotifyPathChanged_Params, nullptr);
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameCrowdPopulationManager::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameCrowdPopulationManager.PostBeginPlay");
	}

	AGameCrowdPopulationManager_execPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// [0x00020900] (FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   VarName                        (CPF_Parm)

void AGameCrowdReplicationActor::eventReplicatedEvent(struct FName VarName)
{
	static UFunction* uFnReplicatedEvent = nullptr;

	if (!uFnReplicatedEvent)
	{
		uFnReplicatedEvent = UFunction::FindFunction("Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent");
	}

	AGameCrowdReplicationActor_eventReplicatedEvent_Params ReplicatedEvent_Params;
	memcpy_s(&ReplicatedEvent_Params.VarName, 0x8, &VarName, 0x8);

	this->ProcessEvent(uFnReplicatedEvent, &ReplicatedEvent_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
// [0x00880102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCameraShake*            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Epicenter                      (CPF_Parm)
// class APlayerController*       PC                             (CPF_Parm)

class UCameraShake* AGameExplosionActor::ChooseCameraShake(struct FVector Epicenter, class APlayerController* PC)
{
	static UFunction* uFnChooseCameraShake = nullptr;

	if (!uFnChooseCameraShake)
	{
		uFnChooseCameraShake = UFunction::FindFunction("Function GameFramework.GameExplosionActor.ChooseCameraShake");
	}

	AGameExplosionActor_execChooseCameraShake_Params ChooseCameraShake_Params;
	memcpy_s(&ChooseCameraShake_Params.Epicenter, 0xC, &Epicenter, 0xC);
	memcpy_s(&ChooseCameraShake_Params.PC, 0x8, &PC, 0x8);

	this->ProcessEvent(uFnChooseCameraShake, &ChooseCameraShake_Params, nullptr);

	return ChooseCameraShake_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameExplosionActor::SpawnCameraLensEffects()
{
	static UFunction* uFnSpawnCameraLensEffects = nullptr;

	if (!uFnSpawnCameraLensEffects)
	{
		uFnSpawnCameraLensEffects = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpawnCameraLensEffects");
	}

	AGameExplosionActor_execSpawnCameraLensEffects_Params SpawnCameraLensEffects_Params;

	this->ProcessEvent(uFnSpawnCameraLensEffects, &SpawnCameraLensEffects_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameExplosionActor::DoExplosionCameraEffects()
{
	static UFunction* uFnDoExplosionCameraEffects = nullptr;

	if (!uFnDoExplosionCameraEffects)
	{
		uFnDoExplosionCameraEffects = UFunction::FindFunction("Function GameFramework.GameExplosionActor.DoExplosionCameraEffects");
	}

	AGameExplosionActor_execDoExplosionCameraEffects_Params DoExplosionCameraEffects_Params;

	this->ProcessEvent(uFnDoExplosionCameraEffects, &DoExplosionCameraEffects_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.DrawDebug
// [0x00820102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void AGameExplosionActor::DrawDebug()
{
	static UFunction* uFnDrawDebug = nullptr;

	if (!uFnDrawDebug)
	{
		uFnDrawDebug = UFunction::FindFunction("Function GameFramework.GameExplosionActor.DrawDebug");
	}

	AGameExplosionActor_execDrawDebug_Params DrawDebug_Params;

	this->ProcessEvent(uFnDrawDebug, &DrawDebug_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameExplosionActor::DelayedExplosionDamage()
{
	static UFunction* uFnDelayedExplosionDamage = nullptr;

	if (!uFnDelayedExplosionDamage)
	{
		uFnDelayedExplosionDamage = UFunction::FindFunction("Function GameFramework.GameExplosionActor.DelayedExplosionDamage");
	}

	AGameExplosionActor_execDelayedExplosionDamage_Params DelayedExplosionDamage_Params;

	this->ProcessEvent(uFnDelayedExplosionDamage, &DelayedExplosionDamage_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00024102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameExplosion*          NewExplosionTemplate           (CPF_Parm)
// struct FVector                 Direction                      (CPF_OptionalParm | CPF_Parm)

void AGameExplosionActor::Explode(class UGameExplosion* NewExplosionTemplate, struct FVector Direction)
{
	static UFunction* uFnExplode = nullptr;

	if (!uFnExplode)
	{
		uFnExplode = UFunction::FindFunction("Function GameFramework.GameExplosionActor.Explode");
	}

	AGameExplosionActor_execExplode_Params Explode_Params;
	memcpy_s(&Explode_Params.NewExplosionTemplate, 0x8, &NewExplosionTemplate, 0x8);
	memcpy_s(&Explode_Params.Direction, 0xC, &Direction, 0xC);

	this->ProcessEvent(uFnExplode, &Explode_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00020100] (FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameExplosionActor::SpawnExplosionFogVolume()
{
	static UFunction* uFnSpawnExplosionFogVolume = nullptr;

	if (!uFnSpawnExplosionFogVolume)
	{
		uFnSpawnExplosionFogVolume = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume");
	}

	AGameExplosionActor_execSpawnExplosionFogVolume_Params SpawnExplosionFogVolume_Params;

	this->ProcessEvent(uFnSpawnExplosionFogVolume, &SpawnExplosionFogVolume_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00020100] (FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameExplosionActor::SpawnExplosionDecal()
{
	static UFunction* uFnSpawnExplosionDecal = nullptr;

	if (!uFnSpawnExplosionDecal)
	{
		uFnSpawnExplosionDecal = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpawnExplosionDecal");
	}

	AGameExplosionActor_execSpawnExplosionDecal_Params SpawnExplosionDecal_Params;

	this->ProcessEvent(uFnSpawnExplosionDecal, &SpawnExplosionDecal_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00020100] (FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UParticleSystem*         Template                       (CPF_Parm)

void AGameExplosionActor::SpawnExplosionParticleSystem(class UParticleSystem* Template)
{
	static UFunction* uFnSpawnExplosionParticleSystem = nullptr;

	if (!uFnSpawnExplosionParticleSystem)
	{
		uFnSpawnExplosionParticleSystem = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem");
	}

	AGameExplosionActor_execSpawnExplosionParticleSystem_Params SpawnExplosionParticleSystem_Params;
	memcpy_s(&SpawnExplosionParticleSystem_Params.Template, 0x8, &Template, 0x8);

	this->ProcessEvent(uFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00080100] (FUNC_NetRequest | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class UPhysicalMaterial*       PhysMaterial                   (CPF_Parm)

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX(class UPhysicalMaterial* PhysMaterial)
{
	static UFunction* uFnUpdateExplosionTemplateWithPerMaterialFX = nullptr;

	if (!uFnUpdateExplosionTemplateWithPerMaterialFX)
	{
		uFnUpdateExplosionTemplateWithPerMaterialFX = UFunction::FindFunction("Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX");
	}

	AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Params UpdateExplosionTemplateWithPerMaterialFX_Params;
	memcpy_s(&UpdateExplosionTemplateWithPerMaterialFX_Params.PhysMaterial, 0x8, &PhysMaterial, 0x8);

	this->ProcessEvent(uFnUpdateExplosionTemplateWithPerMaterialFX, &UpdateExplosionTemplateWithPerMaterialFX_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
// [0x00080000] (FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class AActor*                  Victim                         (CPF_Parm)
// float                          VictimDist                     (CPF_Parm)

void AGameExplosionActor::SpecialCringeEffectsFor(class AActor* Victim, float VictimDist)
{
	static UFunction* uFnSpecialCringeEffectsFor = nullptr;

	if (!uFnSpecialCringeEffectsFor)
	{
		uFnSpecialCringeEffectsFor = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor");
	}

	AGameExplosionActor_execSpecialCringeEffectsFor_Params SpecialCringeEffectsFor_Params;
	memcpy_s(&SpecialCringeEffectsFor_Params.Victim, 0x8, &Victim, 0x8);
	memcpy_s(&SpecialCringeEffectsFor_Params.VictimDist, 0x4, &VictimDist, 0x4);

	this->ProcessEvent(uFnSpecialCringeEffectsFor, &SpecialCringeEffectsFor_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// [0x00080000] (FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class AGamePawn*               VictimPawn                     (CPF_Parm)
// float                          VictimDist                     (CPF_Parm)

void AGameExplosionActor::SpecialPawnEffectsFor(class AGamePawn* VictimPawn, float VictimDist)
{
	static UFunction* uFnSpecialPawnEffectsFor = nullptr;

	if (!uFnSpecialPawnEffectsFor)
	{
		uFnSpecialPawnEffectsFor = UFunction::FindFunction("Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor");
	}

	AGameExplosionActor_execSpecialPawnEffectsFor_Params SpecialPawnEffectsFor_Params;
	memcpy_s(&SpecialPawnEffectsFor_Params.VictimPawn, 0x8, &VictimPawn, 0x8);
	memcpy_s(&SpecialPawnEffectsFor_Params.VictimDist, 0x4, &VictimDist, 0x4);

	this->ProcessEvent(uFnSpecialPawnEffectsFor, &SpecialPawnEffectsFor_Params, nullptr);
};

// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bCauseDamage                   (CPF_Parm)
// unsigned long                  bCauseFractureEffects          (CPF_Parm)
// unsigned long                  bCauseEffects                  (CPF_Parm)

float AGameExplosionActor::GetEffectCheckRadius(unsigned long bCauseDamage, unsigned long bCauseFractureEffects, unsigned long bCauseEffects)
{
	static UFunction* uFnGetEffectCheckRadius = nullptr;

	if (!uFnGetEffectCheckRadius)
	{
		uFnGetEffectCheckRadius = UFunction::FindFunction("Function GameFramework.GameExplosionActor.GetEffectCheckRadius");
	}

	AGameExplosionActor_execGetEffectCheckRadius_Params GetEffectCheckRadius_Params;
	GetEffectCheckRadius_Params.bCauseDamage = bCauseDamage;
	GetEffectCheckRadius_Params.bCauseFractureEffects = bCauseFractureEffects;
	GetEffectCheckRadius_Params.bCauseEffects = bCauseEffects;

	this->ProcessEvent(uFnGetEffectCheckRadius, &GetEffectCheckRadius_Params, nullptr);

	return GetEffectCheckRadius_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00880102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bCauseDamage                   (CPF_Parm)
// unsigned long                  bCauseEffects                  (CPF_Parm)

bool AGameExplosionActor::DoExplosionDamage(unsigned long bCauseDamage, unsigned long bCauseEffects)
{
	static UFunction* uFnDoExplosionDamage = nullptr;

	if (!uFnDoExplosionDamage)
	{
		uFnDoExplosionDamage = UFunction::FindFunction("Function GameFramework.GameExplosionActor.DoExplosionDamage");
	}

	AGameExplosionActor_execDoExplosionDamage_Params DoExplosionDamage_Params;
	DoExplosionDamage_Params.bCauseDamage = bCauseDamage;
	DoExplosionDamage_Params.bCauseEffects = bCauseEffects;

	this->ProcessEvent(uFnDoExplosionDamage, &DoExplosionDamage_Params, nullptr);

	return DoExplosionDamage_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Start                          (CPF_Parm)
// struct FBox                    BBox                           (CPF_Parm)

float AGameExplosionActor::BoxDistanceToPoint(struct FVector Start, struct FBox BBox)
{
	static UFunction* uFnBoxDistanceToPoint = nullptr;

	if (!uFnBoxDistanceToPoint)
	{
		uFnBoxDistanceToPoint = UFunction::FindFunction("Function GameFramework.GameExplosionActor.BoxDistanceToPoint");
	}

	AGameExplosionActor_execBoxDistanceToPoint_Params BoxDistanceToPoint_Params;
	memcpy_s(&BoxDistanceToPoint_Params.Start, 0xC, &Start, 0xC);
	memcpy_s(&BoxDistanceToPoint_Params.BBox, 0x1C, &BBox, 0x1C);

	uFnBoxDistanceToPoint->FunctionFlags |= ~0x400;

	AGameExplosionActor::StaticClass()->ProcessEvent(uFnBoxDistanceToPoint, &BoxDistanceToPoint_Params, nullptr);

	uFnBoxDistanceToPoint->FunctionFlags |= 0x400;

	return BoxDistanceToPoint_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
// [0x00080102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  A                              (CPF_Parm)

bool AGameExplosionActor::IsBehindExplosion(class AActor* A)
{
	static UFunction* uFnIsBehindExplosion = nullptr;

	if (!uFnIsBehindExplosion)
	{
		uFnIsBehindExplosion = UFunction::FindFunction("Function GameFramework.GameExplosionActor.IsBehindExplosion");
	}

	AGameExplosionActor_execIsBehindExplosion_Params IsBehindExplosion_Params;
	memcpy_s(&IsBehindExplosion_Params.A, 0x8, &A, 0x8);

	this->ProcessEvent(uFnIsBehindExplosion, &IsBehindExplosion_Params, nullptr);

	return IsBehindExplosion_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  Victim                         (CPF_Parm)

bool AGameExplosionActor::DoFullDamageToActor(class AActor* Victim)
{
	static UFunction* uFnDoFullDamageToActor = nullptr;

	if (!uFnDoFullDamageToActor)
	{
		uFnDoFullDamageToActor = UFunction::FindFunction("Function GameFramework.GameExplosionActor.DoFullDamageToActor");
	}

	AGameExplosionActor_execDoFullDamageToActor_Params DoFullDamageToActor_Params;
	memcpy_s(&DoFullDamageToActor_Params.Victim, 0x8, &Victim, 0x8);

	this->ProcessEvent(uFnDoFullDamageToActor, &DoFullDamageToActor_Params, nullptr);

	return DoFullDamageToActor_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00880102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UPhysicalMaterial*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial()
{
	static UFunction* uFnGetPhysicalMaterial = nullptr;

	if (!uFnGetPhysicalMaterial)
	{
		uFnGetPhysicalMaterial = UFunction::FindFunction("Function GameFramework.GameExplosionActor.GetPhysicalMaterial");
	}

	AGameExplosionActor_execGetPhysicalMaterial_Params GetPhysicalMaterial_Params;

	this->ProcessEvent(uFnGetPhysicalMaterial, &GetPhysicalMaterial_Params, nullptr);

	return GetPhysicalMaterial_Params.ReturnValue;
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameExplosionActor::eventPreBeginPlay()
{
	static UFunction* uFnPreBeginPlay = nullptr;

	if (!uFnPreBeginPlay)
	{
		uFnPreBeginPlay = UFunction::FindFunction("Function GameFramework.GameExplosionActor.PreBeginPlay");
	}

	AGameExplosionActor_eventPreBeginPlay_Params PreBeginPlay_Params;

	this->ProcessEvent(uFnPreBeginPlay, &PreBeginPlay_Params, nullptr);
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGamePawn::ReattachMeshWithoutBeingSeen()
{
	static UFunction* uFnReattachMeshWithoutBeingSeen = nullptr;

	if (!uFnReattachMeshWithoutBeingSeen)
	{
		uFnReattachMeshWithoutBeingSeen = UFunction::FindFunction("Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen");
	}

	AGamePawn_execReattachMeshWithoutBeingSeen_Params ReattachMeshWithoutBeingSeen_Params;

	this->ProcessEvent(uFnReattachMeshWithoutBeingSeen, &ReattachMeshWithoutBeingSeen_Params, nullptr);
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGamePawn::ReattachMesh()
{
	static UFunction* uFnReattachMesh = nullptr;

	if (!uFnReattachMesh)
	{
		uFnReattachMesh = UFunction::FindFunction("Function GameFramework.GamePawn.ReattachMesh");
	}

	AGamePawn_execReattachMesh_Params ReattachMesh_Params;

	this->ProcessEvent(uFnReattachMesh, &ReattachMesh_Params, nullptr);
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bInWantShadow                  (CPF_Parm)

void AGamePawn::eventUpdateShadowSettings(unsigned long bInWantShadow)
{
	static UFunction* uFnUpdateShadowSettings = nullptr;

	if (!uFnUpdateShadowSettings)
	{
		uFnUpdateShadowSettings = UFunction::FindFunction("Function GameFramework.GamePawn.UpdateShadowSettings");
	}

	AGamePawn_eventUpdateShadowSettings_Params UpdateShadowSettings_Params;
	UpdateShadowSettings_Params.bInWantShadow = bInWantShadow;

	this->ProcessEvent(uFnUpdateShadowSettings, &UpdateShadowSettings_Params, nullptr);
};

// Function GameFramework.DebugCameraController.ConsoleCommand
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Command                        (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWriteToLog                    (CPF_OptionalParm | CPF_Parm)

class FString ADebugCameraController::ConsoleCommand(class FString Command, unsigned long bWriteToLog)
{
	static UFunction* uFnConsoleCommand = nullptr;

	if (!uFnConsoleCommand)
	{
		uFnConsoleCommand = UFunction::FindFunction("Function GameFramework.DebugCameraController.ConsoleCommand");
	}

	ADebugCameraController_execConsoleCommand_Params ConsoleCommand_Params;
	memcpy_s(&ConsoleCommand_Params.Command, 0x10, &Command, 0x10);
	ConsoleCommand_Params.bWriteToLog = bWriteToLog;

	uFnConsoleCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnConsoleCommand, &ConsoleCommand_Params, nullptr);

	uFnConsoleCommand->FunctionFlags |= 0x400;

	return ConsoleCommand_Params.ReturnValue;
};

// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ADebugCameraController::ShowDebugSelectedInfo()
{
	static UFunction* uFnShowDebugSelectedInfo = nullptr;

	if (!uFnShowDebugSelectedInfo)
	{
		uFnShowDebugSelectedInfo = UFunction::FindFunction("Function GameFramework.DebugCameraController.ShowDebugSelectedInfo");
	}

	ADebugCameraController_execShowDebugSelectedInfo_Params ShowDebugSelectedInfo_Params;

	this->ProcessEvent(uFnShowDebugSelectedInfo, &ShowDebugSelectedInfo_Params, nullptr);
};

// Function GameFramework.DebugCameraController.NativeInputKey
// [0x00824002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// uint8_t                        Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bGamepad                       (CPF_OptionalParm | CPF_Parm)

bool ADebugCameraController::NativeInputKey(int32_t ControllerId, struct FName Key, uint8_t Event, float AmountDepressed, unsigned long bGamepad)
{
	static UFunction* uFnNativeInputKey = nullptr;

	if (!uFnNativeInputKey)
	{
		uFnNativeInputKey = UFunction::FindFunction("Function GameFramework.DebugCameraController.NativeInputKey");
	}

	ADebugCameraController_execNativeInputKey_Params NativeInputKey_Params;
	memcpy_s(&NativeInputKey_Params.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&NativeInputKey_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&NativeInputKey_Params.Event, 0x1, &Event, 0x1);
	memcpy_s(&NativeInputKey_Params.AmountDepressed, 0x4, &AmountDepressed, 0x4);
	NativeInputKey_Params.bGamepad = bGamepad;

	this->ProcessEvent(uFnNativeInputKey, &NativeInputKey_Params, nullptr);

	return NativeInputKey_Params.ReturnValue;
};

// Function GameFramework.DebugCameraController.InitDebugInputSystem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ADebugCameraController::InitDebugInputSystem()
{
	static UFunction* uFnInitDebugInputSystem = nullptr;

	if (!uFnInitDebugInputSystem)
	{
		uFnInitDebugInputSystem = UFunction::FindFunction("Function GameFramework.DebugCameraController.InitDebugInputSystem");
	}

	ADebugCameraController_execInitDebugInputSystem_Params InitDebugInputSystem_Params;

	this->ProcessEvent(uFnInitDebugInputSystem, &InitDebugInputSystem_Params, nullptr);
};

// Function GameFramework.DebugCameraController.DisableDebugCamera
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ADebugCameraController::DisableDebugCamera()
{
	static UFunction* uFnDisableDebugCamera = nullptr;

	if (!uFnDisableDebugCamera)
	{
		uFnDisableDebugCamera = UFunction::FindFunction("Function GameFramework.DebugCameraController.DisableDebugCamera");
	}

	ADebugCameraController_execDisableDebugCamera_Params DisableDebugCamera_Params;

	this->ProcessEvent(uFnDisableDebugCamera, &DisableDebugCamera_Params, nullptr);
};

// Function GameFramework.DebugCameraController.NormalSpeed
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ADebugCameraController::NormalSpeed()
{
	static UFunction* uFnNormalSpeed = nullptr;

	if (!uFnNormalSpeed)
	{
		uFnNormalSpeed = UFunction::FindFunction("Function GameFramework.DebugCameraController.NormalSpeed");
	}

	ADebugCameraController_execNormalSpeed_Params NormalSpeed_Params;

	this->ProcessEvent(uFnNormalSpeed, &NormalSpeed_Params, nullptr);
};

// Function GameFramework.DebugCameraController.MoreSpeed
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ADebugCameraController::MoreSpeed()
{
	static UFunction* uFnMoreSpeed = nullptr;

	if (!uFnMoreSpeed)
	{
		uFnMoreSpeed = UFunction::FindFunction("Function GameFramework.DebugCameraController.MoreSpeed");
	}

	ADebugCameraController_execMoreSpeed_Params MoreSpeed_Params;

	this->ProcessEvent(uFnMoreSpeed, &MoreSpeed_Params, nullptr);
};

// Function GameFramework.DebugCameraController.SetFreezeRendering
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ADebugCameraController::SetFreezeRendering()
{
	static UFunction* uFnSetFreezeRendering = nullptr;

	if (!uFnSetFreezeRendering)
	{
		uFnSetFreezeRendering = UFunction::FindFunction("Function GameFramework.DebugCameraController.SetFreezeRendering");
	}

	ADebugCameraController_execSetFreezeRendering_Params SetFreezeRendering_Params;

	this->ProcessEvent(uFnSetFreezeRendering, &SetFreezeRendering_Params, nullptr);
};

// Function GameFramework.DebugCameraController.OnDeactivate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       PC                             (CPF_Parm)

void ADebugCameraController::OnDeactivate(class APlayerController* PC)
{
	static UFunction* uFnOnDeactivate = nullptr;

	if (!uFnOnDeactivate)
	{
		uFnOnDeactivate = UFunction::FindFunction("Function GameFramework.DebugCameraController.OnDeactivate");
	}

	ADebugCameraController_execOnDeactivate_Params OnDeactivate_Params;
	memcpy_s(&OnDeactivate_Params.PC, 0x8, &PC, 0x8);

	this->ProcessEvent(uFnOnDeactivate, &OnDeactivate_Params, nullptr);
};

// Function GameFramework.DebugCameraController.OnActivate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       PC                             (CPF_Parm)

void ADebugCameraController::OnActivate(class APlayerController* PC)
{
	static UFunction* uFnOnActivate = nullptr;

	if (!uFnOnActivate)
	{
		uFnOnActivate = UFunction::FindFunction("Function GameFramework.DebugCameraController.OnActivate");
	}

	ADebugCameraController_execOnActivate_Params OnActivate_Params;
	memcpy_s(&OnActivate_Params.PC, 0x8, &PC, 0x8);

	this->ProcessEvent(uFnOnActivate, &OnActivate_Params, nullptr);
};

// Function GameFramework.DebugCameraController.PostBeginPlay
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ADebugCameraController::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.DebugCameraController.PostBeginPlay");
	}

	ADebugCameraController_eventPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.DebugCameraController.Unselect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ADebugCameraController::Unselect()
{
	static UFunction* uFnUnselect = nullptr;

	if (!uFnUnselect)
	{
		uFnUnselect = UFunction::FindFunction("Function GameFramework.DebugCameraController.Unselect");
	}

	ADebugCameraController_execUnselect_Params Unselect_Params;

	uFnUnselect->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnselect, &Unselect_Params, nullptr);

	uFnUnselect->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraController.SecondarySelect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 HitLoc                         (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_Parm)

void ADebugCameraController::SecondarySelect(struct FVector HitLoc, struct FVector HitNormal, struct FTraceHitInfo HitInfo)
{
	static UFunction* uFnSecondarySelect = nullptr;

	if (!uFnSecondarySelect)
	{
		uFnSecondarySelect = UFunction::FindFunction("Function GameFramework.DebugCameraController.SecondarySelect");
	}

	ADebugCameraController_execSecondarySelect_Params SecondarySelect_Params;
	memcpy_s(&SecondarySelect_Params.HitLoc, 0xC, &HitLoc, 0xC);
	memcpy_s(&SecondarySelect_Params.HitNormal, 0xC, &HitNormal, 0xC);
	memcpy_s(&SecondarySelect_Params.HitInfo, 0x28, &HitInfo, 0x28);

	uFnSecondarySelect->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSecondarySelect, &SecondarySelect_Params, nullptr);

	uFnSecondarySelect->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraController.PrimarySelect
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 HitLoc                         (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_Parm)

void ADebugCameraController::PrimarySelect(struct FVector HitLoc, struct FVector HitNormal, struct FTraceHitInfo HitInfo)
{
	static UFunction* uFnPrimarySelect = nullptr;

	if (!uFnPrimarySelect)
	{
		uFnPrimarySelect = UFunction::FindFunction("Function GameFramework.DebugCameraController.PrimarySelect");
	}

	ADebugCameraController_execPrimarySelect_Params PrimarySelect_Params;
	memcpy_s(&PrimarySelect_Params.HitLoc, 0xC, &HitLoc, 0xC);
	memcpy_s(&PrimarySelect_Params.HitNormal, 0xC, &HitNormal, 0xC);
	memcpy_s(&PrimarySelect_Params.HitInfo, 0x28, &HitInfo, 0x28);

	uFnPrimarySelect->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPrimarySelect, &PrimarySelect_Params, nullptr);

	uFnPrimarySelect->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileHUD.RenderKismetHud
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileHUD::RenderKismetHud()
{
	static UFunction* uFnRenderKismetHud = nullptr;

	if (!uFnRenderKismetHud)
	{
		uFnRenderKismetHud = UFunction::FindFunction("Function GameFramework.MobileHUD.RenderKismetHud");
	}

	AMobileHUD_execRenderKismetHud_Params RenderKismetHud_Params;

	this->ProcessEvent(uFnRenderKismetHud, &RenderKismetHud_Params, nullptr);
};

// Function GameFramework.MobileHUD.AddKismetRenderEvent
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqEvent_HudRender*     NewEvent                       (CPF_Parm)

void AMobileHUD::AddKismetRenderEvent(class USeqEvent_HudRender* NewEvent)
{
	static UFunction* uFnAddKismetRenderEvent = nullptr;

	if (!uFnAddKismetRenderEvent)
	{
		uFnAddKismetRenderEvent = UFunction::FindFunction("Function GameFramework.MobileHUD.AddKismetRenderEvent");
	}

	AMobileHUD_execAddKismetRenderEvent_Params AddKismetRenderEvent_Params;
	memcpy_s(&AddKismetRenderEvent_Params.NewEvent, 0x8, &NewEvent, 0x8);

	this->ProcessEvent(uFnAddKismetRenderEvent, &AddKismetRenderEvent_Params, nullptr);
};

// Function GameFramework.MobileHUD.RefreshKismetLinks
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileHUD::RefreshKismetLinks()
{
	static UFunction* uFnRefreshKismetLinks = nullptr;

	if (!uFnRefreshKismetLinks)
	{
		uFnRefreshKismetLinks = UFunction::FindFunction("Function GameFramework.MobileHUD.RefreshKismetLinks");
	}

	AMobileHUD_execRefreshKismetLinks_Params RefreshKismetLinks_Params;

	this->ProcessEvent(uFnRefreshKismetLinks, &RefreshKismetLinks_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawMobileZone_Slider
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Slider(class UMobileInputZone* Zone)
{
	static UFunction* uFnDrawMobileZone_Slider = nullptr;

	if (!uFnDrawMobileZone_Slider)
	{
		uFnDrawMobileZone_Slider = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileZone_Slider");
	}

	AMobileHUD_execDrawMobileZone_Slider_Params DrawMobileZone_Slider_Params;
	memcpy_s(&DrawMobileZone_Slider_Params.Zone, 0x8, &Zone, 0x8);

	this->ProcessEvent(uFnDrawMobileZone_Slider, &DrawMobileZone_Slider_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawMobileTilt
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobilePlayerInput*      MobileInput                    (CPF_Parm)

void AMobileHUD::DrawMobileTilt(class UMobilePlayerInput* MobileInput)
{
	static UFunction* uFnDrawMobileTilt = nullptr;

	if (!uFnDrawMobileTilt)
	{
		uFnDrawMobileTilt = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileTilt");
	}

	AMobileHUD_execDrawMobileTilt_Params DrawMobileTilt_Params;
	memcpy_s(&DrawMobileTilt_Params.MobileInput, 0x8, &MobileInput, 0x8);

	this->ProcessEvent(uFnDrawMobileTilt, &DrawMobileTilt_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Trackball(class UMobileInputZone* Zone)
{
	static UFunction* uFnDrawMobileZone_Trackball = nullptr;

	if (!uFnDrawMobileZone_Trackball)
	{
		uFnDrawMobileZone_Trackball = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileZone_Trackball");
	}

	AMobileHUD_execDrawMobileZone_Trackball_Params DrawMobileZone_Trackball_Params;
	memcpy_s(&DrawMobileZone_Trackball_Params.Zone, 0x8, &Zone, 0x8);

	this->ProcessEvent(uFnDrawMobileZone_Trackball, &DrawMobileZone_Trackball_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Joystick(class UMobileInputZone* Zone)
{
	static UFunction* uFnDrawMobileZone_Joystick = nullptr;

	if (!uFnDrawMobileZone_Joystick)
	{
		uFnDrawMobileZone_Joystick = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileZone_Joystick");
	}

	AMobileHUD_execDrawMobileZone_Joystick_Params DrawMobileZone_Joystick_Params;
	memcpy_s(&DrawMobileZone_Joystick_Params.Zone, 0x8, &Zone, 0x8);

	this->ProcessEvent(uFnDrawMobileZone_Joystick, &DrawMobileZone_Joystick_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawMobileZone_Button
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Button(class UMobileInputZone* Zone)
{
	static UFunction* uFnDrawMobileZone_Button = nullptr;

	if (!uFnDrawMobileZone_Button)
	{
		uFnDrawMobileZone_Button = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileZone_Button");
	}

	AMobileHUD_execDrawMobileZone_Button_Params DrawMobileZone_Button_Params;
	memcpy_s(&DrawMobileZone_Button_Params.Zone, 0x8, &Zone, 0x8);

	this->ProcessEvent(uFnDrawMobileZone_Button, &DrawMobileZone_Button_Params, nullptr);
};

// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileHUD::DrawInputZoneOverlays()
{
	static UFunction* uFnDrawInputZoneOverlays = nullptr;

	if (!uFnDrawInputZoneOverlays)
	{
		uFnDrawInputZoneOverlays = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawInputZoneOverlays");
	}

	AMobileHUD_execDrawInputZoneOverlays_Params DrawInputZoneOverlays_Params;

	this->ProcessEvent(uFnDrawInputZoneOverlays, &DrawInputZoneOverlays_Params, nullptr);
};

// Function GameFramework.MobileHUD.RenderMobileMenu
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileHUD::RenderMobileMenu()
{
	static UFunction* uFnRenderMobileMenu = nullptr;

	if (!uFnRenderMobileMenu)
	{
		uFnRenderMobileMenu = UFunction::FindFunction("Function GameFramework.MobileHUD.RenderMobileMenu");
	}

	AMobileHUD_execRenderMobileMenu_Params RenderMobileMenu_Params;

	this->ProcessEvent(uFnRenderMobileMenu, &RenderMobileMenu_Params, nullptr);
};

// Function GameFramework.MobileHUD.ShowMobileHud
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AMobileHUD::ShowMobileHud()
{
	static UFunction* uFnShowMobileHud = nullptr;

	if (!uFnShowMobileHud)
	{
		uFnShowMobileHud = UFunction::FindFunction("Function GameFramework.MobileHUD.ShowMobileHud");
	}

	AMobileHUD_execShowMobileHud_Params ShowMobileHud_Params;

	this->ProcessEvent(uFnShowMobileHud, &ShowMobileHud_Params, nullptr);

	return ShowMobileHud_Params.ReturnValue;
};

// Function GameFramework.MobileHUD.DrawMobileDebugString
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          XPos                           (CPF_Parm)
// float                          YPos                           (CPF_Parm)
// class FString                  Str                            (CPF_Parm | CPF_NeedCtorLink)

void AMobileHUD::DrawMobileDebugString(float XPos, float YPos, class FString Str)
{
	static UFunction* uFnDrawMobileDebugString = nullptr;

	if (!uFnDrawMobileDebugString)
	{
		uFnDrawMobileDebugString = UFunction::FindFunction("Function GameFramework.MobileHUD.DrawMobileDebugString");
	}

	AMobileHUD_execDrawMobileDebugString_Params DrawMobileDebugString_Params;
	memcpy_s(&DrawMobileDebugString_Params.XPos, 0x4, &XPos, 0x4);
	memcpy_s(&DrawMobileDebugString_Params.YPos, 0x4, &YPos, 0x4);
	memcpy_s(&DrawMobileDebugString_Params.Str, 0x10, &Str, 0x10);

	this->ProcessEvent(uFnDrawMobileDebugString, &DrawMobileDebugString_Params, nullptr);
};

// Function GameFramework.MobileHUD.PostRender
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileHUD::PostRender()
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GameFramework.MobileHUD.PostRender");
	}

	AMobileHUD_execPostRender_Params PostRender_Params;

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GameFramework.MobileHUD.PostBeginPlay
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileHUD::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.MobileHUD.PostBeginPlay");
	}

	AMobileHUD_execPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.MobileInputZone.AddKismetEventHandler
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqEvent_MobileZoneBase* NewHandler                     (CPF_Parm)

void UMobileInputZone::AddKismetEventHandler(class USeqEvent_MobileZoneBase* NewHandler)
{
	static UFunction* uFnAddKismetEventHandler = nullptr;

	if (!uFnAddKismetEventHandler)
	{
		uFnAddKismetEventHandler = UFunction::FindFunction("Function GameFramework.MobileInputZone.AddKismetEventHandler");
	}

	UMobileInputZone_execAddKismetEventHandler_Params AddKismetEventHandler_Params;
	memcpy_s(&AddKismetEventHandler_Params.NewHandler, 0x8, &NewHandler, 0x8);

	this->ProcessEvent(uFnAddKismetEventHandler, &AddKismetEventHandler_Params, nullptr);
};

// Function GameFramework.MobileInputZone.OnPostDrawZone
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// class UMobileInputZone*        Zone                           (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)

void UMobileInputZone::OnPostDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static UFunction* uFnOnPostDrawZone = nullptr;

	if (!uFnOnPostDrawZone)
	{
		uFnOnPostDrawZone = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnPostDrawZone");
	}

	UMobileInputZone_execOnPostDrawZone_Params OnPostDrawZone_Params;
	memcpy_s(&OnPostDrawZone_Params.Zone, 0x8, &Zone, 0x8);
	memcpy_s(&OnPostDrawZone_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnOnPostDrawZone, &OnPostDrawZone_Params, nullptr);
};

// Function GameFramework.MobileInputZone.OnPreDrawZone
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)

bool UMobileInputZone::OnPreDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static UFunction* uFnOnPreDrawZone = nullptr;

	if (!uFnOnPreDrawZone)
	{
		uFnOnPreDrawZone = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnPreDrawZone");
	}

	UMobileInputZone_execOnPreDrawZone_Params OnPreDrawZone_Params;
	memcpy_s(&OnPreDrawZone_Params.Zone, 0x8, &Zone, 0x8);
	memcpy_s(&OnPreDrawZone_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnOnPreDrawZone, &OnPreDrawZone_Params, nullptr);

	return OnPreDrawZone_Params.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnProcessSlide
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// uint8_t                        EventType                      (CPF_Parm)
// int32_t                        SlideValue                     (CPF_Parm)
// struct FVector2D               ViewportSize                   (CPF_Parm)

bool UMobileInputZone::OnProcessSlide(class UMobileInputZone* Zone, uint8_t EventType, int32_t SlideValue, struct FVector2D ViewportSize)
{
	static UFunction* uFnOnProcessSlide = nullptr;

	if (!uFnOnProcessSlide)
	{
		uFnOnProcessSlide = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnProcessSlide");
	}

	UMobileInputZone_execOnProcessSlide_Params OnProcessSlide_Params;
	memcpy_s(&OnProcessSlide_Params.Zone, 0x8, &Zone, 0x8);
	memcpy_s(&OnProcessSlide_Params.EventType, 0x1, &EventType, 0x1);
	memcpy_s(&OnProcessSlide_Params.SlideValue, 0x4, &SlideValue, 0x4);
	memcpy_s(&OnProcessSlide_Params.ViewportSize, 0x8, &ViewportSize, 0x8);

	this->ProcessEvent(uFnOnProcessSlide, &OnProcessSlide_Params, nullptr);

	return OnProcessSlide_Params.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// uint8_t                        EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool UMobileInputZone::OnDoubleTapDelegate(class UMobileInputZone* Zone, uint8_t EventType, struct FVector2D TouchLocation)
{
	static UFunction* uFnOnDoubleTapDelegate = nullptr;

	if (!uFnOnDoubleTapDelegate)
	{
		uFnOnDoubleTapDelegate = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnDoubleTapDelegate");
	}

	UMobileInputZone_execOnDoubleTapDelegate_Params OnDoubleTapDelegate_Params;
	memcpy_s(&OnDoubleTapDelegate_Params.Zone, 0x8, &Zone, 0x8);
	memcpy_s(&OnDoubleTapDelegate_Params.EventType, 0x1, &EventType, 0x1);
	memcpy_s(&OnDoubleTapDelegate_Params.TouchLocation, 0x8, &TouchLocation, 0x8);

	this->ProcessEvent(uFnOnDoubleTapDelegate, &OnDoubleTapDelegate_Params, nullptr);

	return OnDoubleTapDelegate_Params.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnTapDelegate
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// uint8_t                        EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool UMobileInputZone::OnTapDelegate(class UMobileInputZone* Zone, uint8_t EventType, struct FVector2D TouchLocation)
{
	static UFunction* uFnOnTapDelegate = nullptr;

	if (!uFnOnTapDelegate)
	{
		uFnOnTapDelegate = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnTapDelegate");
	}

	UMobileInputZone_execOnTapDelegate_Params OnTapDelegate_Params;
	memcpy_s(&OnTapDelegate_Params.Zone, 0x8, &Zone, 0x8);
	memcpy_s(&OnTapDelegate_Params.EventType, 0x1, &EventType, 0x1);
	memcpy_s(&OnTapDelegate_Params.TouchLocation, 0x8, &TouchLocation, 0x8);

	this->ProcessEvent(uFnOnTapDelegate, &OnTapDelegate_Params, nullptr);

	return OnTapDelegate_Params.ReturnValue;
};

// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UMobileInputZone*        Zone                           (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// int32_t                        Handle                         (CPF_Parm)
// uint8_t                        EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)

bool UMobileInputZone::OnProcessInputDelegate(class UMobileInputZone* Zone, float DeltaTime, int32_t Handle, uint8_t EventType, struct FVector2D TouchLocation)
{
	static UFunction* uFnOnProcessInputDelegate = nullptr;

	if (!uFnOnProcessInputDelegate)
	{
		uFnOnProcessInputDelegate = UFunction::FindFunction("Function GameFramework.MobileInputZone.OnProcessInputDelegate");
	}

	UMobileInputZone_execOnProcessInputDelegate_Params OnProcessInputDelegate_Params;
	memcpy_s(&OnProcessInputDelegate_Params.Zone, 0x8, &Zone, 0x8);
	memcpy_s(&OnProcessInputDelegate_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&OnProcessInputDelegate_Params.Handle, 0x4, &Handle, 0x4);
	memcpy_s(&OnProcessInputDelegate_Params.EventType, 0x1, &EventType, 0x1);
	memcpy_s(&OnProcessInputDelegate_Params.TouchLocation, 0x8, &TouchLocation, 0x8);

	this->ProcessEvent(uFnOnProcessInputDelegate, &OnProcessInputDelegate_Params, nullptr);

	return OnProcessInputDelegate_Params.ReturnValue;
};

// Function GameFramework.MobileInputZone.DeactivateZone
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobileInputZone::DeactivateZone()
{
	static UFunction* uFnDeactivateZone = nullptr;

	if (!uFnDeactivateZone)
	{
		uFnDeactivateZone = UFunction::FindFunction("Function GameFramework.MobileInputZone.DeactivateZone");
	}

	UMobileInputZone_execDeactivateZone_Params DeactivateZone_Params;

	uFnDeactivateZone->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDeactivateZone, &DeactivateZone_Params, nullptr);

	uFnDeactivateZone->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileInputZone.ActivateZone
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobileInputZone::ActivateZone()
{
	static UFunction* uFnActivateZone = nullptr;

	if (!uFnActivateZone)
	{
		uFnActivateZone = UFunction::FindFunction("Function GameFramework.MobileInputZone.ActivateZone");
	}

	UMobileInputZone_execActivateZone_Params ActivateZone_Params;

	uFnActivateZone->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnActivateZone, &ActivateZone_Params, nullptr);

	uFnActivateZone->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuObject.RenderObject
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuObject::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuObject.RenderObject");
	}

	UMobileMenuObject_execRenderObject_Params RenderObject_Params;
	memcpy_s(&RenderObject_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&RenderObject_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuObject.SetCanvasPos
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          OffsetX                        (CPF_OptionalParm | CPF_Parm)
// float                          OffsetY                        (CPF_OptionalParm | CPF_Parm)

void UMobileMenuObject::SetCanvasPos(class UCanvas* Canvas, float OffsetX, float OffsetY)
{
	static UFunction* uFnSetCanvasPos = nullptr;

	if (!uFnSetCanvasPos)
	{
		uFnSetCanvasPos = UFunction::FindFunction("Function GameFramework.MobileMenuObject.SetCanvasPos");
	}

	UMobileMenuObject_execSetCanvasPos_Params SetCanvasPos_Params;
	memcpy_s(&SetCanvasPos_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&SetCanvasPos_Params.OffsetX, 0x4, &OffsetX, 0x4);
	memcpy_s(&SetCanvasPos_Params.OffsetY, 0x4, &OffsetY, 0x4);

	this->ProcessEvent(uFnSetCanvasPos, &SetCanvasPos_Params, nullptr);
};

// Function GameFramework.MobileMenuObject.InitMenuObject
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// unsigned long                  bIsFirstInitialization         (CPF_Parm)

void UMobileMenuObject::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, unsigned long bIsFirstInitialization)
{
	static UFunction* uFnInitMenuObject = nullptr;

	if (!uFnInitMenuObject)
	{
		uFnInitMenuObject = UFunction::FindFunction("Function GameFramework.MobileMenuObject.InitMenuObject");
	}

	UMobileMenuObject_execInitMenuObject_Params InitMenuObject_Params;
	memcpy_s(&InitMenuObject_Params.PlayerInput, 0x8, &PlayerInput, 0x8);
	memcpy_s(&InitMenuObject_Params.Scene, 0x8, &Scene, 0x8);
	memcpy_s(&InitMenuObject_Params.ScreenWidth, 0x4, &ScreenWidth, 0x4);
	memcpy_s(&InitMenuObject_Params.ScreenHeight, 0x4, &ScreenHeight, 0x4);
	InitMenuObject_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuObject, &InitMenuObject_Params, nullptr);
};

// Function GameFramework.MobileMenuObject.GetRealPosition
// [0x00420802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          PosX                           (CPF_Parm | CPF_OutParm)
// float                          PosY                           (CPF_Parm | CPF_OutParm)

void UMobileMenuObject::eventGetRealPosition(float& PosX, float& PosY)
{
	static UFunction* uFnGetRealPosition = nullptr;

	if (!uFnGetRealPosition)
	{
		uFnGetRealPosition = UFunction::FindFunction("Function GameFramework.MobileMenuObject.GetRealPosition");
	}

	UMobileMenuObject_eventGetRealPosition_Params GetRealPosition_Params;
	memcpy_s(&GetRealPosition_Params.PosX, 0x4, &PosX, 0x4);
	memcpy_s(&GetRealPosition_Params.PosY, 0x4, &PosY, 0x4);

	this->ProcessEvent(uFnGetRealPosition, &GetRealPosition_Params, nullptr);

	memcpy_s(&PosX, 0x4, &GetRealPosition_Params.PosX, 0x4);
	memcpy_s(&PosY, 0x4, &GetRealPosition_Params.PosY, 0x4);
};

// Function GameFramework.MobileMenuObject.OnTouch
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

bool UMobileMenuObject::eventOnTouch(uint8_t EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function GameFramework.MobileMenuObject.OnTouch");
	}

	UMobileMenuObject_eventOnTouch_Params OnTouch_Params;
	memcpy_s(&OnTouch_Params.EventType, 0x1, &EventType, 0x1);
	memcpy_s(&OnTouch_Params.TouchX, 0x4, &TouchX, 0x4);
	memcpy_s(&OnTouch_Params.TouchY, 0x4, &TouchY, 0x4);
	memcpy_s(&OnTouch_Params.ObjectOver, 0x8, &ObjectOver, 0x8);
	memcpy_s(&OnTouch_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);

	return OnTouch_Params.ReturnValue;
};

// Function GameFramework.MobileMenuImage.RenderObject
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuImage::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuImage.RenderObject");
	}

	UMobileMenuImage_execRenderObject_Params RenderObject_Params;
	memcpy_s(&RenderObject_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&RenderObject_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.MobileMenuCommand
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Command                        (CPF_Parm | CPF_NeedCtorLink)

bool UMobileMenuScene::MobileMenuCommand(class FString Command)
{
	static UFunction* uFnMobileMenuCommand = nullptr;

	if (!uFnMobileMenuCommand)
	{
		uFnMobileMenuCommand = UFunction::FindFunction("Function GameFramework.MobileMenuScene.MobileMenuCommand");
	}

	UMobileMenuScene_execMobileMenuCommand_Params MobileMenuCommand_Params;
	memcpy_s(&MobileMenuCommand_Params.Command, 0x10, &Command, 0x10);

	this->ProcessEvent(uFnMobileMenuCommand, &MobileMenuCommand_Params, nullptr);

	return MobileMenuCommand_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.FindMenuObject
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobileMenuObject*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Tag                            (CPF_Parm | CPF_NeedCtorLink)

class UMobileMenuObject* UMobileMenuScene::FindMenuObject(class FString Tag)
{
	static UFunction* uFnFindMenuObject = nullptr;

	if (!uFnFindMenuObject)
	{
		uFnFindMenuObject = UFunction::FindFunction("Function GameFramework.MobileMenuScene.FindMenuObject");
	}

	UMobileMenuScene_execFindMenuObject_Params FindMenuObject_Params;
	memcpy_s(&FindMenuObject_Params.Tag, 0x10, &Tag, 0x10);

	this->ProcessEvent(uFnFindMenuObject, &FindMenuObject_Params, nullptr);

	return FindMenuObject_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.CleanUpScene
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobileMenuScene::CleanUpScene()
{
	static UFunction* uFnCleanUpScene = nullptr;

	if (!uFnCleanUpScene)
	{
		uFnCleanUpScene = UFunction::FindFunction("Function GameFramework.MobileMenuScene.CleanUpScene");
	}

	UMobileMenuScene_execCleanUpScene_Params CleanUpScene_Params;

	uFnCleanUpScene->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCleanUpScene, &CleanUpScene_Params, nullptr);

	uFnCleanUpScene->FunctionFlags |= 0x400;
};

// Function GameFramework.MobileMenuScene.Closed
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobileMenuScene::Closed()
{
	static UFunction* uFnClosed = nullptr;

	if (!uFnClosed)
	{
		uFnClosed = UFunction::FindFunction("Function GameFramework.MobileMenuScene.Closed");
	}

	UMobileMenuScene_execClosed_Params Closed_Params;

	this->ProcessEvent(uFnClosed, &Closed_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.Closing
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UMobileMenuScene::Closing()
{
	static UFunction* uFnClosing = nullptr;

	if (!uFnClosing)
	{
		uFnClosing = UFunction::FindFunction("Function GameFramework.MobileMenuScene.Closing");
	}

	UMobileMenuScene_execClosing_Params Closing_Params;

	this->ProcessEvent(uFnClosing, &Closing_Params, nullptr);

	return Closing_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.MadeTopMenu
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobileMenuScene::MadeTopMenu()
{
	static UFunction* uFnMadeTopMenu = nullptr;

	if (!uFnMadeTopMenu)
	{
		uFnMadeTopMenu = UFunction::FindFunction("Function GameFramework.MobileMenuScene.MadeTopMenu");
	}

	UMobileMenuScene_execMadeTopMenu_Params MadeTopMenu_Params;

	this->ProcessEvent(uFnMadeTopMenu, &MadeTopMenu_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.Opened
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  Mode                           (CPF_Parm | CPF_NeedCtorLink)

void UMobileMenuScene::Opened(class FString Mode)
{
	static UFunction* uFnOpened = nullptr;

	if (!uFnOpened)
	{
		uFnOpened = UFunction::FindFunction("Function GameFramework.MobileMenuScene.Opened");
	}

	UMobileMenuScene_execOpened_Params Opened_Params;
	memcpy_s(&Opened_Params.Mode, 0x10, &Mode, 0x10);

	this->ProcessEvent(uFnOpened, &Opened_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.OnSceneTouch
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// unsigned long                  bInside                        (CPF_Parm)

bool UMobileMenuScene::eventOnSceneTouch(uint8_t EventType, float TouchX, float TouchY, unsigned long bInside)
{
	static UFunction* uFnOnSceneTouch = nullptr;

	if (!uFnOnSceneTouch)
	{
		uFnOnSceneTouch = UFunction::FindFunction("Function GameFramework.MobileMenuScene.OnSceneTouch");
	}

	UMobileMenuScene_eventOnSceneTouch_Params OnSceneTouch_Params;
	memcpy_s(&OnSceneTouch_Params.EventType, 0x1, &EventType, 0x1);
	memcpy_s(&OnSceneTouch_Params.TouchX, 0x4, &TouchX, 0x4);
	memcpy_s(&OnSceneTouch_Params.TouchY, 0x4, &TouchY, 0x4);
	OnSceneTouch_Params.bInside = bInside;

	this->ProcessEvent(uFnOnSceneTouch, &OnSceneTouch_Params, nullptr);

	return OnSceneTouch_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.OnTouch
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobileMenuObject*       Sender                         (CPF_Parm)
// uint8_t                        EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)

void UMobileMenuScene::eventOnTouch(class UMobileMenuObject* Sender, uint8_t EventType, float TouchX, float TouchY)
{
	static UFunction* uFnOnTouch = nullptr;

	if (!uFnOnTouch)
	{
		uFnOnTouch = UFunction::FindFunction("Function GameFramework.MobileMenuScene.OnTouch");
	}

	UMobileMenuScene_eventOnTouch_Params OnTouch_Params;
	memcpy_s(&OnTouch_Params.Sender, 0x8, &Sender, 0x8);
	memcpy_s(&OnTouch_Params.EventType, 0x1, &EventType, 0x1);
	memcpy_s(&OnTouch_Params.TouchX, 0x4, &TouchX, 0x4);
	memcpy_s(&OnTouch_Params.TouchY, 0x4, &TouchY, 0x4);

	this->ProcessEvent(uFnOnTouch, &OnTouch_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.RenderScene
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobileMenuScene::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* uFnRenderScene = nullptr;

	if (!uFnRenderScene)
	{
		uFnRenderScene = UFunction::FindFunction("Function GameFramework.MobileMenuScene.RenderScene");
	}

	UMobileMenuScene_execRenderScene_Params RenderScene_Params;
	memcpy_s(&RenderScene_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&RenderScene_Params.RenderDelta, 0x4, &RenderDelta, 0x4);

	this->ProcessEvent(uFnRenderScene, &RenderScene_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.GetSceneFont
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UFont*                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UFont* UMobileMenuScene::GetSceneFont()
{
	static UFunction* uFnGetSceneFont = nullptr;

	if (!uFnGetSceneFont)
	{
		uFnGetSceneFont = UFunction::FindFunction("Function GameFramework.MobileMenuScene.GetSceneFont");
	}

	UMobileMenuScene_execGetSceneFont_Params GetSceneFont_Params;

	this->ProcessEvent(uFnGetSceneFont, &GetSceneFont_Params, nullptr);

	return GetSceneFont_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.InitMenuScene
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// unsigned long                  bIsFirstInitialization         (CPF_Parm)

void UMobileMenuScene::eventInitMenuScene(class UMobilePlayerInput* PlayerInput, int32_t ScreenWidth, int32_t ScreenHeight, unsigned long bIsFirstInitialization)
{
	static UFunction* uFnInitMenuScene = nullptr;

	if (!uFnInitMenuScene)
	{
		uFnInitMenuScene = UFunction::FindFunction("Function GameFramework.MobileMenuScene.InitMenuScene");
	}

	UMobileMenuScene_eventInitMenuScene_Params InitMenuScene_Params;
	memcpy_s(&InitMenuScene_Params.PlayerInput, 0x8, &PlayerInput, 0x8);
	memcpy_s(&InitMenuScene_Params.ScreenWidth, 0x4, &ScreenWidth, 0x4);
	memcpy_s(&InitMenuScene_Params.ScreenHeight, 0x4, &ScreenHeight, 0x4);
	InitMenuScene_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuScene, &InitMenuScene_Params, nullptr);
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleY
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UMobileMenuScene::GetGlobalScaleY()
{
	static UFunction* uFnGetGlobalScaleY = nullptr;

	if (!uFnGetGlobalScaleY)
	{
		uFnGetGlobalScaleY = UFunction::FindFunction("Function GameFramework.MobileMenuScene.GetGlobalScaleY");
	}

	UMobileMenuScene_execGetGlobalScaleY_Params GetGlobalScaleY_Params;

	uFnGetGlobalScaleY->FunctionFlags |= ~0x400;

	UMobileMenuScene::StaticClass()->ProcessEvent(uFnGetGlobalScaleY, &GetGlobalScaleY_Params, nullptr);

	uFnGetGlobalScaleY->FunctionFlags |= 0x400;

	return GetGlobalScaleY_Params.ReturnValue;
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleX
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UMobileMenuScene::GetGlobalScaleX()
{
	static UFunction* uFnGetGlobalScaleX = nullptr;

	if (!uFnGetGlobalScaleX)
	{
		uFnGetGlobalScaleX = UFunction::FindFunction("Function GameFramework.MobileMenuScene.GetGlobalScaleX");
	}

	UMobileMenuScene_execGetGlobalScaleX_Params GetGlobalScaleX_Params;

	uFnGetGlobalScaleX->FunctionFlags |= ~0x400;

	UMobileMenuScene::StaticClass()->ProcessEvent(uFnGetGlobalScaleX, &GetGlobalScaleX_Params, nullptr);

	uFnGetGlobalScaleX->FunctionFlags |= 0x400;

	return GetGlobalScaleX_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobileMenuScene*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  MenuClassName                  (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Mode                           (CPF_Parm | CPF_NeedCtorLink)

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenuMode(class FString MenuClassName, class FString Mode)
{
	static UFunction* uFnOpenMobileMenuMode = nullptr;

	if (!uFnOpenMobileMenuMode)
	{
		uFnOpenMobileMenuMode = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OpenMobileMenuMode");
	}

	UMobilePlayerInput_execOpenMobileMenuMode_Params OpenMobileMenuMode_Params;
	memcpy_s(&OpenMobileMenuMode_Params.MenuClassName, 0x10, &MenuClassName, 0x10);
	memcpy_s(&OpenMobileMenuMode_Params.Mode, 0x10, &Mode, 0x10);

	this->ProcessEvent(uFnOpenMobileMenuMode, &OpenMobileMenuMode_Params, nullptr);

	return OpenMobileMenuMode_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  MenuClassName                  (CPF_Parm | CPF_NeedCtorLink)

void UMobilePlayerInput::OpenMobileMenu(class FString MenuClassName)
{
	static UFunction* uFnOpenMobileMenu = nullptr;

	if (!uFnOpenMobileMenu)
	{
		uFnOpenMobileMenu = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OpenMobileMenu");
	}

	UMobilePlayerInput_execOpenMobileMenu_Params OpenMobileMenu_Params;
	memcpy_s(&OpenMobileMenu_Params.MenuClassName, 0x10, &MenuClassName, 0x10);

	this->ProcessEvent(uFnOpenMobileMenu, &OpenMobileMenu_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  MenuCommand                    (CPF_Parm | CPF_NeedCtorLink)

void UMobilePlayerInput::MobileMenuCommand(class FString MenuCommand)
{
	static UFunction* uFnMobileMenuCommand = nullptr;

	if (!uFnMobileMenuCommand)
	{
		uFnMobileMenuCommand = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.MobileMenuCommand");
	}

	UMobilePlayerInput_execMobileMenuCommand_Params MobileMenuCommand_Params;
	memcpy_s(&MobileMenuCommand_Params.MenuCommand, 0x10, &MenuCommand, 0x10);

	this->ProcessEvent(uFnMobileMenuCommand, &MobileMenuCommand_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.PreClientTravel
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  PendingURL                     (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        TravelType                     (CPF_Parm)
// unsigned long                  bIsSeamlessTravel              (CPF_Parm)

void UMobilePlayerInput::PreClientTravel(class FString PendingURL, uint8_t TravelType, unsigned long bIsSeamlessTravel)
{
	static UFunction* uFnPreClientTravel = nullptr;

	if (!uFnPreClientTravel)
	{
		uFnPreClientTravel = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.PreClientTravel");
	}

	UMobilePlayerInput_execPreClientTravel_Params PreClientTravel_Params;
	memcpy_s(&PreClientTravel_Params.PendingURL, 0x10, &PendingURL, 0x10);
	memcpy_s(&PreClientTravel_Params.TravelType, 0x1, &TravelType, 0x1);
	PreClientTravel_Params.bIsSeamlessTravel = bIsSeamlessTravel;

	this->ProcessEvent(uFnPreClientTravel, &PreClientTravel_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.RenderMenus
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobilePlayerInput::eventRenderMenus(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* uFnRenderMenus = nullptr;

	if (!uFnRenderMenus)
	{
		uFnRenderMenus = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.RenderMenus");
	}

	UMobilePlayerInput_eventRenderMenus_Params RenderMenus_Params;
	memcpy_s(&RenderMenus_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&RenderMenus_Params.RenderDelta, 0x4, &RenderDelta, 0x4);

	this->ProcessEvent(uFnRenderMenus, &RenderMenus_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.CloseAllMenus
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobilePlayerInput::eventCloseAllMenus()
{
	static UFunction* uFnCloseAllMenus = nullptr;

	if (!uFnCloseAllMenus)
	{
		uFnCloseAllMenus = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.CloseAllMenus");
	}

	UMobilePlayerInput_eventCloseAllMenus_Params CloseAllMenus_Params;

	this->ProcessEvent(uFnCloseAllMenus, &CloseAllMenus_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.CloseMenuScene
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobileMenuScene*        SceneToClose                   (CPF_Parm)

void UMobilePlayerInput::eventCloseMenuScene(class UMobileMenuScene* SceneToClose)
{
	static UFunction* uFnCloseMenuScene = nullptr;

	if (!uFnCloseMenuScene)
	{
		uFnCloseMenuScene = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.CloseMenuScene");
	}

	UMobilePlayerInput_eventCloseMenuScene_Params CloseMenuScene_Params;
	memcpy_s(&CloseMenuScene_Params.SceneToClose, 0x8, &SceneToClose, 0x8);

	this->ProcessEvent(uFnCloseMenuScene, &CloseMenuScene_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.OpenMenuScene
// [0x00824802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UMobileMenuScene*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  SceneClass                     (CPF_Parm)
// class FString                  Mode                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class UMobileMenuScene* UMobilePlayerInput::eventOpenMenuScene(class UClass* SceneClass, class FString Mode)
{
	static UFunction* uFnOpenMenuScene = nullptr;

	if (!uFnOpenMenuScene)
	{
		uFnOpenMenuScene = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OpenMenuScene");
	}

	UMobilePlayerInput_eventOpenMenuScene_Params OpenMenuScene_Params;
	memcpy_s(&OpenMenuScene_Params.SceneClass, 0x8, &SceneClass, 0x8);
	memcpy_s(&OpenMenuScene_Params.Mode, 0x10, &Mode, 0x10);

	this->ProcessEvent(uFnOpenMenuScene, &OpenMenuScene_Params, nullptr);

	return OpenMenuScene_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  GroupName                      (CPF_Parm | CPF_NeedCtorLink)

void UMobilePlayerInput::SetMobileInputConfig(class FString GroupName)
{
	static UFunction* uFnSetMobileInputConfig = nullptr;

	if (!uFnSetMobileInputConfig)
	{
		uFnSetMobileInputConfig = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.SetMobileInputConfig");
	}

	UMobilePlayerInput_execSetMobileInputConfig_Params SetMobileInputConfig_Params;
	memcpy_s(&SetMobileInputConfig_Params.GroupName, 0x10, &GroupName, 0x10);

	this->ProcessEvent(uFnSetMobileInputConfig, &SetMobileInputConfig_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.ActivateInputGroup
// [0x00020202] (FUNC_RequiredAPI | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  GroupName                      (CPF_Parm | CPF_NeedCtorLink)

void UMobilePlayerInput::ActivateInputGroup(class FString GroupName)
{
	static UFunction* uFnActivateInputGroup = nullptr;

	if (!uFnActivateInputGroup)
	{
		uFnActivateInputGroup = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.ActivateInputGroup");
	}

	UMobilePlayerInput_execActivateInputGroup_Params ActivateInputGroup_Params;
	memcpy_s(&ActivateInputGroup_Params.GroupName, 0x10, &GroupName, 0x10);

	this->ProcessEvent(uFnActivateInputGroup, &ActivateInputGroup_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.GetCurrentZones
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<class UMobileInputZone*> ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<class UMobileInputZone*> UMobilePlayerInput::GetCurrentZones()
{
	static UFunction* uFnGetCurrentZones = nullptr;

	if (!uFnGetCurrentZones)
	{
		uFnGetCurrentZones = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.GetCurrentZones");
	}

	UMobilePlayerInput_execGetCurrentZones_Params GetCurrentZones_Params;

	this->ProcessEvent(uFnGetCurrentZones, &GetCurrentZones_Params, nullptr);

	return GetCurrentZones_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.HasZones
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UMobilePlayerInput::HasZones()
{
	static UFunction* uFnHasZones = nullptr;

	if (!uFnHasZones)
	{
		uFnHasZones = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.HasZones");
	}

	UMobilePlayerInput_execHasZones_Params HasZones_Params;

	this->ProcessEvent(uFnHasZones, &HasZones_Params, nullptr);

	return HasZones_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.FindorAddZone
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobileInputZone*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ZoneName                       (CPF_Parm | CPF_NeedCtorLink)

class UMobileInputZone* UMobilePlayerInput::FindorAddZone(class FString ZoneName)
{
	static UFunction* uFnFindorAddZone = nullptr;

	if (!uFnFindorAddZone)
	{
		uFnFindorAddZone = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.FindorAddZone");
	}

	UMobilePlayerInput_execFindorAddZone_Params FindorAddZone_Params;
	memcpy_s(&FindorAddZone_Params.ZoneName, 0x10, &ZoneName, 0x10);

	this->ProcessEvent(uFnFindorAddZone, &FindorAddZone_Params, nullptr);

	return FindorAddZone_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.FindZone
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobileInputZone*        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ZoneName                       (CPF_Parm | CPF_NeedCtorLink)

class UMobileInputZone* UMobilePlayerInput::FindZone(class FString ZoneName)
{
	static UFunction* uFnFindZone = nullptr;

	if (!uFnFindZone)
	{
		uFnFindZone = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.FindZone");
	}

	UMobilePlayerInput_execFindZone_Params FindZone_Params;
	memcpy_s(&FindZone_Params.ZoneName, 0x10, &ZoneName, 0x10);

	this->ProcessEvent(uFnFindZone, &FindZone_Params, nullptr);

	return FindZone_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqEvent_MobileRawInput* NewHandler                     (CPF_Parm)

void UMobilePlayerInput::AddKismetRawInputEventHandler(class USeqEvent_MobileRawInput* NewHandler)
{
	static UFunction* uFnAddKismetRawInputEventHandler = nullptr;

	if (!uFnAddKismetRawInputEventHandler)
	{
		uFnAddKismetRawInputEventHandler = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler");
	}

	UMobilePlayerInput_execAddKismetRawInputEventHandler_Params AddKismetRawInputEventHandler_Params;
	memcpy_s(&AddKismetRawInputEventHandler_Params.NewHandler, 0x8, &NewHandler, 0x8);

	this->ProcessEvent(uFnAddKismetRawInputEventHandler, &AddKismetRawInputEventHandler_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqEvent_MobileBase*    NewHandler                     (CPF_Parm)

void UMobilePlayerInput::AddKismetEventHandler(class USeqEvent_MobileBase* NewHandler)
{
	static UFunction* uFnAddKismetEventHandler = nullptr;

	if (!uFnAddKismetEventHandler)
	{
		uFnAddKismetEventHandler = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.AddKismetEventHandler");
	}

	UMobilePlayerInput_execAddKismetEventHandler_Params AddKismetEventHandler_Params;
	memcpy_s(&AddKismetEventHandler_Params.NewHandler, 0x8, &NewHandler, 0x8);

	this->ProcessEvent(uFnAddKismetEventHandler, &AddKismetEventHandler_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobilePlayerInput::eventRefreshKismetLinks()
{
	static UFunction* uFnRefreshKismetLinks = nullptr;

	if (!uFnRefreshKismetLinks)
	{
		uFnRefreshKismetLinks = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.RefreshKismetLinks");
	}

	UMobilePlayerInput_eventRefreshKismetLinks_Params RefreshKismetLinks_Params;

	this->ProcessEvent(uFnRefreshKismetLinks, &RefreshKismetLinks_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.SwapZoneOwners
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobilePlayerInput::SwapZoneOwners()
{
	static UFunction* uFnSwapZoneOwners = nullptr;

	if (!uFnSwapZoneOwners)
	{
		uFnSwapZoneOwners = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.SwapZoneOwners");
	}

	UMobilePlayerInput_execSwapZoneOwners_Params SwapZoneOwners_Params;

	this->ProcessEvent(uFnSwapZoneOwners, &SwapZoneOwners_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.InitializeInputZones
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobilePlayerInput::InitializeInputZones()
{
	static UFunction* uFnInitializeInputZones = nullptr;

	if (!uFnInitializeInputZones)
	{
		uFnInitializeInputZones = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.InitializeInputZones");
	}

	UMobilePlayerInput_execInitializeInputZones_Params InitializeInputZones_Params;

	this->ProcessEvent(uFnInitializeInputZones, &InitializeInputZones_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.InitTouchSystem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobilePlayerInput::InitTouchSystem()
{
	static UFunction* uFnInitTouchSystem = nullptr;

	if (!uFnInitTouchSystem)
	{
		uFnInitTouchSystem = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.InitTouchSystem");
	}

	UMobilePlayerInput_execInitTouchSystem_Params InitTouchSystem_Params;

	this->ProcessEvent(uFnInitTouchSystem, &InitTouchSystem_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobilePlayerInput::ClientInitInputSystem()
{
	static UFunction* uFnClientInitInputSystem = nullptr;

	if (!uFnClientInitInputSystem)
	{
		uFnClientInitInputSystem = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.ClientInitInputSystem");
	}

	UMobilePlayerInput_execClientInitInputSystem_Params ClientInitInputSystem_Params;

	this->ProcessEvent(uFnClientInitInputSystem, &ClientInitInputSystem_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.InitInputSystem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobilePlayerInput::InitInputSystem()
{
	static UFunction* uFnInitInputSystem = nullptr;

	if (!uFnInitInputSystem)
	{
		uFnInitInputSystem = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.InitInputSystem");
	}

	UMobilePlayerInput_execInitInputSystem_Params InitInputSystem_Params;

	this->ProcessEvent(uFnInitInputSystem, &InitInputSystem_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.SendInputAxis
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// float                          Delta                          (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobilePlayerInput::SendInputAxis(struct FName Key, float Delta, float DeltaTime)
{
	static UFunction* uFnSendInputAxis = nullptr;

	if (!uFnSendInputAxis)
	{
		uFnSendInputAxis = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.SendInputAxis");
	}

	UMobilePlayerInput_execSendInputAxis_Params SendInputAxis_Params;
	memcpy_s(&SendInputAxis_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SendInputAxis_Params.Delta, 0x4, &Delta, 0x4);
	memcpy_s(&SendInputAxis_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnSendInputAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendInputAxis, &SendInputAxis_Params, nullptr);

	uFnSendInputAxis->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.SendInputKey
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   Key                            (CPF_Parm)
// uint8_t                        Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_Parm)

void UMobilePlayerInput::SendInputKey(struct FName Key, uint8_t Event, float AmountDepressed)
{
	static UFunction* uFnSendInputKey = nullptr;

	if (!uFnSendInputKey)
	{
		uFnSendInputKey = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.SendInputKey");
	}

	UMobilePlayerInput_execSendInputKey_Params SendInputKey_Params;
	memcpy_s(&SendInputKey_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&SendInputKey_Params.Event, 0x1, &Event, 0x1);
	memcpy_s(&SendInputKey_Params.AmountDepressed, 0x4, &AmountDepressed, 0x4);

	uFnSendInputKey->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendInputKey, &SendInputKey_Params, nullptr);

	uFnSendInputKey->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        NewViewportX                   (CPF_Parm)
// int32_t                        NewViewportY                   (CPF_Parm)
// int32_t                        NewViewportSizeX               (CPF_Parm)
// int32_t                        NewViewportSizeY               (CPF_Parm)

void UMobilePlayerInput::ConditionalUpdateInputZones(int32_t NewViewportX, int32_t NewViewportY, int32_t NewViewportSizeX, int32_t NewViewportSizeY)
{
	static UFunction* uFnConditionalUpdateInputZones = nullptr;

	if (!uFnConditionalUpdateInputZones)
	{
		uFnConditionalUpdateInputZones = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones");
	}

	UMobilePlayerInput_execConditionalUpdateInputZones_Params ConditionalUpdateInputZones_Params;
	memcpy_s(&ConditionalUpdateInputZones_Params.NewViewportX, 0x4, &NewViewportX, 0x4);
	memcpy_s(&ConditionalUpdateInputZones_Params.NewViewportY, 0x4, &NewViewportY, 0x4);
	memcpy_s(&ConditionalUpdateInputZones_Params.NewViewportSizeX, 0x4, &NewViewportSizeX, 0x4);
	memcpy_s(&ConditionalUpdateInputZones_Params.NewViewportSizeY, 0x4, &NewViewportSizeY, 0x4);

	uFnConditionalUpdateInputZones->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnConditionalUpdateInputZones, &ConditionalUpdateInputZones_Params, nullptr);

	uFnConditionalUpdateInputZones->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsFirstInitialize             (CPF_Parm)

void UMobilePlayerInput::NativeInitializeInputZones(unsigned long bIsFirstInitialize)
{
	static UFunction* uFnNativeInitializeInputZones = nullptr;

	if (!uFnNativeInitializeInputZones)
	{
		uFnNativeInitializeInputZones = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.NativeInitializeInputZones");
	}

	UMobilePlayerInput_execNativeInitializeInputZones_Params NativeInitializeInputZones_Params;
	NativeInitializeInputZones_Params.bIsFirstInitialize = bIsFirstInitialize;

	uFnNativeInitializeInputZones->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnNativeInitializeInputZones, &NativeInitializeInputZones_Params, nullptr);

	uFnNativeInitializeInputZones->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobilePlayerInput::NativeInitializeInputSystem()
{
	static UFunction* uFnNativeInitializeInputSystem = nullptr;

	if (!uFnNativeInitializeInputSystem)
	{
		uFnNativeInitializeInputSystem = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem");
	}

	UMobilePlayerInput_execNativeInitializeInputSystem_Params NativeInitializeInputSystem_Params;

	uFnNativeInitializeInputSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnNativeInitializeInputSystem, &NativeInitializeInputSystem_Params, nullptr);

	uFnNativeInitializeInputSystem->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.OnInputTouch
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        Handle                         (CPF_Parm)
// uint8_t                        Type                           (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)
// float                          DeviceTimestamp                (CPF_Parm)
// int32_t                        TouchpadIndex                  (CPF_Parm)

void UMobilePlayerInput::OnInputTouch(int32_t Handle, uint8_t Type, struct FVector2D TouchLocation, float DeviceTimestamp, int32_t TouchpadIndex)
{
	static UFunction* uFnOnInputTouch = nullptr;

	if (!uFnOnInputTouch)
	{
		uFnOnInputTouch = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OnInputTouch");
	}

	UMobilePlayerInput_execOnInputTouch_Params OnInputTouch_Params;
	memcpy_s(&OnInputTouch_Params.Handle, 0x4, &Handle, 0x4);
	memcpy_s(&OnInputTouch_Params.Type, 0x1, &Type, 0x1);
	memcpy_s(&OnInputTouch_Params.TouchLocation, 0x8, &TouchLocation, 0x8);
	memcpy_s(&OnInputTouch_Params.DeviceTimestamp, 0x4, &DeviceTimestamp, 0x4);
	memcpy_s(&OnInputTouch_Params.TouchpadIndex, 0x4, &TouchpadIndex, 0x4);

	this->ProcessEvent(uFnOnInputTouch, &OnInputTouch_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.OnPreviewTouch
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// int32_t                        TouchpadIndex                  (CPF_Parm)

bool UMobilePlayerInput::OnPreviewTouch(float X, float Y, int32_t TouchpadIndex)
{
	static UFunction* uFnOnPreviewTouch = nullptr;

	if (!uFnOnPreviewTouch)
	{
		uFnOnPreviewTouch = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OnPreviewTouch");
	}

	UMobilePlayerInput_execOnPreviewTouch_Params OnPreviewTouch_Params;
	memcpy_s(&OnPreviewTouch_Params.X, 0x4, &X, 0x4);
	memcpy_s(&OnPreviewTouch_Params.Y, 0x4, &Y, 0x4);
	memcpy_s(&OnPreviewTouch_Params.TouchpadIndex, 0x4, &TouchpadIndex, 0x4);

	this->ProcessEvent(uFnOnPreviewTouch, &OnPreviewTouch_Params, nullptr);

	return OnPreviewTouch_Params.ReturnValue;
};

// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UMobilePlayerInput::OnTouchNotHandledInMenu()
{
	static UFunction* uFnOnTouchNotHandledInMenu = nullptr;

	if (!uFnOnTouchNotHandledInMenu)
	{
		uFnOnTouchNotHandledInMenu = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu");
	}

	UMobilePlayerInput_execOnTouchNotHandledInMenu_Params OnTouchNotHandledInMenu_Params;

	this->ProcessEvent(uFnOnTouchNotHandledInMenu, &OnTouchNotHandledInMenu_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.PlayerInput
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UMobilePlayerInput::eventPlayerInput(float DeltaTime)
{
	static UFunction* uFnPlayerInput = nullptr;

	if (!uFnPlayerInput)
	{
		uFnPlayerInput = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.PlayerInput");
	}

	UMobilePlayerInput_eventPlayerInput_Params PlayerInput_Params;
	memcpy_s(&PlayerInput_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnPlayerInput, &PlayerInput_Params, nullptr);
};

// Function GameFramework.MobilePlayerInput.CancelMobileInput
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UMobilePlayerInput::CancelMobileInput()
{
	static UFunction* uFnCancelMobileInput = nullptr;

	if (!uFnCancelMobileInput)
	{
		uFnCancelMobileInput = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.CancelMobileInput");
	}

	UMobilePlayerInput_execCancelMobileInput_Params CancelMobileInput_Params;

	uFnCancelMobileInput->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCancelMobileInput, &CancelMobileInput_Params, nullptr);

	uFnCancelMobileInput->FunctionFlags |= 0x400;
};

// Function GameFramework.MobilePlayerInput.ProcessMobileInput
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UMobilePlayerInput::ProcessMobileInput(float DeltaTime)
{
	static UFunction* uFnProcessMobileInput = nullptr;

	if (!uFnProcessMobileInput)
	{
		uFnProcessMobileInput = UFunction::FindFunction("Function GameFramework.MobilePlayerInput.ProcessMobileInput");
	}

	UMobilePlayerInput_execProcessMobileInput_Params ProcessMobileInput_Params;
	memcpy_s(&ProcessMobileInput_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	uFnProcessMobileInput->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnProcessMobileInput, &ProcessMobileInput_Params, nullptr);

	uFnProcessMobileInput->FunctionFlags |= 0x400;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static UFunction* uFnRecycle = nullptr;

	if (!uFnRecycle)
	{
		uFnRecycle = UFunction::FindFunction("Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle");
	}

	UNavMeshGoal_OutOfViewFrom_execRecycle_Params Recycle_Params;

	this->ProcessEvent(uFnRecycle, &Recycle_Params, nullptr);
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UNavigationHandle*       NavHandle                      (CPF_Parm)
// struct FVector                 InOutOfViewLocation            (CPF_Parm)

bool UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, struct FVector InOutOfViewLocation)
{
	static UFunction* uFnMustBeHiddenFromThisPoint = nullptr;

	if (!uFnMustBeHiddenFromThisPoint)
	{
		uFnMustBeHiddenFromThisPoint = UFunction::FindFunction("Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint");
	}

	UNavMeshGoal_OutOfViewFrom_execMustBeHiddenFromThisPoint_Params MustBeHiddenFromThisPoint_Params;
	memcpy_s(&MustBeHiddenFromThisPoint_Params.NavHandle, 0x8, &NavHandle, 0x8);
	memcpy_s(&MustBeHiddenFromThisPoint_Params.InOutOfViewLocation, 0xC, &InOutOfViewLocation, 0xC);

	UNavMeshGoal_OutOfViewFrom::StaticClass()->ProcessEvent(uFnMustBeHiddenFromThisPoint, &MustBeHiddenFromThisPoint_Params, nullptr);

	return MustBeHiddenFromThisPoint_Params.ReturnValue;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UNavMeshGoal_OutOfViewFrom::RecycleNative()
{
	static UFunction* uFnRecycleNative = nullptr;

	if (!uFnRecycleNative)
	{
		uFnRecycleNative = UFunction::FindFunction("Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative");
	}

	UNavMeshGoal_OutOfViewFrom_execRecycleNative_Params RecycleNative_Params;

	uFnRecycleNative->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRecycleNative, &RecycleNative_Params, nullptr);

	uFnRecycleNative->FunctionFlags |= 0x400;
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static UFunction* uFnRecycle = nullptr;

	if (!uFnRecycle)
	{
		uFnRecycle = UFunction::FindFunction("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle");
	}

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Params Recycle_Params;

	this->ProcessEvent(uFnRecycle, &Recycle_Params, nullptr);
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UNavigationHandle*       NavHandle                      (CPF_Parm)
// struct FVector                 InLocation                     (CPF_Const | CPF_Parm)
// struct FRotator                InRotation                     (CPF_Const | CPF_Parm)
// float                          InDistanceToCheck              (CPF_Const | CPF_Parm)
// TArray<struct FVector>         InLocationsToCheck             (CPF_Const | CPF_Parm | CPF_NeedCtorLink)

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, struct FVector InLocation, struct FRotator InRotation, float InDistanceToCheck, TArray<struct FVector> InLocationsToCheck)
{
	static UFunction* uFnBiasAgainstPolysWithinDistanceOfLocations = nullptr;

	if (!uFnBiasAgainstPolysWithinDistanceOfLocations)
	{
		uFnBiasAgainstPolysWithinDistanceOfLocations = UFunction::FindFunction("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations");
	}

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execBiasAgainstPolysWithinDistanceOfLocations_Params BiasAgainstPolysWithinDistanceOfLocations_Params;
	memcpy_s(&BiasAgainstPolysWithinDistanceOfLocations_Params.NavHandle, 0x8, &NavHandle, 0x8);
	memcpy_s(&BiasAgainstPolysWithinDistanceOfLocations_Params.InLocation, 0xC, &InLocation, 0xC);
	memcpy_s(&BiasAgainstPolysWithinDistanceOfLocations_Params.InRotation, 0xC, &InRotation, 0xC);
	memcpy_s(&BiasAgainstPolysWithinDistanceOfLocations_Params.InDistanceToCheck, 0x4, &InDistanceToCheck, 0x4);
	memcpy_s(&BiasAgainstPolysWithinDistanceOfLocations_Params.InLocationsToCheck, 0x10, &InLocationsToCheck, 0x10);

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::StaticClass()->ProcessEvent(uFnBiasAgainstPolysWithinDistanceOfLocations, &BiasAgainstPolysWithinDistanceOfLocations_Params, nullptr);

	return BiasAgainstPolysWithinDistanceOfLocations_Params.ReturnValue;
};

// Function GameFramework.SecondaryViewportClient.PostRender
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void USecondaryViewportClient::eventPostRender(class UCanvas* Canvas)
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GameFramework.SecondaryViewportClient.PostRender");
	}

	USecondaryViewportClient_eventPostRender_Params PostRender_Params;
	memcpy_s(&PostRender_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GameFramework.MobileSecondaryViewportClient.PostRender
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UMobileSecondaryViewportClient::eventPostRender(class UCanvas* Canvas)
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GameFramework.MobileSecondaryViewportClient.PostRender");
	}

	UMobileSecondaryViewportClient_eventPostRender_Params PostRender_Params;
	memcpy_s(&PostRender_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void USeqAct_GameCrowdPopulationManagerToggle::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAgentDestroyed = nullptr;

	if (!uFnAgentDestroyed)
	{
		uFnAgentDestroyed = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed");
	}

	USeqAct_GameCrowdPopulationManagerToggle_execAgentDestroyed_Params AgentDestroyed_Params;
	memcpy_s(&AgentDestroyed_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnAgentDestroyed, &AgentDestroyed_Params, nullptr);
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float USeqAct_GameCrowdPopulationManagerToggle::GetMaxSpawnDist()
{
	static UFunction* uFnGetMaxSpawnDist = nullptr;

	if (!uFnGetMaxSpawnDist)
	{
		uFnGetMaxSpawnDist = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist");
	}

	USeqAct_GameCrowdPopulationManagerToggle_execGetMaxSpawnDist_Params GetMaxSpawnDist_Params;

	this->ProcessEvent(uFnGetMaxSpawnDist, &GetMaxSpawnDist_Params, nullptr);

	return GetMaxSpawnDist_Params.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
// [0x00420802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdPopulationManager* PopMgr                         (CPF_Parm)
// struct FCrowdSpawnInfoItem     out_Item                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void USeqAct_GameCrowdPopulationManagerToggle::eventFillCrowdSpawnInfoItem(class AGameCrowdPopulationManager* PopMgr, struct FCrowdSpawnInfoItem& out_Item)
{
	static UFunction* uFnFillCrowdSpawnInfoItem = nullptr;

	if (!uFnFillCrowdSpawnInfoItem)
	{
		uFnFillCrowdSpawnInfoItem = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem");
	}

	USeqAct_GameCrowdPopulationManagerToggle_eventFillCrowdSpawnInfoItem_Params FillCrowdSpawnInfoItem_Params;
	memcpy_s(&FillCrowdSpawnInfoItem_Params.PopMgr, 0x8, &PopMgr, 0x8);
	memcpy_s(&FillCrowdSpawnInfoItem_Params.out_Item, 0x90, &out_Item, 0x90);

	this->ProcessEvent(uFnFillCrowdSpawnInfoItem, &FillCrowdSpawnInfoItem_Params, nullptr);

	memcpy_s(&out_Item, 0x90, &FillCrowdSpawnInfoItem_Params.out_Item, 0x90);
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_GameCrowdPopulationManagerToggle::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion");
	}

	USeqAct_GameCrowdPopulationManagerToggle_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	USeqAct_GameCrowdPopulationManagerToggle::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_GameCrowdSpawner::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion");
	}

	USeqAct_GameCrowdSpawner_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	USeqAct_GameCrowdSpawner::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_MobileSaveLoadValue::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion");
	}

	USeqAct_MobileSaveLoadValue_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	USeqAct_MobileSaveLoadValue::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgentSkeletal* Agent                          (CPF_Parm)

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor(class AGameCrowdAgentSkeletal* Agent)
{
	static UFunction* uFnSetCurrentAnimationActionFor = nullptr;

	if (!uFnSetCurrentAnimationActionFor)
	{
		uFnSetCurrentAnimationActionFor = UFunction::FindFunction("Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor");
	}

	USeqAct_PlayAgentAnimation_execSetCurrentAnimationActionFor_Params SetCurrentAnimationActionFor_Params;
	memcpy_s(&SetCurrentAnimationActionFor_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnSetCurrentAnimationActionFor, &SetCurrentAnimationActionFor_Params, nullptr);
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_PlayAgentAnimation::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion");
	}

	USeqAct_PlayAgentAnimation_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	USeqAct_PlayAgentAnimation::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRender.Render
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 TargetCanvas                   (CPF_Parm)
// class AHUD*                    TargetHud                      (CPF_Parm)

void USeqEvent_HudRender::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static UFunction* uFnRender = nullptr;

	if (!uFnRender)
	{
		uFnRender = UFunction::FindFunction("Function GameFramework.SeqEvent_HudRender.Render");
	}

	USeqEvent_HudRender_execRender_Params Render_Params;
	memcpy_s(&Render_Params.TargetCanvas, 0x8, &TargetCanvas, 0x8);
	memcpy_s(&Render_Params.TargetHud, 0x8, &TargetHud, 0x8);

	this->ProcessEvent(uFnRender, &Render_Params, nullptr);
};

// Function GameFramework.SeqEvent_HudRender.RegisterEvent
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void USeqEvent_HudRender::eventRegisterEvent()
{
	static UFunction* uFnRegisterEvent = nullptr;

	if (!uFnRegisterEvent)
	{
		uFnRegisterEvent = UFunction::FindFunction("Function GameFramework.SeqEvent_HudRender.RegisterEvent");
	}

	USeqEvent_HudRender_eventRegisterEvent_Params RegisterEvent_Params;

	this->ProcessEvent(uFnRegisterEvent, &RegisterEvent_Params, nullptr);
};

// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobilePlayerInput*      MPI                            (CPF_Parm)

void USeqEvent_MobileBase::eventAddToMobileInput(class UMobilePlayerInput* MPI)
{
	static UFunction* uFnAddToMobileInput = nullptr;

	if (!uFnAddToMobileInput)
	{
		uFnAddToMobileInput = UFunction::FindFunction("Function GameFramework.SeqEvent_MobileBase.AddToMobileInput");
	}

	USeqEvent_MobileBase_eventAddToMobileInput_Params AddToMobileInput_Params;
	memcpy_s(&AddToMobileInput_Params.MPI, 0x8, &MPI, 0x8);

	this->ProcessEvent(uFnAddToMobileInput, &AddToMobileInput_Params, nullptr);
};

// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void USeqEvent_MobileBase::eventRegisterEvent()
{
	static UFunction* uFnRegisterEvent = nullptr;

	if (!uFnRegisterEvent)
	{
		uFnRegisterEvent = UFunction::FindFunction("Function GameFramework.SeqEvent_MobileBase.RegisterEvent");
	}

	USeqEvent_MobileBase_eventRegisterEvent_Params RegisterEvent_Params;

	this->ProcessEvent(uFnRegisterEvent, &RegisterEvent_Params, nullptr);
};

// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqEvent_MobileMotion::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion");
	}

	USeqEvent_MobileMotion_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	USeqEvent_MobileMotion::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobilePlayerInput*      MPI                            (CPF_Parm)

void USeqEvent_MobileZoneBase::eventAddToMobileInput(class UMobilePlayerInput* MPI)
{
	static UFunction* uFnAddToMobileInput = nullptr;

	if (!uFnAddToMobileInput)
	{
		uFnAddToMobileInput = UFunction::FindFunction("Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput");
	}

	USeqEvent_MobileZoneBase_eventAddToMobileInput_Params AddToMobileInput_Params;
	memcpy_s(&AddToMobileInput_Params.MPI, 0x8, &MPI, 0x8);

	this->ProcessEvent(uFnAddToMobileInput, &AddToMobileInput_Params, nullptr);
};

// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void USeqEvent_MobileRawInput::eventRegisterEvent()
{
	static UFunction* uFnRegisterEvent = nullptr;

	if (!uFnRegisterEvent)
	{
		uFnRegisterEvent = UFunction::FindFunction("Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent");
	}

	USeqEvent_MobileRawInput_eventRegisterEvent_Params RegisterEvent_Params;

	this->ProcessEvent(uFnRegisterEvent, &RegisterEvent_Params, nullptr);
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// [0x00420800] (FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FPostProcessSettings    PP                             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGameCameraBase::eventModifyPostProcessSettings(struct FPostProcessSettings& PP)
{
	static UFunction* uFnModifyPostProcessSettings = nullptr;

	if (!uFnModifyPostProcessSettings)
	{
		uFnModifyPostProcessSettings = UFunction::FindFunction("Function GameFramework.GameCameraBase.ModifyPostProcessSettings");
	}

	UGameCameraBase_eventModifyPostProcessSettings_Params ModifyPostProcessSettings_Params;
	memcpy_s(&ModifyPostProcessSettings_Params.PP, 0x214, &PP, 0x214);

	this->ProcessEvent(uFnModifyPostProcessSettings, &ModifyPostProcessSettings_Params, nullptr);

	memcpy_s(&PP, 0x214, &ModifyPostProcessSettings_Params.PP, 0x214);
};

// Function GameFramework.GameCameraBase.Init
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCameraBase::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GameFramework.GameCameraBase.Init");
	}

	UGameCameraBase_execInit_Params Init_Params;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GameFramework.GameCameraBase.DisplayDebug
// [0x00420100] (FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void UGameCameraBase::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GameFramework.GameCameraBase.DisplayDebug");
	}

	UGameCameraBase_execDisplayDebug_Params DisplayDebug_Params;
	memcpy_s(&DisplayDebug_Params.HUD, 0x8, &HUD, 0x8);
	memcpy_s(&DisplayDebug_Params.out_YL, 0x4, &out_YL, 0x4);
	memcpy_s(&DisplayDebug_Params.out_YPos, 0x4, &out_YPos, 0x4);

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, 0x4, &DisplayDebug_Params.out_YL, 0x4);
	memcpy_s(&out_YPos, 0x4, &DisplayDebug_Params.out_YPos, 0x4);
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void UGameCameraBase::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GameCameraBase.ProcessViewRotation");
	}

	UGameCameraBase_execProcessViewRotation_Params ProcessViewRotation_Params;
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&ProcessViewRotation_Params.ViewTarget, 0x8, &ViewTarget, 0x8);
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, 0xC, &out_ViewRotation, 0xC);
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, 0xC, &out_DeltaRot, 0xC);

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, 0xC, &ProcessViewRotation_Params.out_ViewRotation, 0xC);
	memcpy_s(&out_DeltaRot, 0xC, &ProcessViewRotation_Params.out_DeltaRot, 0xC);
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameCameraBase::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCamera = nullptr;

	if (!uFnUpdateCamera)
	{
		uFnUpdateCamera = UFunction::FindFunction("Function GameFramework.GameCameraBase.UpdateCamera");
	}

	UGameCameraBase_execUpdateCamera_Params UpdateCamera_Params;
	memcpy_s(&UpdateCamera_Params.P, 0x8, &P, 0x8);
	memcpy_s(&UpdateCamera_Params.CameraActor, 0x8, &CameraActor, 0x8);
	memcpy_s(&UpdateCamera_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&UpdateCamera_Params.OutVT, 0x38, &OutVT, 0x38);

	this->ProcessEvent(uFnUpdateCamera, &UpdateCamera_Params, nullptr);

	memcpy_s(&OutVT, 0x38, &UpdateCamera_Params.OutVT, 0x38);
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameCameraBase::ResetInterpolation()
{
	static UFunction* uFnResetInterpolation = nullptr;

	if (!uFnResetInterpolation)
	{
		uFnResetInterpolation = UFunction::FindFunction("Function GameFramework.GameCameraBase.ResetInterpolation");
	}

	UGameCameraBase_execResetInterpolation_Params ResetInterpolation_Params;

	this->ProcessEvent(uFnResetInterpolation, &ResetInterpolation_Params, nullptr);
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameCameraBase*         NewCamera                      (CPF_Parm)

void UGameCameraBase::OnBecomeInActive(class UGameCameraBase* NewCamera)
{
	static UFunction* uFnOnBecomeInActive = nullptr;

	if (!uFnOnBecomeInActive)
	{
		uFnOnBecomeInActive = UFunction::FindFunction("Function GameFramework.GameCameraBase.OnBecomeInActive");
	}

	UGameCameraBase_execOnBecomeInActive_Params OnBecomeInActive_Params;
	memcpy_s(&OnBecomeInActive_Params.NewCamera, 0x8, &NewCamera, 0x8);

	this->ProcessEvent(uFnOnBecomeInActive, &OnBecomeInActive_Params, nullptr);
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameCameraBase::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameCameraBase.OnBecomeActive");
	}

	UGameCameraBase_execOnBecomeActive_Params OnBecomeActive_Params;
	memcpy_s(&OnBecomeActive_Params.OldCamera, 0x8, &OldCamera, 0x8);

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameThirdPersonCamera::ResetInterpolation()
{
	static UFunction* uFnResetInterpolation = nullptr;

	if (!uFnResetInterpolation)
	{
		uFnResetInterpolation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ResetInterpolation");
	}

	UGameThirdPersonCamera_execResetInterpolation_Params ResetInterpolation_Params;

	this->ProcessEvent(uFnResetInterpolation, &ResetInterpolation_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// [0x00420802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FPostProcessSettings    PP                             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGameThirdPersonCamera::eventModifyPostProcessSettings(struct FPostProcessSettings& PP)
{
	static UFunction* uFnModifyPostProcessSettings = nullptr;

	if (!uFnModifyPostProcessSettings)
	{
		uFnModifyPostProcessSettings = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings");
	}

	UGameThirdPersonCamera_eventModifyPostProcessSettings_Params ModifyPostProcessSettings_Params;
	memcpy_s(&ModifyPostProcessSettings_Params.PP, 0x214, &PP, 0x214);

	this->ProcessEvent(uFnModifyPostProcessSettings, &ModifyPostProcessSettings_Params, nullptr);

	memcpy_s(&PP, 0x214, &ModifyPostProcessSettings_Params.PP, 0x214);
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameThirdPersonCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.OnBecomeActive");
	}

	UGameThirdPersonCamera_execOnBecomeActive_Params OnBecomeActive_Params;
	memcpy_s(&OnBecomeActive_Params.OldCamera, 0x8, &OldCamera, 0x8);

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCamera::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ProcessViewRotation");
	}

	UGameThirdPersonCamera_execProcessViewRotation_Params ProcessViewRotation_Params;
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&ProcessViewRotation_Params.ViewTarget, 0x8, &ViewTarget, 0x8);
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, 0xC, &out_ViewRotation, 0xC);
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, 0xC, &out_DeltaRot, 0xC);

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, 0xC, &ProcessViewRotation_Params.out_ViewRotation, 0xC);
	memcpy_s(&out_DeltaRot, 0xC, &ProcessViewRotation_Params.out_DeltaRot, 0xC);
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00080003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class APawn*                   P                              (CPF_Parm)

void UGameThirdPersonCamera::UpdateCameraMode(class APawn* P)
{
	static UFunction* uFnUpdateCameraMode = nullptr;

	if (!uFnUpdateCameraMode)
	{
		uFnUpdateCameraMode = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.UpdateCameraMode");
	}

	UGameThirdPersonCamera_execUpdateCameraMode_Params UpdateCameraMode_Params;
	memcpy_s(&UpdateCameraMode_Params.P, 0x8, &P, 0x8);

	this->ProcessEvent(uFnUpdateCameraMode, &UpdateCameraMode_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameThirdPersonCameraMode* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   P                              (CPF_Parm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode(class APawn* P)
{
	static UFunction* uFnFindBestCameraMode = nullptr;

	if (!uFnFindBestCameraMode)
	{
		uFnFindBestCameraMode = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.FindBestCameraMode");
	}

	UGameThirdPersonCamera_execFindBestCameraMode_Params FindBestCameraMode_Params;
	memcpy_s(&FindBestCameraMode_Params.P, 0x8, &P, 0x8);

	this->ProcessEvent(uFnFindBestCameraMode, &FindBestCameraMode_Params, nullptr);

	return FindBestCameraMode_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                Delta                          (CPF_Parm)

void UGameThirdPersonCamera::AdjustFocusPointInterpolation(struct FRotator Delta)
{
	static UFunction* uFnAdjustFocusPointInterpolation = nullptr;

	if (!uFnAdjustFocusPointInterpolation)
	{
		uFnAdjustFocusPointInterpolation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation");
	}

	UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Params AdjustFocusPointInterpolation_Params;
	memcpy_s(&AdjustFocusPointInterpolation_Params.Delta, 0xC, &Delta, 0xC);

	this->ProcessEvent(uFnAdjustFocusPointInterpolation, &AdjustFocusPointInterpolation_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00880002] (FUNC_RequiredAPI | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector UGameThirdPersonCamera::GetActualFocusLocation()
{
	static UFunction* uFnGetActualFocusLocation = nullptr;

	if (!uFnGetActualFocusLocation)
	{
		uFnGetActualFocusLocation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation");
	}

	UGameThirdPersonCamera_execGetActualFocusLocation_Params GetActualFocusLocation_Params;

	this->ProcessEvent(uFnGetActualFocusLocation, &GetActualFocusLocation_Params, nullptr);

	return GetActualFocusLocation_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00080802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class APawn*                   P                              (CPF_Parm)

void UGameThirdPersonCamera::eventUpdateFocusPoint(class APawn* P)
{
	static UFunction* uFnUpdateFocusPoint = nullptr;

	if (!uFnUpdateFocusPoint)
	{
		uFnUpdateFocusPoint = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint");
	}

	UGameThirdPersonCamera_eventUpdateFocusPoint_Params UpdateFocusPoint_Params;
	memcpy_s(&UpdateFocusPoint_Params.P, 0x8, &P, 0x8);

	this->ProcessEvent(uFnUpdateFocusPoint, &UpdateFocusPoint_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bLeaveCameraRotation           (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::ClearFocusPoint(unsigned long bLeaveCameraRotation)
{
	static UFunction* uFnClearFocusPoint = nullptr;

	if (!uFnClearFocusPoint)
	{
		uFnClearFocusPoint = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ClearFocusPoint");
	}

	UGameThirdPersonCamera_execClearFocusPoint_Params ClearFocusPoint_Params;
	ClearFocusPoint_Params.bLeaveCameraRotation = bLeaveCameraRotation;

	this->ProcessEvent(uFnClearFocusPoint, &ClearFocusPoint_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameThirdPersonCamera::GetFocusActor()
{
	static UFunction* uFnGetFocusActor = nullptr;

	if (!uFnGetFocusActor)
	{
		uFnGetFocusActor = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.GetFocusActor");
	}

	UGameThirdPersonCamera_execGetFocusActor_Params GetFocusActor_Params;

	this->ProcessEvent(uFnGetFocusActor, &GetFocusActor_Params, nullptr);

	return GetFocusActor_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AActor*                  FocusActor                     (CPF_Parm)
// struct FName                   FocusBoneName                  (CPF_Parm)
// struct FVector2D               InterpSpeedRange               (CPF_Parm)
// struct FVector2D               InFocusFOV                     (CPF_Parm)
// float                          CameraFOV                      (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bAlwaysFocus                   (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bAdjustCamera                  (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bIgnoreTrace                   (CPF_OptionalParm | CPF_Parm)
// float                          FocusPitchOffsetDeg            (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::SetFocusOnActor(class AActor* FocusActor, struct FName FocusBoneName, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static UFunction* uFnSetFocusOnActor = nullptr;

	if (!uFnSetFocusOnActor)
	{
		uFnSetFocusOnActor = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.SetFocusOnActor");
	}

	UGameThirdPersonCamera_execSetFocusOnActor_Params SetFocusOnActor_Params;
	memcpy_s(&SetFocusOnActor_Params.FocusActor, 0x8, &FocusActor, 0x8);
	memcpy_s(&SetFocusOnActor_Params.FocusBoneName, 0x8, &FocusBoneName, 0x8);
	memcpy_s(&SetFocusOnActor_Params.InterpSpeedRange, 0x8, &InterpSpeedRange, 0x8);
	memcpy_s(&SetFocusOnActor_Params.InFocusFOV, 0x8, &InFocusFOV, 0x8);
	memcpy_s(&SetFocusOnActor_Params.CameraFOV, 0x4, &CameraFOV, 0x4);
	SetFocusOnActor_Params.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnActor_Params.bAdjustCamera = bAdjustCamera;
	SetFocusOnActor_Params.bIgnoreTrace = bIgnoreTrace;
	memcpy_s(&SetFocusOnActor_Params.FocusPitchOffsetDeg, 0x4, &FocusPitchOffsetDeg, 0x4);

	this->ProcessEvent(uFnSetFocusOnActor, &SetFocusOnActor_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 FocusWorldLoc                  (CPF_Parm)
// struct FVector2D               InterpSpeedRange               (CPF_Parm)
// struct FVector2D               InFocusFOV                     (CPF_Parm)
// float                          CameraFOV                      (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bAlwaysFocus                   (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bAdjustCamera                  (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bIgnoreTrace                   (CPF_OptionalParm | CPF_Parm)
// float                          FocusPitchOffsetDeg            (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::SetFocusOnLoc(struct FVector FocusWorldLoc, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static UFunction* uFnSetFocusOnLoc = nullptr;

	if (!uFnSetFocusOnLoc)
	{
		uFnSetFocusOnLoc = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc");
	}

	UGameThirdPersonCamera_execSetFocusOnLoc_Params SetFocusOnLoc_Params;
	memcpy_s(&SetFocusOnLoc_Params.FocusWorldLoc, 0xC, &FocusWorldLoc, 0xC);
	memcpy_s(&SetFocusOnLoc_Params.InterpSpeedRange, 0x8, &InterpSpeedRange, 0x8);
	memcpy_s(&SetFocusOnLoc_Params.InFocusFOV, 0x8, &InFocusFOV, 0x8);
	memcpy_s(&SetFocusOnLoc_Params.CameraFOV, 0x4, &CameraFOV, 0x4);
	SetFocusOnLoc_Params.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnLoc_Params.bAdjustCamera = bAdjustCamera;
	SetFocusOnLoc_Params.bIgnoreTrace = bIgnoreTrace;
	memcpy_s(&SetFocusOnLoc_Params.FocusPitchOffsetDeg, 0x4, &FocusPitchOffsetDeg, 0x4);

	this->ProcessEvent(uFnSetFocusOnLoc, &SetFocusOnLoc_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        AngleOffset                    (CPF_Parm)

void UGameThirdPersonCamera::AdjustTurn(int32_t AngleOffset)
{
	static UFunction* uFnAdjustTurn = nullptr;

	if (!uFnAdjustTurn)
	{
		uFnAdjustTurn = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.AdjustTurn");
	}

	UGameThirdPersonCamera_execAdjustTurn_Params AdjustTurn_Params;
	memcpy_s(&AdjustTurn_Params.AngleOffset, 0x4, &AngleOffset, 0x4);

	this->ProcessEvent(uFnAdjustTurn, &AdjustTurn_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameThirdPersonCamera::EndTurn()
{
	static UFunction* uFnEndTurn = nullptr;

	if (!uFnEndTurn)
	{
		uFnEndTurn = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.EndTurn");
	}

	UGameThirdPersonCamera_execEndTurn_Params EndTurn_Params;

	uFnEndTurn->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEndTurn, &EndTurn_Params, nullptr);

	uFnEndTurn->FunctionFlags |= 0x400;
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        StartAngle                     (CPF_Parm)
// int32_t                        EndAngle                       (CPF_Parm)
// float                          TimeSec                        (CPF_Parm)
// float                          DelaySec                       (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bAlignTargetWhenFinished       (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::BeginTurn(int32_t StartAngle, int32_t EndAngle, float TimeSec, float DelaySec, unsigned long bAlignTargetWhenFinished)
{
	static UFunction* uFnBeginTurn = nullptr;

	if (!uFnBeginTurn)
	{
		uFnBeginTurn = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.BeginTurn");
	}

	UGameThirdPersonCamera_execBeginTurn_Params BeginTurn_Params;
	memcpy_s(&BeginTurn_Params.StartAngle, 0x4, &StartAngle, 0x4);
	memcpy_s(&BeginTurn_Params.EndAngle, 0x4, &EndAngle, 0x4);
	memcpy_s(&BeginTurn_Params.TimeSec, 0x4, &TimeSec, 0x4);
	memcpy_s(&BeginTurn_Params.DelaySec, 0x4, &DelaySec, 0x4);
	BeginTurn_Params.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	this->ProcessEvent(uFnBeginTurn, &BeginTurn_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00480400] (FUNC_Native | FUNC_Protected | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCamera::PlayerUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnPlayerUpdateCamera = nullptr;

	if (!uFnPlayerUpdateCamera)
	{
		uFnPlayerUpdateCamera = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera");
	}

	UGameThirdPersonCamera_execPlayerUpdateCamera_Params PlayerUpdateCamera_Params;
	memcpy_s(&PlayerUpdateCamera_Params.P, 0x8, &P, 0x8);
	memcpy_s(&PlayerUpdateCamera_Params.CameraActor, 0x8, &CameraActor, 0x8);
	memcpy_s(&PlayerUpdateCamera_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&PlayerUpdateCamera_Params.OutVT, 0x38, &OutVT, 0x38);

	uFnPlayerUpdateCamera->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPlayerUpdateCamera, &PlayerUpdateCamera_Params, nullptr);

	uFnPlayerUpdateCamera->FunctionFlags |= 0x400;

	memcpy_s(&OutVT, 0x38, &PlayerUpdateCamera_Params.OutVT, 0x38);
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCamera = nullptr;

	if (!uFnUpdateCamera)
	{
		uFnUpdateCamera = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.UpdateCamera");
	}

	UGameThirdPersonCamera_execUpdateCamera_Params UpdateCamera_Params;
	memcpy_s(&UpdateCamera_Params.P, 0x8, &P, 0x8);
	memcpy_s(&UpdateCamera_Params.CameraActor, 0x8, &CameraActor, 0x8);
	memcpy_s(&UpdateCamera_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&UpdateCamera_Params.OutVT, 0x38, &OutVT, 0x38);

	this->ProcessEvent(uFnUpdateCamera, &UpdateCamera_Params, nullptr);

	memcpy_s(&OutVT, 0x38, &UpdateCamera_Params.OutVT, 0x38);
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   ViewedPawn                     (CPF_Parm)

float UGameThirdPersonCamera::eventGetDesiredFOV(class APawn* ViewedPawn)
{
	static UFunction* uFnGetDesiredFOV = nullptr;

	if (!uFnGetDesiredFOV)
	{
		uFnGetDesiredFOV = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.GetDesiredFOV");
	}

	UGameThirdPersonCamera_eventGetDesiredFOV_Params GetDesiredFOV_Params;
	memcpy_s(&GetDesiredFOV_Params.ViewedPawn, 0x8, &ViewedPawn, 0x8);

	this->ProcessEvent(uFnGetDesiredFOV, &GetDesiredFOV_Params, nullptr);

	return GetDesiredFOV_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameThirdPersonCamera::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.Init");
	}

	UGameThirdPersonCamera_execInit_Params Init_Params;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameThirdPersonCamera::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.Reset");
	}

	UGameThirdPersonCamera_execReset_Params Reset_Params;

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00080002] (FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class UGameThirdPersonCameraMode* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  ModeClass                      (CPF_Parm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode(class UClass* ModeClass)
{
	static UFunction* uFnCreateCameraMode = nullptr;

	if (!uFnCreateCameraMode)
	{
		uFnCreateCameraMode = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.CreateCameraMode");
	}

	UGameThirdPersonCamera_execCreateCameraMode_Params CreateCameraMode_Params;
	memcpy_s(&CreateCameraMode_Params.ModeClass, 0x8, &ModeClass, 0x8);

	this->ProcessEvent(uFnCreateCameraMode, &CreateCameraMode_Params, nullptr);

	return CreateCameraMode_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          inHorizFOV                     (CPF_Parm)
// class APawn*                   CameraTargetPawn               (CPF_Parm)

float AGamePlayerCamera::AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn)
{
	static UFunction* uFnAdjustFOVForViewport = nullptr;

	if (!uFnAdjustFOVForViewport)
	{
		uFnAdjustFOVForViewport = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.AdjustFOVForViewport");
	}

	AGamePlayerCamera_execAdjustFOVForViewport_Params AdjustFOVForViewport_Params;
	memcpy_s(&AdjustFOVForViewport_Params.inHorizFOV, 0x4, &inHorizFOV, 0x4);
	memcpy_s(&AdjustFOVForViewport_Params.CameraTargetPawn, 0x8, &CameraTargetPawn, 0x8);

	uFnAdjustFOVForViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAdjustFOVForViewport, &AdjustFOVForViewport_Params, nullptr);

	uFnAdjustFOVForViewport->FunctionFlags |= 0x400;

	return AdjustFOVForViewport_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void AGamePlayerCamera::ProcessViewRotation(float DeltaTime, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.ProcessViewRotation");
	}

	AGamePlayerCamera_execProcessViewRotation_Params ProcessViewRotation_Params;
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, 0xC, &out_ViewRotation, 0xC);
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, 0xC, &out_DeltaRot, 0xC);

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, 0xC, &ProcessViewRotation_Params.out_ViewRotation, 0xC);
	memcpy_s(&out_DeltaRot, 0xC, &ProcessViewRotation_Params.out_DeltaRot, 0xC);
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGamePlayerCamera::ResetInterpolation()
{
	static UFunction* uFnResetInterpolation = nullptr;

	if (!uFnResetInterpolation)
	{
		uFnResetInterpolation = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.ResetInterpolation");
	}

	AGamePlayerCamera_execResetInterpolation_Params ResetInterpolation_Params;

	this->ProcessEvent(uFnResetInterpolation, &ResetInterpolation_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 NewColorScale                  (CPF_Parm)

void AGamePlayerCamera::SetColorScale(struct FVector NewColorScale)
{
	static UFunction* uFnSetColorScale = nullptr;

	if (!uFnSetColorScale)
	{
		uFnSetColorScale = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.SetColorScale");
	}

	AGamePlayerCamera_execSetColorScale_Params SetColorScale_Params;
	memcpy_s(&SetColorScale_Params.NewColorScale, 0xC, &NewColorScale, 0xC);

	this->ProcessEvent(uFnSetColorScale, &SetColorScale_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00420102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AGamePlayerCamera::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.DisplayDebug");
	}

	AGamePlayerCamera_execDisplayDebug_Params DisplayDebug_Params;
	memcpy_s(&DisplayDebug_Params.HUD, 0x8, &HUD, 0x8);
	memcpy_s(&DisplayDebug_Params.out_YL, 0x4, &out_YL, 0x4);
	memcpy_s(&DisplayDebug_Params.out_YPos, 0x4, &out_YPos, 0x4);

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, 0x4, &DisplayDebug_Params.out_YL, 0x4);
	memcpy_s(&out_YPos, 0x4, &DisplayDebug_Params.out_YPos, 0x4);
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// [0x00420102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FTViewTarget            OutVT                          (CPF_Const | CPF_Parm | CPF_OutParm)

void AGamePlayerCamera::UpdateCameraLensEffects(struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCameraLensEffects = nullptr;

	if (!uFnUpdateCameraLensEffects)
	{
		uFnUpdateCameraLensEffects = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects");
	}

	AGamePlayerCamera_execUpdateCameraLensEffects_Params UpdateCameraLensEffects_Params;
	memcpy_s(&UpdateCameraLensEffects_Params.OutVT, 0x38, &OutVT, 0x38);

	this->ProcessEvent(uFnUpdateCameraLensEffects, &UpdateCameraLensEffects_Params, nullptr);

	memcpy_s(&OutVT, 0x38, &UpdateCameraLensEffects_Params.OutVT, 0x38);
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void AGamePlayerCamera::UpdateViewTarget(float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateViewTarget = nullptr;

	if (!uFnUpdateViewTarget)
	{
		uFnUpdateViewTarget = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.UpdateViewTarget");
	}

	AGamePlayerCamera_execUpdateViewTarget_Params UpdateViewTarget_Params;
	memcpy_s(&UpdateViewTarget_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&UpdateViewTarget_Params.OutVT, 0x38, &OutVT, 0x38);

	this->ProcessEvent(uFnUpdateViewTarget, &UpdateViewTarget_Params, nullptr);

	memcpy_s(&OutVT, 0x38, &UpdateViewTarget_Params.OutVT, 0x38);
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGamePlayerCamera::ShouldConstrainAspectRatio()
{
	static UFunction* uFnShouldConstrainAspectRatio = nullptr;

	if (!uFnShouldConstrainAspectRatio)
	{
		uFnShouldConstrainAspectRatio = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio");
	}

	AGamePlayerCamera_execShouldConstrainAspectRatio_Params ShouldConstrainAspectRatio_Params;

	this->ProcessEvent(uFnShouldConstrainAspectRatio, &ShouldConstrainAspectRatio_Params, nullptr);

	return ShouldConstrainAspectRatio_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
// [0x00080002] (FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class UGameCameraBase*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  CameraTarget                   (CPF_Parm)

class UGameCameraBase* AGamePlayerCamera::FindBestCameraType(class AActor* CameraTarget)
{
	static UFunction* uFnFindBestCameraType = nullptr;

	if (!uFnFindBestCameraType)
	{
		uFnFindBestCameraType = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.FindBestCameraType");
	}

	AGamePlayerCamera_execFindBestCameraType_Params FindBestCameraType_Params;
	memcpy_s(&FindBestCameraType_Params.CameraTarget, 0x8, &CameraTarget, 0x8);

	this->ProcessEvent(uFnFindBestCameraType, &FindBestCameraType_Params, nullptr);

	return FindBestCameraType_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGamePlayerCamera::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.Reset");
	}

	AGamePlayerCamera_execReset_Params Reset_Params;

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGamePlayerCamera::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.PostBeginPlay");
	}

	AGamePlayerCamera_execPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class AActor*                  TargetBase                     (CPF_Parm)

void AGamePlayerCamera::CacheLastTargetBaseInfo(class AActor* TargetBase)
{
	static UFunction* uFnCacheLastTargetBaseInfo = nullptr;

	if (!uFnCacheLastTargetBaseInfo)
	{
		uFnCacheLastTargetBaseInfo = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo");
	}

	AGamePlayerCamera_execCacheLastTargetBaseInfo_Params CacheLastTargetBaseInfo_Params;
	memcpy_s(&CacheLastTargetBaseInfo_Params.TargetBase, 0x8, &TargetBase, 0x8);

	uFnCacheLastTargetBaseInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCacheLastTargetBaseInfo, &CacheLastTargetBaseInfo_Params, nullptr);

	uFnCacheLastTargetBaseInfo->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00080002] (FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// class UGameCameraBase*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  CameraClass                    (CPF_Parm)

class UGameCameraBase* AGamePlayerCamera::CreateCamera(class UClass* CameraClass)
{
	static UFunction* uFnCreateCamera = nullptr;

	if (!uFnCreateCamera)
	{
		uFnCreateCamera = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.CreateCamera");
	}

	AGamePlayerCamera_execCreateCamera_Params CreateCamera_Params;
	memcpy_s(&CreateCamera_Params.CameraClass, 0x8, &CameraClass, 0x8);

	this->ProcessEvent(uFnCreateCamera, &CreateCamera_Params, nullptr);

	return CreateCamera_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FViewOffsetData         NewViewOffset                  (CPF_Const | CPF_Parm | CPF_OutParm)

void UGameThirdPersonCameraMode::SetViewOffset(struct FViewOffsetData& NewViewOffset)
{
	static UFunction* uFnSetViewOffset = nullptr;

	if (!uFnSetViewOffset)
	{
		uFnSetViewOffset = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.SetViewOffset");
	}

	UGameThirdPersonCameraMode_execSetViewOffset_Params SetViewOffset_Params;
	memcpy_s(&SetViewOffset_Params.NewViewOffset, 0x24, &NewViewOffset, 0x24);

	uFnSetViewOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetViewOffset, &SetViewOffset_Params, nullptr);

	uFnSetViewOffset->FunctionFlags |= 0x400;

	memcpy_s(&NewViewOffset, 0x24, &SetViewOffset_Params.NewViewOffset, 0x24);
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// [0x00420102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FPostProcessSettings    PP                             (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UGameThirdPersonCameraMode::ModifyPostProcessSettings(struct FPostProcessSettings& PP)
{
	static UFunction* uFnModifyPostProcessSettings = nullptr;

	if (!uFnModifyPostProcessSettings)
	{
		uFnModifyPostProcessSettings = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings");
	}

	UGameThirdPersonCameraMode_execModifyPostProcessSettings_Params ModifyPostProcessSettings_Params;
	memcpy_s(&ModifyPostProcessSettings_Params.PP, 0x214, &PP, 0x214);

	this->ProcessEvent(uFnModifyPostProcessSettings, &ModifyPostProcessSettings_Params, nullptr);

	memcpy_s(&PP, 0x214, &ModifyPostProcessSettings_Params.PP, 0x214);
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00C20102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            VT                             (CPF_Const | CPF_Parm | CPF_OutParm)

void UGameThirdPersonCameraMode::UpdatePostProcess(float DeltaTime, struct FTViewTarget& VT)
{
	static UFunction* uFnUpdatePostProcess = nullptr;

	if (!uFnUpdatePostProcess)
	{
		uFnUpdatePostProcess = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess");
	}

	UGameThirdPersonCameraMode_execUpdatePostProcess_Params UpdatePostProcess_Params;
	memcpy_s(&UpdatePostProcess_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&UpdatePostProcess_Params.VT, 0x38, &VT, 0x38);

	this->ProcessEvent(uFnUpdatePostProcess, &UpdatePostProcess_Params, nullptr);

	memcpy_s(&VT, 0x38, &UpdatePostProcess_Params.VT, 0x38);
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00880102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  TraceOwner                     (CPF_Parm)
// struct FVector                 StartTrace                     (CPF_Parm)
// struct FVector                 EndTrace                       (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::DOFTrace(class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace)
{
	static UFunction* uFnDOFTrace = nullptr;

	if (!uFnDOFTrace)
	{
		uFnDOFTrace = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.DOFTrace");
	}

	UGameThirdPersonCameraMode_execDOFTrace_Params DOFTrace_Params;
	memcpy_s(&DOFTrace_Params.TraceOwner, 0x8, &TraceOwner, 0x8);
	memcpy_s(&DOFTrace_Params.StartTrace, 0xC, &StartTrace, 0xC);
	memcpy_s(&DOFTrace_Params.EndTrace, 0xC, &EndTrace, 0xC);

	this->ProcessEvent(uFnDOFTrace, &DOFTrace_Params, nullptr);

	return DOFTrace_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00080102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  TraceOwner                     (CPF_Parm)
// struct FVector                 StartTrace                     (CPF_Parm)
// struct FVector                 EndTrace                       (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc(class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace)
{
	static UFunction* uFnGetDOFFocusLoc = nullptr;

	if (!uFnGetDOFFocusLoc)
	{
		uFnGetDOFFocusLoc = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc");
	}

	UGameThirdPersonCameraMode_execGetDOFFocusLoc_Params GetDOFFocusLoc_Params;
	memcpy_s(&GetDOFFocusLoc_Params.TraceOwner, 0x8, &TraceOwner, 0x8);
	memcpy_s(&GetDOFFocusLoc_Params.StartTrace, 0xC, &StartTrace, 0xC);
	memcpy_s(&GetDOFFocusLoc_Params.EndTrace, 0xC, &EndTrace, 0xC);

	this->ProcessEvent(uFnGetDOFFocusLoc, &GetDOFFocusLoc_Params, nullptr);

	return GetDOFFocusLoc_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00420100] (FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCameraMode::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation");
	}

	UGameThirdPersonCameraMode_execProcessViewRotation_Params ProcessViewRotation_Params;
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&ProcessViewRotation_Params.ViewTarget, 0x8, &ViewTarget, 0x8);
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, 0xC, &out_ViewRotation, 0xC);
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, 0xC, &out_DeltaRot, 0xC);

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, 0xC, &ProcessViewRotation_Params.out_ViewRotation, 0xC);
	memcpy_s(&out_DeltaRot, 0xC, &ProcessViewRotation_Params.out_DeltaRot, 0xC);
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   ViewedPawn                     (CPF_Parm)

bool UGameThirdPersonCameraMode::SetFocusPoint(class APawn* ViewedPawn)
{
	static UFunction* uFnSetFocusPoint = nullptr;

	if (!uFnSetFocusPoint)
	{
		uFnSetFocusPoint = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint");
	}

	UGameThirdPersonCameraMode_execSetFocusPoint_Params SetFocusPoint_Params;
	memcpy_s(&SetFocusPoint_Params.ViewedPawn, 0x8, &ViewedPawn, 0x8);

	this->ProcessEvent(uFnSetFocusPoint, &SetFocusPoint_Params, nullptr);

	return SetFocusPoint_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   TargetPawn                     (CPF_Parm)
// struct FTViewTarget            CurrentViewTarget              (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::eventGetCameraWorstCaseLoc(class APawn* TargetPawn, struct FTViewTarget CurrentViewTarget)
{
	static UFunction* uFnGetCameraWorstCaseLoc = nullptr;

	if (!uFnGetCameraWorstCaseLoc)
	{
		uFnGetCameraWorstCaseLoc = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc");
	}

	UGameThirdPersonCameraMode_eventGetCameraWorstCaseLoc_Params GetCameraWorstCaseLoc_Params;
	memcpy_s(&GetCameraWorstCaseLoc_Params.TargetPawn, 0x8, &TargetPawn, 0x8);
	memcpy_s(&GetCameraWorstCaseLoc_Params.CurrentViewTarget, 0x38, &CurrentViewTarget, 0x38);

	this->ProcessEvent(uFnGetCameraWorstCaseLoc, &GetCameraWorstCaseLoc_Params, nullptr);

	return GetCameraWorstCaseLoc_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   ViewedPawn                     (CPF_Parm)

float UGameThirdPersonCameraMode::GetDesiredFOV(class APawn* ViewedPawn)
{
	static UFunction* uFnGetDesiredFOV = nullptr;

	if (!uFnGetDesiredFOV)
	{
		uFnGetDesiredFOV = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV");
	}

	UGameThirdPersonCameraMode_execGetDesiredFOV_Params GetDesiredFOV_Params;
	memcpy_s(&GetDesiredFOV_Params.ViewedPawn, 0x8, &ViewedPawn, 0x8);

	this->ProcessEvent(uFnGetDesiredFOV, &GetDesiredFOV_Params, nullptr);

	return GetDesiredFOV_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   P                              (CPF_Parm)
// struct FVector                 Offset                         (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::eventAdjustViewOffset(class APawn* P, struct FVector Offset)
{
	static UFunction* uFnAdjustViewOffset = nullptr;

	if (!uFnAdjustViewOffset)
	{
		uFnAdjustViewOffset = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset");
	}

	UGameThirdPersonCameraMode_eventAdjustViewOffset_Params AdjustViewOffset_Params;
	memcpy_s(&AdjustViewOffset_Params.P, 0x8, &P, 0x8);
	memcpy_s(&AdjustViewOffset_Params.Offset, 0xC, &Offset, 0xC);

	this->ProcessEvent(uFnAdjustViewOffset, &AdjustViewOffset_Params, nullptr);

	return AdjustViewOffset_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APawn*                   TargetPawn                     (CPF_Parm)
// class UGameThirdPersonCameraMode* NewMode                        (CPF_Parm)

void UGameThirdPersonCameraMode::OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode)
{
	static UFunction* uFnOnBecomeInActive = nullptr;

	if (!uFnOnBecomeInActive)
	{
		uFnOnBecomeInActive = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive");
	}

	UGameThirdPersonCameraMode_execOnBecomeInActive_Params OnBecomeInActive_Params;
	memcpy_s(&OnBecomeInActive_Params.TargetPawn, 0x8, &TargetPawn, 0x8);
	memcpy_s(&OnBecomeInActive_Params.NewMode, 0x8, &NewMode, 0x8);

	this->ProcessEvent(uFnOnBecomeInActive, &OnBecomeInActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APawn*                   TargetPawn                     (CPF_Parm)
// class UGameThirdPersonCameraMode* PrevMode                       (CPF_Parm)

void UGameThirdPersonCameraMode::OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive");
	}

	UGameThirdPersonCameraMode_execOnBecomeActive_Params OnBecomeActive_Params;
	memcpy_s(&OnBecomeActive_Params.TargetPawn, 0x8, &TargetPawn, 0x8);
	memcpy_s(&OnBecomeActive_Params.PrevMode, 0x8, &PrevMode, 0x8);

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCameraMode.Init
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameThirdPersonCameraMode::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.Init");
	}

	UGameThirdPersonCameraMode_execInit_Params Init_Params;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                InRotation                     (CPF_Parm)
// struct FVector                 RelativeSpaceOffset            (CPF_Parm)

struct FVector UGameSpecialMove::RelativeToWorldOffset(struct FRotator InRotation, struct FVector RelativeSpaceOffset)
{
	static UFunction* uFnRelativeToWorldOffset = nullptr;

	if (!uFnRelativeToWorldOffset)
	{
		uFnRelativeToWorldOffset = UFunction::FindFunction("Function GameFramework.GameSpecialMove.RelativeToWorldOffset");
	}

	UGameSpecialMove_execRelativeToWorldOffset_Params RelativeToWorldOffset_Params;
	memcpy_s(&RelativeToWorldOffset_Params.InRotation, 0xC, &InRotation, 0xC);
	memcpy_s(&RelativeToWorldOffset_Params.RelativeSpaceOffset, 0xC, &RelativeSpaceOffset, 0xC);

	uFnRelativeToWorldOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRelativeToWorldOffset, &RelativeToWorldOffset_Params, nullptr);

	uFnRelativeToWorldOffset->FunctionFlags |= 0x400;

	return RelativeToWorldOffset_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                InRotation                     (CPF_Parm)
// struct FVector                 WorldSpaceOffset               (CPF_Parm)

struct FVector UGameSpecialMove::WorldToRelativeOffset(struct FRotator InRotation, struct FVector WorldSpaceOffset)
{
	static UFunction* uFnWorldToRelativeOffset = nullptr;

	if (!uFnWorldToRelativeOffset)
	{
		uFnWorldToRelativeOffset = UFunction::FindFunction("Function GameFramework.GameSpecialMove.WorldToRelativeOffset");
	}

	UGameSpecialMove_execWorldToRelativeOffset_Params WorldToRelativeOffset_Params;
	memcpy_s(&WorldToRelativeOffset_Params.InRotation, 0xC, &InRotation, 0xC);
	memcpy_s(&WorldToRelativeOffset_Params.WorldSpaceOffset, 0xC, &WorldSpaceOffset, 0xC);

	uFnWorldToRelativeOffset->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnWorldToRelativeOffset, &WorldToRelativeOffset_Params, nullptr);

	uFnWorldToRelativeOffset->FunctionFlags |= 0x400;

	return WorldToRelativeOffset_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APawn*                   P                              (CPF_Parm)
// struct FRotator                NewRotation                    (CPF_Parm)

void UGameSpecialMove::ForcePawnRotation(class APawn* P, struct FRotator NewRotation)
{
	static UFunction* uFnForcePawnRotation = nullptr;

	if (!uFnForcePawnRotation)
	{
		uFnForcePawnRotation = UFunction::FindFunction("Function GameFramework.GameSpecialMove.ForcePawnRotation");
	}

	UGameSpecialMove_execForcePawnRotation_Params ForcePawnRotation_Params;
	memcpy_s(&ForcePawnRotation_Params.P, 0x8, &P, 0x8);
	memcpy_s(&ForcePawnRotation_Params.NewRotation, 0xC, &NewRotation, 0xC);

	uFnForcePawnRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnForcePawnRotation, &ForcePawnRotation_Params, nullptr);

	uFnForcePawnRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.MessageEvent
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   EventName                      (CPF_Parm)
// class UObject*                 Sender                         (CPF_Parm)

bool UGameSpecialMove::MessageEvent(struct FName EventName, class UObject* Sender)
{
	static UFunction* uFnMessageEvent = nullptr;

	if (!uFnMessageEvent)
	{
		uFnMessageEvent = UFunction::FindFunction("Function GameFramework.GameSpecialMove.MessageEvent");
	}

	UGameSpecialMove_execMessageEvent_Params MessageEvent_Params;
	memcpy_s(&MessageEvent_Params.EventName, 0x8, &EventName, 0x8);
	memcpy_s(&MessageEvent_Params.Sender, 0x8, &Sender, 0x8);

	this->ProcessEvent(uFnMessageEvent, &MessageEvent_Params, nullptr);

	return MessageEvent_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameSpecialMove::ResetFacePreciseRotation()
{
	static UFunction* uFnResetFacePreciseRotation = nullptr;

	if (!uFnResetFacePreciseRotation)
	{
		uFnResetFacePreciseRotation = UFunction::FindFunction("Function GameFramework.GameSpecialMove.ResetFacePreciseRotation");
	}

	UGameSpecialMove_execResetFacePreciseRotation_Params ResetFacePreciseRotation_Params;

	uFnResetFacePreciseRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnResetFacePreciseRotation, &ResetFacePreciseRotation_Params, nullptr);

	uFnResetFacePreciseRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameSpecialMove::eventReachedPrecisePosition()
{
	static UFunction* uFnReachedPrecisePosition = nullptr;

	if (!uFnReachedPrecisePosition)
	{
		uFnReachedPrecisePosition = UFunction::FindFunction("Function GameFramework.GameSpecialMove.ReachedPrecisePosition");
	}

	UGameSpecialMove_eventReachedPrecisePosition_Params ReachedPrecisePosition_Params;

	this->ProcessEvent(uFnReachedPrecisePosition, &ReachedPrecisePosition_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                RotationToFace                 (CPF_Parm)
// float                          InterpolationTime              (CPF_Parm)

void UGameSpecialMove::SetFacePreciseRotation(struct FRotator RotationToFace, float InterpolationTime)
{
	static UFunction* uFnSetFacePreciseRotation = nullptr;

	if (!uFnSetFacePreciseRotation)
	{
		uFnSetFacePreciseRotation = UFunction::FindFunction("Function GameFramework.GameSpecialMove.SetFacePreciseRotation");
	}

	UGameSpecialMove_execSetFacePreciseRotation_Params SetFacePreciseRotation_Params;
	memcpy_s(&SetFacePreciseRotation_Params.RotationToFace, 0xC, &RotationToFace, 0xC);
	memcpy_s(&SetFacePreciseRotation_Params.InterpolationTime, 0x4, &InterpolationTime, 0x4);

	uFnSetFacePreciseRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetFacePreciseRotation, &SetFacePreciseRotation_Params, nullptr);

	uFnSetFacePreciseRotation->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 DestinationToReach             (CPF_Parm)
// unsigned long                  bCancel                        (CPF_OptionalParm | CPF_Parm)

void UGameSpecialMove::SetReachPreciseDestination(struct FVector DestinationToReach, unsigned long bCancel)
{
	static UFunction* uFnSetReachPreciseDestination = nullptr;

	if (!uFnSetReachPreciseDestination)
	{
		uFnSetReachPreciseDestination = UFunction::FindFunction("Function GameFramework.GameSpecialMove.SetReachPreciseDestination");
	}

	UGameSpecialMove_execSetReachPreciseDestination_Params SetReachPreciseDestination_Params;
	memcpy_s(&SetReachPreciseDestination_Params.DestinationToReach, 0xC, &DestinationToReach, 0xC);
	SetReachPreciseDestination_Params.bCancel = bCancel;

	uFnSetReachPreciseDestination->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetReachPreciseDestination, &SetReachPreciseDestination_Params, nullptr);

	uFnSetReachPreciseDestination->FunctionFlags |= 0x400;
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameSpecialMove::ShouldReplicate()
{
	static UFunction* uFnShouldReplicate = nullptr;

	if (!uFnShouldReplicate)
	{
		uFnShouldReplicate = UFunction::FindFunction("Function GameFramework.GameSpecialMove.ShouldReplicate");
	}

	UGameSpecialMove_execShouldReplicate_Params ShouldReplicate_Params;

	this->ProcessEvent(uFnShouldReplicate, &ShouldReplicate_Params, nullptr);

	return ShouldReplicate_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameSpecialMove::SpecialMoveFlagsUpdated()
{
	static UFunction* uFnSpecialMoveFlagsUpdated = nullptr;

	if (!uFnSpecialMoveFlagsUpdated)
	{
		uFnSpecialMoveFlagsUpdated = UFunction::FindFunction("Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated");
	}

	UGameSpecialMove_execSpecialMoveFlagsUpdated_Params SpecialMoveFlagsUpdated_Params;

	this->ProcessEvent(uFnSpecialMoveFlagsUpdated, &SpecialMoveFlagsUpdated_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.Tick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGameSpecialMove::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GameFramework.GameSpecialMove.Tick");
	}

	UGameSpecialMove_execTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   PrevMove                       (CPF_Parm)
// struct FName                   NextMove                       (CPF_Parm)

void UGameSpecialMove::SpecialMoveEnded(struct FName PrevMove, struct FName NextMove)
{
	static UFunction* uFnSpecialMoveEnded = nullptr;

	if (!uFnSpecialMoveEnded)
	{
		uFnSpecialMoveEnded = UFunction::FindFunction("Function GameFramework.GameSpecialMove.SpecialMoveEnded");
	}

	UGameSpecialMove_execSpecialMoveEnded_Params SpecialMoveEnded_Params;
	memcpy_s(&SpecialMoveEnded_Params.PrevMove, 0x8, &PrevMove, 0x8);
	memcpy_s(&SpecialMoveEnded_Params.NextMove, 0x8, &NextMove, 0x8);

	this->ProcessEvent(uFnSpecialMoveEnded, &SpecialMoveEnded_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bForced                        (CPF_Parm)
// struct FName                   PrevMove                       (CPF_Parm)

void UGameSpecialMove::SpecialMoveStarted(unsigned long bForced, struct FName PrevMove)
{
	static UFunction* uFnSpecialMoveStarted = nullptr;

	if (!uFnSpecialMoveStarted)
	{
		uFnSpecialMoveStarted = UFunction::FindFunction("Function GameFramework.GameSpecialMove.SpecialMoveStarted");
	}

	UGameSpecialMove_execSpecialMoveStarted_Params SpecialMoveStarted_Params;
	SpecialMoveStarted_Params.bForced = bForced;
	memcpy_s(&SpecialMoveStarted_Params.PrevMove, 0x8, &PrevMove, 0x8);

	this->ProcessEvent(uFnSpecialMoveStarted, &SpecialMoveStarted_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// [0x00080002] (FUNC_RequiredAPI | FUNC_Protected | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameSpecialMove::InternalCanDoSpecialMove()
{
	static UFunction* uFnInternalCanDoSpecialMove = nullptr;

	if (!uFnInternalCanDoSpecialMove)
	{
		uFnInternalCanDoSpecialMove = UFunction::FindFunction("Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove");
	}

	UGameSpecialMove_execInternalCanDoSpecialMove_Params InternalCanDoSpecialMove_Params;

	this->ProcessEvent(uFnInternalCanDoSpecialMove, &InternalCanDoSpecialMove_Params, nullptr);

	return InternalCanDoSpecialMove_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// [0x00024003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bForceCheck                    (CPF_OptionalParm | CPF_Parm)

bool UGameSpecialMove::CanDoSpecialMove(unsigned long bForceCheck)
{
	static UFunction* uFnCanDoSpecialMove = nullptr;

	if (!uFnCanDoSpecialMove)
	{
		uFnCanDoSpecialMove = UFunction::FindFunction("Function GameFramework.GameSpecialMove.CanDoSpecialMove");
	}

	UGameSpecialMove_execCanDoSpecialMove_Params CanDoSpecialMove_Params;
	CanDoSpecialMove_Params.bForceCheck = bForceCheck;

	this->ProcessEvent(uFnCanDoSpecialMove, &CanDoSpecialMove_Params, nullptr);

	return CanDoSpecialMove_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   InMove                         (CPF_Parm)

bool UGameSpecialMove::CanOverrideSpecialMove(struct FName InMove)
{
	static UFunction* uFnCanOverrideSpecialMove = nullptr;

	if (!uFnCanOverrideSpecialMove)
	{
		uFnCanOverrideSpecialMove = UFunction::FindFunction("Function GameFramework.GameSpecialMove.CanOverrideSpecialMove");
	}

	UGameSpecialMove_execCanOverrideSpecialMove_Params CanOverrideSpecialMove_Params;
	memcpy_s(&CanOverrideSpecialMove_Params.InMove, 0x8, &InMove, 0x8);

	this->ProcessEvent(uFnCanOverrideSpecialMove, &CanOverrideSpecialMove_Params, nullptr);

	return CanOverrideSpecialMove_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   NewMove                        (CPF_Parm)

bool UGameSpecialMove::CanOverrideMoveWith(struct FName NewMove)
{
	static UFunction* uFnCanOverrideMoveWith = nullptr;

	if (!uFnCanOverrideMoveWith)
	{
		uFnCanOverrideMoveWith = UFunction::FindFunction("Function GameFramework.GameSpecialMove.CanOverrideMoveWith");
	}

	UGameSpecialMove_execCanOverrideMoveWith_Params CanOverrideMoveWith_Params;
	memcpy_s(&CanOverrideMoveWith_Params.NewMove, 0x8, &NewMove, 0x8);

	this->ProcessEvent(uFnCanOverrideMoveWith, &CanOverrideMoveWith_Params, nullptr);

	return CanOverrideMoveWith_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.CanChainMove
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   NextMove                       (CPF_Parm)

bool UGameSpecialMove::CanChainMove(struct FName NextMove)
{
	static UFunction* uFnCanChainMove = nullptr;

	if (!uFnCanChainMove)
	{
		uFnCanChainMove = UFunction::FindFunction("Function GameFramework.GameSpecialMove.CanChainMove");
	}

	UGameSpecialMove_execCanChainMove_Params CanChainMove_Params;
	memcpy_s(&CanChainMove_Params.NextMove, 0x8, &NextMove, 0x8);

	this->ProcessEvent(uFnCanChainMove, &CanChainMove_Params, nullptr);

	return CanChainMove_Params.ReturnValue;
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        Flags                          (CPF_Parm)

void UGameSpecialMove::ExtractSpecialMoveFlags(int32_t Flags)
{
	static UFunction* uFnExtractSpecialMoveFlags = nullptr;

	if (!uFnExtractSpecialMoveFlags)
	{
		uFnExtractSpecialMoveFlags = UFunction::FindFunction("Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags");
	}

	UGameSpecialMove_execExtractSpecialMoveFlags_Params ExtractSpecialMoveFlags_Params;
	memcpy_s(&ExtractSpecialMoveFlags_Params.Flags, 0x4, &Flags, 0x4);

	this->ProcessEvent(uFnExtractSpecialMoveFlags, &ExtractSpecialMoveFlags_Params, nullptr);
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        out_Flags                      (CPF_Parm | CPF_OutParm)

void UGameSpecialMove::InitSpecialMoveFlags(int32_t& out_Flags)
{
	static UFunction* uFnInitSpecialMoveFlags = nullptr;

	if (!uFnInitSpecialMoveFlags)
	{
		uFnInitSpecialMoveFlags = UFunction::FindFunction("Function GameFramework.GameSpecialMove.InitSpecialMoveFlags");
	}

	UGameSpecialMove_execInitSpecialMoveFlags_Params InitSpecialMoveFlags_Params;
	memcpy_s(&InitSpecialMoveFlags_Params.out_Flags, 0x4, &out_Flags, 0x4);

	this->ProcessEvent(uFnInitSpecialMoveFlags, &InitSpecialMoveFlags_Params, nullptr);

	memcpy_s(&out_Flags, 0x4, &InitSpecialMoveFlags_Params.out_Flags, 0x4);
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGamePawn*               inPawn                         (CPF_Parm)
// struct FName                   InHandle                       (CPF_Parm)

void UGameSpecialMove::InitSpecialMove(class AGamePawn* inPawn, struct FName InHandle)
{
	static UFunction* uFnInitSpecialMove = nullptr;

	if (!uFnInitSpecialMove)
	{
		uFnInitSpecialMove = UFunction::FindFunction("Function GameFramework.GameSpecialMove.InitSpecialMove");
	}

	UGameSpecialMove_execInitSpecialMove_Params InitSpecialMove_Params;
	memcpy_s(&InitSpecialMove_Params.inPawn, 0x8, &inPawn, 0x8);
	memcpy_s(&InitSpecialMove_Params.InHandle, 0x8, &InHandle, 0x8);

	this->ProcessEvent(uFnInitSpecialMove, &InitSpecialMove_Params, nullptr);
};

// Function GameFramework.GameStateObject.Reset
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameStateObject::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GameFramework.GameStateObject.Reset");
	}

	UGameStateObject_execReset_Params Reset_Params;

	uFnReset->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);

	uFnReset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStateObject.PreProcessStream
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameStateObject::eventPreProcessStream()
{
	static UFunction* uFnPreProcessStream = nullptr;

	if (!uFnPreProcessStream)
	{
		uFnPreProcessStream = UFunction::FindFunction("Function GameFramework.GameStateObject.PreProcessStream");
	}

	UGameStateObject_eventPreProcessStream_Params PreProcessStream_Params;

	uFnPreProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPreProcessStream, &PreProcessStream_Params, nullptr);

	uFnPreProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        EventID                        (CPF_Parm)
// int32_t                        AggregateID                    (CPF_Parm | CPF_OutParm)
// int32_t                        TargetAggregateID              (CPF_Parm | CPF_OutParm)

bool UGameStatsAggregator::GetAggregateMappingIDs(int32_t EventID, int32_t& AggregateID, int32_t& TargetAggregateID)
{
	static UFunction* uFnGetAggregateMappingIDs = nullptr;

	if (!uFnGetAggregateMappingIDs)
	{
		uFnGetAggregateMappingIDs = UFunction::FindFunction("Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs");
	}

	UGameStatsAggregator_execGetAggregateMappingIDs_Params GetAggregateMappingIDs_Params;
	memcpy_s(&GetAggregateMappingIDs_Params.EventID, 0x4, &EventID, 0x4);
	memcpy_s(&GetAggregateMappingIDs_Params.AggregateID, 0x4, &AggregateID, 0x4);
	memcpy_s(&GetAggregateMappingIDs_Params.TargetAggregateID, 0x4, &TargetAggregateID, 0x4);

	uFnGetAggregateMappingIDs->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetAggregateMappingIDs, &GetAggregateMappingIDs_Params, nullptr);

	uFnGetAggregateMappingIDs->FunctionFlags |= 0x400;

	memcpy_s(&AggregateID, 0x4, &GetAggregateMappingIDs_Params.AggregateID, 0x4);
	memcpy_s(&TargetAggregateID, 0x4, &GetAggregateMappingIDs_Params.TargetAggregateID, 0x4);

	return GetAggregateMappingIDs_Params.ReturnValue;
};

// Function GameFramework.GameStatsAggregator.Reset
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameStatsAggregator::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GameFramework.GameStatsAggregator.Reset");
	}

	UGameStatsAggregator_execReset_Params Reset_Params;

	uFnReset->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);

	uFnReset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameStatsAggregator::eventPostProcessStream()
{
	static UFunction* uFnPostProcessStream = nullptr;

	if (!uFnPostProcessStream)
	{
		uFnPostProcessStream = UFunction::FindFunction("Function GameFramework.GameStatsAggregator.PostProcessStream");
	}

	UGameStatsAggregator_eventPostProcessStream_Params PostProcessStream_Params;

	uFnPostProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPostProcessStream, &PostProcessStream_Params, nullptr);

	uFnPostProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameStatsAggregator::eventPreProcessStream()
{
	static UFunction* uFnPreProcessStream = nullptr;

	if (!uFnPreProcessStream)
	{
		uFnPreProcessStream = UFunction::FindFunction("Function GameFramework.GameStatsAggregator.PreProcessStream");
	}

	UGameStatsAggregator_eventPreProcessStream_Params PreProcessStream_Params;

	uFnPreProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPreProcessStream, &PreProcessStream_Params, nullptr);

	uFnPreProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.DebugCameraHUD.PostRender
// [0x00820802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void ADebugCameraHUD::eventPostRender()
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GameFramework.DebugCameraHUD.PostRender");
	}

	ADebugCameraHUD_eventPostRender_Params PostRender_Params;

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GameFramework.DebugCameraHUD.DisplayMaterials
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          DY                             (CPF_Parm)
// class UMeshComponent*          MeshComp                       (CPF_Parm | CPF_EditInline)
// float                          Y                              (CPF_Parm | CPF_OutParm)

bool ADebugCameraHUD::DisplayMaterials(float X, float DY, class UMeshComponent* MeshComp, float& Y)
{
	static UFunction* uFnDisplayMaterials = nullptr;

	if (!uFnDisplayMaterials)
	{
		uFnDisplayMaterials = UFunction::FindFunction("Function GameFramework.DebugCameraHUD.DisplayMaterials");
	}

	ADebugCameraHUD_execDisplayMaterials_Params DisplayMaterials_Params;
	memcpy_s(&DisplayMaterials_Params.X, 0x4, &X, 0x4);
	memcpy_s(&DisplayMaterials_Params.DY, 0x4, &DY, 0x4);
	memcpy_s(&DisplayMaterials_Params.MeshComp, 0x8, &MeshComp, 0x8);
	memcpy_s(&DisplayMaterials_Params.Y, 0x4, &Y, 0x4);

	this->ProcessEvent(uFnDisplayMaterials, &DisplayMaterials_Params, nullptr);

	memcpy_s(&Y, 0x4, &DisplayMaterials_Params.Y, 0x4);

	return DisplayMaterials_Params.ReturnValue;
};

// Function GameFramework.DebugCameraHUD.PostBeginPlay
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void ADebugCameraHUD::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.DebugCameraHUD.PostBeginPlay");
	}

	ADebugCameraHUD_eventPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.DebugCameraInput.InputKey
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// uint8_t                        Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bGamepad                       (CPF_OptionalParm | CPF_Parm)

bool UDebugCameraInput::InputKey(int32_t ControllerId, struct FName Key, uint8_t Event, float AmountDepressed, unsigned long bGamepad)
{
	static UFunction* uFnInputKey = nullptr;

	if (!uFnInputKey)
	{
		uFnInputKey = UFunction::FindFunction("Function GameFramework.DebugCameraInput.InputKey");
	}

	UDebugCameraInput_execInputKey_Params InputKey_Params;
	memcpy_s(&InputKey_Params.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&InputKey_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&InputKey_Params.Event, 0x1, &Event, 0x1);
	memcpy_s(&InputKey_Params.AmountDepressed, 0x4, &AmountDepressed, 0x4);
	InputKey_Params.bGamepad = bGamepad;

	this->ProcessEvent(uFnInputKey, &InputKey_Params, nullptr);

	return InputKey_Params.ReturnValue;
};

// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UGameCrowdSpawnerInterface::GetMaxSpawnDist()
{
	static UFunction* uFnGetMaxSpawnDist = nullptr;

	if (!uFnGetMaxSpawnDist)
	{
		uFnGetMaxSpawnDist = UFunction::FindFunction("Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist");
	}

	UGameCrowdSpawnerInterface_execGetMaxSpawnDist_Params GetMaxSpawnDist_Params;

	this->ProcessEvent(uFnGetMaxSpawnDist, &GetMaxSpawnDist_Params, nullptr);

	return GetMaxSpawnDist_Params.ReturnValue;
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdSpawnerInterface::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAgentDestroyed = nullptr;

	if (!uFnAgentDestroyed)
	{
		uFnAgentDestroyed = UFunction::FindFunction("Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed");
	}

	UGameCrowdSpawnerInterface_execAgentDestroyed_Params AgentDestroyed_Params;
	memcpy_s(&AgentDestroyed_Params.Agent, 0x8, &Agent, 0x8);

	this->ProcessEvent(uFnAgentDestroyed, &AgentDestroyed_Params, nullptr);
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class USeqAct_GameCrowdSpawner* Spawner                        (CPF_Parm)
// struct FVector                 SpawnPos                       (CPF_Parm | CPF_OutParm)
// struct FRotator                SpawnRot                       (CPF_Parm | CPF_OutParm)

void UGameCrowdSpawnInterface::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector& SpawnPos, struct FRotator& SpawnRot)
{
	static UFunction* uFnGetSpawnPosition = nullptr;

	if (!uFnGetSpawnPosition)
	{
		uFnGetSpawnPosition = UFunction::FindFunction("Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition");
	}

	UGameCrowdSpawnInterface_execGetSpawnPosition_Params GetSpawnPosition_Params;
	memcpy_s(&GetSpawnPosition_Params.Spawner, 0x8, &Spawner, 0x8);
	memcpy_s(&GetSpawnPosition_Params.SpawnPos, 0xC, &SpawnPos, 0xC);
	memcpy_s(&GetSpawnPosition_Params.SpawnRot, 0xC, &SpawnRot, 0xC);

	this->ProcessEvent(uFnGetSpawnPosition, &GetSpawnPosition_Params, nullptr);

	memcpy_s(&SpawnPos, 0xC, &GetSpawnPosition_Params.SpawnPos, 0xC);
	memcpy_s(&SpawnRot, 0xC, &GetSpawnPosition_Params.SpawnRot, 0xC);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   InEnemy                        (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static UFunction* uFnIsEnemyBasedOnInterpActor = nullptr;

	if (!uFnIsEnemyBasedOnInterpActor)
	{
		uFnIsEnemyBasedOnInterpActor = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor");
	}

	UGameAICmd_Hover_MoveToGoal_execIsEnemyBasedOnInterpActor_Params IsEnemyBasedOnInterpActor_Params;
	memcpy_s(&IsEnemyBasedOnInterpActor_Params.InEnemy, 0x8, &InEnemy, 0x8);

	this->ProcessEvent(uFnIsEnemyBasedOnInterpActor, &IsEnemyBasedOnInterpActor_Params, nullptr);

	return IsEnemyBasedOnInterpActor_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  BlockedBy                      (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal::HandlePathObstruction(class AActor* BlockedBy)
{
	static UFunction* uFnHandlePathObstruction = nullptr;

	if (!uFnHandlePathObstruction)
	{
		uFnHandlePathObstruction = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction");
	}

	UGameAICmd_Hover_MoveToGoal_execHandlePathObstruction_Params HandlePathObstruction_Params;
	memcpy_s(&HandlePathObstruction_Params.BlockedBy, 0x8, &BlockedBy, 0x8);

	this->ProcessEvent(uFnHandlePathObstruction, &HandlePathObstruction_Params, nullptr);

	return HandlePathObstruction_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameAICmd_Hover_MoveToGoal::Pushed()
{
	static UFunction* uFnPushed = nullptr;

	if (!uFnPushed)
	{
		uFnPushed = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed");
	}

	UGameAICmd_Hover_MoveToGoal_execPushed_Params Pushed_Params;

	this->ProcessEvent(uFnPushed, &Pushed_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)
// class AActor*                  InGoal                         (CPF_Parm)
// float                          InGoalDistance                 (CPF_Parm)
// float                          InHoverHeight                  (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal::MoveToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static UFunction* uFnMoveToGoal = nullptr;

	if (!uFnMoveToGoal)
	{
		uFnMoveToGoal = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal");
	}

	UGameAICmd_Hover_MoveToGoal_execMoveToGoal_Params MoveToGoal_Params;
	memcpy_s(&MoveToGoal_Params.AI, 0x8, &AI, 0x8);
	memcpy_s(&MoveToGoal_Params.InGoal, 0x8, &InGoal, 0x8);
	memcpy_s(&MoveToGoal_Params.InGoalDistance, 0x4, &InGoalDistance, 0x4);
	memcpy_s(&MoveToGoal_Params.InHoverHeight, 0x4, &InHoverHeight, 0x4);

	UGameAICmd_Hover_MoveToGoal::StaticClass()->ProcessEvent(uFnMoveToGoal, &MoveToGoal_Params, nullptr);

	return MoveToGoal_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AHUD*                    H                              (CPF_Parm)
// struct FName                   Category                       (CPF_Parm)

void UGameAICmd_Hover_MoveToGoal_Mesh::eventDrawDebug(class AHUD* H, struct FName Category)
{
	static UFunction* uFnDrawDebug = nullptr;

	if (!uFnDrawDebug)
	{
		uFnDrawDebug = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_eventDrawDebug_Params DrawDebug_Params;
	memcpy_s(&DrawDebug_Params.H, 0x8, &H, 0x8);
	memcpy_s(&DrawDebug_Params.Category, 0x8, &Category, 0x8);

	this->ProcessEvent(uFnDrawDebug, &DrawDebug_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   InEnemy                        (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static UFunction* uFnIsEnemyBasedOnInterpActor = nullptr;

	if (!uFnIsEnemyBasedOnInterpActor)
	{
		uFnIsEnemyBasedOnInterpActor = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execIsEnemyBasedOnInterpActor_Params IsEnemyBasedOnInterpActor_Params;
	memcpy_s(&IsEnemyBasedOnInterpActor_Params.InEnemy, 0x8, &InEnemy, 0x8);

	this->ProcessEvent(uFnIsEnemyBasedOnInterpActor, &IsEnemyBasedOnInterpActor_Params, nullptr);

	return IsEnemyBasedOnInterpActor_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::ShouldUpdateBreadCrumbs()
{
	static UFunction* uFnShouldUpdateBreadCrumbs = nullptr;

	if (!uFnShouldUpdateBreadCrumbs)
	{
		uFnShouldUpdateBreadCrumbs = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execShouldUpdateBreadCrumbs_Params ShouldUpdateBreadCrumbs_Params;

	this->ProcessEvent(uFnShouldUpdateBreadCrumbs, &ShouldUpdateBreadCrumbs_Params, nullptr);

	return ShouldUpdateBreadCrumbs_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HasReachedGoal()
{
	static UFunction* uFnHasReachedGoal = nullptr;

	if (!uFnHasReachedGoal)
	{
		uFnHasReachedGoal = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execHasReachedGoal_Params HasReachedGoal_Params;

	this->ProcessEvent(uFnHasReachedGoal, &HasReachedGoal_Params, nullptr);

	return HasReachedGoal_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameAICmd_Hover_MoveToGoal_Mesh::ReEvaluatePath()
{
	static UFunction* uFnReEvaluatePath = nullptr;

	if (!uFnReEvaluatePath)
	{
		uFnReEvaluatePath = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execReEvaluatePath_Params ReEvaluatePath_Params;

	this->ProcessEvent(uFnReEvaluatePath, &ReEvaluatePath_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  BlockedBy                      (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HandlePathObstruction(class AActor* BlockedBy)
{
	static UFunction* uFnHandlePathObstruction = nullptr;

	if (!uFnHandlePathObstruction)
	{
		uFnHandlePathObstruction = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execHandlePathObstruction_Params HandlePathObstruction_Params;
	memcpy_s(&HandlePathObstruction_Params.BlockedBy, 0x8, &BlockedBy, 0x8);

	this->ProcessEvent(uFnHandlePathObstruction, &HandlePathObstruction_Params, nullptr);

	return HandlePathObstruction_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          DeltaTime                      (CPF_Parm)

void UGameAICmd_Hover_MoveToGoal_Mesh::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execTick_Params Tick_Params;
	memcpy_s(&Tick_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameAICmd_Hover_MoveToGoal_Mesh::Popped()
{
	static UFunction* uFnPopped = nullptr;

	if (!uFnPopped)
	{
		uFnPopped = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execPopped_Params Popped_Params;

	this->ProcessEvent(uFnPopped, &Popped_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UGameAICmd_Hover_MoveToGoal_Mesh::Pushed()
{
	static UFunction* uFnPushed = nullptr;

	if (!uFnPushed)
	{
		uFnPushed = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execPushed_Params Pushed_Params;

	this->ProcessEvent(uFnPushed, &Pushed_Params, nullptr);
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverBackToMesh(class AGameAIController* AI)
{
	static UFunction* uFnHoverBackToMesh = nullptr;

	if (!uFnHoverBackToMesh)
	{
		uFnHoverBackToMesh = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverBackToMesh_Params HoverBackToMesh_Params;
	memcpy_s(&HoverBackToMesh_Params.AI, 0x8, &AI, 0x8);

	UGameAICmd_Hover_MoveToGoal_Mesh::StaticClass()->ProcessEvent(uFnHoverBackToMesh, &HoverBackToMesh_Params, nullptr);

	return HoverBackToMesh_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)
// struct FVector                 InPoint                        (CPF_Parm)
// float                          InGoalDistance                 (CPF_Parm)
// float                          InHoverHeight                  (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToPoint(class AGameAIController* AI, struct FVector InPoint, float InGoalDistance, float InHoverHeight)
{
	static UFunction* uFnHoverToPoint = nullptr;

	if (!uFnHoverToPoint)
	{
		uFnHoverToPoint = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToPoint_Params HoverToPoint_Params;
	memcpy_s(&HoverToPoint_Params.AI, 0x8, &AI, 0x8);
	memcpy_s(&HoverToPoint_Params.InPoint, 0xC, &InPoint, 0xC);
	memcpy_s(&HoverToPoint_Params.InGoalDistance, 0x4, &InGoalDistance, 0x4);
	memcpy_s(&HoverToPoint_Params.InHoverHeight, 0x4, &InHoverHeight, 0x4);

	UGameAICmd_Hover_MoveToGoal_Mesh::StaticClass()->ProcessEvent(uFnHoverToPoint, &HoverToPoint_Params, nullptr);

	return HoverToPoint_Params.ReturnValue;
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
// [0x00022002] (FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameAIController*       AI                             (CPF_Parm)
// class AActor*                  InGoal                         (CPF_Parm)
// float                          InGoalDistance                 (CPF_Parm)
// float                          InHoverHeight                  (CPF_Parm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HoverToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static UFunction* uFnHoverToGoal = nullptr;

	if (!uFnHoverToGoal)
	{
		uFnHoverToGoal = UFunction::FindFunction("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal");
	}

	UGameAICmd_Hover_MoveToGoal_Mesh_execHoverToGoal_Params HoverToGoal_Params;
	memcpy_s(&HoverToGoal_Params.AI, 0x8, &AI, 0x8);
	memcpy_s(&HoverToGoal_Params.InGoal, 0x8, &InGoal, 0x8);
	memcpy_s(&HoverToGoal_Params.InGoalDistance, 0x4, &InGoalDistance, 0x4);
	memcpy_s(&HoverToGoal_Params.InHoverHeight, 0x4, &InHoverHeight, 0x4);

	UGameAICmd_Hover_MoveToGoal_Mesh::StaticClass()->ProcessEvent(uFnHoverToGoal, &HoverToGoal_Params, nullptr);

	return HoverToGoal_Params.ReturnValue;
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameFixedCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameFixedCamera.OnBecomeActive");
	}

	UGameFixedCamera_execOnBecomeActive_Params OnBecomeActive_Params;
	memcpy_s(&OnBecomeActive_Params.OldCamera, 0x8, &OldCamera, 0x8);

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00420102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameFixedCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCamera = nullptr;

	if (!uFnUpdateCamera)
	{
		uFnUpdateCamera = UFunction::FindFunction("Function GameFramework.GameFixedCamera.UpdateCamera");
	}

	UGameFixedCamera_execUpdateCamera_Params UpdateCamera_Params;
	memcpy_s(&UpdateCamera_Params.P, 0x8, &P, 0x8);
	memcpy_s(&UpdateCamera_Params.CameraActor, 0x8, &CameraActor, 0x8);
	memcpy_s(&UpdateCamera_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&UpdateCamera_Params.OutVT, 0x38, &OutVT, 0x38);

	this->ProcessEvent(uFnUpdateCamera, &UpdateCamera_Params, nullptr);

	memcpy_s(&OutVT, 0x38, &UpdateCamera_Params.OutVT, 0x38);
};

// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameKActorSpawnableEffect::StartScalingDown()
{
	static UFunction* uFnStartScalingDown = nullptr;

	if (!uFnStartScalingDown)
	{
		uFnStartScalingDown = UFunction::FindFunction("Function GameFramework.GameKActorSpawnableEffect.StartScalingDown");
	}

	AGameKActorSpawnableEffect_execStartScalingDown_Params StartScalingDown_Params;

	this->ProcessEvent(uFnStartScalingDown, &StartScalingDown_Params, nullptr);
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UClass*                  dmgType                        (CPF_Parm)

void AGameKActorSpawnableEffect::eventFellOutOfWorld(class UClass* dmgType)
{
	static UFunction* uFnFellOutOfWorld = nullptr;

	if (!uFnFellOutOfWorld)
	{
		uFnFellOutOfWorld = UFunction::FindFunction("Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld");
	}

	AGameKActorSpawnableEffect_eventFellOutOfWorld_Params FellOutOfWorld_Params;
	memcpy_s(&FellOutOfWorld_Params.dmgType, 0x8, &dmgType, 0x8);

	this->ProcessEvent(uFnFellOutOfWorld, &FellOutOfWorld_Params, nullptr);
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AGameKActorSpawnableEffect::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay");
	}

	AGameKActorSpawnableEffect_eventPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraController.SetupDebugZones
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void AMobileDebugCameraController::SetupDebugZones()
{
	static UFunction* uFnSetupDebugZones = nullptr;

	if (!uFnSetupDebugZones)
	{
		uFnSetupDebugZones = UFunction::FindFunction("Function GameFramework.MobileDebugCameraController.SetupDebugZones");
	}

	AMobileDebugCameraController_execSetupDebugZones_Params SetupDebugZones_Params;

	this->ProcessEvent(uFnSetupDebugZones, &SetupDebugZones_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraController.InitInputSystem
// [0x00024802] (FUNC_RequiredAPI | FUNC_Event | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bCreateDevForceFeedback        (CPF_OptionalParm | CPF_Parm)

void AMobileDebugCameraController::eventInitInputSystem(unsigned long bCreateDevForceFeedback)
{
	static UFunction* uFnInitInputSystem = nullptr;

	if (!uFnInitInputSystem)
	{
		uFnInitInputSystem = UFunction::FindFunction("Function GameFramework.MobileDebugCameraController.InitInputSystem");
	}

	AMobileDebugCameraController_eventInitInputSystem_Params InitInputSystem_Params;
	InitInputSystem_Params.bCreateDevForceFeedback = bCreateDevForceFeedback;

	this->ProcessEvent(uFnInitInputSystem, &InitInputSystem_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraController.OnDeactivate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       PC                             (CPF_Parm)

void AMobileDebugCameraController::OnDeactivate(class APlayerController* PC)
{
	static UFunction* uFnOnDeactivate = nullptr;

	if (!uFnOnDeactivate)
	{
		uFnOnDeactivate = UFunction::FindFunction("Function GameFramework.MobileDebugCameraController.OnDeactivate");
	}

	AMobileDebugCameraController_execOnDeactivate_Params OnDeactivate_Params;
	memcpy_s(&OnDeactivate_Params.PC, 0x8, &PC, 0x8);

	this->ProcessEvent(uFnOnDeactivate, &OnDeactivate_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileDebugCameraController::InitDebugInputSystem()
{
	static UFunction* uFnInitDebugInputSystem = nullptr;

	if (!uFnInitDebugInputSystem)
	{
		uFnInitDebugInputSystem = UFunction::FindFunction("Function GameFramework.MobileDebugCameraController.InitDebugInputSystem");
	}

	AMobileDebugCameraController_execInitDebugInputSystem_Params InitDebugInputSystem_Params;

	this->ProcessEvent(uFnInitDebugInputSystem, &InitDebugInputSystem_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraController.OnActivate
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       PC                             (CPF_Parm)

void AMobileDebugCameraController::OnActivate(class APlayerController* PC)
{
	static UFunction* uFnOnActivate = nullptr;

	if (!uFnOnActivate)
	{
		uFnOnActivate = UFunction::FindFunction("Function GameFramework.MobileDebugCameraController.OnActivate");
	}

	AMobileDebugCameraController_execOnActivate_Params OnActivate_Params;
	memcpy_s(&OnActivate_Params.PC, 0x8, &PC, 0x8);

	this->ProcessEvent(uFnOnActivate, &OnActivate_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraInput.InputKey
// [0x00024002] (FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// uint8_t                        Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bGamepad                       (CPF_OptionalParm | CPF_Parm)

bool UMobileDebugCameraInput::InputKey(int32_t ControllerId, struct FName Key, uint8_t Event, float AmountDepressed, unsigned long bGamepad)
{
	static UFunction* uFnInputKey = nullptr;

	if (!uFnInputKey)
	{
		uFnInputKey = UFunction::FindFunction("Function GameFramework.MobileDebugCameraInput.InputKey");
	}

	UMobileDebugCameraInput_execInputKey_Params InputKey_Params;
	memcpy_s(&InputKey_Params.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&InputKey_Params.Key, 0x8, &Key, 0x8);
	memcpy_s(&InputKey_Params.Event, 0x1, &Event, 0x1);
	memcpy_s(&InputKey_Params.AmountDepressed, 0x4, &AmountDepressed, 0x4);
	InputKey_Params.bGamepad = bGamepad;

	this->ProcessEvent(uFnInputKey, &InputKey_Params, nullptr);

	return InputKey_Params.ReturnValue;
};

// Function GameFramework.MobileDebugCameraHUD.PostRender
// [0x00820802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:

void AMobileDebugCameraHUD::eventPostRender()
{
	static UFunction* uFnPostRender = nullptr;

	if (!uFnPostRender)
	{
		uFnPostRender = UFunction::FindFunction("Function GameFramework.MobileDebugCameraHUD.PostRender");
	}

	AMobileDebugCameraHUD_eventPostRender_Params PostRender_Params;

	this->ProcessEvent(uFnPostRender, &PostRender_Params, nullptr);
};

// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm)
// float                          DY                             (CPF_Parm)
// class UMeshComponent*          MeshComp                       (CPF_Parm | CPF_EditInline)
// float                          Y                              (CPF_Parm | CPF_OutParm)

bool AMobileDebugCameraHUD::DisplayMaterials(float X, float DY, class UMeshComponent* MeshComp, float& Y)
{
	static UFunction* uFnDisplayMaterials = nullptr;

	if (!uFnDisplayMaterials)
	{
		uFnDisplayMaterials = UFunction::FindFunction("Function GameFramework.MobileDebugCameraHUD.DisplayMaterials");
	}

	AMobileDebugCameraHUD_execDisplayMaterials_Params DisplayMaterials_Params;
	memcpy_s(&DisplayMaterials_Params.X, 0x4, &X, 0x4);
	memcpy_s(&DisplayMaterials_Params.DY, 0x4, &DY, 0x4);
	memcpy_s(&DisplayMaterials_Params.MeshComp, 0x8, &MeshComp, 0x8);
	memcpy_s(&DisplayMaterials_Params.Y, 0x4, &Y, 0x4);

	this->ProcessEvent(uFnDisplayMaterials, &DisplayMaterials_Params, nullptr);

	memcpy_s(&Y, 0x4, &DisplayMaterials_Params.Y, 0x4);

	return DisplayMaterials_Params.ReturnValue;
};

// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
// [0x00020902] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileDebugCameraHUD::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.MobileDebugCameraHUD.PostBeginPlay");
	}

	AMobileDebugCameraHUD_eventPostBeginPlay_Params PostBeginPlay_Params;

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.MobileMenuButton.RenderCaption
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UMobileMenuButton::RenderCaption(class UCanvas* Canvas)
{
	static UFunction* uFnRenderCaption = nullptr;

	if (!uFnRenderCaption)
	{
		uFnRenderCaption = UFunction::FindFunction("Function GameFramework.MobileMenuButton.RenderCaption");
	}

	UMobileMenuButton_execRenderCaption_Params RenderCaption_Params;
	memcpy_s(&RenderCaption_Params.Canvas, 0x8, &Canvas, 0x8);

	this->ProcessEvent(uFnRenderCaption, &RenderCaption_Params, nullptr);
};

// Function GameFramework.MobileMenuButton.RenderObject
// [0x00820002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuButton::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuButton.RenderObject");
	}

	UMobileMenuButton_execRenderObject_Params RenderObject_Params;
	memcpy_s(&RenderObject_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&RenderObject_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileMenuButton.InitMenuObject
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int32_t                        ScreenWidth                    (CPF_Parm)
// int32_t                        ScreenHeight                   (CPF_Parm)
// unsigned long                  bIsFirstInitialization         (CPF_Parm)

void UMobileMenuButton::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int32_t ScreenWidth, int32_t ScreenHeight, unsigned long bIsFirstInitialization)
{
	static UFunction* uFnInitMenuObject = nullptr;

	if (!uFnInitMenuObject)
	{
		uFnInitMenuObject = UFunction::FindFunction("Function GameFramework.MobileMenuButton.InitMenuObject");
	}

	UMobileMenuButton_execInitMenuObject_Params InitMenuObject_Params;
	memcpy_s(&InitMenuObject_Params.PlayerInput, 0x8, &PlayerInput, 0x8);
	memcpy_s(&InitMenuObject_Params.Scene, 0x8, &Scene, 0x8);
	memcpy_s(&InitMenuObject_Params.ScreenWidth, 0x4, &ScreenWidth, 0x4);
	memcpy_s(&InitMenuObject_Params.ScreenHeight, 0x4, &ScreenHeight, 0x4);
	InitMenuObject_Params.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent(uFnInitMenuObject, &InitMenuObject_Params, nullptr);
};

// Function GameFramework.MobileMenuGame.RestartPlayer
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class AController*             NewPlayer                      (CPF_Parm)

void AMobileMenuGame::RestartPlayer(class AController* NewPlayer)
{
	static UFunction* uFnRestartPlayer = nullptr;

	if (!uFnRestartPlayer)
	{
		uFnRestartPlayer = UFunction::FindFunction("Function GameFramework.MobileMenuGame.RestartPlayer");
	}

	AMobileMenuGame_execRestartPlayer_Params RestartPlayer_Params;
	memcpy_s(&RestartPlayer_Params.NewPlayer, 0x8, &NewPlayer, 0x8);

	this->ProcessEvent(uFnRestartPlayer, &RestartPlayer_Params, nullptr);
};

// Function GameFramework.MobileMenuGame.StartMatch
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileMenuGame::StartMatch()
{
	static UFunction* uFnStartMatch = nullptr;

	if (!uFnStartMatch)
	{
		uFnStartMatch = UFunction::FindFunction("Function GameFramework.MobileMenuGame.StartMatch");
	}

	AMobileMenuGame_execStartMatch_Params StartMatch_Params;

	this->ProcessEvent(uFnStartMatch, &StartMatch_Params, nullptr);
};

// Function GameFramework.MobileMenuGame.PostLogin
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       NewPlayer                      (CPF_Parm)

void AMobileMenuGame::eventPostLogin(class APlayerController* NewPlayer)
{
	static UFunction* uFnPostLogin = nullptr;

	if (!uFnPostLogin)
	{
		uFnPostLogin = UFunction::FindFunction("Function GameFramework.MobileMenuGame.PostLogin");
	}

	AMobileMenuGame_eventPostLogin_Params PostLogin_Params;
	memcpy_s(&PostLogin_Params.NewPlayer, 0x8, &NewPlayer, 0x8);

	this->ProcessEvent(uFnPostLogin, &PostLogin_Params, nullptr);
};

// Function GameFramework.MobileMenuLabel.RenderObject
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuLabel::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static UFunction* uFnRenderObject = nullptr;

	if (!uFnRenderObject)
	{
		uFnRenderObject = UFunction::FindFunction("Function GameFramework.MobileMenuLabel.RenderObject");
	}

	UMobileMenuLabel_execRenderObject_Params RenderObject_Params;
	memcpy_s(&RenderObject_Params.Canvas, 0x8, &Canvas, 0x8);
	memcpy_s(&RenderObject_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnRenderObject, &RenderObject_Params, nullptr);
};

// Function GameFramework.MobileTouchInputVolume.GHM_MobileTouchInputVolume_ApplyCheckpointRecord
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGHM_MobileTouchInputVolume_CheckpointRecord Record                         (CPF_Const | CPF_Parm | CPF_OutParm)

void AMobileTouchInputVolume::GHM_MobileTouchInputVolume_ApplyCheckpointRecord(struct FGHM_MobileTouchInputVolume_CheckpointRecord& Record)
{
	static UFunction* uFnGHM_MobileTouchInputVolume_ApplyCheckpointRecord = nullptr;

	if (!uFnGHM_MobileTouchInputVolume_ApplyCheckpointRecord)
	{
		uFnGHM_MobileTouchInputVolume_ApplyCheckpointRecord = UFunction::FindFunction("Function GameFramework.MobileTouchInputVolume.GHM_MobileTouchInputVolume_ApplyCheckpointRecord");
	}

	AMobileTouchInputVolume_execGHM_MobileTouchInputVolume_ApplyCheckpointRecord_Params GHM_MobileTouchInputVolume_ApplyCheckpointRecord_Params;
	memcpy_s(&GHM_MobileTouchInputVolume_ApplyCheckpointRecord_Params.Record, 0x4, &Record, 0x4);

	this->ProcessEvent(uFnGHM_MobileTouchInputVolume_ApplyCheckpointRecord, &GHM_MobileTouchInputVolume_ApplyCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, 0x4, &GHM_MobileTouchInputVolume_ApplyCheckpointRecord_Params.Record, 0x4);
};

// Function GameFramework.MobileTouchInputVolume.GHM_MobileTouchInputVolume_CreateCheckpointRecord
// [0x00420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGHM_MobileTouchInputVolume_CheckpointRecord Record                         (CPF_Parm | CPF_OutParm)

void AMobileTouchInputVolume::GHM_MobileTouchInputVolume_CreateCheckpointRecord(struct FGHM_MobileTouchInputVolume_CheckpointRecord& Record)
{
	static UFunction* uFnGHM_MobileTouchInputVolume_CreateCheckpointRecord = nullptr;

	if (!uFnGHM_MobileTouchInputVolume_CreateCheckpointRecord)
	{
		uFnGHM_MobileTouchInputVolume_CreateCheckpointRecord = UFunction::FindFunction("Function GameFramework.MobileTouchInputVolume.GHM_MobileTouchInputVolume_CreateCheckpointRecord");
	}

	AMobileTouchInputVolume_execGHM_MobileTouchInputVolume_CreateCheckpointRecord_Params GHM_MobileTouchInputVolume_CreateCheckpointRecord_Params;
	memcpy_s(&GHM_MobileTouchInputVolume_CreateCheckpointRecord_Params.Record, 0x4, &Record, 0x4);

	this->ProcessEvent(uFnGHM_MobileTouchInputVolume_CreateCheckpointRecord, &GHM_MobileTouchInputVolume_CreateCheckpointRecord_Params, nullptr);

	memcpy_s(&Record, 0x4, &GHM_MobileTouchInputVolume_CreateCheckpointRecord_Params.Record, 0x4);
};

// Function GameFramework.MobileTouchInputVolume.HandleDragOver
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileTouchInputVolume::HandleDragOver()
{
	static UFunction* uFnHandleDragOver = nullptr;

	if (!uFnHandleDragOver)
	{
		uFnHandleDragOver = UFunction::FindFunction("Function GameFramework.MobileTouchInputVolume.HandleDragOver");
	}

	AMobileTouchInputVolume_execHandleDragOver_Params HandleDragOver_Params;

	this->ProcessEvent(uFnHandleDragOver, &HandleDragOver_Params, nullptr);
};

// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileTouchInputVolume::HandleDoubleClick()
{
	static UFunction* uFnHandleDoubleClick = nullptr;

	if (!uFnHandleDoubleClick)
	{
		uFnHandleDoubleClick = UFunction::FindFunction("Function GameFramework.MobileTouchInputVolume.HandleDoubleClick");
	}

	AMobileTouchInputVolume_execHandleDoubleClick_Params HandleDoubleClick_Params;

	this->ProcessEvent(uFnHandleDoubleClick, &HandleDoubleClick_Params, nullptr);
};

// Function GameFramework.MobileTouchInputVolume.HandleClick
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void AMobileTouchInputVolume::HandleClick()
{
	static UFunction* uFnHandleClick = nullptr;

	if (!uFnHandleClick)
	{
		uFnHandleClick = UFunction::FindFunction("Function GameFramework.MobileTouchInputVolume.HandleClick");
	}

	AMobileTouchInputVolume_execHandleClick_Params HandleClick_Params;

	this->ProcessEvent(uFnHandleClick, &HandleClick_Params, nullptr);
};

// Function GameFramework.MobileTouchInputVolume.OnToggle
// [0x00020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class USeqAct_Toggle*          inAction                       (CPF_Parm)

void AMobileTouchInputVolume::OnToggle(class USeqAct_Toggle* inAction)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function GameFramework.MobileTouchInputVolume.OnToggle");
	}

	AMobileTouchInputVolume_execOnToggle_Params OnToggle_Params;
	memcpy_s(&OnToggle_Params.inAction, 0x8, &inAction, 0x8);

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function GameFramework.TouchableElement3D.HandleDragOver
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UTouchableElement3D::HandleDragOver()
{
	static UFunction* uFnHandleDragOver = nullptr;

	if (!uFnHandleDragOver)
	{
		uFnHandleDragOver = UFunction::FindFunction("Function GameFramework.TouchableElement3D.HandleDragOver");
	}

	UTouchableElement3D_execHandleDragOver_Params HandleDragOver_Params;

	this->ProcessEvent(uFnHandleDragOver, &HandleDragOver_Params, nullptr);
};

// Function GameFramework.TouchableElement3D.HandleDoubleClick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UTouchableElement3D::HandleDoubleClick()
{
	static UFunction* uFnHandleDoubleClick = nullptr;

	if (!uFnHandleDoubleClick)
	{
		uFnHandleDoubleClick = UFunction::FindFunction("Function GameFramework.TouchableElement3D.HandleDoubleClick");
	}

	UTouchableElement3D_execHandleDoubleClick_Params HandleDoubleClick_Params;

	this->ProcessEvent(uFnHandleDoubleClick, &HandleDoubleClick_Params, nullptr);
};

// Function GameFramework.TouchableElement3D.HandleClick
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UTouchableElement3D::HandleClick()
{
	static UFunction* uFnHandleClick = nullptr;

	if (!uFnHandleClick)
	{
		uFnHandleClick = UFunction::FindFunction("Function GameFramework.TouchableElement3D.HandleClick");
	}

	UTouchableElement3D_execHandleClick_Params HandleClick_Params;

	this->ProcessEvent(uFnHandleClick, &HandleClick_Params, nullptr);
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// [0x00420800] (FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bToEntry                       (CPF_Parm)
// TArray<class AActor*>          ActorList                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void APlayerCollectorGame::eventGetSeamlessTravelActorList(unsigned long bToEntry, TArray<class AActor*>& ActorList)
{
	static UFunction* uFnGetSeamlessTravelActorList = nullptr;

	if (!uFnGetSeamlessTravelActorList)
	{
		uFnGetSeamlessTravelActorList = UFunction::FindFunction("Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList");
	}

	APlayerCollectorGame_eventGetSeamlessTravelActorList_Params GetSeamlessTravelActorList_Params;
	GetSeamlessTravelActorList_Params.bToEntry = bToEntry;
	memcpy_s(&GetSeamlessTravelActorList_Params.ActorList, 0x10, &ActorList, 0x10);

	this->ProcessEvent(uFnGetSeamlessTravelActorList, &GetSeamlessTravelActorList_Params, nullptr);

	memcpy_s(&ActorList, 0x10, &GetSeamlessTravelActorList_Params.ActorList, 0x10);
};

// Function GameFramework.PlayerCollectorGame.Login
// [0x00420802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class APlayerController*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Portal                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Options                        (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            UniqueId                       (CPF_Const | CPF_Parm)
// class FString                  ErrorMessage                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class APlayerController* APlayerCollectorGame::eventLogin(class FString Portal, class FString Options, struct FUniqueNetId UniqueId, class FString& ErrorMessage)
{
	static UFunction* uFnLogin = nullptr;

	if (!uFnLogin)
	{
		uFnLogin = UFunction::FindFunction("Function GameFramework.PlayerCollectorGame.Login");
	}

	APlayerCollectorGame_eventLogin_Params Login_Params;
	memcpy_s(&Login_Params.Portal, 0x10, &Portal, 0x10);
	memcpy_s(&Login_Params.Options, 0x10, &Options, 0x10);
	memcpy_s(&Login_Params.UniqueId, 0x8, &UniqueId, 0x8);
	memcpy_s(&Login_Params.ErrorMessage, 0x10, &ErrorMessage, 0x10);

	this->ProcessEvent(uFnLogin, &Login_Params, nullptr);

	memcpy_s(&ErrorMessage, 0x10, &Login_Params.ErrorMessage, 0x10);

	return Login_Params.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRenderImage.Render
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 TargetCanvas                   (CPF_Parm)
// class AHUD*                    TargetHud                      (CPF_Parm)

void USeqEvent_HudRenderImage::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static UFunction* uFnRender = nullptr;

	if (!uFnRender)
	{
		uFnRender = UFunction::FindFunction("Function GameFramework.SeqEvent_HudRenderImage.Render");
	}

	USeqEvent_HudRenderImage_execRender_Params Render_Params;
	memcpy_s(&Render_Params.TargetCanvas, 0x8, &TargetCanvas, 0x8);
	memcpy_s(&Render_Params.TargetHud, 0x8, &TargetHud, 0x8);

	this->ProcessEvent(uFnRender, &Render_Params, nullptr);
};

// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqEvent_HudRenderText::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion");
	}

	USeqEvent_HudRenderText_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	USeqEvent_HudRenderText::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.SeqEvent_HudRenderText.Render
// [0x00020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UCanvas*                 TargetCanvas                   (CPF_Parm)
// class AHUD*                    TargetHud                      (CPF_Parm)

void USeqEvent_HudRenderText::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static UFunction* uFnRender = nullptr;

	if (!uFnRender)
	{
		uFnRender = UFunction::FindFunction("Function GameFramework.SeqEvent_HudRenderText.Render");
	}

	USeqEvent_HudRenderText_execRender_Params Render_Params;
	memcpy_s(&Render_Params.TargetCanvas, 0x8, &TargetCanvas, 0x8);
	memcpy_s(&Render_Params.TargetHud, 0x8, &TargetHud, 0x8);

	this->ProcessEvent(uFnRender, &Render_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
