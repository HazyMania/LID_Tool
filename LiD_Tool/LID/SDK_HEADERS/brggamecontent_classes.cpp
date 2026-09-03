/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: brggamecontent_classes.cpp
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

// Function brggamecontent.BrgSeqAct_TitleMenu.GetObjClassVersion
// [0x00022802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UBrgSeqAct_TitleMenu::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function brggamecontent.BrgSeqAct_TitleMenu.GetObjClassVersion");
	}

	UBrgSeqAct_TitleMenu_eventGetObjClassVersion_Params GetObjClassVersion_Params;

	UBrgSeqAct_TitleMenu::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function brggamecontent.BrgSeqAct_TitleMenu.Update
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)

bool UBrgSeqAct_TitleMenu::eventUpdate(float DeltaTime)
{
	static UFunction* uFnUpdate = nullptr;

	if (!uFnUpdate)
	{
		uFnUpdate = UFunction::FindFunction("Function brggamecontent.BrgSeqAct_TitleMenu.Update");
	}

	UBrgSeqAct_TitleMenu_eventUpdate_Params Update_Params;
	memcpy_s(&Update_Params.DeltaTime, 0x4, &DeltaTime, 0x4);

	this->ProcessEvent(uFnUpdate, &Update_Params, nullptr);

	return Update_Params.ReturnValue;
};

// Function brggamecontent.BrgSeqAct_TitleMenu.Activated
// [0x00020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UBrgSeqAct_TitleMenu::eventActivated()
{
	static UFunction* uFnActivated = nullptr;

	if (!uFnActivated)
	{
		uFnActivated = UFunction::FindFunction("Function brggamecontent.BrgSeqAct_TitleMenu.Activated");
	}

	UBrgSeqAct_TitleMenu_eventActivated_Params Activated_Params;

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
