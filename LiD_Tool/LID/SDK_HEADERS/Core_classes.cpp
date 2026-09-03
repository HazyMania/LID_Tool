/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: Core_classes.cpp
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

TArray<class UObject*>* UObject::GObjObjects()
{
	TArray<UObject*>* objectArray = reinterpret_cast<TArray<UObject*>*>(GObjects);
	return objectArray;
}

std::string UObject::GetName()
{
	return this->Name.ToString();
}

std::string UObject::GetNameCPP()
{
	std::string nameCPP;

	if (this->IsA(UClass::StaticClass()))
	{
		UClass* uClass = reinterpret_cast<UClass*>(this);

		while (uClass)
		{
			std::string className = uClass->GetName();

			if (className == "Actor")
			{
				nameCPP += "A";
				break;
			}
			else if (className == "Object")
			{
				nameCPP += "U";
				break;
			}

			uClass = reinterpret_cast<UClass*>(uClass->SuperField);
		}
	}
	else
	{
		nameCPP += "F";
	}

	nameCPP += this->GetName();

	return nameCPP;
}

std::string UObject::GetFullName()
{
	if (this->Class && this->Outer)
	{
		std::string fullName = this->GetName();

		for (UObject* uOuter = this->Outer; uOuter; uOuter = uOuter->Outer)
		{
			fullName = uOuter->GetName() + "." + fullName;
		}

		fullName = this->Class->GetName() + " " + fullName;

		return fullName;
	}

	return "null";
}

UObject* UObject::GetPackageObj()
{
	UObject* uPackage = nullptr;

	for (UObject* uOuter = this->Outer; uOuter; uOuter = uOuter->Outer)
	{
		uPackage = uOuter;
	}

	return uPackage;
}

UClass* UObject::FindClass(const const std::string& classFullName)
{
	static bool initialized = false;
	static std::map<const std::string, UClass*> foundClasses{};

	if (!initialized)
	{
		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject)
			{
				const std::string objectFullName = uObject->GetFullName();

				if (objectFullName.find("Class") == 0)
				{
					foundClasses[objectFullName] = reinterpret_cast<UClass*>(uObject);
				}
			}
		}

		initialized = true;
	}

	if (foundClasses.find(classFullName) != foundClasses.end())
	{
		return foundClasses[classFullName];
	}

	return nullptr;
}

bool UObject::IsA(class UClass* uClass)
{
	for (UClass* uSuperClass = this->Class; uSuperClass; uSuperClass = reinterpret_cast<UClass*>(uSuperClass->SuperField))
	{
		if (uSuperClass == uClass)
		{
			return true;
		}
	}

	return false;
}

bool UObject::IsA(int32_t objInternalInteger)
{
	UClass* uClass = UObject::GObjObjects()->At(objInternalInteger)->Class;

	if (uClass)
	{
		return this->IsA(uClass);
	}

	return false;
}

template<typename T> T GetVirtualFunction(const void* instance, std::size_t index)
{
	auto vtable = *static_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<T>(vtable[index]);
}

void UObject::ProcessEvent(class UFunction* function, void* uParams, void* uResult = nullptr)
{
	GetVirtualFunction<void(*)(class UObject*, class UFunction*, void*)>(this, 67)(this, function, uParams);
}

// Function Core.Object.GetStringFromGuid
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FGuid                   InGuid                         (CPF_Const | CPF_Parm | CPF_OutParm)

class FString UObject::GetStringFromGuid(struct FGuid& InGuid)
{
	static UFunction* uFnGetStringFromGuid = nullptr;

	if (!uFnGetStringFromGuid)
	{
		uFnGetStringFromGuid = UFunction::FindFunction("Function Core.Object.GetStringFromGuid");
	}

	UObject_execGetStringFromGuid_Params GetStringFromGuid_Params;
	memcpy_s(&GetStringFromGuid_Params.InGuid, 0x10, &InGuid, 0x10);

	uFnGetStringFromGuid->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetStringFromGuid, &GetStringFromGuid_Params, nullptr);

	uFnGetStringFromGuid->FunctionFlags |= 0x400;

	memcpy_s(&InGuid, 0x10, &GetStringFromGuid_Params.InGuid, 0x10);

	return GetStringFromGuid_Params.ReturnValue;
};

// Function Core.Object.GetGuidFromString
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGuid                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  InGuidString                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FGuid UObject::GetGuidFromString(class FString& InGuidString)
{
	static UFunction* uFnGetGuidFromString = nullptr;

	if (!uFnGetGuidFromString)
	{
		uFnGetGuidFromString = UFunction::FindFunction("Function Core.Object.GetGuidFromString");
	}

	UObject_execGetGuidFromString_Params GetGuidFromString_Params;
	memcpy_s(&GetGuidFromString_Params.InGuidString, 0x10, &InGuidString, 0x10);

	uFnGetGuidFromString->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetGuidFromString, &GetGuidFromString_Params, nullptr);

	uFnGetGuidFromString->FunctionFlags |= 0x400;

	memcpy_s(&InGuidString, 0x10, &GetGuidFromString_Params.InGuidString, 0x10);

	return GetGuidFromString_Params.ReturnValue;
};

// Function Core.Object.CreateGuid
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FGuid                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FGuid UObject::CreateGuid()
{
	static UFunction* uFnCreateGuid = nullptr;

	if (!uFnCreateGuid)
	{
		uFnCreateGuid = UFunction::FindFunction("Function Core.Object.CreateGuid");
	}

	UObject_execCreateGuid_Params CreateGuid_Params;

	uFnCreateGuid->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnCreateGuid, &CreateGuid_Params, nullptr);

	uFnCreateGuid->FunctionFlags |= 0x400;

	return CreateGuid_Params.ReturnValue;
};

// Function Core.Object.IsGuidValid
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FGuid                   InGuid                         (CPF_Const | CPF_Parm | CPF_OutParm)

bool UObject::IsGuidValid(struct FGuid& InGuid)
{
	static UFunction* uFnIsGuidValid = nullptr;

	if (!uFnIsGuidValid)
	{
		uFnIsGuidValid = UFunction::FindFunction("Function Core.Object.IsGuidValid");
	}

	UObject_execIsGuidValid_Params IsGuidValid_Params;
	memcpy_s(&IsGuidValid_Params.InGuid, 0x10, &InGuid, 0x10);

	uFnIsGuidValid->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnIsGuidValid, &IsGuidValid_Params, nullptr);

	uFnIsGuidValid->FunctionFlags |= 0x400;

	memcpy_s(&InGuid, 0x10, &IsGuidValid_Params.InGuid, 0x10);

	return IsGuidValid_Params.ReturnValue;
};

// Function Core.Object.InvalidateGuid
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FGuid                   InGuid                         (CPF_Parm | CPF_OutParm)

void UObject::InvalidateGuid(struct FGuid& InGuid)
{
	static UFunction* uFnInvalidateGuid = nullptr;

	if (!uFnInvalidateGuid)
	{
		uFnInvalidateGuid = UFunction::FindFunction("Function Core.Object.InvalidateGuid");
	}

	UObject_execInvalidateGuid_Params InvalidateGuid_Params;
	memcpy_s(&InvalidateGuid_Params.InGuid, 0x10, &InGuid, 0x10);

	uFnInvalidateGuid->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnInvalidateGuid, &InvalidateGuid_Params, nullptr);

	uFnInvalidateGuid->FunctionFlags |= 0x400;

	memcpy_s(&InGuid, 0x10, &InvalidateGuid_Params.InGuid, 0x10);
};

// Function Core.Object.GetLanguage
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UObject::GetLanguage()
{
	static UFunction* uFnGetLanguage = nullptr;

	if (!uFnGetLanguage)
	{
		uFnGetLanguage = UFunction::FindFunction("Function Core.Object.GetLanguage");
	}

	UObject_execGetLanguage_Params GetLanguage_Params;

	uFnGetLanguage->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetLanguage, &GetLanguage_Params, nullptr);

	uFnGetLanguage->FunctionFlags |= 0x400;

	return GetLanguage_Params.ReturnValue;
};

// Function Core.Object.GetRandomOptionSumFrequency
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<float>                  FreqList                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UObject::GetRandomOptionSumFrequency(TArray<float>& FreqList)
{
	static UFunction* uFnGetRandomOptionSumFrequency = nullptr;

	if (!uFnGetRandomOptionSumFrequency)
	{
		uFnGetRandomOptionSumFrequency = UFunction::FindFunction("Function Core.Object.GetRandomOptionSumFrequency");
	}

	UObject_execGetRandomOptionSumFrequency_Params GetRandomOptionSumFrequency_Params;
	memcpy_s(&GetRandomOptionSumFrequency_Params.FreqList, 0x10, &FreqList, 0x10);

	this->ProcessEvent(uFnGetRandomOptionSumFrequency, &GetRandomOptionSumFrequency_Params, nullptr);

	memcpy_s(&FreqList, 0x10, &GetRandomOptionSumFrequency_Params.FreqList, 0x10);

	return GetRandomOptionSumFrequency_Params.ReturnValue;
};

// Function Core.Object.GetBuildChangelistNumber
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UObject::GetBuildChangelistNumber()
{
	static UFunction* uFnGetBuildChangelistNumber = nullptr;

	if (!uFnGetBuildChangelistNumber)
	{
		uFnGetBuildChangelistNumber = UFunction::FindFunction("Function Core.Object.GetBuildChangelistNumber");
	}

	UObject_execGetBuildChangelistNumber_Params GetBuildChangelistNumber_Params;

	uFnGetBuildChangelistNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetBuildChangelistNumber, &GetBuildChangelistNumber_Params, nullptr);

	uFnGetBuildChangelistNumber->FunctionFlags |= 0x400;

	return GetBuildChangelistNumber_Params.ReturnValue;
};

// Function Core.Object.GetEngineVersion
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UObject::GetEngineVersion()
{
	static UFunction* uFnGetEngineVersion = nullptr;

	if (!uFnGetEngineVersion)
	{
		uFnGetEngineVersion = UFunction::FindFunction("Function Core.Object.GetEngineVersion");
	}

	UObject_execGetEngineVersion_Params GetEngineVersion_Params;

	uFnGetEngineVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetEngineVersion, &GetEngineVersion_Params, nullptr);

	uFnGetEngineVersion->FunctionFlags |= 0x400;

	return GetEngineVersion_Params.ReturnValue;
};

// Function Core.Object.GetSystemTime
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        Year                           (CPF_Parm | CPF_OutParm)
// int32_t                        Month                          (CPF_Parm | CPF_OutParm)
// int32_t                        DayOfWeek                      (CPF_Parm | CPF_OutParm)
// int32_t                        Day                            (CPF_Parm | CPF_OutParm)
// int32_t                        Hour                           (CPF_Parm | CPF_OutParm)
// int32_t                        Min                            (CPF_Parm | CPF_OutParm)
// int32_t                        Sec                            (CPF_Parm | CPF_OutParm)
// int32_t                        MSec                           (CPF_Parm | CPF_OutParm)

void UObject::GetSystemTime(int32_t& Year, int32_t& Month, int32_t& DayOfWeek, int32_t& Day, int32_t& Hour, int32_t& Min, int32_t& Sec, int32_t& MSec)
{
	static UFunction* uFnGetSystemTime = nullptr;

	if (!uFnGetSystemTime)
	{
		uFnGetSystemTime = UFunction::FindFunction("Function Core.Object.GetSystemTime");
	}

	UObject_execGetSystemTime_Params GetSystemTime_Params;
	memcpy_s(&GetSystemTime_Params.Year, 0x4, &Year, 0x4);
	memcpy_s(&GetSystemTime_Params.Month, 0x4, &Month, 0x4);
	memcpy_s(&GetSystemTime_Params.DayOfWeek, 0x4, &DayOfWeek, 0x4);
	memcpy_s(&GetSystemTime_Params.Day, 0x4, &Day, 0x4);
	memcpy_s(&GetSystemTime_Params.Hour, 0x4, &Hour, 0x4);
	memcpy_s(&GetSystemTime_Params.Min, 0x4, &Min, 0x4);
	memcpy_s(&GetSystemTime_Params.Sec, 0x4, &Sec, 0x4);
	memcpy_s(&GetSystemTime_Params.MSec, 0x4, &MSec, 0x4);

	uFnGetSystemTime->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetSystemTime, &GetSystemTime_Params, nullptr);

	uFnGetSystemTime->FunctionFlags |= 0x400;

	memcpy_s(&Year, 0x4, &GetSystemTime_Params.Year, 0x4);
	memcpy_s(&Month, 0x4, &GetSystemTime_Params.Month, 0x4);
	memcpy_s(&DayOfWeek, 0x4, &GetSystemTime_Params.DayOfWeek, 0x4);
	memcpy_s(&Day, 0x4, &GetSystemTime_Params.Day, 0x4);
	memcpy_s(&Hour, 0x4, &GetSystemTime_Params.Hour, 0x4);
	memcpy_s(&Min, 0x4, &GetSystemTime_Params.Min, 0x4);
	memcpy_s(&Sec, 0x4, &GetSystemTime_Params.Sec, 0x4);
	memcpy_s(&MSec, 0x4, &GetSystemTime_Params.MSec, 0x4);
};

// Function Core.Object.TimeStamp
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UObject::TimeStamp()
{
	static UFunction* uFnTimeStamp = nullptr;

	if (!uFnTimeStamp)
	{
		uFnTimeStamp = UFunction::FindFunction("Function Core.Object.TimeStamp");
	}

	UObject_execTimeStamp_Params TimeStamp_Params;

	uFnTimeStamp->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTimeStamp, &TimeStamp_Params, nullptr);

	uFnTimeStamp->FunctionFlags |= 0x400;

	return TimeStamp_Params.ReturnValue;
};

// Function Core.Object.TransformVectorByRotation
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                SourceRotation                 (CPF_Parm)
// struct FVector                 SourceVector                   (CPF_Parm)
// unsigned long                  bInverse                       (CPF_OptionalParm | CPF_Parm)

struct FVector UObject::TransformVectorByRotation(struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse)
{
	static UFunction* uFnTransformVectorByRotation = nullptr;

	if (!uFnTransformVectorByRotation)
	{
		uFnTransformVectorByRotation = UFunction::FindFunction("Function Core.Object.TransformVectorByRotation");
	}

	UObject_execTransformVectorByRotation_Params TransformVectorByRotation_Params;
	memcpy_s(&TransformVectorByRotation_Params.SourceRotation, 0xC, &SourceRotation, 0xC);
	memcpy_s(&TransformVectorByRotation_Params.SourceVector, 0xC, &SourceVector, 0xC);
	TransformVectorByRotation_Params.bInverse = bInverse;

	uFnTransformVectorByRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTransformVectorByRotation, &TransformVectorByRotation_Params, nullptr);

	uFnTransformVectorByRotation->FunctionFlags |= 0x400;

	return TransformVectorByRotation_Params.ReturnValue;
};

// Function Core.Object.GetPackageName
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UObject::GetPackageName()
{
	static UFunction* uFnGetPackageName = nullptr;

	if (!uFnGetPackageName)
	{
		uFnGetPackageName = UFunction::FindFunction("Function Core.Object.GetPackageName");
	}

	UObject_execGetPackageName_Params GetPackageName_Params;

	this->ProcessEvent(uFnGetPackageName, &GetPackageName_Params, nullptr);

	return GetPackageName_Params.ReturnValue;
};

// Function Core.Object.IsPendingKill
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UObject::IsPendingKill()
{
	static UFunction* uFnIsPendingKill = nullptr;

	if (!uFnIsPendingKill)
	{
		uFnIsPendingKill = UFunction::FindFunction("Function Core.Object.IsPendingKill");
	}

	UObject_execIsPendingKill_Params IsPendingKill_Params;

	uFnIsPendingKill->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsPendingKill, &IsPendingKill_Params, nullptr);

	uFnIsPendingKill->FunctionFlags |= 0x400;

	return IsPendingKill_Params.ReturnValue;
};

// Function Core.Object.ByteToFloat
// [0x00024103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        inputByte                      (CPF_Parm)
// unsigned long                  bSigned                        (CPF_OptionalParm | CPF_Parm)

float UObject::ByteToFloat(uint8_t inputByte, unsigned long bSigned)
{
	static UFunction* uFnByteToFloat = nullptr;

	if (!uFnByteToFloat)
	{
		uFnByteToFloat = UFunction::FindFunction("Function Core.Object.ByteToFloat");
	}

	UObject_execByteToFloat_Params ByteToFloat_Params;
	memcpy_s(&ByteToFloat_Params.inputByte, 0x1, &inputByte, 0x1);
	ByteToFloat_Params.bSigned = bSigned;

	this->ProcessEvent(uFnByteToFloat, &ByteToFloat_Params, nullptr);

	return ByteToFloat_Params.ReturnValue;
};

// Function Core.Object.FloatToByte
// [0x00024103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          inputFloat                     (CPF_Parm)
// unsigned long                  bSigned                        (CPF_OptionalParm | CPF_Parm)

uint8_t UObject::FloatToByte(float inputFloat, unsigned long bSigned)
{
	static UFunction* uFnFloatToByte = nullptr;

	if (!uFnFloatToByte)
	{
		uFnFloatToByte = UFunction::FindFunction("Function Core.Object.FloatToByte");
	}

	UObject_execFloatToByte_Params FloatToByte_Params;
	memcpy_s(&FloatToByte_Params.inputFloat, 0x4, &inputFloat, 0x4);
	FloatToByte_Params.bSigned = bSigned;

	this->ProcessEvent(uFnFloatToByte, &FloatToByte_Params, nullptr);

	return FloatToByte_Params.ReturnValue;
};

// Function Core.Object.UnwindHeading
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::UnwindHeading(float A)
{
	static UFunction* uFnUnwindHeading = nullptr;

	if (!uFnUnwindHeading)
	{
		uFnUnwindHeading = UFunction::FindFunction("Function Core.Object.UnwindHeading");
	}

	UObject_execUnwindHeading_Params UnwindHeading_Params;
	memcpy_s(&UnwindHeading_Params.A, 0x4, &A, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnUnwindHeading, &UnwindHeading_Params, nullptr);

	return UnwindHeading_Params.ReturnValue;
};

// Function Core.Object.FindDeltaAngle
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A1                             (CPF_Parm)
// float                          A2                             (CPF_Parm)

float UObject::FindDeltaAngle(float A1, float A2)
{
	static UFunction* uFnFindDeltaAngle = nullptr;

	if (!uFnFindDeltaAngle)
	{
		uFnFindDeltaAngle = UFunction::FindFunction("Function Core.Object.FindDeltaAngle");
	}

	UObject_execFindDeltaAngle_Params FindDeltaAngle_Params;
	memcpy_s(&FindDeltaAngle_Params.A1, 0x4, &A1, 0x4);
	memcpy_s(&FindDeltaAngle_Params.A2, 0x4, &A2, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnFindDeltaAngle, &FindDeltaAngle_Params, nullptr);

	return FindDeltaAngle_Params.ReturnValue;
};

// Function Core.Object.GetHeadingAngle
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Dir                            (CPF_Parm)

float UObject::GetHeadingAngle(struct FVector Dir)
{
	static UFunction* uFnGetHeadingAngle = nullptr;

	if (!uFnGetHeadingAngle)
	{
		uFnGetHeadingAngle = UFunction::FindFunction("Function Core.Object.GetHeadingAngle");
	}

	UObject_execGetHeadingAngle_Params GetHeadingAngle_Params;
	memcpy_s(&GetHeadingAngle_Params.Dir, 0xC, &Dir, 0xC);

	UObject::StaticClass()->ProcessEvent(uFnGetHeadingAngle, &GetHeadingAngle_Params, nullptr);

	return GetHeadingAngle_Params.ReturnValue;
};

// Function Core.Object.GetAngularDegreesFromRadians
// [0x00422103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               OutFOV                         (CPF_Parm | CPF_OutParm)

void UObject::GetAngularDegreesFromRadians(struct FVector2D& OutFOV)
{
	static UFunction* uFnGetAngularDegreesFromRadians = nullptr;

	if (!uFnGetAngularDegreesFromRadians)
	{
		uFnGetAngularDegreesFromRadians = UFunction::FindFunction("Function Core.Object.GetAngularDegreesFromRadians");
	}

	UObject_execGetAngularDegreesFromRadians_Params GetAngularDegreesFromRadians_Params;
	memcpy_s(&GetAngularDegreesFromRadians_Params.OutFOV, 0x8, &OutFOV, 0x8);

	UObject::StaticClass()->ProcessEvent(uFnGetAngularDegreesFromRadians, &GetAngularDegreesFromRadians_Params, nullptr);

	memcpy_s(&OutFOV, 0x8, &GetAngularDegreesFromRadians_Params.OutFOV, 0x8);
};

// Function Core.Object.GetAngularFromDotDist
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               DotDist                        (CPF_Parm)
// struct FVector2D               OutAngDist                     (CPF_Parm | CPF_OutParm)

void UObject::GetAngularFromDotDist(struct FVector2D DotDist, struct FVector2D& OutAngDist)
{
	static UFunction* uFnGetAngularFromDotDist = nullptr;

	if (!uFnGetAngularFromDotDist)
	{
		uFnGetAngularFromDotDist = UFunction::FindFunction("Function Core.Object.GetAngularFromDotDist");
	}

	UObject_execGetAngularFromDotDist_Params GetAngularFromDotDist_Params;
	memcpy_s(&GetAngularFromDotDist_Params.DotDist, 0x8, &DotDist, 0x8);
	memcpy_s(&GetAngularFromDotDist_Params.OutAngDist, 0x8, &OutAngDist, 0x8);

	uFnGetAngularFromDotDist->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetAngularFromDotDist, &GetAngularFromDotDist_Params, nullptr);

	uFnGetAngularFromDotDist->FunctionFlags |= 0x400;

	memcpy_s(&OutAngDist, 0x8, &GetAngularFromDotDist_Params.OutAngDist, 0x8);
};

// Function Core.Object.GetAngularDistance
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Direction                      (CPF_Parm)
// struct FVector                 AxisX                          (CPF_Parm)
// struct FVector                 AxisY                          (CPF_Parm)
// struct FVector                 AxisZ                          (CPF_Parm)
// struct FVector2D               OutAngularDist                 (CPF_Parm | CPF_OutParm)

bool UObject::GetAngularDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutAngularDist)
{
	static UFunction* uFnGetAngularDistance = nullptr;

	if (!uFnGetAngularDistance)
	{
		uFnGetAngularDistance = UFunction::FindFunction("Function Core.Object.GetAngularDistance");
	}

	UObject_execGetAngularDistance_Params GetAngularDistance_Params;
	memcpy_s(&GetAngularDistance_Params.Direction, 0xC, &Direction, 0xC);
	memcpy_s(&GetAngularDistance_Params.AxisX, 0xC, &AxisX, 0xC);
	memcpy_s(&GetAngularDistance_Params.AxisY, 0xC, &AxisY, 0xC);
	memcpy_s(&GetAngularDistance_Params.AxisZ, 0xC, &AxisZ, 0xC);
	memcpy_s(&GetAngularDistance_Params.OutAngularDist, 0x8, &OutAngularDist, 0x8);

	uFnGetAngularDistance->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetAngularDistance, &GetAngularDistance_Params, nullptr);

	uFnGetAngularDistance->FunctionFlags |= 0x400;

	memcpy_s(&OutAngularDist, 0x8, &GetAngularDistance_Params.OutAngularDist, 0x8);

	return GetAngularDistance_Params.ReturnValue;
};

// Function Core.Object.GetDotDistance
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Direction                      (CPF_Parm)
// struct FVector                 AxisX                          (CPF_Parm)
// struct FVector                 AxisY                          (CPF_Parm)
// struct FVector                 AxisZ                          (CPF_Parm)
// struct FVector2D               OutDotDist                     (CPF_Parm | CPF_OutParm)

bool UObject::GetDotDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutDotDist)
{
	static UFunction* uFnGetDotDistance = nullptr;

	if (!uFnGetDotDistance)
	{
		uFnGetDotDistance = UFunction::FindFunction("Function Core.Object.GetDotDistance");
	}

	UObject_execGetDotDistance_Params GetDotDistance_Params;
	memcpy_s(&GetDotDistance_Params.Direction, 0xC, &Direction, 0xC);
	memcpy_s(&GetDotDistance_Params.AxisX, 0xC, &AxisX, 0xC);
	memcpy_s(&GetDotDistance_Params.AxisY, 0xC, &AxisY, 0xC);
	memcpy_s(&GetDotDistance_Params.AxisZ, 0xC, &AxisZ, 0xC);
	memcpy_s(&GetDotDistance_Params.OutDotDist, 0x8, &OutDotDist, 0x8);

	uFnGetDotDistance->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetDotDistance, &GetDotDistance_Params, nullptr);

	uFnGetDotDistance->FunctionFlags |= 0x400;

	memcpy_s(&OutDotDist, 0x8, &GetDotDistance_Params.OutDotDist, 0x8);

	return GetDotDistance_Params.ReturnValue;
};

// Function Core.Object.PointProjectToPlane
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 C                              (CPF_Parm)

struct FVector UObject::PointProjectToPlane(struct FVector Point, struct FVector A, struct FVector B, struct FVector C)
{
	static UFunction* uFnPointProjectToPlane = nullptr;

	if (!uFnPointProjectToPlane)
	{
		uFnPointProjectToPlane = UFunction::FindFunction("Function Core.Object.PointProjectToPlane");
	}

	UObject_execPointProjectToPlane_Params PointProjectToPlane_Params;
	memcpy_s(&PointProjectToPlane_Params.Point, 0xC, &Point, 0xC);
	memcpy_s(&PointProjectToPlane_Params.A, 0xC, &A, 0xC);
	memcpy_s(&PointProjectToPlane_Params.B, 0xC, &B, 0xC);
	memcpy_s(&PointProjectToPlane_Params.C, 0xC, &C, 0xC);

	uFnPointProjectToPlane->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnPointProjectToPlane, &PointProjectToPlane_Params, nullptr);

	uFnPointProjectToPlane->FunctionFlags |= 0x400;

	return PointProjectToPlane_Params.ReturnValue;
};

// Function Core.Object.PointDistToPlane
// [0x00C24103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FRotator                Orientation                    (CPF_Parm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FVector                 out_ClosestPoint               (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UObject::PointDistToPlane(struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector& out_ClosestPoint)
{
	static UFunction* uFnPointDistToPlane = nullptr;

	if (!uFnPointDistToPlane)
	{
		uFnPointDistToPlane = UFunction::FindFunction("Function Core.Object.PointDistToPlane");
	}

	UObject_execPointDistToPlane_Params PointDistToPlane_Params;
	memcpy_s(&PointDistToPlane_Params.Point, 0xC, &Point, 0xC);
	memcpy_s(&PointDistToPlane_Params.Orientation, 0xC, &Orientation, 0xC);
	memcpy_s(&PointDistToPlane_Params.Origin, 0xC, &Origin, 0xC);
	memcpy_s(&PointDistToPlane_Params.out_ClosestPoint, 0xC, &out_ClosestPoint, 0xC);

	this->ProcessEvent(uFnPointDistToPlane, &PointDistToPlane_Params, nullptr);

	memcpy_s(&out_ClosestPoint, 0xC, &PointDistToPlane_Params.out_ClosestPoint, 0xC);

	return PointDistToPlane_Params.ReturnValue;
};

// Function Core.Object.PointDistToSegment
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 StartPoint                     (CPF_Parm)
// struct FVector                 EndPoint                       (CPF_Parm)
// struct FVector                 OutClosestPoint                (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UObject::PointDistToSegment(struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector& OutClosestPoint)
{
	static UFunction* uFnPointDistToSegment = nullptr;

	if (!uFnPointDistToSegment)
	{
		uFnPointDistToSegment = UFunction::FindFunction("Function Core.Object.PointDistToSegment");
	}

	UObject_execPointDistToSegment_Params PointDistToSegment_Params;
	memcpy_s(&PointDistToSegment_Params.Point, 0xC, &Point, 0xC);
	memcpy_s(&PointDistToSegment_Params.StartPoint, 0xC, &StartPoint, 0xC);
	memcpy_s(&PointDistToSegment_Params.EndPoint, 0xC, &EndPoint, 0xC);
	memcpy_s(&PointDistToSegment_Params.OutClosestPoint, 0xC, &OutClosestPoint, 0xC);

	uFnPointDistToSegment->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPointDistToSegment, &PointDistToSegment_Params, nullptr);

	uFnPointDistToSegment->FunctionFlags |= 0x400;

	memcpy_s(&OutClosestPoint, 0xC, &PointDistToSegment_Params.OutClosestPoint, 0xC);

	return PointDistToSegment_Params.ReturnValue;
};

// Function Core.Object.PointDistToLine
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 Line                           (CPF_Parm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FVector                 OutClosestPoint                (CPF_OptionalParm | CPF_Parm | CPF_OutParm)

float UObject::PointDistToLine(struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector& OutClosestPoint)
{
	static UFunction* uFnPointDistToLine = nullptr;

	if (!uFnPointDistToLine)
	{
		uFnPointDistToLine = UFunction::FindFunction("Function Core.Object.PointDistToLine");
	}

	UObject_execPointDistToLine_Params PointDistToLine_Params;
	memcpy_s(&PointDistToLine_Params.Point, 0xC, &Point, 0xC);
	memcpy_s(&PointDistToLine_Params.Line, 0xC, &Line, 0xC);
	memcpy_s(&PointDistToLine_Params.Origin, 0xC, &Origin, 0xC);
	memcpy_s(&PointDistToLine_Params.OutClosestPoint, 0xC, &OutClosestPoint, 0xC);

	uFnPointDistToLine->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPointDistToLine, &PointDistToLine_Params, nullptr);

	uFnPointDistToLine->FunctionFlags |= 0x400;

	memcpy_s(&OutClosestPoint, 0xC, &PointDistToLine_Params.OutClosestPoint, 0xC);

	return PointDistToLine_Params.ReturnValue;
};

// Function Core.Object.GetPerObjectConfigSections
// [0x00426401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  SearchClass                    (CPF_Parm)
// class UObject*                 ObjectOuter                    (CPF_OptionalParm | CPF_Parm)
// int32_t                        MaxResults                     (CPF_OptionalParm | CPF_Parm)
// TArray<class FString>          out_SectionNames               (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UObject::GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int32_t MaxResults, TArray<class FString>& out_SectionNames)
{
	static UFunction* uFnGetPerObjectConfigSections = nullptr;

	if (!uFnGetPerObjectConfigSections)
	{
		uFnGetPerObjectConfigSections = UFunction::FindFunction("Function Core.Object.GetPerObjectConfigSections");
	}

	UObject_execGetPerObjectConfigSections_Params GetPerObjectConfigSections_Params;
	memcpy_s(&GetPerObjectConfigSections_Params.SearchClass, 0x8, &SearchClass, 0x8);
	memcpy_s(&GetPerObjectConfigSections_Params.ObjectOuter, 0x8, &ObjectOuter, 0x8);
	memcpy_s(&GetPerObjectConfigSections_Params.MaxResults, 0x4, &MaxResults, 0x4);
	memcpy_s(&GetPerObjectConfigSections_Params.out_SectionNames, 0x10, &out_SectionNames, 0x10);

	uFnGetPerObjectConfigSections->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetPerObjectConfigSections, &GetPerObjectConfigSections_Params, nullptr);

	uFnGetPerObjectConfigSections->FunctionFlags |= 0x400;

	memcpy_s(&out_SectionNames, 0x10, &GetPerObjectConfigSections_Params.out_SectionNames, 0x10);

	return GetPerObjectConfigSections_Params.ReturnValue;
};

// Function Core.Object.StaticSaveConfig
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::StaticSaveConfig()
{
	static UFunction* uFnStaticSaveConfig = nullptr;

	if (!uFnStaticSaveConfig)
	{
		uFnStaticSaveConfig = UFunction::FindFunction("Function Core.Object.StaticSaveConfig");
	}

	UObject_execStaticSaveConfig_Params StaticSaveConfig_Params;

	uFnStaticSaveConfig->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnStaticSaveConfig, &StaticSaveConfig_Params, nullptr);

	uFnStaticSaveConfig->FunctionFlags |= 0x400;
};

// Function Core.Object.SaveConfig
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[536])
// Parameter info:

void UObject::SaveConfig()
{
	static UFunction* uFnSaveConfig = nullptr;

	if (!uFnSaveConfig)
	{
		uFnSaveConfig = UFunction::FindFunction("Function Core.Object.SaveConfig");
	}

	UObject_execSaveConfig_Params SaveConfig_Params;

	uint16_t iNativeIndex = uFnSaveConfig->iNative;
	uFnSaveConfig->iNative = 0;

	uFnSaveConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSaveConfig, &SaveConfig_Params, nullptr);

	uFnSaveConfig->FunctionFlags |= 0x400;

	uFnSaveConfig->iNative = iNativeIndex;
};

// Function Core.Object.FindObject
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ObjectName                     (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  ObjectClass                    (CPF_Parm)

class UObject* UObject::FindObject(class FString ObjectName, class UClass* ObjectClass)
{
	static UFunction* uFnFindObject = nullptr;

	if (!uFnFindObject)
	{
		uFnFindObject = UFunction::FindFunction("Function Core.Object.FindObject");
	}

	UObject_execFindObject_Params FindObject_Params;
	memcpy_s(&FindObject_Params.ObjectName, 0x10, &ObjectName, 0x10);
	memcpy_s(&FindObject_Params.ObjectClass, 0x8, &ObjectClass, 0x8);

	uFnFindObject->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFindObject, &FindObject_Params, nullptr);

	uFnFindObject->FunctionFlags |= 0x400;

	return FindObject_Params.ReturnValue;
};

// Function Core.Object.DynamicLoadObject
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UObject*                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ObjectName                     (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  ObjectClass                    (CPF_Parm)
// unsigned long                  MayFail                        (CPF_OptionalParm | CPF_Parm)

class UObject* UObject::DynamicLoadObject(class FString ObjectName, class UClass* ObjectClass, unsigned long MayFail)
{
	static UFunction* uFnDynamicLoadObject = nullptr;

	if (!uFnDynamicLoadObject)
	{
		uFnDynamicLoadObject = UFunction::FindFunction("Function Core.Object.DynamicLoadObject");
	}

	UObject_execDynamicLoadObject_Params DynamicLoadObject_Params;
	memcpy_s(&DynamicLoadObject_Params.ObjectName, 0x10, &ObjectName, 0x10);
	memcpy_s(&DynamicLoadObject_Params.ObjectClass, 0x8, &ObjectClass, 0x8);
	DynamicLoadObject_Params.MayFail = MayFail;

	uFnDynamicLoadObject->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDynamicLoadObject, &DynamicLoadObject_Params, nullptr);

	uFnDynamicLoadObject->FunctionFlags |= 0x400;

	return DynamicLoadObject_Params.ReturnValue;
};

// Function Core.Object.GetEnum
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 E                              (CPF_Parm)
// int32_t                        I                              (CPF_Parm | CPF_CoerceParm)

struct FName UObject::GetEnum(class UObject* E, int32_t I)
{
	static UFunction* uFnGetEnum = nullptr;

	if (!uFnGetEnum)
	{
		uFnGetEnum = UFunction::FindFunction("Function Core.Object.GetEnum");
	}

	UObject_execGetEnum_Params GetEnum_Params;
	memcpy_s(&GetEnum_Params.E, 0x8, &E, 0x8);
	memcpy_s(&GetEnum_Params.I, 0x4, &I, 0x4);

	uFnGetEnum->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetEnum, &GetEnum_Params, nullptr);

	uFnGetEnum->FunctionFlags |= 0x400;

	return GetEnum_Params.ReturnValue;
};

// Function Core.Object.Disable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[118])
// Parameter info:
// struct FName                   ProbeFunc                      (CPF_Parm)

void UObject::Disable(struct FName ProbeFunc)
{
	static UFunction* uFnDisable = nullptr;

	if (!uFnDisable)
	{
		uFnDisable = UFunction::FindFunction("Function Core.Object.Disable");
	}

	UObject_execDisable_Params Disable_Params;
	memcpy_s(&Disable_Params.ProbeFunc, 0x8, &ProbeFunc, 0x8);

	uint16_t iNativeIndex = uFnDisable->iNative;
	uFnDisable->iNative = 0;

	uFnDisable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDisable, &Disable_Params, nullptr);

	uFnDisable->FunctionFlags |= 0x400;

	uFnDisable->iNative = iNativeIndex;
};

// Function Core.Object.Enable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[117])
// Parameter info:
// struct FName                   ProbeFunc                      (CPF_Parm)

void UObject::Enable(struct FName ProbeFunc)
{
	static UFunction* uFnEnable = nullptr;

	if (!uFnEnable)
	{
		uFnEnable = UFunction::FindFunction("Function Core.Object.Enable");
	}

	UObject_execEnable_Params Enable_Params;
	memcpy_s(&Enable_Params.ProbeFunc, 0x8, &ProbeFunc, 0x8);

	uint16_t iNativeIndex = uFnEnable->iNative;
	uFnEnable->iNative = 0;

	uFnEnable->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEnable, &Enable_Params, nullptr);

	uFnEnable->FunctionFlags |= 0x400;

	uFnEnable->iNative = iNativeIndex;
};

// Function Core.Object.ContinuedState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::eventContinuedState()
{
	static UFunction* uFnContinuedState = nullptr;

	if (!uFnContinuedState)
	{
		uFnContinuedState = UFunction::FindFunction("Function Core.Object.ContinuedState");
	}

	UObject_eventContinuedState_Params ContinuedState_Params;

	this->ProcessEvent(uFnContinuedState, &ContinuedState_Params, nullptr);
};

// Function Core.Object.PausedState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::eventPausedState()
{
	static UFunction* uFnPausedState = nullptr;

	if (!uFnPausedState)
	{
		uFnPausedState = UFunction::FindFunction("Function Core.Object.PausedState");
	}

	UObject_eventPausedState_Params PausedState_Params;

	this->ProcessEvent(uFnPausedState, &PausedState_Params, nullptr);
};

// Function Core.Object.PoppedState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::eventPoppedState()
{
	static UFunction* uFnPoppedState = nullptr;

	if (!uFnPoppedState)
	{
		uFnPoppedState = UFunction::FindFunction("Function Core.Object.PoppedState");
	}

	UObject_eventPoppedState_Params PoppedState_Params;

	this->ProcessEvent(uFnPoppedState, &PoppedState_Params, nullptr);
};

// Function Core.Object.PushedState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::eventPushedState()
{
	static UFunction* uFnPushedState = nullptr;

	if (!uFnPushedState)
	{
		uFnPushedState = UFunction::FindFunction("Function Core.Object.PushedState");
	}

	UObject_eventPushedState_Params PushedState_Params;

	this->ProcessEvent(uFnPushedState, &PushedState_Params, nullptr);
};

// Function Core.Object.EndState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   NextStateName                  (CPF_Parm)

void UObject::eventEndState(struct FName NextStateName)
{
	static UFunction* uFnEndState = nullptr;

	if (!uFnEndState)
	{
		uFnEndState = UFunction::FindFunction("Function Core.Object.EndState");
	}

	UObject_eventEndState_Params EndState_Params;
	memcpy_s(&EndState_Params.NextStateName, 0x8, &NextStateName, 0x8);

	this->ProcessEvent(uFnEndState, &EndState_Params, nullptr);
};

// Function Core.Object.BeginState
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   PreviousStateName              (CPF_Parm)

void UObject::eventBeginState(struct FName PreviousStateName)
{
	static UFunction* uFnBeginState = nullptr;

	if (!uFnBeginState)
	{
		uFnBeginState = UFunction::FindFunction("Function Core.Object.BeginState");
	}

	UObject_eventBeginState_Params BeginState_Params;
	memcpy_s(&BeginState_Params.PreviousStateName, 0x8, &PreviousStateName, 0x8);

	this->ProcessEvent(uFnBeginState, &BeginState_Params, nullptr);
};

// Function Core.Object.DumpStateStack
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::DumpStateStack()
{
	static UFunction* uFnDumpStateStack = nullptr;

	if (!uFnDumpStateStack)
	{
		uFnDumpStateStack = UFunction::FindFunction("Function Core.Object.DumpStateStack");
	}

	UObject_execDumpStateStack_Params DumpStateStack_Params;

	uFnDumpStateStack->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDumpStateStack, &DumpStateStack_Params, nullptr);

	uFnDumpStateStack->FunctionFlags |= 0x400;
};

// Function Core.Object.PopState
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bPopAll                        (CPF_OptionalParm | CPF_Parm)

void UObject::PopState(unsigned long bPopAll)
{
	static UFunction* uFnPopState = nullptr;

	if (!uFnPopState)
	{
		uFnPopState = UFunction::FindFunction("Function Core.Object.PopState");
	}

	UObject_execPopState_Params PopState_Params;
	PopState_Params.bPopAll = bPopAll;

	uFnPopState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPopState, &PopState_Params, nullptr);

	uFnPopState->FunctionFlags |= 0x400;
};

// Function Core.Object.PushState
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   NewState                       (CPF_Parm)
// struct FName                   NewLabel                       (CPF_OptionalParm | CPF_Parm)

void UObject::PushState(struct FName NewState, struct FName NewLabel)
{
	static UFunction* uFnPushState = nullptr;

	if (!uFnPushState)
	{
		uFnPushState = UFunction::FindFunction("Function Core.Object.PushState");
	}

	UObject_execPushState_Params PushState_Params;
	memcpy_s(&PushState_Params.NewState, 0x8, &NewState, 0x8);
	memcpy_s(&PushState_Params.NewLabel, 0x8, &NewLabel, 0x8);

	uFnPushState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPushState, &PushState_Params, nullptr);

	uFnPushState->FunctionFlags |= 0x400;
};

// Function Core.Object.GetStateName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[284])
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UObject::GetStateName()
{
	static UFunction* uFnGetStateName = nullptr;

	if (!uFnGetStateName)
	{
		uFnGetStateName = UFunction::FindFunction("Function Core.Object.GetStateName");
	}

	UObject_execGetStateName_Params GetStateName_Params;

	uint16_t iNativeIndex = uFnGetStateName->iNative;
	uFnGetStateName->iNative = 0;

	uFnGetStateName->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetStateName, &GetStateName_Params, nullptr);

	uFnGetStateName->FunctionFlags |= 0x400;

	uFnGetStateName->iNative = iNativeIndex;

	return GetStateName_Params.ReturnValue;
};

// Function Core.Object.IsChildState
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   TestState                      (CPF_Parm)
// struct FName                   TestParentState                (CPF_Parm)

bool UObject::IsChildState(struct FName TestState, struct FName TestParentState)
{
	static UFunction* uFnIsChildState = nullptr;

	if (!uFnIsChildState)
	{
		uFnIsChildState = UFunction::FindFunction("Function Core.Object.IsChildState");
	}

	UObject_execIsChildState_Params IsChildState_Params;
	memcpy_s(&IsChildState_Params.TestState, 0x8, &TestState, 0x8);
	memcpy_s(&IsChildState_Params.TestParentState, 0x8, &TestParentState, 0x8);

	uFnIsChildState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsChildState, &IsChildState_Params, nullptr);

	uFnIsChildState->FunctionFlags |= 0x400;

	return IsChildState_Params.ReturnValue;
};

// Function Core.Object.IsInState
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) (iNative[281])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   TestState                      (CPF_Parm)
// unsigned long                  bTestStateStack                (CPF_OptionalParm | CPF_Parm)

bool UObject::IsInState(struct FName TestState, unsigned long bTestStateStack)
{
	static UFunction* uFnIsInState = nullptr;

	if (!uFnIsInState)
	{
		uFnIsInState = UFunction::FindFunction("Function Core.Object.IsInState");
	}

	UObject_execIsInState_Params IsInState_Params;
	memcpy_s(&IsInState_Params.TestState, 0x8, &TestState, 0x8);
	IsInState_Params.bTestStateStack = bTestStateStack;

	uint16_t iNativeIndex = uFnIsInState->iNative;
	uFnIsInState->iNative = 0;

	uFnIsInState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsInState, &IsInState_Params, nullptr);

	uFnIsInState->FunctionFlags |= 0x400;

	uFnIsInState->iNative = iNativeIndex;

	return IsInState_Params.ReturnValue;
};

// Function Core.Object.GotoState
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) (iNative[113])
// Parameter info:
// struct FName                   NewState                       (CPF_OptionalParm | CPF_Parm)
// struct FName                   Label                          (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bForceEvents                   (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bKeepStack                     (CPF_OptionalParm | CPF_Parm)

void UObject::GotoState(struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack)
{
	static UFunction* uFnGotoState = nullptr;

	if (!uFnGotoState)
	{
		uFnGotoState = UFunction::FindFunction("Function Core.Object.GotoState");
	}

	UObject_execGotoState_Params GotoState_Params;
	memcpy_s(&GotoState_Params.NewState, 0x8, &NewState, 0x8);
	memcpy_s(&GotoState_Params.Label, 0x8, &Label, 0x8);
	GotoState_Params.bForceEvents = bForceEvents;
	GotoState_Params.bKeepStack = bKeepStack;

	uint16_t iNativeIndex = uFnGotoState->iNative;
	uFnGotoState->iNative = 0;

	uFnGotoState->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGotoState, &GotoState_Params, nullptr);

	uFnGotoState->FunctionFlags |= 0x400;

	uFnGotoState->iNative = iNativeIndex;
};

// Function Core.Object.IsUTracing
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UObject::IsUTracing()
{
	static UFunction* uFnIsUTracing = nullptr;

	if (!uFnIsUTracing)
	{
		uFnIsUTracing = UFunction::FindFunction("Function Core.Object.IsUTracing");
	}

	UObject_execIsUTracing_Params IsUTracing_Params;

	uFnIsUTracing->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnIsUTracing, &IsUTracing_Params, nullptr);

	uFnIsUTracing->FunctionFlags |= 0x400;

	return IsUTracing_Params.ReturnValue;
};

// Function Core.Object.SetUTracing
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bShouldUTrace                  (CPF_Parm)

void UObject::SetUTracing(unsigned long bShouldUTrace)
{
	static UFunction* uFnSetUTracing = nullptr;

	if (!uFnSetUTracing)
	{
		uFnSetUTracing = UFunction::FindFunction("Function Core.Object.SetUTracing");
	}

	UObject_execSetUTracing_Params SetUTracing_Params;
	SetUTracing_Params.bShouldUTrace = bShouldUTrace;

	uFnSetUTracing->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSetUTracing, &SetUTracing_Params, nullptr);

	uFnSetUTracing->FunctionFlags |= 0x400;
};

// Function Core.Object.GetFuncName
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UObject::GetFuncName()
{
	static UFunction* uFnGetFuncName = nullptr;

	if (!uFnGetFuncName)
	{
		uFnGetFuncName = UFunction::FindFunction("Function Core.Object.GetFuncName");
	}

	UObject_execGetFuncName_Params GetFuncName_Params;

	uFnGetFuncName->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetFuncName, &GetFuncName_Params, nullptr);

	uFnGetFuncName->FunctionFlags |= 0x400;

	return GetFuncName_Params.ReturnValue;
};

// Function Core.Object.DebugBreak
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        UserFlags                      (CPF_OptionalParm | CPF_Parm)
// uint8_t                        DebuggerType                   (CPF_OptionalParm | CPF_Parm)

void UObject::DebugBreak(int32_t UserFlags, uint8_t DebuggerType)
{
	static UFunction* uFnDebugBreak = nullptr;

	if (!uFnDebugBreak)
	{
		uFnDebugBreak = UFunction::FindFunction("Function Core.Object.DebugBreak");
	}

	UObject_execDebugBreak_Params DebugBreak_Params;
	memcpy_s(&DebugBreak_Params.UserFlags, 0x4, &UserFlags, 0x4);
	memcpy_s(&DebugBreak_Params.DebuggerType, 0x1, &DebuggerType, 0x1);

	uFnDebugBreak->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDebugBreak, &DebugBreak_Params, nullptr);

	uFnDebugBreak->FunctionFlags |= 0x400;
};

// Function Core.Object.GetScriptTrace
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UObject::GetScriptTrace()
{
	static UFunction* uFnGetScriptTrace = nullptr;

	if (!uFnGetScriptTrace)
	{
		uFnGetScriptTrace = UFunction::FindFunction("Function Core.Object.GetScriptTrace");
	}

	UObject_execGetScriptTrace_Params GetScriptTrace_Params;

	uFnGetScriptTrace->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetScriptTrace, &GetScriptTrace_Params, nullptr);

	uFnGetScriptTrace->FunctionFlags |= 0x400;

	return GetScriptTrace_Params.ReturnValue;
};

// Function Core.Object.ScriptTrace
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UObject::ScriptTrace()
{
	static UFunction* uFnScriptTrace = nullptr;

	if (!uFnScriptTrace)
	{
		uFnScriptTrace = UFunction::FindFunction("Function Core.Object.ScriptTrace");
	}

	UObject_execScriptTrace_Params ScriptTrace_Params;

	uFnScriptTrace->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnScriptTrace, &ScriptTrace_Params, nullptr);

	uFnScriptTrace->FunctionFlags |= 0x400;
};

// Function Core.Object.ParseLocalizedPropertyPath
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  PathName                       (CPF_Parm | CPF_NeedCtorLink)

class FString UObject::ParseLocalizedPropertyPath(class FString PathName)
{
	static UFunction* uFnParseLocalizedPropertyPath = nullptr;

	if (!uFnParseLocalizedPropertyPath)
	{
		uFnParseLocalizedPropertyPath = UFunction::FindFunction("Function Core.Object.ParseLocalizedPropertyPath");
	}

	UObject_execParseLocalizedPropertyPath_Params ParseLocalizedPropertyPath_Params;
	memcpy_s(&ParseLocalizedPropertyPath_Params.PathName, 0x10, &PathName, 0x10);

	UObject::StaticClass()->ProcessEvent(uFnParseLocalizedPropertyPath, &ParseLocalizedPropertyPath_Params, nullptr);

	return ParseLocalizedPropertyPath_Params.ReturnValue;
};

// Function Core.Object.Localize
// [0x00022400] (FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  SectionName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  KeyName                        (CPF_Parm | CPF_NeedCtorLink)
// class FString                  PackageName                    (CPF_Parm | CPF_NeedCtorLink)

class FString UObject::Localize(class FString SectionName, class FString KeyName, class FString PackageName)
{
	static UFunction* uFnLocalize = nullptr;

	if (!uFnLocalize)
	{
		uFnLocalize = UFunction::FindFunction("Function Core.Object.Localize");
	}

	UObject_execLocalize_Params Localize_Params;
	memcpy_s(&Localize_Params.SectionName, 0x10, &SectionName, 0x10);
	memcpy_s(&Localize_Params.KeyName, 0x10, &KeyName, 0x10);
	memcpy_s(&Localize_Params.PackageName, 0x10, &PackageName, 0x10);

	uFnLocalize->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLocalize, &Localize_Params, nullptr);

	uFnLocalize->FunctionFlags |= 0x400;

	return Localize_Params.ReturnValue;
};

// Function Core.Object.WarnInternal
// [0x00042401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Private | FUNC_AllFlags) (iNative[232])
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UObject::WarnInternal(class FString S)
{
	static UFunction* uFnWarnInternal = nullptr;

	if (!uFnWarnInternal)
	{
		uFnWarnInternal = UFunction::FindFunction("Function Core.Object.WarnInternal");
	}

	UObject_execWarnInternal_Params WarnInternal_Params;
	memcpy_s(&WarnInternal_Params.S, 0x10, &S, 0x10);

	uint16_t iNativeIndex = uFnWarnInternal->iNative;
	uFnWarnInternal->iNative = 0;

	uFnWarnInternal->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnWarnInternal, &WarnInternal_Params, nullptr);

	uFnWarnInternal->FunctionFlags |= 0x400;

	uFnWarnInternal->iNative = iNativeIndex;
};

// Function Core.Object.LogInternal
// [0x00046401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Private | FUNC_AllFlags) (iNative[231])
// Parameter info:
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// struct FName                   Tag                            (CPF_OptionalParm | CPF_Parm)

void UObject::LogInternal(class FString S, struct FName Tag)
{
	static UFunction* uFnLogInternal = nullptr;

	if (!uFnLogInternal)
	{
		uFnLogInternal = UFunction::FindFunction("Function Core.Object.LogInternal");
	}

	UObject_execLogInternal_Params LogInternal_Params;
	memcpy_s(&LogInternal_Params.S, 0x10, &S, 0x10);
	memcpy_s(&LogInternal_Params.Tag, 0x8, &Tag, 0x8);

	uint16_t iNativeIndex = uFnLogInternal->iNative;
	uFnLogInternal->iNative = 0;

	uFnLogInternal->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLogInternal, &LogInternal_Params, nullptr);

	uFnLogInternal->FunctionFlags |= 0x400;

	uFnLogInternal->iNative = iNativeIndex;
};

// Function Core.Object.Subtract_LinearColorLinearColor
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            A                              (CPF_Parm)
// struct FLinearColor            B                              (CPF_Parm)

struct FLinearColor UObject::Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B)
{
	static UFunction* uFnSubtract_LinearColorLinearColor = nullptr;

	if (!uFnSubtract_LinearColorLinearColor)
	{
		uFnSubtract_LinearColorLinearColor = UFunction::FindFunction("Function Core.Object.Subtract_LinearColorLinearColor");
	}

	UObject_execSubtract_LinearColorLinearColor_Params Subtract_LinearColorLinearColor_Params;
	memcpy_s(&Subtract_LinearColorLinearColor_Params.A, 0x10, &A, 0x10);
	memcpy_s(&Subtract_LinearColorLinearColor_Params.B, 0x10, &B, 0x10);

	UObject::StaticClass()->ProcessEvent(uFnSubtract_LinearColorLinearColor, &Subtract_LinearColorLinearColor_Params, nullptr);

	return Subtract_LinearColorLinearColor_Params.ReturnValue;
};

// Function Core.Object.Multiply_LinearColorFloat
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FLinearColor            LC                             (CPF_Parm)
// float                          Mult                           (CPF_Parm)

struct FLinearColor UObject::Multiply_LinearColorFloat(struct FLinearColor LC, float Mult)
{
	static UFunction* uFnMultiply_LinearColorFloat = nullptr;

	if (!uFnMultiply_LinearColorFloat)
	{
		uFnMultiply_LinearColorFloat = UFunction::FindFunction("Function Core.Object.Multiply_LinearColorFloat");
	}

	UObject_execMultiply_LinearColorFloat_Params Multiply_LinearColorFloat_Params;
	memcpy_s(&Multiply_LinearColorFloat_Params.LC, 0x10, &LC, 0x10);
	memcpy_s(&Multiply_LinearColorFloat_Params.Mult, 0x4, &Mult, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnMultiply_LinearColorFloat, &Multiply_LinearColorFloat_Params, nullptr);

	return Multiply_LinearColorFloat_Params.ReturnValue;
};

// Function Core.Object.ColorToLinearColor
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  OldColor                       (CPF_Parm)

struct FLinearColor UObject::ColorToLinearColor(struct FColor OldColor)
{
	static UFunction* uFnColorToLinearColor = nullptr;

	if (!uFnColorToLinearColor)
	{
		uFnColorToLinearColor = UFunction::FindFunction("Function Core.Object.ColorToLinearColor");
	}

	UObject_execColorToLinearColor_Params ColorToLinearColor_Params;
	memcpy_s(&ColorToLinearColor_Params.OldColor, 0x4, &OldColor, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnColorToLinearColor, &ColorToLinearColor_Params, nullptr);

	return ColorToLinearColor_Params.ReturnValue;
};

// Function Core.Object.MakeLinearColor
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FLinearColor            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          R                              (CPF_Parm)
// float                          G                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm)

struct FLinearColor UObject::MakeLinearColor(float R, float G, float B, float A)
{
	static UFunction* uFnMakeLinearColor = nullptr;

	if (!uFnMakeLinearColor)
	{
		uFnMakeLinearColor = UFunction::FindFunction("Function Core.Object.MakeLinearColor");
	}

	UObject_execMakeLinearColor_Params MakeLinearColor_Params;
	memcpy_s(&MakeLinearColor_Params.R, 0x4, &R, 0x4);
	memcpy_s(&MakeLinearColor_Params.G, 0x4, &G, 0x4);
	memcpy_s(&MakeLinearColor_Params.B, 0x4, &B, 0x4);
	memcpy_s(&MakeLinearColor_Params.A, 0x4, &A, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnMakeLinearColor, &MakeLinearColor_Params, nullptr);

	return MakeLinearColor_Params.ReturnValue;
};

// Function Core.Object.LerpColor
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

struct FColor UObject::LerpColor(struct FColor A, struct FColor B, float Alpha)
{
	static UFunction* uFnLerpColor = nullptr;

	if (!uFnLerpColor)
	{
		uFnLerpColor = UFunction::FindFunction("Function Core.Object.LerpColor");
	}

	UObject_execLerpColor_Params LerpColor_Params;
	memcpy_s(&LerpColor_Params.A, 0x4, &A, 0x4);
	memcpy_s(&LerpColor_Params.B, 0x4, &B, 0x4);
	memcpy_s(&LerpColor_Params.Alpha, 0x4, &Alpha, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnLerpColor, &LerpColor_Params, nullptr);

	return LerpColor_Params.ReturnValue;
};

// Function Core.Object.MakeColor
// [0x00826003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        R                              (CPF_Parm)
// uint8_t                        G                              (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)
// uint8_t                        A                              (CPF_OptionalParm | CPF_Parm)

struct FColor UObject::MakeColor(uint8_t R, uint8_t G, uint8_t B, uint8_t A)
{
	static UFunction* uFnMakeColor = nullptr;

	if (!uFnMakeColor)
	{
		uFnMakeColor = UFunction::FindFunction("Function Core.Object.MakeColor");
	}

	UObject_execMakeColor_Params MakeColor_Params;
	memcpy_s(&MakeColor_Params.R, 0x1, &R, 0x1);
	memcpy_s(&MakeColor_Params.G, 0x1, &G, 0x1);
	memcpy_s(&MakeColor_Params.B, 0x1, &B, 0x1);
	memcpy_s(&MakeColor_Params.A, 0x1, &A, 0x1);

	UObject::StaticClass()->ProcessEvent(uFnMakeColor, &MakeColor_Params, nullptr);

	return MakeColor_Params.ReturnValue;
};

// Function Core.Object.Add_ColorColor
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)

struct FColor UObject::Add_ColorColor(struct FColor A, struct FColor B)
{
	static UFunction* uFnAdd_ColorColor = nullptr;

	if (!uFnAdd_ColorColor)
	{
		uFnAdd_ColorColor = UFunction::FindFunction("Function Core.Object.Add_ColorColor");
	}

	UObject_execAdd_ColorColor_Params Add_ColorColor_Params;
	memcpy_s(&Add_ColorColor_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Add_ColorColor_Params.B, 0x4, &B, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnAdd_ColorColor, &Add_ColorColor_Params, nullptr);

	return Add_ColorColor_Params.ReturnValue;
};

// Function Core.Object.Multiply_ColorFloat
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FColor UObject::Multiply_ColorFloat(struct FColor A, float B)
{
	static UFunction* uFnMultiply_ColorFloat = nullptr;

	if (!uFnMultiply_ColorFloat)
	{
		uFnMultiply_ColorFloat = UFunction::FindFunction("Function Core.Object.Multiply_ColorFloat");
	}

	UObject_execMultiply_ColorFloat_Params Multiply_ColorFloat_Params;
	memcpy_s(&Multiply_ColorFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_ColorFloat_Params.B, 0x4, &B, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnMultiply_ColorFloat, &Multiply_ColorFloat_Params, nullptr);

	return Multiply_ColorFloat_Params.ReturnValue;
};

// Function Core.Object.Multiply_FloatColor
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)

struct FColor UObject::Multiply_FloatColor(float A, struct FColor B)
{
	static UFunction* uFnMultiply_FloatColor = nullptr;

	if (!uFnMultiply_FloatColor)
	{
		uFnMultiply_FloatColor = UFunction::FindFunction("Function Core.Object.Multiply_FloatColor");
	}

	UObject_execMultiply_FloatColor_Params Multiply_FloatColor_Params;
	memcpy_s(&Multiply_FloatColor_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_FloatColor_Params.B, 0x4, &B, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnMultiply_FloatColor, &Multiply_FloatColor_Params, nullptr);

	return Multiply_FloatColor_Params.ReturnValue;
};

// Function Core.Object.Subtract_ColorColor
// [0x00023003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FColor                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)

struct FColor UObject::Subtract_ColorColor(struct FColor A, struct FColor B)
{
	static UFunction* uFnSubtract_ColorColor = nullptr;

	if (!uFnSubtract_ColorColor)
	{
		uFnSubtract_ColorColor = UFunction::FindFunction("Function Core.Object.Subtract_ColorColor");
	}

	UObject_execSubtract_ColorColor_Params Subtract_ColorColor_Params;
	memcpy_s(&Subtract_ColorColor_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Subtract_ColorColor_Params.B, 0x4, &B, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnSubtract_ColorColor, &Subtract_ColorColor_Params, nullptr);

	return Subtract_ColorColor_Params.ReturnValue;
};

// Function Core.Object.EvalInterpCurveVector2D
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FInterpCurveVector2D    Vector2DCurve                  (CPF_Parm | CPF_NeedCtorLink)
// float                          InVal                          (CPF_Parm)

struct FVector2D UObject::EvalInterpCurveVector2D(struct FInterpCurveVector2D Vector2DCurve, float InVal)
{
	static UFunction* uFnEvalInterpCurveVector2D = nullptr;

	if (!uFnEvalInterpCurveVector2D)
	{
		uFnEvalInterpCurveVector2D = UFunction::FindFunction("Function Core.Object.EvalInterpCurveVector2D");
	}

	UObject_execEvalInterpCurveVector2D_Params EvalInterpCurveVector2D_Params;
	memcpy_s(&EvalInterpCurveVector2D_Params.Vector2DCurve, 0x14, &Vector2DCurve, 0x14);
	memcpy_s(&EvalInterpCurveVector2D_Params.InVal, 0x4, &InVal, 0x4);

	uFnEvalInterpCurveVector2D->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEvalInterpCurveVector2D, &EvalInterpCurveVector2D_Params, nullptr);

	uFnEvalInterpCurveVector2D->FunctionFlags |= 0x400;

	return EvalInterpCurveVector2D_Params.ReturnValue;
};

// Function Core.Object.EvalInterpCurveVector
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FInterpCurveVector      VectorCurve                    (CPF_Parm | CPF_NeedCtorLink)
// float                          InVal                          (CPF_Parm)

struct FVector UObject::EvalInterpCurveVector(struct FInterpCurveVector VectorCurve, float InVal)
{
	static UFunction* uFnEvalInterpCurveVector = nullptr;

	if (!uFnEvalInterpCurveVector)
	{
		uFnEvalInterpCurveVector = UFunction::FindFunction("Function Core.Object.EvalInterpCurveVector");
	}

	UObject_execEvalInterpCurveVector_Params EvalInterpCurveVector_Params;
	memcpy_s(&EvalInterpCurveVector_Params.VectorCurve, 0x14, &VectorCurve, 0x14);
	memcpy_s(&EvalInterpCurveVector_Params.InVal, 0x4, &InVal, 0x4);

	uFnEvalInterpCurveVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEvalInterpCurveVector, &EvalInterpCurveVector_Params, nullptr);

	uFnEvalInterpCurveVector->FunctionFlags |= 0x400;

	return EvalInterpCurveVector_Params.ReturnValue;
};

// Function Core.Object.EvalInterpCurveFloat
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FInterpCurveFloat       FloatCurve                     (CPF_Parm | CPF_NeedCtorLink)
// float                          InVal                          (CPF_Parm)

float UObject::EvalInterpCurveFloat(struct FInterpCurveFloat FloatCurve, float InVal)
{
	static UFunction* uFnEvalInterpCurveFloat = nullptr;

	if (!uFnEvalInterpCurveFloat)
	{
		uFnEvalInterpCurveFloat = UFunction::FindFunction("Function Core.Object.EvalInterpCurveFloat");
	}

	UObject_execEvalInterpCurveFloat_Params EvalInterpCurveFloat_Params;
	memcpy_s(&EvalInterpCurveFloat_Params.FloatCurve, 0x14, &FloatCurve, 0x14);
	memcpy_s(&EvalInterpCurveFloat_Params.InVal, 0x4, &InVal, 0x4);

	uFnEvalInterpCurveFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEvalInterpCurveFloat, &EvalInterpCurveFloat_Params, nullptr);

	uFnEvalInterpCurveFloat->FunctionFlags |= 0x400;

	return EvalInterpCurveFloat_Params.ReturnValue;
};

// Function Core.Object.vect2d
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InX                            (CPF_Parm)
// float                          InY                            (CPF_Parm)

struct FVector2D UObject::vect2d(float InX, float InY)
{
	static UFunction* uFnvect2d = nullptr;

	if (!uFnvect2d)
	{
		uFnvect2d = UFunction::FindFunction("Function Core.Object.vect2d");
	}

	UObject_execvect2d_Params vect2d_Params;
	memcpy_s(&vect2d_Params.InX, 0x4, &InX, 0x4);
	memcpy_s(&vect2d_Params.InY, 0x4, &InY, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnvect2d, &vect2d_Params, nullptr);

	return vect2d_Params.ReturnValue;
};

// Function Core.Object.GetMappedRangeValue
// [0x00022501] (FUNC_Final | FUNC_NetRequest | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               InputRange                     (CPF_Parm)
// struct FVector2D               OutputRange                    (CPF_Parm)
// float                          Value                          (CPF_Parm)

float UObject::GetMappedRangeValue(struct FVector2D InputRange, struct FVector2D OutputRange, float Value)
{
	static UFunction* uFnGetMappedRangeValue = nullptr;

	if (!uFnGetMappedRangeValue)
	{
		uFnGetMappedRangeValue = UFunction::FindFunction("Function Core.Object.GetMappedRangeValue");
	}

	UObject_execGetMappedRangeValue_Params GetMappedRangeValue_Params;
	memcpy_s(&GetMappedRangeValue_Params.InputRange, 0x8, &InputRange, 0x8);
	memcpy_s(&GetMappedRangeValue_Params.OutputRange, 0x8, &OutputRange, 0x8);
	memcpy_s(&GetMappedRangeValue_Params.Value, 0x4, &Value, 0x4);

	uFnGetMappedRangeValue->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetMappedRangeValue, &GetMappedRangeValue_Params, nullptr);

	uFnGetMappedRangeValue->FunctionFlags |= 0x400;

	return GetMappedRangeValue_Params.ReturnValue;
};

// Function Core.Object.GetRangePctByValue
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               Range                          (CPF_Parm)
// float                          Value                          (CPF_Parm)

float UObject::GetRangePctByValue(struct FVector2D Range, float Value)
{
	static UFunction* uFnGetRangePctByValue = nullptr;

	if (!uFnGetRangePctByValue)
	{
		uFnGetRangePctByValue = UFunction::FindFunction("Function Core.Object.GetRangePctByValue");
	}

	UObject_execGetRangePctByValue_Params GetRangePctByValue_Params;
	memcpy_s(&GetRangePctByValue_Params.Range, 0x8, &Range, 0x8);
	memcpy_s(&GetRangePctByValue_Params.Value, 0x4, &Value, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnGetRangePctByValue, &GetRangePctByValue_Params, nullptr);

	return GetRangePctByValue_Params.ReturnValue;
};

// Function Core.Object.GetRangeValueByPct
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               Range                          (CPF_Parm)
// float                          Pct                            (CPF_Parm)

float UObject::GetRangeValueByPct(struct FVector2D Range, float Pct)
{
	static UFunction* uFnGetRangeValueByPct = nullptr;

	if (!uFnGetRangeValueByPct)
	{
		uFnGetRangeValueByPct = UFunction::FindFunction("Function Core.Object.GetRangeValueByPct");
	}

	UObject_execGetRangeValueByPct_Params GetRangeValueByPct_Params;
	memcpy_s(&GetRangeValueByPct_Params.Range, 0x8, &Range, 0x8);
	memcpy_s(&GetRangeValueByPct_Params.Pct, 0x4, &Pct, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnGetRangeValueByPct, &GetRangeValueByPct_Params, nullptr);

	return GetRangeValueByPct_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_Vector2DVector2D
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::SubtractEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A)
{
	static UFunction* uFnSubtractEqual_Vector2DVector2D = nullptr;

	if (!uFnSubtractEqual_Vector2DVector2D)
	{
		uFnSubtractEqual_Vector2DVector2D = UFunction::FindFunction("Function Core.Object.SubtractEqual_Vector2DVector2D");
	}

	UObject_execSubtractEqual_Vector2DVector2D_Params SubtractEqual_Vector2DVector2D_Params;
	memcpy_s(&SubtractEqual_Vector2DVector2D_Params.B, 0x8, &B, 0x8);
	memcpy_s(&SubtractEqual_Vector2DVector2D_Params.A, 0x8, &A, 0x8);

	uFnSubtractEqual_Vector2DVector2D->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_Vector2DVector2D, &SubtractEqual_Vector2DVector2D_Params, nullptr);

	uFnSubtractEqual_Vector2DVector2D->FunctionFlags |= 0x400;

	memcpy_s(&A, 0x8, &SubtractEqual_Vector2DVector2D_Params.A, 0x8);

	return SubtractEqual_Vector2DVector2D_Params.ReturnValue;
};

// Function Core.Object.AddEqual_Vector2DVector2D
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::AddEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A)
{
	static UFunction* uFnAddEqual_Vector2DVector2D = nullptr;

	if (!uFnAddEqual_Vector2DVector2D)
	{
		uFnAddEqual_Vector2DVector2D = UFunction::FindFunction("Function Core.Object.AddEqual_Vector2DVector2D");
	}

	UObject_execAddEqual_Vector2DVector2D_Params AddEqual_Vector2DVector2D_Params;
	memcpy_s(&AddEqual_Vector2DVector2D_Params.B, 0x8, &B, 0x8);
	memcpy_s(&AddEqual_Vector2DVector2D_Params.A, 0x8, &A, 0x8);

	uFnAddEqual_Vector2DVector2D->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddEqual_Vector2DVector2D, &AddEqual_Vector2DVector2D_Params, nullptr);

	uFnAddEqual_Vector2DVector2D->FunctionFlags |= 0x400;

	memcpy_s(&A, 0x8, &AddEqual_Vector2DVector2D_Params.A, 0x8);

	return AddEqual_Vector2DVector2D_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_Vector2DFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::DivideEqual_Vector2DFloat(float B, struct FVector2D& A)
{
	static UFunction* uFnDivideEqual_Vector2DFloat = nullptr;

	if (!uFnDivideEqual_Vector2DFloat)
	{
		uFnDivideEqual_Vector2DFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_Vector2DFloat");
	}

	UObject_execDivideEqual_Vector2DFloat_Params DivideEqual_Vector2DFloat_Params;
	memcpy_s(&DivideEqual_Vector2DFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&DivideEqual_Vector2DFloat_Params.A, 0x8, &A, 0x8);

	uFnDivideEqual_Vector2DFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_Vector2DFloat, &DivideEqual_Vector2DFloat_Params, nullptr);

	uFnDivideEqual_Vector2DFloat->FunctionFlags |= 0x400;

	memcpy_s(&A, 0x8, &DivideEqual_Vector2DFloat_Params.A, 0x8);

	return DivideEqual_Vector2DFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_Vector2DFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector2D               A                              (CPF_Parm | CPF_OutParm)

struct FVector2D UObject::MultiplyEqual_Vector2DFloat(float B, struct FVector2D& A)
{
	static UFunction* uFnMultiplyEqual_Vector2DFloat = nullptr;

	if (!uFnMultiplyEqual_Vector2DFloat)
	{
		uFnMultiplyEqual_Vector2DFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_Vector2DFloat");
	}

	UObject_execMultiplyEqual_Vector2DFloat_Params MultiplyEqual_Vector2DFloat_Params;
	memcpy_s(&MultiplyEqual_Vector2DFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&MultiplyEqual_Vector2DFloat_Params.A, 0x8, &A, 0x8);

	uFnMultiplyEqual_Vector2DFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_Vector2DFloat, &MultiplyEqual_Vector2DFloat_Params, nullptr);

	uFnMultiplyEqual_Vector2DFloat->FunctionFlags |= 0x400;

	memcpy_s(&A, 0x8, &MultiplyEqual_Vector2DFloat_Params.A, 0x8);

	return MultiplyEqual_Vector2DFloat_Params.ReturnValue;
};

// Function Core.Object.Divide_Vector2DFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector2D UObject::Divide_Vector2DFloat(struct FVector2D A, float B)
{
	static UFunction* uFnDivide_Vector2DFloat = nullptr;

	if (!uFnDivide_Vector2DFloat)
	{
		uFnDivide_Vector2DFloat = UFunction::FindFunction("Function Core.Object.Divide_Vector2DFloat");
	}

	UObject_execDivide_Vector2DFloat_Params Divide_Vector2DFloat_Params;
	memcpy_s(&Divide_Vector2DFloat_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Divide_Vector2DFloat_Params.B, 0x4, &B, 0x4);

	uFnDivide_Vector2DFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivide_Vector2DFloat, &Divide_Vector2DFloat_Params, nullptr);

	uFnDivide_Vector2DFloat->FunctionFlags |= 0x400;

	return Divide_Vector2DFloat_Params.ReturnValue;
};

// Function Core.Object.Multiply_Vector2DFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector2D UObject::Multiply_Vector2DFloat(struct FVector2D A, float B)
{
	static UFunction* uFnMultiply_Vector2DFloat = nullptr;

	if (!uFnMultiply_Vector2DFloat)
	{
		uFnMultiply_Vector2DFloat = UFunction::FindFunction("Function Core.Object.Multiply_Vector2DFloat");
	}

	UObject_execMultiply_Vector2DFloat_Params Multiply_Vector2DFloat_Params;
	memcpy_s(&Multiply_Vector2DFloat_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Multiply_Vector2DFloat_Params.B, 0x4, &B, 0x4);

	uFnMultiply_Vector2DFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_Vector2DFloat, &Multiply_Vector2DFloat_Params, nullptr);

	uFnMultiply_Vector2DFloat->FunctionFlags |= 0x400;

	return Multiply_Vector2DFloat_Params.ReturnValue;
};

// Function Core.Object.Subtract_Vector2DVector2D
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               B                              (CPF_Parm)

struct FVector2D UObject::Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B)
{
	static UFunction* uFnSubtract_Vector2DVector2D = nullptr;

	if (!uFnSubtract_Vector2DVector2D)
	{
		uFnSubtract_Vector2DVector2D = UFunction::FindFunction("Function Core.Object.Subtract_Vector2DVector2D");
	}

	UObject_execSubtract_Vector2DVector2D_Params Subtract_Vector2DVector2D_Params;
	memcpy_s(&Subtract_Vector2DVector2D_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Subtract_Vector2DVector2D_Params.B, 0x8, &B, 0x8);

	uFnSubtract_Vector2DVector2D->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_Vector2DVector2D, &Subtract_Vector2DVector2D_Params, nullptr);

	uFnSubtract_Vector2DVector2D->FunctionFlags |= 0x400;

	return Subtract_Vector2DVector2D_Params.ReturnValue;
};

// Function Core.Object.Add_Vector2DVector2D
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector2D               ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               B                              (CPF_Parm)

struct FVector2D UObject::Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B)
{
	static UFunction* uFnAdd_Vector2DVector2D = nullptr;

	if (!uFnAdd_Vector2DVector2D)
	{
		uFnAdd_Vector2DVector2D = UFunction::FindFunction("Function Core.Object.Add_Vector2DVector2D");
	}

	UObject_execAdd_Vector2DVector2D_Params Add_Vector2DVector2D_Params;
	memcpy_s(&Add_Vector2DVector2D_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Add_Vector2DVector2D_Params.B, 0x8, &B, 0x8);

	uFnAdd_Vector2DVector2D->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAdd_Vector2DVector2D, &Add_Vector2DVector2D_Params, nullptr);

	uFnAdd_Vector2DVector2D->FunctionFlags |= 0x400;

	return Add_Vector2DVector2D_Params.ReturnValue;
};

// Function Core.Object.Subtract_QuatQuat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[271])
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

struct FQuat UObject::Subtract_QuatQuat(struct FQuat A, struct FQuat B)
{
	static UFunction* uFnSubtract_QuatQuat = nullptr;

	if (!uFnSubtract_QuatQuat)
	{
		uFnSubtract_QuatQuat = UFunction::FindFunction("Function Core.Object.Subtract_QuatQuat");
	}

	UObject_execSubtract_QuatQuat_Params Subtract_QuatQuat_Params;
	memcpy_s(&Subtract_QuatQuat_Params.A, 0x10, &A, 0x10);
	memcpy_s(&Subtract_QuatQuat_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnSubtract_QuatQuat->iNative;
	uFnSubtract_QuatQuat->iNative = 0;

	uFnSubtract_QuatQuat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_QuatQuat, &Subtract_QuatQuat_Params, nullptr);

	uFnSubtract_QuatQuat->FunctionFlags |= 0x400;

	uFnSubtract_QuatQuat->iNative = iNativeIndex;

	return Subtract_QuatQuat_Params.ReturnValue;
};

// Function Core.Object.Add_QuatQuat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[270])
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

struct FQuat UObject::Add_QuatQuat(struct FQuat A, struct FQuat B)
{
	static UFunction* uFnAdd_QuatQuat = nullptr;

	if (!uFnAdd_QuatQuat)
	{
		uFnAdd_QuatQuat = UFunction::FindFunction("Function Core.Object.Add_QuatQuat");
	}

	UObject_execAdd_QuatQuat_Params Add_QuatQuat_Params;
	memcpy_s(&Add_QuatQuat_Params.A, 0x10, &A, 0x10);
	memcpy_s(&Add_QuatQuat_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnAdd_QuatQuat->iNative;
	uFnAdd_QuatQuat->iNative = 0;

	uFnAdd_QuatQuat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAdd_QuatQuat, &Add_QuatQuat_Params, nullptr);

	uFnAdd_QuatQuat->FunctionFlags |= 0x400;

	uFnAdd_QuatQuat->iNative = iNativeIndex;

	return Add_QuatQuat_Params.ReturnValue;
};

// Function Core.Object.QuatSlerp
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// unsigned long                  bShortestPath                  (CPF_OptionalParm | CPF_Parm)

struct FQuat UObject::QuatSlerp(struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath)
{
	static UFunction* uFnQuatSlerp = nullptr;

	if (!uFnQuatSlerp)
	{
		uFnQuatSlerp = UFunction::FindFunction("Function Core.Object.QuatSlerp");
	}

	UObject_execQuatSlerp_Params QuatSlerp_Params;
	memcpy_s(&QuatSlerp_Params.A, 0x10, &A, 0x10);
	memcpy_s(&QuatSlerp_Params.B, 0x10, &B, 0x10);
	memcpy_s(&QuatSlerp_Params.Alpha, 0x4, &Alpha, 0x4);
	QuatSlerp_Params.bShortestPath = bShortestPath;

	uFnQuatSlerp->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnQuatSlerp, &QuatSlerp_Params, nullptr);

	uFnQuatSlerp->FunctionFlags |= 0x400;

	return QuatSlerp_Params.ReturnValue;
};

// Function Core.Object.QuatToRotator
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)

struct FRotator UObject::QuatToRotator(struct FQuat A)
{
	static UFunction* uFnQuatToRotator = nullptr;

	if (!uFnQuatToRotator)
	{
		uFnQuatToRotator = UFunction::FindFunction("Function Core.Object.QuatToRotator");
	}

	UObject_execQuatToRotator_Params QuatToRotator_Params;
	memcpy_s(&QuatToRotator_Params.A, 0x10, &A, 0x10);

	uFnQuatToRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnQuatToRotator, &QuatToRotator_Params, nullptr);

	uFnQuatToRotator->FunctionFlags |= 0x400;

	return QuatToRotator_Params.ReturnValue;
};

// Function Core.Object.QuatFromRotator
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)

struct FQuat UObject::QuatFromRotator(struct FRotator A)
{
	static UFunction* uFnQuatFromRotator = nullptr;

	if (!uFnQuatFromRotator)
	{
		uFnQuatFromRotator = UFunction::FindFunction("Function Core.Object.QuatFromRotator");
	}

	UObject_execQuatFromRotator_Params QuatFromRotator_Params;
	memcpy_s(&QuatFromRotator_Params.A, 0xC, &A, 0xC);

	uFnQuatFromRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnQuatFromRotator, &QuatFromRotator_Params, nullptr);

	uFnQuatFromRotator->FunctionFlags |= 0x400;

	return QuatFromRotator_Params.ReturnValue;
};

// Function Core.Object.QuatFromAxisAndAngle
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Axis                           (CPF_Parm)
// float                          Angle                          (CPF_Parm)

struct FQuat UObject::QuatFromAxisAndAngle(struct FVector Axis, float Angle)
{
	static UFunction* uFnQuatFromAxisAndAngle = nullptr;

	if (!uFnQuatFromAxisAndAngle)
	{
		uFnQuatFromAxisAndAngle = UFunction::FindFunction("Function Core.Object.QuatFromAxisAndAngle");
	}

	UObject_execQuatFromAxisAndAngle_Params QuatFromAxisAndAngle_Params;
	memcpy_s(&QuatFromAxisAndAngle_Params.Axis, 0xC, &Axis, 0xC);
	memcpy_s(&QuatFromAxisAndAngle_Params.Angle, 0x4, &Angle, 0x4);

	uFnQuatFromAxisAndAngle->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnQuatFromAxisAndAngle, &QuatFromAxisAndAngle_Params, nullptr);

	uFnQuatFromAxisAndAngle->FunctionFlags |= 0x400;

	return QuatFromAxisAndAngle_Params.ReturnValue;
};

// Function Core.Object.QuatFindBetween
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FQuat UObject::QuatFindBetween(struct FVector A, struct FVector B)
{
	static UFunction* uFnQuatFindBetween = nullptr;

	if (!uFnQuatFindBetween)
	{
		uFnQuatFindBetween = UFunction::FindFunction("Function Core.Object.QuatFindBetween");
	}

	UObject_execQuatFindBetween_Params QuatFindBetween_Params;
	memcpy_s(&QuatFindBetween_Params.A, 0xC, &A, 0xC);
	memcpy_s(&QuatFindBetween_Params.B, 0xC, &B, 0xC);

	uFnQuatFindBetween->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnQuatFindBetween, &QuatFindBetween_Params, nullptr);

	uFnQuatFindBetween->FunctionFlags |= 0x400;

	return QuatFindBetween_Params.ReturnValue;
};

// Function Core.Object.QuatRotateVector
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::QuatRotateVector(struct FQuat A, struct FVector B)
{
	static UFunction* uFnQuatRotateVector = nullptr;

	if (!uFnQuatRotateVector)
	{
		uFnQuatRotateVector = UFunction::FindFunction("Function Core.Object.QuatRotateVector");
	}

	UObject_execQuatRotateVector_Params QuatRotateVector_Params;
	memcpy_s(&QuatRotateVector_Params.A, 0x10, &A, 0x10);
	memcpy_s(&QuatRotateVector_Params.B, 0xC, &B, 0xC);

	uFnQuatRotateVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnQuatRotateVector, &QuatRotateVector_Params, nullptr);

	uFnQuatRotateVector->FunctionFlags |= 0x400;

	return QuatRotateVector_Params.ReturnValue;
};

// Function Core.Object.QuatInvert
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)

struct FQuat UObject::QuatInvert(struct FQuat A)
{
	static UFunction* uFnQuatInvert = nullptr;

	if (!uFnQuatInvert)
	{
		uFnQuatInvert = UFunction::FindFunction("Function Core.Object.QuatInvert");
	}

	UObject_execQuatInvert_Params QuatInvert_Params;
	memcpy_s(&QuatInvert_Params.A, 0x10, &A, 0x10);

	uFnQuatInvert->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnQuatInvert, &QuatInvert_Params, nullptr);

	uFnQuatInvert->FunctionFlags |= 0x400;

	return QuatInvert_Params.ReturnValue;
};

// Function Core.Object.QuatDot
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

float UObject::QuatDot(struct FQuat A, struct FQuat B)
{
	static UFunction* uFnQuatDot = nullptr;

	if (!uFnQuatDot)
	{
		uFnQuatDot = UFunction::FindFunction("Function Core.Object.QuatDot");
	}

	UObject_execQuatDot_Params QuatDot_Params;
	memcpy_s(&QuatDot_Params.A, 0x10, &A, 0x10);
	memcpy_s(&QuatDot_Params.B, 0x10, &B, 0x10);

	uFnQuatDot->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnQuatDot, &QuatDot_Params, nullptr);

	uFnQuatDot->FunctionFlags |= 0x400;

	return QuatDot_Params.ReturnValue;
};

// Function Core.Object.QuatProduct
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FQuat                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)

struct FQuat UObject::QuatProduct(struct FQuat A, struct FQuat B)
{
	static UFunction* uFnQuatProduct = nullptr;

	if (!uFnQuatProduct)
	{
		uFnQuatProduct = UFunction::FindFunction("Function Core.Object.QuatProduct");
	}

	UObject_execQuatProduct_Params QuatProduct_Params;
	memcpy_s(&QuatProduct_Params.A, 0x10, &A, 0x10);
	memcpy_s(&QuatProduct_Params.B, 0x10, &B, 0x10);

	uFnQuatProduct->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnQuatProduct, &QuatProduct_Params, nullptr);

	uFnQuatProduct->FunctionFlags |= 0x400;

	return QuatProduct_Params.ReturnValue;
};

// Function Core.Object.MatrixGetAxis
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// uint8_t                        Axis                           (CPF_Parm)

struct FVector UObject::MatrixGetAxis(struct FMatrix TM, uint8_t Axis)
{
	static UFunction* uFnMatrixGetAxis = nullptr;

	if (!uFnMatrixGetAxis)
	{
		uFnMatrixGetAxis = UFunction::FindFunction("Function Core.Object.MatrixGetAxis");
	}

	UObject_execMatrixGetAxis_Params MatrixGetAxis_Params;
	memcpy_s(&MatrixGetAxis_Params.TM, 0x40, &TM, 0x40);
	memcpy_s(&MatrixGetAxis_Params.Axis, 0x1, &Axis, 0x1);

	uFnMatrixGetAxis->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMatrixGetAxis, &MatrixGetAxis_Params, nullptr);

	uFnMatrixGetAxis->FunctionFlags |= 0x400;

	return MatrixGetAxis_Params.ReturnValue;
};

// Function Core.Object.MatrixGetOrigin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)

struct FVector UObject::MatrixGetOrigin(struct FMatrix TM)
{
	static UFunction* uFnMatrixGetOrigin = nullptr;

	if (!uFnMatrixGetOrigin)
	{
		uFnMatrixGetOrigin = UFunction::FindFunction("Function Core.Object.MatrixGetOrigin");
	}

	UObject_execMatrixGetOrigin_Params MatrixGetOrigin_Params;
	memcpy_s(&MatrixGetOrigin_Params.TM, 0x40, &TM, 0x40);

	uFnMatrixGetOrigin->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMatrixGetOrigin, &MatrixGetOrigin_Params, nullptr);

	uFnMatrixGetOrigin->FunctionFlags |= 0x400;

	return MatrixGetOrigin_Params.ReturnValue;
};

// Function Core.Object.MatrixGetRotator
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)

struct FRotator UObject::MatrixGetRotator(struct FMatrix TM)
{
	static UFunction* uFnMatrixGetRotator = nullptr;

	if (!uFnMatrixGetRotator)
	{
		uFnMatrixGetRotator = UFunction::FindFunction("Function Core.Object.MatrixGetRotator");
	}

	UObject_execMatrixGetRotator_Params MatrixGetRotator_Params;
	memcpy_s(&MatrixGetRotator_Params.TM, 0x40, &TM, 0x40);

	uFnMatrixGetRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMatrixGetRotator, &MatrixGetRotator_Params, nullptr);

	uFnMatrixGetRotator->FunctionFlags |= 0x400;

	return MatrixGetRotator_Params.ReturnValue;
};

// Function Core.Object.MakeRotationMatrix
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                Rotation                       (CPF_Parm)

struct FMatrix UObject::MakeRotationMatrix(struct FRotator Rotation)
{
	static UFunction* uFnMakeRotationMatrix = nullptr;

	if (!uFnMakeRotationMatrix)
	{
		uFnMakeRotationMatrix = UFunction::FindFunction("Function Core.Object.MakeRotationMatrix");
	}

	UObject_execMakeRotationMatrix_Params MakeRotationMatrix_Params;
	memcpy_s(&MakeRotationMatrix_Params.Rotation, 0xC, &Rotation, 0xC);

	uFnMakeRotationMatrix->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMakeRotationMatrix, &MakeRotationMatrix_Params, nullptr);

	uFnMakeRotationMatrix->FunctionFlags |= 0x400;

	return MakeRotationMatrix_Params.ReturnValue;
};

// Function Core.Object.MakeRotationTranslationMatrix
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Translation                    (CPF_Parm)
// struct FRotator                Rotation                       (CPF_Parm)

struct FMatrix UObject::MakeRotationTranslationMatrix(struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* uFnMakeRotationTranslationMatrix = nullptr;

	if (!uFnMakeRotationTranslationMatrix)
	{
		uFnMakeRotationTranslationMatrix = UFunction::FindFunction("Function Core.Object.MakeRotationTranslationMatrix");
	}

	UObject_execMakeRotationTranslationMatrix_Params MakeRotationTranslationMatrix_Params;
	memcpy_s(&MakeRotationTranslationMatrix_Params.Translation, 0xC, &Translation, 0xC);
	memcpy_s(&MakeRotationTranslationMatrix_Params.Rotation, 0xC, &Rotation, 0xC);

	uFnMakeRotationTranslationMatrix->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMakeRotationTranslationMatrix, &MakeRotationTranslationMatrix_Params, nullptr);

	uFnMakeRotationTranslationMatrix->FunctionFlags |= 0x400;

	return MakeRotationTranslationMatrix_Params.ReturnValue;
};

// Function Core.Object.InverseTransformNormal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::InverseTransformNormal(struct FMatrix TM, struct FVector A)
{
	static UFunction* uFnInverseTransformNormal = nullptr;

	if (!uFnInverseTransformNormal)
	{
		uFnInverseTransformNormal = UFunction::FindFunction("Function Core.Object.InverseTransformNormal");
	}

	UObject_execInverseTransformNormal_Params InverseTransformNormal_Params;
	memcpy_s(&InverseTransformNormal_Params.TM, 0x40, &TM, 0x40);
	memcpy_s(&InverseTransformNormal_Params.A, 0xC, &A, 0xC);

	uFnInverseTransformNormal->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnInverseTransformNormal, &InverseTransformNormal_Params, nullptr);

	uFnInverseTransformNormal->FunctionFlags |= 0x400;

	return InverseTransformNormal_Params.ReturnValue;
};

// Function Core.Object.TransformNormal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::TransformNormal(struct FMatrix TM, struct FVector A)
{
	static UFunction* uFnTransformNormal = nullptr;

	if (!uFnTransformNormal)
	{
		uFnTransformNormal = UFunction::FindFunction("Function Core.Object.TransformNormal");
	}

	UObject_execTransformNormal_Params TransformNormal_Params;
	memcpy_s(&TransformNormal_Params.TM, 0x40, &TM, 0x40);
	memcpy_s(&TransformNormal_Params.A, 0xC, &A, 0xC);

	uFnTransformNormal->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnTransformNormal, &TransformNormal_Params, nullptr);

	uFnTransformNormal->FunctionFlags |= 0x400;

	return TransformNormal_Params.ReturnValue;
};

// Function Core.Object.InverseTransformVector
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::InverseTransformVector(struct FMatrix TM, struct FVector A)
{
	static UFunction* uFnInverseTransformVector = nullptr;

	if (!uFnInverseTransformVector)
	{
		uFnInverseTransformVector = UFunction::FindFunction("Function Core.Object.InverseTransformVector");
	}

	UObject_execInverseTransformVector_Params InverseTransformVector_Params;
	memcpy_s(&InverseTransformVector_Params.TM, 0x40, &TM, 0x40);
	memcpy_s(&InverseTransformVector_Params.A, 0xC, &A, 0xC);

	uFnInverseTransformVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnInverseTransformVector, &InverseTransformVector_Params, nullptr);

	uFnInverseTransformVector->FunctionFlags |= 0x400;

	return InverseTransformVector_Params.ReturnValue;
};

// Function Core.Object.TransformVector
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::TransformVector(struct FMatrix TM, struct FVector A)
{
	static UFunction* uFnTransformVector = nullptr;

	if (!uFnTransformVector)
	{
		uFnTransformVector = UFunction::FindFunction("Function Core.Object.TransformVector");
	}

	UObject_execTransformVector_Params TransformVector_Params;
	memcpy_s(&TransformVector_Params.TM, 0x40, &TM, 0x40);
	memcpy_s(&TransformVector_Params.A, 0xC, &A, 0xC);

	uFnTransformVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnTransformVector, &TransformVector_Params, nullptr);

	uFnTransformVector->FunctionFlags |= 0x400;

	return TransformVector_Params.ReturnValue;
};

// Function Core.Object.Multiply_MatrixMatrix
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FMatrix                 A                              (CPF_Parm)
// struct FMatrix                 B                              (CPF_Parm)

struct FMatrix UObject::Multiply_MatrixMatrix(struct FMatrix A, struct FMatrix B)
{
	static UFunction* uFnMultiply_MatrixMatrix = nullptr;

	if (!uFnMultiply_MatrixMatrix)
	{
		uFnMultiply_MatrixMatrix = UFunction::FindFunction("Function Core.Object.Multiply_MatrixMatrix");
	}

	UObject_execMultiply_MatrixMatrix_Params Multiply_MatrixMatrix_Params;
	memcpy_s(&Multiply_MatrixMatrix_Params.A, 0x40, &A, 0x40);
	memcpy_s(&Multiply_MatrixMatrix_Params.B, 0x40, &B, 0x40);

	uFnMultiply_MatrixMatrix->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_MatrixMatrix, &Multiply_MatrixMatrix_Params, nullptr);

	uFnMultiply_MatrixMatrix->FunctionFlags |= 0x400;

	return Multiply_MatrixMatrix_Params.ReturnValue;
};

// Function Core.Object.NotEqual_NameName
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[255])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   A                              (CPF_Parm)
// struct FName                   B                              (CPF_Parm)

bool UObject::NotEqual_NameName(struct FName A, struct FName B)
{
	static UFunction* uFnNotEqual_NameName = nullptr;

	if (!uFnNotEqual_NameName)
	{
		uFnNotEqual_NameName = UFunction::FindFunction("Function Core.Object.NotEqual_NameName");
	}

	UObject_execNotEqual_NameName_Params NotEqual_NameName_Params;
	memcpy_s(&NotEqual_NameName_Params.A, 0x8, &A, 0x8);
	memcpy_s(&NotEqual_NameName_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnNotEqual_NameName->iNative;
	uFnNotEqual_NameName->iNative = 0;

	uFnNotEqual_NameName->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_NameName, &NotEqual_NameName_Params, nullptr);

	uFnNotEqual_NameName->FunctionFlags |= 0x400;

	uFnNotEqual_NameName->iNative = iNativeIndex;

	return NotEqual_NameName_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_NameName
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[254])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   A                              (CPF_Parm)
// struct FName                   B                              (CPF_Parm)

bool UObject::EqualEqual_NameName(struct FName A, struct FName B)
{
	static UFunction* uFnEqualEqual_NameName = nullptr;

	if (!uFnEqualEqual_NameName)
	{
		uFnEqualEqual_NameName = UFunction::FindFunction("Function Core.Object.EqualEqual_NameName");
	}

	UObject_execEqualEqual_NameName_Params EqualEqual_NameName_Params;
	memcpy_s(&EqualEqual_NameName_Params.A, 0x8, &A, 0x8);
	memcpy_s(&EqualEqual_NameName_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnEqualEqual_NameName->iNative;
	uFnEqualEqual_NameName->iNative = 0;

	uFnEqualEqual_NameName->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_NameName, &EqualEqual_NameName_Params, nullptr);

	uFnEqualEqual_NameName->FunctionFlags |= 0x400;

	uFnEqualEqual_NameName->iNative = iNativeIndex;

	return EqualEqual_NameName_Params.ReturnValue;
};

// Function Core.Object.IsA
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[197])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   ClassName                      (CPF_Parm)

bool UObject::IsA(struct FName ClassName)
{
	static UFunction* uFnIsA = nullptr;

	if (!uFnIsA)
	{
		uFnIsA = UFunction::FindFunction("Function Core.Object.IsA");
	}

	UObject_execIsA_Params IsA_Params;
	memcpy_s(&IsA_Params.ClassName, 0x8, &ClassName, 0x8);

	uint16_t iNativeIndex = uFnIsA->iNative;
	uFnIsA->iNative = 0;

	uFnIsA->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsA, &IsA_Params, nullptr);

	uFnIsA->FunctionFlags |= 0x400;

	uFnIsA->iNative = iNativeIndex;

	return IsA_Params.ReturnValue;
};

// Function Core.Object.ClassIsChildOf
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[258])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UClass*                  TestClass                      (CPF_Parm)
// class UClass*                  ParentClass                    (CPF_Parm)

bool UObject::ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass)
{
	static UFunction* uFnClassIsChildOf = nullptr;

	if (!uFnClassIsChildOf)
	{
		uFnClassIsChildOf = UFunction::FindFunction("Function Core.Object.ClassIsChildOf");
	}

	UObject_execClassIsChildOf_Params ClassIsChildOf_Params;
	memcpy_s(&ClassIsChildOf_Params.TestClass, 0x8, &TestClass, 0x8);
	memcpy_s(&ClassIsChildOf_Params.ParentClass, 0x8, &ParentClass, 0x8);

	uint16_t iNativeIndex = uFnClassIsChildOf->iNative;
	uFnClassIsChildOf->iNative = 0;

	uFnClassIsChildOf->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnClassIsChildOf, &ClassIsChildOf_Params, nullptr);

	uFnClassIsChildOf->FunctionFlags |= 0x400;

	uFnClassIsChildOf->iNative = iNativeIndex;

	return ClassIsChildOf_Params.ReturnValue;
};

// Function Core.Object.NotEqual_InterfaceInterface
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UInterface*              A                              (CPF_Parm)
// class UInterface*              B                              (CPF_Parm)

bool UObject::NotEqual_InterfaceInterface(class UInterface* A, class UInterface* B)
{
	static UFunction* uFnNotEqual_InterfaceInterface = nullptr;

	if (!uFnNotEqual_InterfaceInterface)
	{
		uFnNotEqual_InterfaceInterface = UFunction::FindFunction("Function Core.Object.NotEqual_InterfaceInterface");
	}

	UObject_execNotEqual_InterfaceInterface_Params NotEqual_InterfaceInterface_Params;
	memcpy_s(&NotEqual_InterfaceInterface_Params.A, 0x10, &A, 0x10);
	memcpy_s(&NotEqual_InterfaceInterface_Params.B, 0x10, &B, 0x10);

	uFnNotEqual_InterfaceInterface->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_InterfaceInterface, &NotEqual_InterfaceInterface_Params, nullptr);

	uFnNotEqual_InterfaceInterface->FunctionFlags |= 0x400;

	return NotEqual_InterfaceInterface_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_InterfaceInterface
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UInterface*              A                              (CPF_Parm)
// class UInterface*              B                              (CPF_Parm)

bool UObject::EqualEqual_InterfaceInterface(class UInterface* A, class UInterface* B)
{
	static UFunction* uFnEqualEqual_InterfaceInterface = nullptr;

	if (!uFnEqualEqual_InterfaceInterface)
	{
		uFnEqualEqual_InterfaceInterface = UFunction::FindFunction("Function Core.Object.EqualEqual_InterfaceInterface");
	}

	UObject_execEqualEqual_InterfaceInterface_Params EqualEqual_InterfaceInterface_Params;
	memcpy_s(&EqualEqual_InterfaceInterface_Params.A, 0x10, &A, 0x10);
	memcpy_s(&EqualEqual_InterfaceInterface_Params.B, 0x10, &B, 0x10);

	uFnEqualEqual_InterfaceInterface->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_InterfaceInterface, &EqualEqual_InterfaceInterface_Params, nullptr);

	uFnEqualEqual_InterfaceInterface->FunctionFlags |= 0x400;

	return EqualEqual_InterfaceInterface_Params.ReturnValue;
};

// Function Core.Object.NotEqual_ObjectObject
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[119])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 A                              (CPF_Parm)
// class UObject*                 B                              (CPF_Parm)

bool UObject::NotEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static UFunction* uFnNotEqual_ObjectObject = nullptr;

	if (!uFnNotEqual_ObjectObject)
	{
		uFnNotEqual_ObjectObject = UFunction::FindFunction("Function Core.Object.NotEqual_ObjectObject");
	}

	UObject_execNotEqual_ObjectObject_Params NotEqual_ObjectObject_Params;
	memcpy_s(&NotEqual_ObjectObject_Params.A, 0x8, &A, 0x8);
	memcpy_s(&NotEqual_ObjectObject_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnNotEqual_ObjectObject->iNative;
	uFnNotEqual_ObjectObject->iNative = 0;

	uFnNotEqual_ObjectObject->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_ObjectObject, &NotEqual_ObjectObject_Params, nullptr);

	uFnNotEqual_ObjectObject->FunctionFlags |= 0x400;

	uFnNotEqual_ObjectObject->iNative = iNativeIndex;

	return NotEqual_ObjectObject_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_ObjectObject
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[114])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UObject*                 A                              (CPF_Parm)
// class UObject*                 B                              (CPF_Parm)

bool UObject::EqualEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static UFunction* uFnEqualEqual_ObjectObject = nullptr;

	if (!uFnEqualEqual_ObjectObject)
	{
		uFnEqualEqual_ObjectObject = UFunction::FindFunction("Function Core.Object.EqualEqual_ObjectObject");
	}

	UObject_execEqualEqual_ObjectObject_Params EqualEqual_ObjectObject_Params;
	memcpy_s(&EqualEqual_ObjectObject_Params.A, 0x8, &A, 0x8);
	memcpy_s(&EqualEqual_ObjectObject_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnEqualEqual_ObjectObject->iNative;
	uFnEqualEqual_ObjectObject->iNative = 0;

	uFnEqualEqual_ObjectObject->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_ObjectObject, &EqualEqual_ObjectObject_Params, nullptr);

	uFnEqualEqual_ObjectObject->FunctionFlags |= 0x400;

	uFnEqualEqual_ObjectObject->iNative = iNativeIndex;

	return EqualEqual_ObjectObject_Params.ReturnValue;
};

// Function Core.Object.PathName
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class UObject*                 CheckObject                    (CPF_Parm)

class FString UObject::PathName(class UObject* CheckObject)
{
	static UFunction* uFnPathName = nullptr;

	if (!uFnPathName)
	{
		uFnPathName = UFunction::FindFunction("Function Core.Object.PathName");
	}

	UObject_execPathName_Params PathName_Params;
	memcpy_s(&PathName_Params.CheckObject, 0x8, &CheckObject, 0x8);

	uFnPathName->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnPathName, &PathName_Params, nullptr);

	uFnPathName->FunctionFlags |= 0x400;

	return PathName_Params.ReturnValue;
};

// Function Core.Object.SplitString
// [0x00026003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Source                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Delimiter                      (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bCullEmpty                     (CPF_OptionalParm | CPF_Parm)

TArray<class FString> UObject::SplitString(class FString Source, class FString Delimiter, unsigned long bCullEmpty)
{
	static UFunction* uFnSplitString = nullptr;

	if (!uFnSplitString)
	{
		uFnSplitString = UFunction::FindFunction("Function Core.Object.SplitString");
	}

	UObject_execSplitString_Params SplitString_Params;
	memcpy_s(&SplitString_Params.Source, 0x10, &Source, 0x10);
	memcpy_s(&SplitString_Params.Delimiter, 0x10, &Delimiter, 0x10);
	SplitString_Params.bCullEmpty = bCullEmpty;

	UObject::StaticClass()->ProcessEvent(uFnSplitString, &SplitString_Params, nullptr);

	return SplitString_Params.ReturnValue;
};

// Function Core.Object.ParseStringIntoArray
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// class FString                  BaseString                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  delim                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bCullEmpty                     (CPF_Parm)
// TArray<class FString>          Pieces                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObject::ParseStringIntoArray(class FString BaseString, class FString delim, unsigned long bCullEmpty, TArray<class FString>& Pieces)
{
	static UFunction* uFnParseStringIntoArray = nullptr;

	if (!uFnParseStringIntoArray)
	{
		uFnParseStringIntoArray = UFunction::FindFunction("Function Core.Object.ParseStringIntoArray");
	}

	UObject_execParseStringIntoArray_Params ParseStringIntoArray_Params;
	memcpy_s(&ParseStringIntoArray_Params.BaseString, 0x10, &BaseString, 0x10);
	memcpy_s(&ParseStringIntoArray_Params.delim, 0x10, &delim, 0x10);
	ParseStringIntoArray_Params.bCullEmpty = bCullEmpty;
	memcpy_s(&ParseStringIntoArray_Params.Pieces, 0x10, &Pieces, 0x10);

	uFnParseStringIntoArray->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnParseStringIntoArray, &ParseStringIntoArray_Params, nullptr);

	uFnParseStringIntoArray->FunctionFlags |= 0x400;

	memcpy_s(&Pieces, 0x10, &ParseStringIntoArray_Params.Pieces, 0x10);
};

// Function Core.Object.JoinArray
// [0x00426003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<class FString>          StringArray                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  delim                          (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIgnoreBlanks                  (CPF_OptionalParm | CPF_Parm)
// class FString                  out_Result                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UObject::JoinArray(TArray<class FString> StringArray, class FString delim, unsigned long bIgnoreBlanks, class FString& out_Result)
{
	static UFunction* uFnJoinArray = nullptr;

	if (!uFnJoinArray)
	{
		uFnJoinArray = UFunction::FindFunction("Function Core.Object.JoinArray");
	}

	UObject_execJoinArray_Params JoinArray_Params;
	memcpy_s(&JoinArray_Params.StringArray, 0x10, &StringArray, 0x10);
	memcpy_s(&JoinArray_Params.delim, 0x10, &delim, 0x10);
	JoinArray_Params.bIgnoreBlanks = bIgnoreBlanks;
	memcpy_s(&JoinArray_Params.out_Result, 0x10, &out_Result, 0x10);

	UObject::StaticClass()->ProcessEvent(uFnJoinArray, &JoinArray_Params, nullptr);

	memcpy_s(&out_Result, 0x10, &JoinArray_Params.out_Result, 0x10);
};

// Function Core.Object.GetRightMost
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

class FString UObject::GetRightMost(class FString Text)
{
	static UFunction* uFnGetRightMost = nullptr;

	if (!uFnGetRightMost)
	{
		uFnGetRightMost = UFunction::FindFunction("Function Core.Object.GetRightMost");
	}

	UObject_execGetRightMost_Params GetRightMost_Params;
	memcpy_s(&GetRightMost_Params.Text, 0x10, &Text, 0x10);

	UObject::StaticClass()->ProcessEvent(uFnGetRightMost, &GetRightMost_Params, nullptr);

	return GetRightMost_Params.ReturnValue;
};

// Function Core.Object.Split
// [0x00026003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  SplitStr                       (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// unsigned long                  bOmitSplitStr                  (CPF_OptionalParm | CPF_Parm)

class FString UObject::Split(class FString Text, class FString SplitStr, unsigned long bOmitSplitStr)
{
	static UFunction* uFnSplit = nullptr;

	if (!uFnSplit)
	{
		uFnSplit = UFunction::FindFunction("Function Core.Object.Split");
	}

	UObject_execSplit_Params Split_Params;
	memcpy_s(&Split_Params.Text, 0x10, &Text, 0x10);
	memcpy_s(&Split_Params.SplitStr, 0x10, &SplitStr, 0x10);
	Split_Params.bOmitSplitStr = bOmitSplitStr;

	UObject::StaticClass()->ProcessEvent(uFnSplit, &Split_Params, nullptr);

	return Split_Params.ReturnValue;
};

// Function Core.Object.Repl
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) (iNative[201])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Src                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  Match                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  With                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// unsigned long                  bCaseSensitive                 (CPF_OptionalParm | CPF_Parm)

class FString UObject::Repl(class FString Src, class FString Match, class FString With, unsigned long bCaseSensitive)
{
	static UFunction* uFnRepl = nullptr;

	if (!uFnRepl)
	{
		uFnRepl = UFunction::FindFunction("Function Core.Object.Repl");
	}

	UObject_execRepl_Params Repl_Params;
	memcpy_s(&Repl_Params.Src, 0x10, &Src, 0x10);
	memcpy_s(&Repl_Params.Match, 0x10, &Match, 0x10);
	memcpy_s(&Repl_Params.With, 0x10, &With, 0x10);
	Repl_Params.bCaseSensitive = bCaseSensitive;

	uint16_t iNativeIndex = uFnRepl->iNative;
	uFnRepl->iNative = 0;

	uFnRepl->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRepl, &Repl_Params, nullptr);

	uFnRepl->FunctionFlags |= 0x400;

	uFnRepl->iNative = iNativeIndex;

	return Repl_Params.ReturnValue;
};

// Function Core.Object.Asc
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[237])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

int32_t UObject::Asc(class FString S)
{
	static UFunction* uFnAsc = nullptr;

	if (!uFnAsc)
	{
		uFnAsc = UFunction::FindFunction("Function Core.Object.Asc");
	}

	UObject_execAsc_Params Asc_Params;
	memcpy_s(&Asc_Params.S, 0x10, &S, 0x10);

	uint16_t iNativeIndex = uFnAsc->iNative;
	uFnAsc->iNative = 0;

	uFnAsc->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAsc, &Asc_Params, nullptr);

	uFnAsc->FunctionFlags |= 0x400;

	uFnAsc->iNative = iNativeIndex;

	return Asc_Params.ReturnValue;
};

// Function Core.Object.Chr
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[236])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

class FString UObject::Chr(int32_t I)
{
	static UFunction* uFnChr = nullptr;

	if (!uFnChr)
	{
		uFnChr = UFunction::FindFunction("Function Core.Object.Chr");
	}

	UObject_execChr_Params Chr_Params;
	memcpy_s(&Chr_Params.I, 0x4, &I, 0x4);

	uint16_t iNativeIndex = uFnChr->iNative;
	uFnChr->iNative = 0;

	uFnChr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnChr, &Chr_Params, nullptr);

	uFnChr->FunctionFlags |= 0x400;

	uFnChr->iNative = iNativeIndex;

	return Chr_Params.ReturnValue;
};

// Function Core.Object.Locs
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[238])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

class FString UObject::Locs(class FString S)
{
	static UFunction* uFnLocs = nullptr;

	if (!uFnLocs)
	{
		uFnLocs = UFunction::FindFunction("Function Core.Object.Locs");
	}

	UObject_execLocs_Params Locs_Params;
	memcpy_s(&Locs_Params.S, 0x10, &S, 0x10);

	uint16_t iNativeIndex = uFnLocs->iNative;
	uFnLocs->iNative = 0;

	uFnLocs->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLocs, &Locs_Params, nullptr);

	uFnLocs->FunctionFlags |= 0x400;

	uFnLocs->iNative = iNativeIndex;

	return Locs_Params.ReturnValue;
};

// Function Core.Object.Caps
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[235])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

class FString UObject::Caps(class FString S)
{
	static UFunction* uFnCaps = nullptr;

	if (!uFnCaps)
	{
		uFnCaps = UFunction::FindFunction("Function Core.Object.Caps");
	}

	UObject_execCaps_Params Caps_Params;
	memcpy_s(&Caps_Params.S, 0x10, &S, 0x10);

	uint16_t iNativeIndex = uFnCaps->iNative;
	uFnCaps->iNative = 0;

	uFnCaps->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnCaps, &Caps_Params, nullptr);

	uFnCaps->FunctionFlags |= 0x400;

	uFnCaps->iNative = iNativeIndex;

	return Caps_Params.ReturnValue;
};

// Function Core.Object.Right
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[234])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

class FString UObject::Right(class FString S, int32_t I)
{
	static UFunction* uFnRight = nullptr;

	if (!uFnRight)
	{
		uFnRight = UFunction::FindFunction("Function Core.Object.Right");
	}

	UObject_execRight_Params Right_Params;
	memcpy_s(&Right_Params.S, 0x10, &S, 0x10);
	memcpy_s(&Right_Params.I, 0x4, &I, 0x4);

	uint16_t iNativeIndex = uFnRight->iNative;
	uFnRight->iNative = 0;

	uFnRight->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRight, &Right_Params, nullptr);

	uFnRight->FunctionFlags |= 0x400;

	uFnRight->iNative = iNativeIndex;

	return Right_Params.ReturnValue;
};

// Function Core.Object.Left
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[128])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

class FString UObject::Left(class FString S, int32_t I)
{
	static UFunction* uFnLeft = nullptr;

	if (!uFnLeft)
	{
		uFnLeft = UFunction::FindFunction("Function Core.Object.Left");
	}

	UObject_execLeft_Params Left_Params;
	memcpy_s(&Left_Params.S, 0x10, &S, 0x10);
	memcpy_s(&Left_Params.I, 0x4, &I, 0x4);

	uint16_t iNativeIndex = uFnLeft->iNative;
	uFnLeft->iNative = 0;

	uFnLeft->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLeft, &Left_Params, nullptr);

	uFnLeft->FunctionFlags |= 0x400;

	uFnLeft->iNative = iNativeIndex;

	return Left_Params.ReturnValue;
};

// Function Core.Object.Mid
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) (iNative[127])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)
// int32_t                        J                              (CPF_OptionalParm | CPF_Parm)

class FString UObject::Mid(class FString S, int32_t I, int32_t J)
{
	static UFunction* uFnMid = nullptr;

	if (!uFnMid)
	{
		uFnMid = UFunction::FindFunction("Function Core.Object.Mid");
	}

	UObject_execMid_Params Mid_Params;
	memcpy_s(&Mid_Params.S, 0x10, &S, 0x10);
	memcpy_s(&Mid_Params.I, 0x4, &I, 0x4);
	memcpy_s(&Mid_Params.J, 0x4, &J, 0x4);

	uint16_t iNativeIndex = uFnMid->iNative;
	uFnMid->iNative = 0;

	uFnMid->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMid, &Mid_Params, nullptr);

	uFnMid->FunctionFlags |= 0x400;

	uFnMid->iNative = iNativeIndex;

	return Mid_Params.ReturnValue;
};

// Function Core.Object.InStr
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) (iNative[126])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  T                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// unsigned long                  bSearchFromRight               (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bIgnoreCase                    (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartPos                       (CPF_OptionalParm | CPF_Parm)

int32_t UObject::InStr(class FString S, class FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int32_t StartPos)
{
	static UFunction* uFnInStr = nullptr;

	if (!uFnInStr)
	{
		uFnInStr = UFunction::FindFunction("Function Core.Object.InStr");
	}

	UObject_execInStr_Params InStr_Params;
	memcpy_s(&InStr_Params.S, 0x10, &S, 0x10);
	memcpy_s(&InStr_Params.T, 0x10, &T, 0x10);
	InStr_Params.bSearchFromRight = bSearchFromRight;
	InStr_Params.bIgnoreCase = bIgnoreCase;
	memcpy_s(&InStr_Params.StartPos, 0x4, &StartPos, 0x4);

	uint16_t iNativeIndex = uFnInStr->iNative;
	uFnInStr->iNative = 0;

	uFnInStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnInStr, &InStr_Params, nullptr);

	uFnInStr->FunctionFlags |= 0x400;

	uFnInStr->iNative = iNativeIndex;

	return InStr_Params.ReturnValue;
};

// Function Core.Object.Len
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[125])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  S                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

int32_t UObject::Len(class FString S)
{
	static UFunction* uFnLen = nullptr;

	if (!uFnLen)
	{
		uFnLen = UFunction::FindFunction("Function Core.Object.Len");
	}

	UObject_execLen_Params Len_Params;
	memcpy_s(&Len_Params.S, 0x10, &S, 0x10);

	uint16_t iNativeIndex = uFnLen->iNative;
	uFnLen->iNative = 0;

	uFnLen->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLen, &Len_Params, nullptr);

	uFnLen->FunctionFlags |= 0x400;

	uFnLen->iNative = iNativeIndex;

	return Len_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_StrStr
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[324])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  A                              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UObject::SubtractEqual_StrStr(class FString B, class FString& A)
{
	static UFunction* uFnSubtractEqual_StrStr = nullptr;

	if (!uFnSubtractEqual_StrStr)
	{
		uFnSubtractEqual_StrStr = UFunction::FindFunction("Function Core.Object.SubtractEqual_StrStr");
	}

	UObject_execSubtractEqual_StrStr_Params SubtractEqual_StrStr_Params;
	memcpy_s(&SubtractEqual_StrStr_Params.B, 0x10, &B, 0x10);
	memcpy_s(&SubtractEqual_StrStr_Params.A, 0x10, &A, 0x10);

	uint16_t iNativeIndex = uFnSubtractEqual_StrStr->iNative;
	uFnSubtractEqual_StrStr->iNative = 0;

	uFnSubtractEqual_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_StrStr, &SubtractEqual_StrStr_Params, nullptr);

	uFnSubtractEqual_StrStr->FunctionFlags |= 0x400;

	uFnSubtractEqual_StrStr->iNative = iNativeIndex;

	memcpy_s(&A, 0x10, &SubtractEqual_StrStr_Params.A, 0x10);

	return SubtractEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.AtEqual_StrStr
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[323])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  A                              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UObject::AtEqual_StrStr(class FString B, class FString& A)
{
	static UFunction* uFnAtEqual_StrStr = nullptr;

	if (!uFnAtEqual_StrStr)
	{
		uFnAtEqual_StrStr = UFunction::FindFunction("Function Core.Object.AtEqual_StrStr");
	}

	UObject_execAtEqual_StrStr_Params AtEqual_StrStr_Params;
	memcpy_s(&AtEqual_StrStr_Params.B, 0x10, &B, 0x10);
	memcpy_s(&AtEqual_StrStr_Params.A, 0x10, &A, 0x10);

	uint16_t iNativeIndex = uFnAtEqual_StrStr->iNative;
	uFnAtEqual_StrStr->iNative = 0;

	uFnAtEqual_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAtEqual_StrStr, &AtEqual_StrStr_Params, nullptr);

	uFnAtEqual_StrStr->FunctionFlags |= 0x400;

	uFnAtEqual_StrStr->iNative = iNativeIndex;

	memcpy_s(&A, 0x10, &AtEqual_StrStr_Params.A, 0x10);

	return AtEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.ConcatEqual_StrStr
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[322])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  A                              (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class FString UObject::ConcatEqual_StrStr(class FString B, class FString& A)
{
	static UFunction* uFnConcatEqual_StrStr = nullptr;

	if (!uFnConcatEqual_StrStr)
	{
		uFnConcatEqual_StrStr = UFunction::FindFunction("Function Core.Object.ConcatEqual_StrStr");
	}

	UObject_execConcatEqual_StrStr_Params ConcatEqual_StrStr_Params;
	memcpy_s(&ConcatEqual_StrStr_Params.B, 0x10, &B, 0x10);
	memcpy_s(&ConcatEqual_StrStr_Params.A, 0x10, &A, 0x10);

	uint16_t iNativeIndex = uFnConcatEqual_StrStr->iNative;
	uFnConcatEqual_StrStr->iNative = 0;

	uFnConcatEqual_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnConcatEqual_StrStr, &ConcatEqual_StrStr_Params, nullptr);

	uFnConcatEqual_StrStr->FunctionFlags |= 0x400;

	uFnConcatEqual_StrStr->iNative = iNativeIndex;

	memcpy_s(&A, 0x10, &ConcatEqual_StrStr_Params.A, 0x10);

	return ConcatEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.ComplementEqual_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[124])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::ComplementEqual_StrStr(class FString A, class FString B)
{
	static UFunction* uFnComplementEqual_StrStr = nullptr;

	if (!uFnComplementEqual_StrStr)
	{
		uFnComplementEqual_StrStr = UFunction::FindFunction("Function Core.Object.ComplementEqual_StrStr");
	}

	UObject_execComplementEqual_StrStr_Params ComplementEqual_StrStr_Params;
	memcpy_s(&ComplementEqual_StrStr_Params.A, 0x10, &A, 0x10);
	memcpy_s(&ComplementEqual_StrStr_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnComplementEqual_StrStr->iNative;
	uFnComplementEqual_StrStr->iNative = 0;

	uFnComplementEqual_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnComplementEqual_StrStr, &ComplementEqual_StrStr_Params, nullptr);

	uFnComplementEqual_StrStr->FunctionFlags |= 0x400;

	uFnComplementEqual_StrStr->iNative = iNativeIndex;

	return ComplementEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.NotEqual_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[123])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::NotEqual_StrStr(class FString A, class FString B)
{
	static UFunction* uFnNotEqual_StrStr = nullptr;

	if (!uFnNotEqual_StrStr)
	{
		uFnNotEqual_StrStr = UFunction::FindFunction("Function Core.Object.NotEqual_StrStr");
	}

	UObject_execNotEqual_StrStr_Params NotEqual_StrStr_Params;
	memcpy_s(&NotEqual_StrStr_Params.A, 0x10, &A, 0x10);
	memcpy_s(&NotEqual_StrStr_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnNotEqual_StrStr->iNative;
	uFnNotEqual_StrStr->iNative = 0;

	uFnNotEqual_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_StrStr, &NotEqual_StrStr_Params, nullptr);

	uFnNotEqual_StrStr->FunctionFlags |= 0x400;

	uFnNotEqual_StrStr->iNative = iNativeIndex;

	return NotEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[122])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::EqualEqual_StrStr(class FString A, class FString B)
{
	static UFunction* uFnEqualEqual_StrStr = nullptr;

	if (!uFnEqualEqual_StrStr)
	{
		uFnEqualEqual_StrStr = UFunction::FindFunction("Function Core.Object.EqualEqual_StrStr");
	}

	UObject_execEqualEqual_StrStr_Params EqualEqual_StrStr_Params;
	memcpy_s(&EqualEqual_StrStr_Params.A, 0x10, &A, 0x10);
	memcpy_s(&EqualEqual_StrStr_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnEqualEqual_StrStr->iNative;
	uFnEqualEqual_StrStr->iNative = 0;

	uFnEqualEqual_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_StrStr, &EqualEqual_StrStr_Params, nullptr);

	uFnEqualEqual_StrStr->FunctionFlags |= 0x400;

	uFnEqualEqual_StrStr->iNative = iNativeIndex;

	return EqualEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.GreaterEqual_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[121])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::GreaterEqual_StrStr(class FString A, class FString B)
{
	static UFunction* uFnGreaterEqual_StrStr = nullptr;

	if (!uFnGreaterEqual_StrStr)
	{
		uFnGreaterEqual_StrStr = UFunction::FindFunction("Function Core.Object.GreaterEqual_StrStr");
	}

	UObject_execGreaterEqual_StrStr_Params GreaterEqual_StrStr_Params;
	memcpy_s(&GreaterEqual_StrStr_Params.A, 0x10, &A, 0x10);
	memcpy_s(&GreaterEqual_StrStr_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnGreaterEqual_StrStr->iNative;
	uFnGreaterEqual_StrStr->iNative = 0;

	uFnGreaterEqual_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterEqual_StrStr, &GreaterEqual_StrStr_Params, nullptr);

	uFnGreaterEqual_StrStr->FunctionFlags |= 0x400;

	uFnGreaterEqual_StrStr->iNative = iNativeIndex;

	return GreaterEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.LessEqual_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[120])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::LessEqual_StrStr(class FString A, class FString B)
{
	static UFunction* uFnLessEqual_StrStr = nullptr;

	if (!uFnLessEqual_StrStr)
	{
		uFnLessEqual_StrStr = UFunction::FindFunction("Function Core.Object.LessEqual_StrStr");
	}

	UObject_execLessEqual_StrStr_Params LessEqual_StrStr_Params;
	memcpy_s(&LessEqual_StrStr_Params.A, 0x10, &A, 0x10);
	memcpy_s(&LessEqual_StrStr_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnLessEqual_StrStr->iNative;
	uFnLessEqual_StrStr->iNative = 0;

	uFnLessEqual_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLessEqual_StrStr, &LessEqual_StrStr_Params, nullptr);

	uFnLessEqual_StrStr->FunctionFlags |= 0x400;

	uFnLessEqual_StrStr->iNative = iNativeIndex;

	return LessEqual_StrStr_Params.ReturnValue;
};

// Function Core.Object.Greater_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[116])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::Greater_StrStr(class FString A, class FString B)
{
	static UFunction* uFnGreater_StrStr = nullptr;

	if (!uFnGreater_StrStr)
	{
		uFnGreater_StrStr = UFunction::FindFunction("Function Core.Object.Greater_StrStr");
	}

	UObject_execGreater_StrStr_Params Greater_StrStr_Params;
	memcpy_s(&Greater_StrStr_Params.A, 0x10, &A, 0x10);
	memcpy_s(&Greater_StrStr_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnGreater_StrStr->iNative;
	uFnGreater_StrStr->iNative = 0;

	uFnGreater_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreater_StrStr, &Greater_StrStr_Params, nullptr);

	uFnGreater_StrStr->FunctionFlags |= 0x400;

	uFnGreater_StrStr->iNative = iNativeIndex;

	return Greater_StrStr_Params.ReturnValue;
};

// Function Core.Object.Less_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[115])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  A                              (CPF_Parm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_NeedCtorLink)

bool UObject::Less_StrStr(class FString A, class FString B)
{
	static UFunction* uFnLess_StrStr = nullptr;

	if (!uFnLess_StrStr)
	{
		uFnLess_StrStr = UFunction::FindFunction("Function Core.Object.Less_StrStr");
	}

	UObject_execLess_StrStr_Params Less_StrStr_Params;
	memcpy_s(&Less_StrStr_Params.A, 0x10, &A, 0x10);
	memcpy_s(&Less_StrStr_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnLess_StrStr->iNative;
	uFnLess_StrStr->iNative = 0;

	uFnLess_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLess_StrStr, &Less_StrStr_Params, nullptr);

	uFnLess_StrStr->FunctionFlags |= 0x400;

	uFnLess_StrStr->iNative = iNativeIndex;

	return Less_StrStr_Params.ReturnValue;
};

// Function Core.Object.At_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[168])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  A                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

class FString UObject::At_StrStr(class FString A, class FString B)
{
	static UFunction* uFnAt_StrStr = nullptr;

	if (!uFnAt_StrStr)
	{
		uFnAt_StrStr = UFunction::FindFunction("Function Core.Object.At_StrStr");
	}

	UObject_execAt_StrStr_Params At_StrStr_Params;
	memcpy_s(&At_StrStr_Params.A, 0x10, &A, 0x10);
	memcpy_s(&At_StrStr_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnAt_StrStr->iNative;
	uFnAt_StrStr->iNative = 0;

	uFnAt_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAt_StrStr, &At_StrStr_Params, nullptr);

	uFnAt_StrStr->FunctionFlags |= 0x400;

	uFnAt_StrStr->iNative = iNativeIndex;

	return At_StrStr_Params.ReturnValue;
};

// Function Core.Object.Concat_StrStr
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[112])
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  A                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  B                              (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

class FString UObject::Concat_StrStr(class FString A, class FString B)
{
	static UFunction* uFnConcat_StrStr = nullptr;

	if (!uFnConcat_StrStr)
	{
		uFnConcat_StrStr = UFunction::FindFunction("Function Core.Object.Concat_StrStr");
	}

	UObject_execConcat_StrStr_Params Concat_StrStr_Params;
	memcpy_s(&Concat_StrStr_Params.A, 0x10, &A, 0x10);
	memcpy_s(&Concat_StrStr_Params.B, 0x10, &B, 0x10);

	uint16_t iNativeIndex = uFnConcat_StrStr->iNative;
	uFnConcat_StrStr->iNative = 0;

	uFnConcat_StrStr->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnConcat_StrStr, &Concat_StrStr_Params, nullptr);

	uFnConcat_StrStr->FunctionFlags |= 0x400;

	uFnConcat_StrStr->iNative = iNativeIndex;

	return Concat_StrStr_Params.ReturnValue;
};

// Function Core.Object.MakeRotator
// [0x00822003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Pitch                          (CPF_Parm)
// int32_t                        Yaw                            (CPF_Parm)
// int32_t                        Roll                           (CPF_Parm)

struct FRotator UObject::MakeRotator(int32_t Pitch, int32_t Yaw, int32_t Roll)
{
	static UFunction* uFnMakeRotator = nullptr;

	if (!uFnMakeRotator)
	{
		uFnMakeRotator = UFunction::FindFunction("Function Core.Object.MakeRotator");
	}

	UObject_execMakeRotator_Params MakeRotator_Params;
	memcpy_s(&MakeRotator_Params.Pitch, 0x4, &Pitch, 0x4);
	memcpy_s(&MakeRotator_Params.Yaw, 0x4, &Yaw, 0x4);
	memcpy_s(&MakeRotator_Params.Roll, 0x4, &Roll, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnMakeRotator, &MakeRotator_Params, nullptr);

	return MakeRotator_Params.ReturnValue;
};

// Function Core.Object.SClampRotAxis
// [0x00422103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          DeltaTime                      (CPF_Parm)
// int32_t                        ViewAxis                       (CPF_Parm)
// int32_t                        MaxLimit                       (CPF_Parm)
// int32_t                        MinLimit                       (CPF_Parm)
// float                          InterpolationSpeed             (CPF_Parm)
// int32_t                        out_DeltaViewAxis              (CPF_Parm | CPF_OutParm)

bool UObject::SClampRotAxis(float DeltaTime, int32_t ViewAxis, int32_t MaxLimit, int32_t MinLimit, float InterpolationSpeed, int32_t& out_DeltaViewAxis)
{
	static UFunction* uFnSClampRotAxis = nullptr;

	if (!uFnSClampRotAxis)
	{
		uFnSClampRotAxis = UFunction::FindFunction("Function Core.Object.SClampRotAxis");
	}

	UObject_execSClampRotAxis_Params SClampRotAxis_Params;
	memcpy_s(&SClampRotAxis_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&SClampRotAxis_Params.ViewAxis, 0x4, &ViewAxis, 0x4);
	memcpy_s(&SClampRotAxis_Params.MaxLimit, 0x4, &MaxLimit, 0x4);
	memcpy_s(&SClampRotAxis_Params.MinLimit, 0x4, &MinLimit, 0x4);
	memcpy_s(&SClampRotAxis_Params.InterpolationSpeed, 0x4, &InterpolationSpeed, 0x4);
	memcpy_s(&SClampRotAxis_Params.out_DeltaViewAxis, 0x4, &out_DeltaViewAxis, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnSClampRotAxis, &SClampRotAxis_Params, nullptr);

	memcpy_s(&out_DeltaViewAxis, 0x4, &SClampRotAxis_Params.out_DeltaViewAxis, 0x4);

	return SClampRotAxis_Params.ReturnValue;
};

// Function Core.Object.ClampRotAxisFromRange
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Current                        (CPF_Parm)
// int32_t                        Min                            (CPF_Parm)
// int32_t                        Max                            (CPF_Parm)

int32_t UObject::ClampRotAxisFromRange(int32_t Current, int32_t Min, int32_t Max)
{
	static UFunction* uFnClampRotAxisFromRange = nullptr;

	if (!uFnClampRotAxisFromRange)
	{
		uFnClampRotAxisFromRange = UFunction::FindFunction("Function Core.Object.ClampRotAxisFromRange");
	}

	UObject_execClampRotAxisFromRange_Params ClampRotAxisFromRange_Params;
	memcpy_s(&ClampRotAxisFromRange_Params.Current, 0x4, &Current, 0x4);
	memcpy_s(&ClampRotAxisFromRange_Params.Min, 0x4, &Min, 0x4);
	memcpy_s(&ClampRotAxisFromRange_Params.Max, 0x4, &Max, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnClampRotAxisFromRange, &ClampRotAxisFromRange_Params, nullptr);

	return ClampRotAxisFromRange_Params.ReturnValue;
};

// Function Core.Object.ClampRotAxisFromBase
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Current                        (CPF_Parm)
// int32_t                        Center                         (CPF_Parm)
// int32_t                        MaxDelta                       (CPF_Parm)

int32_t UObject::ClampRotAxisFromBase(int32_t Current, int32_t Center, int32_t MaxDelta)
{
	static UFunction* uFnClampRotAxisFromBase = nullptr;

	if (!uFnClampRotAxisFromBase)
	{
		uFnClampRotAxisFromBase = UFunction::FindFunction("Function Core.Object.ClampRotAxisFromBase");
	}

	UObject_execClampRotAxisFromBase_Params ClampRotAxisFromBase_Params;
	memcpy_s(&ClampRotAxisFromBase_Params.Current, 0x4, &Current, 0x4);
	memcpy_s(&ClampRotAxisFromBase_Params.Center, 0x4, &Center, 0x4);
	memcpy_s(&ClampRotAxisFromBase_Params.MaxDelta, 0x4, &MaxDelta, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnClampRotAxisFromBase, &ClampRotAxisFromBase_Params, nullptr);

	return ClampRotAxisFromBase_Params.ReturnValue;
};

// Function Core.Object.ClampRotAxis
// [0x00422103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ViewAxis                       (CPF_Parm)
// int32_t                        MaxLimit                       (CPF_Parm)
// int32_t                        MinLimit                       (CPF_Parm)
// int32_t                        out_DeltaViewAxis              (CPF_Parm | CPF_OutParm)

void UObject::ClampRotAxis(int32_t ViewAxis, int32_t MaxLimit, int32_t MinLimit, int32_t& out_DeltaViewAxis)
{
	static UFunction* uFnClampRotAxis = nullptr;

	if (!uFnClampRotAxis)
	{
		uFnClampRotAxis = UFunction::FindFunction("Function Core.Object.ClampRotAxis");
	}

	UObject_execClampRotAxis_Params ClampRotAxis_Params;
	memcpy_s(&ClampRotAxis_Params.ViewAxis, 0x4, &ViewAxis, 0x4);
	memcpy_s(&ClampRotAxis_Params.MaxLimit, 0x4, &MaxLimit, 0x4);
	memcpy_s(&ClampRotAxis_Params.MinLimit, 0x4, &MinLimit, 0x4);
	memcpy_s(&ClampRotAxis_Params.out_DeltaViewAxis, 0x4, &out_DeltaViewAxis, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnClampRotAxis, &ClampRotAxis_Params, nullptr);

	memcpy_s(&out_DeltaViewAxis, 0x4, &ClampRotAxis_Params.out_DeltaViewAxis, 0x4);
};

// Function Core.Object.RSize
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                R                              (CPF_Parm)

float UObject::RSize(struct FRotator R)
{
	static UFunction* uFnRSize = nullptr;

	if (!uFnRSize)
	{
		uFnRSize = UFunction::FindFunction("Function Core.Object.RSize");
	}

	UObject_execRSize_Params RSize_Params;
	memcpy_s(&RSize_Params.R, 0xC, &R, 0xC);

	uFnRSize->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRSize, &RSize_Params, nullptr);

	uFnRSize->FunctionFlags |= 0x400;

	return RSize_Params.ReturnValue;
};

// Function Core.Object.RDiff
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

float UObject::RDiff(struct FRotator A, struct FRotator B)
{
	static UFunction* uFnRDiff = nullptr;

	if (!uFnRDiff)
	{
		uFnRDiff = UFunction::FindFunction("Function Core.Object.RDiff");
	}

	UObject_execRDiff_Params RDiff_Params;
	memcpy_s(&RDiff_Params.A, 0xC, &A, 0xC);
	memcpy_s(&RDiff_Params.B, 0xC, &B, 0xC);

	uFnRDiff->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRDiff, &RDiff_Params, nullptr);

	uFnRDiff->FunctionFlags |= 0x400;

	return RDiff_Params.ReturnValue;
};

// Function Core.Object.NormalizeRotAxis
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Angle                          (CPF_Parm)

int32_t UObject::NormalizeRotAxis(int32_t Angle)
{
	static UFunction* uFnNormalizeRotAxis = nullptr;

	if (!uFnNormalizeRotAxis)
	{
		uFnNormalizeRotAxis = UFunction::FindFunction("Function Core.Object.NormalizeRotAxis");
	}

	UObject_execNormalizeRotAxis_Params NormalizeRotAxis_Params;
	memcpy_s(&NormalizeRotAxis_Params.Angle, 0x4, &Angle, 0x4);

	uFnNormalizeRotAxis->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNormalizeRotAxis, &NormalizeRotAxis_Params, nullptr);

	uFnNormalizeRotAxis->FunctionFlags |= 0x400;

	return NormalizeRotAxis_Params.ReturnValue;
};

// Function Core.Object.RInterpTo
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                Current                        (CPF_Parm)
// struct FRotator                Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)
// unsigned long                  bConstantInterpSpeed           (CPF_OptionalParm | CPF_Parm)

struct FRotator UObject::RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed)
{
	static UFunction* uFnRInterpTo = nullptr;

	if (!uFnRInterpTo)
	{
		uFnRInterpTo = UFunction::FindFunction("Function Core.Object.RInterpTo");
	}

	UObject_execRInterpTo_Params RInterpTo_Params;
	memcpy_s(&RInterpTo_Params.Current, 0xC, &Current, 0xC);
	memcpy_s(&RInterpTo_Params.Target, 0xC, &Target, 0xC);
	memcpy_s(&RInterpTo_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&RInterpTo_Params.InterpSpeed, 0x4, &InterpSpeed, 0x4);
	RInterpTo_Params.bConstantInterpSpeed = bConstantInterpSpeed;

	uFnRInterpTo->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRInterpTo, &RInterpTo_Params, nullptr);

	uFnRInterpTo->FunctionFlags |= 0x400;

	return RInterpTo_Params.ReturnValue;
};

// Function Core.Object.RTransform
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                R                              (CPF_Parm)
// struct FRotator                RBasis                         (CPF_Parm)

struct FRotator UObject::RTransform(struct FRotator R, struct FRotator RBasis)
{
	static UFunction* uFnRTransform = nullptr;

	if (!uFnRTransform)
	{
		uFnRTransform = UFunction::FindFunction("Function Core.Object.RTransform");
	}

	UObject_execRTransform_Params RTransform_Params;
	memcpy_s(&RTransform_Params.R, 0xC, &R, 0xC);
	memcpy_s(&RTransform_Params.RBasis, 0xC, &RBasis, 0xC);

	uFnRTransform->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRTransform, &RTransform_Params, nullptr);

	uFnRTransform->FunctionFlags |= 0x400;

	return RTransform_Params.ReturnValue;
};

// Function Core.Object.RLerp
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// unsigned long                  bShortestPath                  (CPF_OptionalParm | CPF_Parm)

struct FRotator UObject::RLerp(struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath)
{
	static UFunction* uFnRLerp = nullptr;

	if (!uFnRLerp)
	{
		uFnRLerp = UFunction::FindFunction("Function Core.Object.RLerp");
	}

	UObject_execRLerp_Params RLerp_Params;
	memcpy_s(&RLerp_Params.A, 0xC, &A, 0xC);
	memcpy_s(&RLerp_Params.B, 0xC, &B, 0xC);
	memcpy_s(&RLerp_Params.Alpha, 0x4, &Alpha, 0x4);
	RLerp_Params.bShortestPath = bShortestPath;

	uFnRLerp->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRLerp, &RLerp_Params, nullptr);

	uFnRLerp->FunctionFlags |= 0x400;

	return RLerp_Params.ReturnValue;
};

// Function Core.Object.Normalize
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                Rot                            (CPF_Parm)

struct FRotator UObject::Normalize(struct FRotator Rot)
{
	static UFunction* uFnNormalize = nullptr;

	if (!uFnNormalize)
	{
		uFnNormalize = UFunction::FindFunction("Function Core.Object.Normalize");
	}

	UObject_execNormalize_Params Normalize_Params;
	memcpy_s(&Normalize_Params.Rot, 0xC, &Rot, 0xC);

	uFnNormalize->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNormalize, &Normalize_Params, nullptr);

	uFnNormalize->FunctionFlags |= 0x400;

	return Normalize_Params.ReturnValue;
};

// Function Core.Object.OrthoRotation
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 X                              (CPF_Parm)
// struct FVector                 Y                              (CPF_Parm)
// struct FVector                 Z                              (CPF_Parm)

struct FRotator UObject::OrthoRotation(struct FVector X, struct FVector Y, struct FVector Z)
{
	static UFunction* uFnOrthoRotation = nullptr;

	if (!uFnOrthoRotation)
	{
		uFnOrthoRotation = UFunction::FindFunction("Function Core.Object.OrthoRotation");
	}

	UObject_execOrthoRotation_Params OrthoRotation_Params;
	memcpy_s(&OrthoRotation_Params.X, 0xC, &X, 0xC);
	memcpy_s(&OrthoRotation_Params.Y, 0xC, &Y, 0xC);
	memcpy_s(&OrthoRotation_Params.Z, 0xC, &Z, 0xC);

	uFnOrthoRotation->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnOrthoRotation, &OrthoRotation_Params, nullptr);

	uFnOrthoRotation->FunctionFlags |= 0x400;

	return OrthoRotation_Params.ReturnValue;
};

// Function Core.Object.RotRand
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags) (iNative[320])
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bRoll                          (CPF_OptionalParm | CPF_Parm)

struct FRotator UObject::RotRand(unsigned long bRoll)
{
	static UFunction* uFnRotRand = nullptr;

	if (!uFnRotRand)
	{
		uFnRotRand = UFunction::FindFunction("Function Core.Object.RotRand");
	}

	UObject_execRotRand_Params RotRand_Params;
	RotRand_Params.bRoll = bRoll;

	uint16_t iNativeIndex = uFnRotRand->iNative;
	uFnRotRand->iNative = 0;

	uFnRotRand->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRotRand, &RotRand_Params, nullptr);

	uFnRotRand->FunctionFlags |= 0x400;

	uFnRotRand->iNative = iNativeIndex;

	return RotRand_Params.ReturnValue;
};

// Function Core.Object.GetRotatorAxis
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// int32_t                        Axis                           (CPF_Parm)

struct FVector UObject::GetRotatorAxis(struct FRotator A, int32_t Axis)
{
	static UFunction* uFnGetRotatorAxis = nullptr;

	if (!uFnGetRotatorAxis)
	{
		uFnGetRotatorAxis = UFunction::FindFunction("Function Core.Object.GetRotatorAxis");
	}

	UObject_execGetRotatorAxis_Params GetRotatorAxis_Params;
	memcpy_s(&GetRotatorAxis_Params.A, 0xC, &A, 0xC);
	memcpy_s(&GetRotatorAxis_Params.Axis, 0x4, &Axis, 0x4);

	uFnGetRotatorAxis->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetRotatorAxis, &GetRotatorAxis_Params, nullptr);

	uFnGetRotatorAxis->FunctionFlags |= 0x400;

	return GetRotatorAxis_Params.ReturnValue;
};

// Function Core.Object.GetUnAxes
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[230])
// Parameter info:
// struct FRotator                A                              (CPF_Parm)
// struct FVector                 X                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Y                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Z                              (CPF_Parm | CPF_OutParm)

void UObject::GetUnAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z)
{
	static UFunction* uFnGetUnAxes = nullptr;

	if (!uFnGetUnAxes)
	{
		uFnGetUnAxes = UFunction::FindFunction("Function Core.Object.GetUnAxes");
	}

	UObject_execGetUnAxes_Params GetUnAxes_Params;
	memcpy_s(&GetUnAxes_Params.A, 0xC, &A, 0xC);
	memcpy_s(&GetUnAxes_Params.X, 0xC, &X, 0xC);
	memcpy_s(&GetUnAxes_Params.Y, 0xC, &Y, 0xC);
	memcpy_s(&GetUnAxes_Params.Z, 0xC, &Z, 0xC);

	uint16_t iNativeIndex = uFnGetUnAxes->iNative;
	uFnGetUnAxes->iNative = 0;

	uFnGetUnAxes->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetUnAxes, &GetUnAxes_Params, nullptr);

	uFnGetUnAxes->FunctionFlags |= 0x400;

	uFnGetUnAxes->iNative = iNativeIndex;

	memcpy_s(&X, 0xC, &GetUnAxes_Params.X, 0xC);
	memcpy_s(&Y, 0xC, &GetUnAxes_Params.Y, 0xC);
	memcpy_s(&Z, 0xC, &GetUnAxes_Params.Z, 0xC);
};

// Function Core.Object.GetAxes
// [0x00422401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[229])
// Parameter info:
// struct FRotator                A                              (CPF_Parm)
// struct FVector                 X                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Y                              (CPF_Parm | CPF_OutParm)
// struct FVector                 Z                              (CPF_Parm | CPF_OutParm)

void UObject::GetAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z)
{
	static UFunction* uFnGetAxes = nullptr;

	if (!uFnGetAxes)
	{
		uFnGetAxes = UFunction::FindFunction("Function Core.Object.GetAxes");
	}

	UObject_execGetAxes_Params GetAxes_Params;
	memcpy_s(&GetAxes_Params.A, 0xC, &A, 0xC);
	memcpy_s(&GetAxes_Params.X, 0xC, &X, 0xC);
	memcpy_s(&GetAxes_Params.Y, 0xC, &Y, 0xC);
	memcpy_s(&GetAxes_Params.Z, 0xC, &Z, 0xC);

	uint16_t iNativeIndex = uFnGetAxes->iNative;
	uFnGetAxes->iNative = 0;

	uFnGetAxes->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGetAxes, &GetAxes_Params, nullptr);

	uFnGetAxes->FunctionFlags |= 0x400;

	uFnGetAxes->iNative = iNativeIndex;

	memcpy_s(&X, 0xC, &GetAxes_Params.X, 0xC);
	memcpy_s(&Y, 0xC, &GetAxes_Params.Y, 0xC);
	memcpy_s(&Z, 0xC, &GetAxes_Params.Z, 0xC);
};

// Function Core.Object.ClockwiseFrom_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::ClockwiseFrom_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnClockwiseFrom_IntInt = nullptr;

	if (!uFnClockwiseFrom_IntInt)
	{
		uFnClockwiseFrom_IntInt = UFunction::FindFunction("Function Core.Object.ClockwiseFrom_IntInt");
	}

	UObject_execClockwiseFrom_IntInt_Params ClockwiseFrom_IntInt_Params;
	memcpy_s(&ClockwiseFrom_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&ClockwiseFrom_IntInt_Params.B, 0x4, &B, 0x4);

	uFnClockwiseFrom_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnClockwiseFrom_IntInt, &ClockwiseFrom_IntInt_Params, nullptr);

	uFnClockwiseFrom_IntInt->FunctionFlags |= 0x400;

	return ClockwiseFrom_IntInt_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_RotatorRotator
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[319])
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::SubtractEqual_RotatorRotator(struct FRotator B, struct FRotator& A)
{
	static UFunction* uFnSubtractEqual_RotatorRotator = nullptr;

	if (!uFnSubtractEqual_RotatorRotator)
	{
		uFnSubtractEqual_RotatorRotator = UFunction::FindFunction("Function Core.Object.SubtractEqual_RotatorRotator");
	}

	UObject_execSubtractEqual_RotatorRotator_Params SubtractEqual_RotatorRotator_Params;
	memcpy_s(&SubtractEqual_RotatorRotator_Params.B, 0xC, &B, 0xC);
	memcpy_s(&SubtractEqual_RotatorRotator_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnSubtractEqual_RotatorRotator->iNative;
	uFnSubtractEqual_RotatorRotator->iNative = 0;

	uFnSubtractEqual_RotatorRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_RotatorRotator, &SubtractEqual_RotatorRotator_Params, nullptr);

	uFnSubtractEqual_RotatorRotator->FunctionFlags |= 0x400;

	uFnSubtractEqual_RotatorRotator->iNative = iNativeIndex;

	memcpy_s(&A, 0xC, &SubtractEqual_RotatorRotator_Params.A, 0xC);

	return SubtractEqual_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.AddEqual_RotatorRotator
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[318])
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::AddEqual_RotatorRotator(struct FRotator B, struct FRotator& A)
{
	static UFunction* uFnAddEqual_RotatorRotator = nullptr;

	if (!uFnAddEqual_RotatorRotator)
	{
		uFnAddEqual_RotatorRotator = UFunction::FindFunction("Function Core.Object.AddEqual_RotatorRotator");
	}

	UObject_execAddEqual_RotatorRotator_Params AddEqual_RotatorRotator_Params;
	memcpy_s(&AddEqual_RotatorRotator_Params.B, 0xC, &B, 0xC);
	memcpy_s(&AddEqual_RotatorRotator_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnAddEqual_RotatorRotator->iNative;
	uFnAddEqual_RotatorRotator->iNative = 0;

	uFnAddEqual_RotatorRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddEqual_RotatorRotator, &AddEqual_RotatorRotator_Params, nullptr);

	uFnAddEqual_RotatorRotator->FunctionFlags |= 0x400;

	uFnAddEqual_RotatorRotator->iNative = iNativeIndex;

	memcpy_s(&A, 0xC, &AddEqual_RotatorRotator_Params.A, 0xC);

	return AddEqual_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.Subtract_RotatorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[317])
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FRotator UObject::Subtract_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* uFnSubtract_RotatorRotator = nullptr;

	if (!uFnSubtract_RotatorRotator)
	{
		uFnSubtract_RotatorRotator = UFunction::FindFunction("Function Core.Object.Subtract_RotatorRotator");
	}

	UObject_execSubtract_RotatorRotator_Params Subtract_RotatorRotator_Params;
	memcpy_s(&Subtract_RotatorRotator_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Subtract_RotatorRotator_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnSubtract_RotatorRotator->iNative;
	uFnSubtract_RotatorRotator->iNative = 0;

	uFnSubtract_RotatorRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_RotatorRotator, &Subtract_RotatorRotator_Params, nullptr);

	uFnSubtract_RotatorRotator->FunctionFlags |= 0x400;

	uFnSubtract_RotatorRotator->iNative = iNativeIndex;

	return Subtract_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.Add_RotatorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[316])
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FRotator UObject::Add_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* uFnAdd_RotatorRotator = nullptr;

	if (!uFnAdd_RotatorRotator)
	{
		uFnAdd_RotatorRotator = UFunction::FindFunction("Function Core.Object.Add_RotatorRotator");
	}

	UObject_execAdd_RotatorRotator_Params Add_RotatorRotator_Params;
	memcpy_s(&Add_RotatorRotator_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Add_RotatorRotator_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnAdd_RotatorRotator->iNative;
	uFnAdd_RotatorRotator->iNative = 0;

	uFnAdd_RotatorRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAdd_RotatorRotator, &Add_RotatorRotator_Params, nullptr);

	uFnAdd_RotatorRotator->FunctionFlags |= 0x400;

	uFnAdd_RotatorRotator->iNative = iNativeIndex;

	return Add_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_RotatorFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[291])
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::DivideEqual_RotatorFloat(float B, struct FRotator& A)
{
	static UFunction* uFnDivideEqual_RotatorFloat = nullptr;

	if (!uFnDivideEqual_RotatorFloat)
	{
		uFnDivideEqual_RotatorFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_RotatorFloat");
	}

	UObject_execDivideEqual_RotatorFloat_Params DivideEqual_RotatorFloat_Params;
	memcpy_s(&DivideEqual_RotatorFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&DivideEqual_RotatorFloat_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnDivideEqual_RotatorFloat->iNative;
	uFnDivideEqual_RotatorFloat->iNative = 0;

	uFnDivideEqual_RotatorFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_RotatorFloat, &DivideEqual_RotatorFloat_Params, nullptr);

	uFnDivideEqual_RotatorFloat->FunctionFlags |= 0x400;

	uFnDivideEqual_RotatorFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0xC, &DivideEqual_RotatorFloat_Params.A, 0xC);

	return DivideEqual_RotatorFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_RotatorFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[290])
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FRotator                A                              (CPF_Parm | CPF_OutParm)

struct FRotator UObject::MultiplyEqual_RotatorFloat(float B, struct FRotator& A)
{
	static UFunction* uFnMultiplyEqual_RotatorFloat = nullptr;

	if (!uFnMultiplyEqual_RotatorFloat)
	{
		uFnMultiplyEqual_RotatorFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_RotatorFloat");
	}

	UObject_execMultiplyEqual_RotatorFloat_Params MultiplyEqual_RotatorFloat_Params;
	memcpy_s(&MultiplyEqual_RotatorFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&MultiplyEqual_RotatorFloat_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnMultiplyEqual_RotatorFloat->iNative;
	uFnMultiplyEqual_RotatorFloat->iNative = 0;

	uFnMultiplyEqual_RotatorFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_RotatorFloat, &MultiplyEqual_RotatorFloat_Params, nullptr);

	uFnMultiplyEqual_RotatorFloat->FunctionFlags |= 0x400;

	uFnMultiplyEqual_RotatorFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0xC, &MultiplyEqual_RotatorFloat_Params.A, 0xC);

	return MultiplyEqual_RotatorFloat_Params.ReturnValue;
};

// Function Core.Object.Divide_RotatorFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[289])
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FRotator UObject::Divide_RotatorFloat(struct FRotator A, float B)
{
	static UFunction* uFnDivide_RotatorFloat = nullptr;

	if (!uFnDivide_RotatorFloat)
	{
		uFnDivide_RotatorFloat = UFunction::FindFunction("Function Core.Object.Divide_RotatorFloat");
	}

	UObject_execDivide_RotatorFloat_Params Divide_RotatorFloat_Params;
	memcpy_s(&Divide_RotatorFloat_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Divide_RotatorFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnDivide_RotatorFloat->iNative;
	uFnDivide_RotatorFloat->iNative = 0;

	uFnDivide_RotatorFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivide_RotatorFloat, &Divide_RotatorFloat_Params, nullptr);

	uFnDivide_RotatorFloat->FunctionFlags |= 0x400;

	uFnDivide_RotatorFloat->iNative = iNativeIndex;

	return Divide_RotatorFloat_Params.ReturnValue;
};

// Function Core.Object.Multiply_FloatRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[288])
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FRotator UObject::Multiply_FloatRotator(float A, struct FRotator B)
{
	static UFunction* uFnMultiply_FloatRotator = nullptr;

	if (!uFnMultiply_FloatRotator)
	{
		uFnMultiply_FloatRotator = UFunction::FindFunction("Function Core.Object.Multiply_FloatRotator");
	}

	UObject_execMultiply_FloatRotator_Params Multiply_FloatRotator_Params;
	memcpy_s(&Multiply_FloatRotator_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_FloatRotator_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnMultiply_FloatRotator->iNative;
	uFnMultiply_FloatRotator->iNative = 0;

	uFnMultiply_FloatRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_FloatRotator, &Multiply_FloatRotator_Params, nullptr);

	uFnMultiply_FloatRotator->FunctionFlags |= 0x400;

	uFnMultiply_FloatRotator->iNative = iNativeIndex;

	return Multiply_FloatRotator_Params.ReturnValue;
};

// Function Core.Object.Multiply_RotatorFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[287])
// Parameter info:
// struct FRotator                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FRotator UObject::Multiply_RotatorFloat(struct FRotator A, float B)
{
	static UFunction* uFnMultiply_RotatorFloat = nullptr;

	if (!uFnMultiply_RotatorFloat)
	{
		uFnMultiply_RotatorFloat = UFunction::FindFunction("Function Core.Object.Multiply_RotatorFloat");
	}

	UObject_execMultiply_RotatorFloat_Params Multiply_RotatorFloat_Params;
	memcpy_s(&Multiply_RotatorFloat_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Multiply_RotatorFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnMultiply_RotatorFloat->iNative;
	uFnMultiply_RotatorFloat->iNative = 0;

	uFnMultiply_RotatorFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_RotatorFloat, &Multiply_RotatorFloat_Params, nullptr);

	uFnMultiply_RotatorFloat->FunctionFlags |= 0x400;

	uFnMultiply_RotatorFloat->iNative = iNativeIndex;

	return Multiply_RotatorFloat_Params.ReturnValue;
};

// Function Core.Object.NotEqual_RotatorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[203])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

bool UObject::NotEqual_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* uFnNotEqual_RotatorRotator = nullptr;

	if (!uFnNotEqual_RotatorRotator)
	{
		uFnNotEqual_RotatorRotator = UFunction::FindFunction("Function Core.Object.NotEqual_RotatorRotator");
	}

	UObject_execNotEqual_RotatorRotator_Params NotEqual_RotatorRotator_Params;
	memcpy_s(&NotEqual_RotatorRotator_Params.A, 0xC, &A, 0xC);
	memcpy_s(&NotEqual_RotatorRotator_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnNotEqual_RotatorRotator->iNative;
	uFnNotEqual_RotatorRotator->iNative = 0;

	uFnNotEqual_RotatorRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_RotatorRotator, &NotEqual_RotatorRotator_Params, nullptr);

	uFnNotEqual_RotatorRotator->FunctionFlags |= 0x400;

	uFnNotEqual_RotatorRotator->iNative = iNativeIndex;

	return NotEqual_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_RotatorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[142])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

bool UObject::EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* uFnEqualEqual_RotatorRotator = nullptr;

	if (!uFnEqualEqual_RotatorRotator)
	{
		uFnEqualEqual_RotatorRotator = UFunction::FindFunction("Function Core.Object.EqualEqual_RotatorRotator");
	}

	UObject_execEqualEqual_RotatorRotator_Params EqualEqual_RotatorRotator_Params;
	memcpy_s(&EqualEqual_RotatorRotator_Params.A, 0xC, &A, 0xC);
	memcpy_s(&EqualEqual_RotatorRotator_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnEqualEqual_RotatorRotator->iNative;
	uFnEqualEqual_RotatorRotator->iNative = 0;

	uFnEqualEqual_RotatorRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_RotatorRotator, &EqualEqual_RotatorRotator_Params, nullptr);

	uFnEqualEqual_RotatorRotator->FunctionFlags |= 0x400;

	uFnEqualEqual_RotatorRotator->iNative = iNativeIndex;

	return EqualEqual_RotatorRotator_Params.ReturnValue;
};

// Function Core.Object.InCylinder
// [0x00824103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_NetMulticast | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FRotator                Dir                            (CPF_Parm)
// float                          Width                          (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// unsigned long                  bIgnoreZ                       (CPF_OptionalParm | CPF_Parm)

bool UObject::InCylinder(struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ)
{
	static UFunction* uFnInCylinder = nullptr;

	if (!uFnInCylinder)
	{
		uFnInCylinder = UFunction::FindFunction("Function Core.Object.InCylinder");
	}

	UObject_execInCylinder_Params InCylinder_Params;
	memcpy_s(&InCylinder_Params.Origin, 0xC, &Origin, 0xC);
	memcpy_s(&InCylinder_Params.Dir, 0xC, &Dir, 0xC);
	memcpy_s(&InCylinder_Params.Width, 0x4, &Width, 0x4);
	memcpy_s(&InCylinder_Params.A, 0xC, &A, 0xC);
	InCylinder_Params.bIgnoreZ = bIgnoreZ;

	this->ProcessEvent(uFnInCylinder, &InCylinder_Params, nullptr);

	return InCylinder_Params.ReturnValue;
};

// Function Core.Object.NoZDot
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

float UObject::NoZDot(struct FVector A, struct FVector B)
{
	static UFunction* uFnNoZDot = nullptr;

	if (!uFnNoZDot)
	{
		uFnNoZDot = UFunction::FindFunction("Function Core.Object.NoZDot");
	}

	UObject_execNoZDot_Params NoZDot_Params;
	memcpy_s(&NoZDot_Params.A, 0xC, &A, 0xC);
	memcpy_s(&NoZDot_Params.B, 0xC, &B, 0xC);

	uFnNoZDot->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNoZDot, &NoZDot_Params, nullptr);

	uFnNoZDot->FunctionFlags |= 0x400;

	return NoZDot_Params.ReturnValue;
};

// Function Core.Object.ClampLength
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 V                              (CPF_Parm)
// float                          MaxLength                      (CPF_Parm)

struct FVector UObject::ClampLength(struct FVector V, float MaxLength)
{
	static UFunction* uFnClampLength = nullptr;

	if (!uFnClampLength)
	{
		uFnClampLength = UFunction::FindFunction("Function Core.Object.ClampLength");
	}

	UObject_execClampLength_Params ClampLength_Params;
	memcpy_s(&ClampLength_Params.V, 0xC, &V, 0xC);
	memcpy_s(&ClampLength_Params.MaxLength, 0x4, &MaxLength, 0x4);

	uFnClampLength->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnClampLength, &ClampLength_Params, nullptr);

	uFnClampLength->FunctionFlags |= 0x400;

	return ClampLength_Params.ReturnValue;
};

// Function Core.Object.VInterpTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Current                        (CPF_Parm)
// struct FVector                 Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)

struct FVector UObject::VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* uFnVInterpTo = nullptr;

	if (!uFnVInterpTo)
	{
		uFnVInterpTo = UFunction::FindFunction("Function Core.Object.VInterpTo");
	}

	UObject_execVInterpTo_Params VInterpTo_Params;
	memcpy_s(&VInterpTo_Params.Current, 0xC, &Current, 0xC);
	memcpy_s(&VInterpTo_Params.Target, 0xC, &Target, 0xC);
	memcpy_s(&VInterpTo_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&VInterpTo_Params.InterpSpeed, 0x4, &InterpSpeed, 0x4);

	uFnVInterpTo->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnVInterpTo, &VInterpTo_Params, nullptr);

	uFnVInterpTo->FunctionFlags |= 0x400;

	return VInterpTo_Params.ReturnValue;
};

// Function Core.Object.IsZero
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[1501])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

bool UObject::IsZero(struct FVector A)
{
	static UFunction* uFnIsZero = nullptr;

	if (!uFnIsZero)
	{
		uFnIsZero = UFunction::FindFunction("Function Core.Object.IsZero");
	}

	UObject_execIsZero_Params IsZero_Params;
	memcpy_s(&IsZero_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnIsZero->iNative;
	uFnIsZero->iNative = 0;

	uFnIsZero->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnIsZero, &IsZero_Params, nullptr);

	uFnIsZero->FunctionFlags |= 0x400;

	uFnIsZero->iNative = iNativeIndex;

	return IsZero_Params.ReturnValue;
};

// Function Core.Object.ProjectOnTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[1500])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 X                              (CPF_Parm)
// struct FVector                 Y                              (CPF_Parm)

struct FVector UObject::ProjectOnTo(struct FVector X, struct FVector Y)
{
	static UFunction* uFnProjectOnTo = nullptr;

	if (!uFnProjectOnTo)
	{
		uFnProjectOnTo = UFunction::FindFunction("Function Core.Object.ProjectOnTo");
	}

	UObject_execProjectOnTo_Params ProjectOnTo_Params;
	memcpy_s(&ProjectOnTo_Params.X, 0xC, &X, 0xC);
	memcpy_s(&ProjectOnTo_Params.Y, 0xC, &Y, 0xC);

	uint16_t iNativeIndex = uFnProjectOnTo->iNative;
	uFnProjectOnTo->iNative = 0;

	uFnProjectOnTo->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnProjectOnTo, &ProjectOnTo_Params, nullptr);

	uFnProjectOnTo->FunctionFlags |= 0x400;

	uFnProjectOnTo->iNative = iNativeIndex;

	return ProjectOnTo_Params.ReturnValue;
};

// Function Core.Object.MirrorVectorByNormal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[300])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 InVect                         (CPF_Parm)
// struct FVector                 InNormal                       (CPF_Parm)

struct FVector UObject::MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal)
{
	static UFunction* uFnMirrorVectorByNormal = nullptr;

	if (!uFnMirrorVectorByNormal)
	{
		uFnMirrorVectorByNormal = UFunction::FindFunction("Function Core.Object.MirrorVectorByNormal");
	}

	UObject_execMirrorVectorByNormal_Params MirrorVectorByNormal_Params;
	memcpy_s(&MirrorVectorByNormal_Params.InVect, 0xC, &InVect, 0xC);
	memcpy_s(&MirrorVectorByNormal_Params.InNormal, 0xC, &InNormal, 0xC);

	uint16_t iNativeIndex = uFnMirrorVectorByNormal->iNative;
	uFnMirrorVectorByNormal->iNative = 0;

	uFnMirrorVectorByNormal->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMirrorVectorByNormal, &MirrorVectorByNormal_Params, nullptr);

	uFnMirrorVectorByNormal->FunctionFlags |= 0x400;

	uFnMirrorVectorByNormal->iNative = iNativeIndex;

	return MirrorVectorByNormal_Params.ReturnValue;
};

// Function Core.Object.VRandCone2
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Dir                            (CPF_Parm)
// float                          HorizontalConeHalfAngleRadians (CPF_Parm)
// float                          VerticalConeHalfAngleRadians   (CPF_Parm)

struct FVector UObject::VRandCone2(struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians)
{
	static UFunction* uFnVRandCone2 = nullptr;

	if (!uFnVRandCone2)
	{
		uFnVRandCone2 = UFunction::FindFunction("Function Core.Object.VRandCone2");
	}

	UObject_execVRandCone2_Params VRandCone2_Params;
	memcpy_s(&VRandCone2_Params.Dir, 0xC, &Dir, 0xC);
	memcpy_s(&VRandCone2_Params.HorizontalConeHalfAngleRadians, 0x4, &HorizontalConeHalfAngleRadians, 0x4);
	memcpy_s(&VRandCone2_Params.VerticalConeHalfAngleRadians, 0x4, &VerticalConeHalfAngleRadians, 0x4);

	uFnVRandCone2->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnVRandCone2, &VRandCone2_Params, nullptr);

	uFnVRandCone2->FunctionFlags |= 0x400;

	return VRandCone2_Params.ReturnValue;
};

// Function Core.Object.VRandCone
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 Dir                            (CPF_Parm)
// float                          ConeHalfAngleRadians           (CPF_Parm)

struct FVector UObject::VRandCone(struct FVector Dir, float ConeHalfAngleRadians)
{
	static UFunction* uFnVRandCone = nullptr;

	if (!uFnVRandCone)
	{
		uFnVRandCone = UFunction::FindFunction("Function Core.Object.VRandCone");
	}

	UObject_execVRandCone_Params VRandCone_Params;
	memcpy_s(&VRandCone_Params.Dir, 0xC, &Dir, 0xC);
	memcpy_s(&VRandCone_Params.ConeHalfAngleRadians, 0x4, &ConeHalfAngleRadians, 0x4);

	uFnVRandCone->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnVRandCone, &VRandCone_Params, nullptr);

	uFnVRandCone->FunctionFlags |= 0x400;

	return VRandCone_Params.ReturnValue;
};

// Function Core.Object.VRand
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[252])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector UObject::VRand()
{
	static UFunction* uFnVRand = nullptr;

	if (!uFnVRand)
	{
		uFnVRand = UFunction::FindFunction("Function Core.Object.VRand");
	}

	UObject_execVRand_Params VRand_Params;

	uint16_t iNativeIndex = uFnVRand->iNative;
	uFnVRand->iNative = 0;

	uFnVRand->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnVRand, &VRand_Params, nullptr);

	uFnVRand->FunctionFlags |= 0x400;

	uFnVRand->iNative = iNativeIndex;

	return VRand_Params.ReturnValue;
};

// Function Core.Object.VLerp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

struct FVector UObject::VLerp(struct FVector A, struct FVector B, float Alpha)
{
	static UFunction* uFnVLerp = nullptr;

	if (!uFnVLerp)
	{
		uFnVLerp = UFunction::FindFunction("Function Core.Object.VLerp");
	}

	UObject_execVLerp_Params VLerp_Params;
	memcpy_s(&VLerp_Params.A, 0xC, &A, 0xC);
	memcpy_s(&VLerp_Params.B, 0xC, &B, 0xC);
	memcpy_s(&VLerp_Params.Alpha, 0x4, &Alpha, 0x4);

	uFnVLerp->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnVLerp, &VLerp_Params, nullptr);

	uFnVLerp->FunctionFlags |= 0x400;

	return VLerp_Params.ReturnValue;
};

// Function Core.Object.Normal2D
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[227])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::Normal2D(struct FVector A)
{
	static UFunction* uFnNormal2D = nullptr;

	if (!uFnNormal2D)
	{
		uFnNormal2D = UFunction::FindFunction("Function Core.Object.Normal2D");
	}

	UObject_execNormal2D_Params Normal2D_Params;
	memcpy_s(&Normal2D_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnNormal2D->iNative;
	uFnNormal2D->iNative = 0;

	uFnNormal2D->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNormal2D, &Normal2D_Params, nullptr);

	uFnNormal2D->FunctionFlags |= 0x400;

	uFnNormal2D->iNative = iNativeIndex;

	return Normal2D_Params.ReturnValue;
};

// Function Core.Object.Normal
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[226])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::Normal(struct FVector A)
{
	static UFunction* uFnNormal = nullptr;

	if (!uFnNormal)
	{
		uFnNormal = UFunction::FindFunction("Function Core.Object.Normal");
	}

	UObject_execNormal_Params Normal_Params;
	memcpy_s(&Normal_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnNormal->iNative;
	uFnNormal->iNative = 0;

	uFnNormal->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNormal, &Normal_Params, nullptr);

	uFnNormal->FunctionFlags |= 0x400;

	uFnNormal->iNative = iNativeIndex;

	return Normal_Params.ReturnValue;
};

// Function Core.Object.VSizeSq2D
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSizeSq2D(struct FVector A)
{
	static UFunction* uFnVSizeSq2D = nullptr;

	if (!uFnVSizeSq2D)
	{
		uFnVSizeSq2D = UFunction::FindFunction("Function Core.Object.VSizeSq2D");
	}

	UObject_execVSizeSq2D_Params VSizeSq2D_Params;
	memcpy_s(&VSizeSq2D_Params.A, 0xC, &A, 0xC);

	uFnVSizeSq2D->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnVSizeSq2D, &VSizeSq2D_Params, nullptr);

	uFnVSizeSq2D->FunctionFlags |= 0x400;

	return VSizeSq2D_Params.ReturnValue;
};

// Function Core.Object.VSizeSq
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[228])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSizeSq(struct FVector A)
{
	static UFunction* uFnVSizeSq = nullptr;

	if (!uFnVSizeSq)
	{
		uFnVSizeSq = UFunction::FindFunction("Function Core.Object.VSizeSq");
	}

	UObject_execVSizeSq_Params VSizeSq_Params;
	memcpy_s(&VSizeSq_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnVSizeSq->iNative;
	uFnVSizeSq->iNative = 0;

	uFnVSizeSq->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnVSizeSq, &VSizeSq_Params, nullptr);

	uFnVSizeSq->FunctionFlags |= 0x400;

	uFnVSizeSq->iNative = iNativeIndex;

	return VSizeSq_Params.ReturnValue;
};

// Function Core.Object.VSize2D
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSize2D(struct FVector A)
{
	static UFunction* uFnVSize2D = nullptr;

	if (!uFnVSize2D)
	{
		uFnVSize2D = UFunction::FindFunction("Function Core.Object.VSize2D");
	}

	UObject_execVSize2D_Params VSize2D_Params;
	memcpy_s(&VSize2D_Params.A, 0xC, &A, 0xC);

	uFnVSize2D->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnVSize2D, &VSize2D_Params, nullptr);

	uFnVSize2D->FunctionFlags |= 0x400;

	return VSize2D_Params.ReturnValue;
};

// Function Core.Object.VSize
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[225])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

float UObject::VSize(struct FVector A)
{
	static UFunction* uFnVSize = nullptr;

	if (!uFnVSize)
	{
		uFnVSize = UFunction::FindFunction("Function Core.Object.VSize");
	}

	UObject_execVSize_Params VSize_Params;
	memcpy_s(&VSize_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnVSize->iNative;
	uFnVSize->iNative = 0;

	uFnVSize->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnVSize, &VSize_Params, nullptr);

	uFnVSize->FunctionFlags |= 0x400;

	uFnVSize->iNative = iNativeIndex;

	return VSize_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_VectorVector
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[224])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::SubtractEqual_VectorVector(struct FVector B, struct FVector& A)
{
	static UFunction* uFnSubtractEqual_VectorVector = nullptr;

	if (!uFnSubtractEqual_VectorVector)
	{
		uFnSubtractEqual_VectorVector = UFunction::FindFunction("Function Core.Object.SubtractEqual_VectorVector");
	}

	UObject_execSubtractEqual_VectorVector_Params SubtractEqual_VectorVector_Params;
	memcpy_s(&SubtractEqual_VectorVector_Params.B, 0xC, &B, 0xC);
	memcpy_s(&SubtractEqual_VectorVector_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnSubtractEqual_VectorVector->iNative;
	uFnSubtractEqual_VectorVector->iNative = 0;

	uFnSubtractEqual_VectorVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_VectorVector, &SubtractEqual_VectorVector_Params, nullptr);

	uFnSubtractEqual_VectorVector->FunctionFlags |= 0x400;

	uFnSubtractEqual_VectorVector->iNative = iNativeIndex;

	memcpy_s(&A, 0xC, &SubtractEqual_VectorVector_Params.A, 0xC);

	return SubtractEqual_VectorVector_Params.ReturnValue;
};

// Function Core.Object.AddEqual_VectorVector
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[223])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::AddEqual_VectorVector(struct FVector B, struct FVector& A)
{
	static UFunction* uFnAddEqual_VectorVector = nullptr;

	if (!uFnAddEqual_VectorVector)
	{
		uFnAddEqual_VectorVector = UFunction::FindFunction("Function Core.Object.AddEqual_VectorVector");
	}

	UObject_execAddEqual_VectorVector_Params AddEqual_VectorVector_Params;
	memcpy_s(&AddEqual_VectorVector_Params.B, 0xC, &B, 0xC);
	memcpy_s(&AddEqual_VectorVector_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnAddEqual_VectorVector->iNative;
	uFnAddEqual_VectorVector->iNative = 0;

	uFnAddEqual_VectorVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddEqual_VectorVector, &AddEqual_VectorVector_Params, nullptr);

	uFnAddEqual_VectorVector->FunctionFlags |= 0x400;

	uFnAddEqual_VectorVector->iNative = iNativeIndex;

	memcpy_s(&A, 0xC, &AddEqual_VectorVector_Params.A, 0xC);

	return AddEqual_VectorVector_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_VectorFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[222])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::DivideEqual_VectorFloat(float B, struct FVector& A)
{
	static UFunction* uFnDivideEqual_VectorFloat = nullptr;

	if (!uFnDivideEqual_VectorFloat)
	{
		uFnDivideEqual_VectorFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_VectorFloat");
	}

	UObject_execDivideEqual_VectorFloat_Params DivideEqual_VectorFloat_Params;
	memcpy_s(&DivideEqual_VectorFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&DivideEqual_VectorFloat_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnDivideEqual_VectorFloat->iNative;
	uFnDivideEqual_VectorFloat->iNative = 0;

	uFnDivideEqual_VectorFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_VectorFloat, &DivideEqual_VectorFloat_Params, nullptr);

	uFnDivideEqual_VectorFloat->FunctionFlags |= 0x400;

	uFnDivideEqual_VectorFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0xC, &DivideEqual_VectorFloat_Params.A, 0xC);

	return DivideEqual_VectorFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_VectorVector
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[297])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::MultiplyEqual_VectorVector(struct FVector B, struct FVector& A)
{
	static UFunction* uFnMultiplyEqual_VectorVector = nullptr;

	if (!uFnMultiplyEqual_VectorVector)
	{
		uFnMultiplyEqual_VectorVector = UFunction::FindFunction("Function Core.Object.MultiplyEqual_VectorVector");
	}

	UObject_execMultiplyEqual_VectorVector_Params MultiplyEqual_VectorVector_Params;
	memcpy_s(&MultiplyEqual_VectorVector_Params.B, 0xC, &B, 0xC);
	memcpy_s(&MultiplyEqual_VectorVector_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnMultiplyEqual_VectorVector->iNative;
	uFnMultiplyEqual_VectorVector->iNative = 0;

	uFnMultiplyEqual_VectorVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_VectorVector, &MultiplyEqual_VectorVector_Params, nullptr);

	uFnMultiplyEqual_VectorVector->FunctionFlags |= 0x400;

	uFnMultiplyEqual_VectorVector->iNative = iNativeIndex;

	memcpy_s(&A, 0xC, &MultiplyEqual_VectorVector_Params.A, 0xC);

	return MultiplyEqual_VectorVector_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_VectorFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[221])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FVector                 A                              (CPF_Parm | CPF_OutParm)

struct FVector UObject::MultiplyEqual_VectorFloat(float B, struct FVector& A)
{
	static UFunction* uFnMultiplyEqual_VectorFloat = nullptr;

	if (!uFnMultiplyEqual_VectorFloat)
	{
		uFnMultiplyEqual_VectorFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_VectorFloat");
	}

	UObject_execMultiplyEqual_VectorFloat_Params MultiplyEqual_VectorFloat_Params;
	memcpy_s(&MultiplyEqual_VectorFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&MultiplyEqual_VectorFloat_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnMultiplyEqual_VectorFloat->iNative;
	uFnMultiplyEqual_VectorFloat->iNative = 0;

	uFnMultiplyEqual_VectorFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_VectorFloat, &MultiplyEqual_VectorFloat_Params, nullptr);

	uFnMultiplyEqual_VectorFloat->FunctionFlags |= 0x400;

	uFnMultiplyEqual_VectorFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0xC, &MultiplyEqual_VectorFloat_Params.A, 0xC);

	return MultiplyEqual_VectorFloat_Params.ReturnValue;
};

// Function Core.Object.Cross_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[220])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Cross_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnCross_VectorVector = nullptr;

	if (!uFnCross_VectorVector)
	{
		uFnCross_VectorVector = UFunction::FindFunction("Function Core.Object.Cross_VectorVector");
	}

	UObject_execCross_VectorVector_Params Cross_VectorVector_Params;
	memcpy_s(&Cross_VectorVector_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Cross_VectorVector_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnCross_VectorVector->iNative;
	uFnCross_VectorVector->iNative = 0;

	uFnCross_VectorVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnCross_VectorVector, &Cross_VectorVector_Params, nullptr);

	uFnCross_VectorVector->FunctionFlags |= 0x400;

	uFnCross_VectorVector->iNative = iNativeIndex;

	return Cross_VectorVector_Params.ReturnValue;
};

// Function Core.Object.Dot_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[219])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

float UObject::Dot_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnDot_VectorVector = nullptr;

	if (!uFnDot_VectorVector)
	{
		uFnDot_VectorVector = UFunction::FindFunction("Function Core.Object.Dot_VectorVector");
	}

	UObject_execDot_VectorVector_Params Dot_VectorVector_Params;
	memcpy_s(&Dot_VectorVector_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Dot_VectorVector_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnDot_VectorVector->iNative;
	uFnDot_VectorVector->iNative = 0;

	uFnDot_VectorVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDot_VectorVector, &Dot_VectorVector_Params, nullptr);

	uFnDot_VectorVector->FunctionFlags |= 0x400;

	uFnDot_VectorVector->iNative = iNativeIndex;

	return Dot_VectorVector_Params.ReturnValue;
};

// Function Core.Object.NotEqual_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[218])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

bool UObject::NotEqual_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnNotEqual_VectorVector = nullptr;

	if (!uFnNotEqual_VectorVector)
	{
		uFnNotEqual_VectorVector = UFunction::FindFunction("Function Core.Object.NotEqual_VectorVector");
	}

	UObject_execNotEqual_VectorVector_Params NotEqual_VectorVector_Params;
	memcpy_s(&NotEqual_VectorVector_Params.A, 0xC, &A, 0xC);
	memcpy_s(&NotEqual_VectorVector_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnNotEqual_VectorVector->iNative;
	uFnNotEqual_VectorVector->iNative = 0;

	uFnNotEqual_VectorVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_VectorVector, &NotEqual_VectorVector_Params, nullptr);

	uFnNotEqual_VectorVector->FunctionFlags |= 0x400;

	uFnNotEqual_VectorVector->iNative = iNativeIndex;

	return NotEqual_VectorVector_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[217])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

bool UObject::EqualEqual_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnEqualEqual_VectorVector = nullptr;

	if (!uFnEqualEqual_VectorVector)
	{
		uFnEqualEqual_VectorVector = UFunction::FindFunction("Function Core.Object.EqualEqual_VectorVector");
	}

	UObject_execEqualEqual_VectorVector_Params EqualEqual_VectorVector_Params;
	memcpy_s(&EqualEqual_VectorVector_Params.A, 0xC, &A, 0xC);
	memcpy_s(&EqualEqual_VectorVector_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnEqualEqual_VectorVector->iNative;
	uFnEqualEqual_VectorVector->iNative = 0;

	uFnEqualEqual_VectorVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_VectorVector, &EqualEqual_VectorVector_Params, nullptr);

	uFnEqualEqual_VectorVector->FunctionFlags |= 0x400;

	uFnEqualEqual_VectorVector->iNative = iNativeIndex;

	return EqualEqual_VectorVector_Params.ReturnValue;
};

// Function Core.Object.GreaterGreater_VectorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[276])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FVector UObject::GreaterGreater_VectorRotator(struct FVector A, struct FRotator B)
{
	static UFunction* uFnGreaterGreater_VectorRotator = nullptr;

	if (!uFnGreaterGreater_VectorRotator)
	{
		uFnGreaterGreater_VectorRotator = UFunction::FindFunction("Function Core.Object.GreaterGreater_VectorRotator");
	}

	UObject_execGreaterGreater_VectorRotator_Params GreaterGreater_VectorRotator_Params;
	memcpy_s(&GreaterGreater_VectorRotator_Params.A, 0xC, &A, 0xC);
	memcpy_s(&GreaterGreater_VectorRotator_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnGreaterGreater_VectorRotator->iNative;
	uFnGreaterGreater_VectorRotator->iNative = 0;

	uFnGreaterGreater_VectorRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterGreater_VectorRotator, &GreaterGreater_VectorRotator_Params, nullptr);

	uFnGreaterGreater_VectorRotator->FunctionFlags |= 0x400;

	uFnGreaterGreater_VectorRotator->iNative = iNativeIndex;

	return GreaterGreater_VectorRotator_Params.ReturnValue;
};

// Function Core.Object.LessLess_VectorRotator
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[275])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)

struct FVector UObject::LessLess_VectorRotator(struct FVector A, struct FRotator B)
{
	static UFunction* uFnLessLess_VectorRotator = nullptr;

	if (!uFnLessLess_VectorRotator)
	{
		uFnLessLess_VectorRotator = UFunction::FindFunction("Function Core.Object.LessLess_VectorRotator");
	}

	UObject_execLessLess_VectorRotator_Params LessLess_VectorRotator_Params;
	memcpy_s(&LessLess_VectorRotator_Params.A, 0xC, &A, 0xC);
	memcpy_s(&LessLess_VectorRotator_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnLessLess_VectorRotator->iNative;
	uFnLessLess_VectorRotator->iNative = 0;

	uFnLessLess_VectorRotator->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLessLess_VectorRotator, &LessLess_VectorRotator_Params, nullptr);

	uFnLessLess_VectorRotator->FunctionFlags |= 0x400;

	uFnLessLess_VectorRotator->iNative = iNativeIndex;

	return LessLess_VectorRotator_Params.ReturnValue;
};

// Function Core.Object.Subtract_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[216])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Subtract_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnSubtract_VectorVector = nullptr;

	if (!uFnSubtract_VectorVector)
	{
		uFnSubtract_VectorVector = UFunction::FindFunction("Function Core.Object.Subtract_VectorVector");
	}

	UObject_execSubtract_VectorVector_Params Subtract_VectorVector_Params;
	memcpy_s(&Subtract_VectorVector_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Subtract_VectorVector_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnSubtract_VectorVector->iNative;
	uFnSubtract_VectorVector->iNative = 0;

	uFnSubtract_VectorVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_VectorVector, &Subtract_VectorVector_Params, nullptr);

	uFnSubtract_VectorVector->FunctionFlags |= 0x400;

	uFnSubtract_VectorVector->iNative = iNativeIndex;

	return Subtract_VectorVector_Params.ReturnValue;
};

// Function Core.Object.Add_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[215])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Add_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnAdd_VectorVector = nullptr;

	if (!uFnAdd_VectorVector)
	{
		uFnAdd_VectorVector = UFunction::FindFunction("Function Core.Object.Add_VectorVector");
	}

	UObject_execAdd_VectorVector_Params Add_VectorVector_Params;
	memcpy_s(&Add_VectorVector_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Add_VectorVector_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnAdd_VectorVector->iNative;
	uFnAdd_VectorVector->iNative = 0;

	uFnAdd_VectorVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAdd_VectorVector, &Add_VectorVector_Params, nullptr);

	uFnAdd_VectorVector->FunctionFlags |= 0x400;

	uFnAdd_VectorVector->iNative = iNativeIndex;

	return Add_VectorVector_Params.ReturnValue;
};

// Function Core.Object.Divide_VectorFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[214])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector UObject::Divide_VectorFloat(struct FVector A, float B)
{
	static UFunction* uFnDivide_VectorFloat = nullptr;

	if (!uFnDivide_VectorFloat)
	{
		uFnDivide_VectorFloat = UFunction::FindFunction("Function Core.Object.Divide_VectorFloat");
	}

	UObject_execDivide_VectorFloat_Params Divide_VectorFloat_Params;
	memcpy_s(&Divide_VectorFloat_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Divide_VectorFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnDivide_VectorFloat->iNative;
	uFnDivide_VectorFloat->iNative = 0;

	uFnDivide_VectorFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivide_VectorFloat, &Divide_VectorFloat_Params, nullptr);

	uFnDivide_VectorFloat->FunctionFlags |= 0x400;

	uFnDivide_VectorFloat->iNative = iNativeIndex;

	return Divide_VectorFloat_Params.ReturnValue;
};

// Function Core.Object.Multiply_VectorVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[296])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Multiply_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* uFnMultiply_VectorVector = nullptr;

	if (!uFnMultiply_VectorVector)
	{
		uFnMultiply_VectorVector = UFunction::FindFunction("Function Core.Object.Multiply_VectorVector");
	}

	UObject_execMultiply_VectorVector_Params Multiply_VectorVector_Params;
	memcpy_s(&Multiply_VectorVector_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Multiply_VectorVector_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnMultiply_VectorVector->iNative;
	uFnMultiply_VectorVector->iNative = 0;

	uFnMultiply_VectorVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_VectorVector, &Multiply_VectorVector_Params, nullptr);

	uFnMultiply_VectorVector->FunctionFlags |= 0x400;

	uFnMultiply_VectorVector->iNative = iNativeIndex;

	return Multiply_VectorVector_Params.ReturnValue;
};

// Function Core.Object.Multiply_FloatVector
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[213])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)

struct FVector UObject::Multiply_FloatVector(float A, struct FVector B)
{
	static UFunction* uFnMultiply_FloatVector = nullptr;

	if (!uFnMultiply_FloatVector)
	{
		uFnMultiply_FloatVector = UFunction::FindFunction("Function Core.Object.Multiply_FloatVector");
	}

	UObject_execMultiply_FloatVector_Params Multiply_FloatVector_Params;
	memcpy_s(&Multiply_FloatVector_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_FloatVector_Params.B, 0xC, &B, 0xC);

	uint16_t iNativeIndex = uFnMultiply_FloatVector->iNative;
	uFnMultiply_FloatVector->iNative = 0;

	uFnMultiply_FloatVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_FloatVector, &Multiply_FloatVector_Params, nullptr);

	uFnMultiply_FloatVector->FunctionFlags |= 0x400;

	uFnMultiply_FloatVector->iNative = iNativeIndex;

	return Multiply_FloatVector_Params.ReturnValue;
};

// Function Core.Object.Multiply_VectorFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[212])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

struct FVector UObject::Multiply_VectorFloat(struct FVector A, float B)
{
	static UFunction* uFnMultiply_VectorFloat = nullptr;

	if (!uFnMultiply_VectorFloat)
	{
		uFnMultiply_VectorFloat = UFunction::FindFunction("Function Core.Object.Multiply_VectorFloat");
	}

	UObject_execMultiply_VectorFloat_Params Multiply_VectorFloat_Params;
	memcpy_s(&Multiply_VectorFloat_Params.A, 0xC, &A, 0xC);
	memcpy_s(&Multiply_VectorFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnMultiply_VectorFloat->iNative;
	uFnMultiply_VectorFloat->iNative = 0;

	uFnMultiply_VectorFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_VectorFloat, &Multiply_VectorFloat_Params, nullptr);

	uFnMultiply_VectorFloat->FunctionFlags |= 0x400;

	uFnMultiply_VectorFloat->iNative = iNativeIndex;

	return Multiply_VectorFloat_Params.ReturnValue;
};

// Function Core.Object.Subtract_PreVector
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[211])
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FVector                 A                              (CPF_Parm)

struct FVector UObject::Subtract_PreVector(struct FVector A)
{
	static UFunction* uFnSubtract_PreVector = nullptr;

	if (!uFnSubtract_PreVector)
	{
		uFnSubtract_PreVector = UFunction::FindFunction("Function Core.Object.Subtract_PreVector");
	}

	UObject_execSubtract_PreVector_Params Subtract_PreVector_Params;
	memcpy_s(&Subtract_PreVector_Params.A, 0xC, &A, 0xC);

	uint16_t iNativeIndex = uFnSubtract_PreVector->iNative;
	uFnSubtract_PreVector->iNative = 0;

	uFnSubtract_PreVector->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_PreVector, &Subtract_PreVector_Params, nullptr);

	uFnSubtract_PreVector->FunctionFlags |= 0x400;

	uFnSubtract_PreVector->iNative = iNativeIndex;

	return Subtract_PreVector_Params.ReturnValue;
};

// Function Core.Object.FInterpConstantTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Current                        (CPF_Parm)
// float                          Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)

float UObject::FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* uFnFInterpConstantTo = nullptr;

	if (!uFnFInterpConstantTo)
	{
		uFnFInterpConstantTo = UFunction::FindFunction("Function Core.Object.FInterpConstantTo");
	}

	UObject_execFInterpConstantTo_Params FInterpConstantTo_Params;
	memcpy_s(&FInterpConstantTo_Params.Current, 0x4, &Current, 0x4);
	memcpy_s(&FInterpConstantTo_Params.Target, 0x4, &Target, 0x4);
	memcpy_s(&FInterpConstantTo_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&FInterpConstantTo_Params.InterpSpeed, 0x4, &InterpSpeed, 0x4);

	uFnFInterpConstantTo->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFInterpConstantTo, &FInterpConstantTo_Params, nullptr);

	uFnFInterpConstantTo->FunctionFlags |= 0x400;

	return FInterpConstantTo_Params.ReturnValue;
};

// Function Core.Object.FInterpTo
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Current                        (CPF_Parm)
// float                          Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)

float UObject::FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* uFnFInterpTo = nullptr;

	if (!uFnFInterpTo)
	{
		uFnFInterpTo = UFunction::FindFunction("Function Core.Object.FInterpTo");
	}

	UObject_execFInterpTo_Params FInterpTo_Params;
	memcpy_s(&FInterpTo_Params.Current, 0x4, &Current, 0x4);
	memcpy_s(&FInterpTo_Params.Target, 0x4, &Target, 0x4);
	memcpy_s(&FInterpTo_Params.DeltaTime, 0x4, &DeltaTime, 0x4);
	memcpy_s(&FInterpTo_Params.InterpSpeed, 0x4, &InterpSpeed, 0x4);

	uFnFInterpTo->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFInterpTo, &FInterpTo_Params, nullptr);

	uFnFInterpTo->FunctionFlags |= 0x400;

	return FInterpTo_Params.ReturnValue;
};

// Function Core.Object.FPctByRange
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Value                          (CPF_Parm)
// float                          InMin                          (CPF_Parm)
// float                          InMax                          (CPF_Parm)

float UObject::FPctByRange(float Value, float InMin, float InMax)
{
	static UFunction* uFnFPctByRange = nullptr;

	if (!uFnFPctByRange)
	{
		uFnFPctByRange = UFunction::FindFunction("Function Core.Object.FPctByRange");
	}

	UObject_execFPctByRange_Params FPctByRange_Params;
	memcpy_s(&FPctByRange_Params.Value, 0x4, &Value, 0x4);
	memcpy_s(&FPctByRange_Params.InMin, 0x4, &InMin, 0x4);
	memcpy_s(&FPctByRange_Params.InMax, 0x4, &InMax, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnFPctByRange, &FPctByRange_Params, nullptr);

	return FPctByRange_Params.ReturnValue;
};

// Function Core.Object.RandRange
// [0x00022103] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InMin                          (CPF_Parm)
// float                          InMax                          (CPF_Parm)

float UObject::RandRange(float InMin, float InMax)
{
	static UFunction* uFnRandRange = nullptr;

	if (!uFnRandRange)
	{
		uFnRandRange = UFunction::FindFunction("Function Core.Object.RandRange");
	}

	UObject_execRandRange_Params RandRange_Params;
	memcpy_s(&RandRange_Params.InMin, 0x4, &InMin, 0x4);
	memcpy_s(&RandRange_Params.InMax, 0x4, &InMax, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnRandRange, &RandRange_Params, nullptr);

	return RandRange_Params.ReturnValue;
};

// Function Core.Object.FInterpEaseInOut
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::FInterpEaseInOut(float A, float B, float Alpha, float Exp)
{
	static UFunction* uFnFInterpEaseInOut = nullptr;

	if (!uFnFInterpEaseInOut)
	{
		uFnFInterpEaseInOut = UFunction::FindFunction("Function Core.Object.FInterpEaseInOut");
	}

	UObject_execFInterpEaseInOut_Params FInterpEaseInOut_Params;
	memcpy_s(&FInterpEaseInOut_Params.A, 0x4, &A, 0x4);
	memcpy_s(&FInterpEaseInOut_Params.B, 0x4, &B, 0x4);
	memcpy_s(&FInterpEaseInOut_Params.Alpha, 0x4, &Alpha, 0x4);
	memcpy_s(&FInterpEaseInOut_Params.Exp, 0x4, &Exp, 0x4);

	uFnFInterpEaseInOut->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFInterpEaseInOut, &FInterpEaseInOut_Params, nullptr);

	uFnFInterpEaseInOut->FunctionFlags |= 0x400;

	return FInterpEaseInOut_Params.ReturnValue;
};

// Function Core.Object.FInterpEaseOut
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::FInterpEaseOut(float A, float B, float Alpha, float Exp)
{
	static UFunction* uFnFInterpEaseOut = nullptr;

	if (!uFnFInterpEaseOut)
	{
		uFnFInterpEaseOut = UFunction::FindFunction("Function Core.Object.FInterpEaseOut");
	}

	UObject_execFInterpEaseOut_Params FInterpEaseOut_Params;
	memcpy_s(&FInterpEaseOut_Params.A, 0x4, &A, 0x4);
	memcpy_s(&FInterpEaseOut_Params.B, 0x4, &B, 0x4);
	memcpy_s(&FInterpEaseOut_Params.Alpha, 0x4, &Alpha, 0x4);
	memcpy_s(&FInterpEaseOut_Params.Exp, 0x4, &Exp, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnFInterpEaseOut, &FInterpEaseOut_Params, nullptr);

	return FInterpEaseOut_Params.ReturnValue;
};

// Function Core.Object.FInterpEaseIn
// [0x00022003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::FInterpEaseIn(float A, float B, float Alpha, float Exp)
{
	static UFunction* uFnFInterpEaseIn = nullptr;

	if (!uFnFInterpEaseIn)
	{
		uFnFInterpEaseIn = UFunction::FindFunction("Function Core.Object.FInterpEaseIn");
	}

	UObject_execFInterpEaseIn_Params FInterpEaseIn_Params;
	memcpy_s(&FInterpEaseIn_Params.A, 0x4, &A, 0x4);
	memcpy_s(&FInterpEaseIn_Params.B, 0x4, &B, 0x4);
	memcpy_s(&FInterpEaseIn_Params.Alpha, 0x4, &Alpha, 0x4);
	memcpy_s(&FInterpEaseIn_Params.Exp, 0x4, &Exp, 0x4);

	UObject::StaticClass()->ProcessEvent(uFnFInterpEaseIn, &FInterpEaseIn_Params, nullptr);

	return FInterpEaseIn_Params.ReturnValue;
};

// Function Core.Object.FCubicInterp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          P0                             (CPF_Parm)
// float                          T0                             (CPF_Parm)
// float                          P1                             (CPF_Parm)
// float                          T1                             (CPF_Parm)
// float                          A                              (CPF_Parm)

float UObject::FCubicInterp(float P0, float T0, float P1, float T1, float A)
{
	static UFunction* uFnFCubicInterp = nullptr;

	if (!uFnFCubicInterp)
	{
		uFnFCubicInterp = UFunction::FindFunction("Function Core.Object.FCubicInterp");
	}

	UObject_execFCubicInterp_Params FCubicInterp_Params;
	memcpy_s(&FCubicInterp_Params.P0, 0x4, &P0, 0x4);
	memcpy_s(&FCubicInterp_Params.T0, 0x4, &T0, 0x4);
	memcpy_s(&FCubicInterp_Params.P1, 0x4, &P1, 0x4);
	memcpy_s(&FCubicInterp_Params.T1, 0x4, &T1, 0x4);
	memcpy_s(&FCubicInterp_Params.A, 0x4, &A, 0x4);

	uFnFCubicInterp->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFCubicInterp, &FCubicInterp_Params, nullptr);

	uFnFCubicInterp->FunctionFlags |= 0x400;

	return FCubicInterp_Params.ReturnValue;
};

// Function Core.Object.F64_F64toF
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 Float64Num                     (CPF_Parm)

float UObject::F64_F64toF(struct FDouble Float64Num)
{
	static UFunction* uFnF64_F64toF = nullptr;

	if (!uFnF64_F64toF)
	{
		uFnF64_F64toF = UFunction::FindFunction("Function Core.Object.F64_F64toF");
	}

	UObject_execF64_F64toF_Params F64_F64toF_Params;
	memcpy_s(&F64_F64toF_Params.Float64Num, 0x8, &Float64Num, 0x8);

	uFnF64_F64toF->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnF64_F64toF, &F64_F64toF_Params, nullptr);

	uFnF64_F64toF->FunctionFlags |= 0x400;

	return F64_F64toF_Params.ReturnValue;
};

// Function Core.Object.F64_F64toI
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 Float64Num                     (CPF_Parm)
// float                          MulNum                         (CPF_OptionalParm | CPF_Parm)

int32_t UObject::F64_F64toI(struct FDouble Float64Num, float MulNum)
{
	static UFunction* uFnF64_F64toI = nullptr;

	if (!uFnF64_F64toI)
	{
		uFnF64_F64toI = UFunction::FindFunction("Function Core.Object.F64_F64toI");
	}

	UObject_execF64_F64toI_Params F64_F64toI_Params;
	memcpy_s(&F64_F64toI_Params.Float64Num, 0x8, &Float64Num, 0x8);
	memcpy_s(&F64_F64toI_Params.MulNum, 0x4, &MulNum, 0x4);

	uFnF64_F64toI->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnF64_F64toI, &F64_F64toI_Params, nullptr);

	uFnF64_F64toI->FunctionFlags |= 0x400;

	return F64_F64toI_Params.ReturnValue;
};

// Function Core.Object.F64_F64toA
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FDouble                 Float64Num                     (CPF_Parm)

class FString UObject::F64_F64toA(struct FDouble Float64Num)
{
	static UFunction* uFnF64_F64toA = nullptr;

	if (!uFnF64_F64toA)
	{
		uFnF64_F64toA = UFunction::FindFunction("Function Core.Object.F64_F64toA");
	}

	UObject_execF64_F64toA_Params F64_F64toA_Params;
	memcpy_s(&F64_F64toA_Params.Float64Num, 0x8, &Float64Num, 0x8);

	uFnF64_F64toA->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnF64_F64toA, &F64_F64toA_Params, nullptr);

	uFnF64_F64toA->FunctionFlags |= 0x400;

	return F64_F64toA_Params.ReturnValue;
};

// Function Core.Object.F64_AtoF64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Float64String                  (CPF_Parm | CPF_NeedCtorLink)

struct FDouble UObject::F64_AtoF64(class FString Float64String)
{
	static UFunction* uFnF64_AtoF64 = nullptr;

	if (!uFnF64_AtoF64)
	{
		uFnF64_AtoF64 = UFunction::FindFunction("Function Core.Object.F64_AtoF64");
	}

	UObject_execF64_AtoF64_Params F64_AtoF64_Params;
	memcpy_s(&F64_AtoF64_Params.Float64String, 0x10, &Float64String, 0x10);

	uFnF64_AtoF64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnF64_AtoF64, &F64_AtoF64_Params, nullptr);

	uFnF64_AtoF64->FunctionFlags |= 0x400;

	return F64_AtoF64_Params.ReturnValue;
};

// Function Core.Object.F64_FtoF64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Num                            (CPF_Parm)

struct FDouble UObject::F64_FtoF64(float Num)
{
	static UFunction* uFnF64_FtoF64 = nullptr;

	if (!uFnF64_FtoF64)
	{
		uFnF64_FtoF64 = UFunction::FindFunction("Function Core.Object.F64_FtoF64");
	}

	UObject_execF64_FtoF64_Params F64_FtoF64_Params;
	memcpy_s(&F64_FtoF64_Params.Num, 0x4, &Num, 0x4);

	uFnF64_FtoF64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnF64_FtoF64, &F64_FtoF64_Params, nullptr);

	uFnF64_FtoF64->FunctionFlags |= 0x400;

	return F64_FtoF64_Params.ReturnValue;
};

// Function Core.Object.F64_ItoF64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Num                            (CPF_Parm)

struct FDouble UObject::F64_ItoF64(int32_t Num)
{
	static UFunction* uFnF64_ItoF64 = nullptr;

	if (!uFnF64_ItoF64)
	{
		uFnF64_ItoF64 = UFunction::FindFunction("Function Core.Object.F64_ItoF64");
	}

	UObject_execF64_ItoF64_Params F64_ItoF64_Params;
	memcpy_s(&F64_ItoF64_Params.Num, 0x4, &Num, 0x4);

	uFnF64_ItoF64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnF64_ItoF64, &F64_ItoF64_Params, nullptr);

	uFnF64_ItoF64->FunctionFlags |= 0x400;

	return F64_ItoF64_Params.ReturnValue;
};

// Function Core.Object.FCeilD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

int32_t UObject::FCeilD(struct FDouble A)
{
	static UFunction* uFnFCeilD = nullptr;

	if (!uFnFCeilD)
	{
		uFnFCeilD = UFunction::FindFunction("Function Core.Object.FCeilD");
	}

	UObject_execFCeilD_Params FCeilD_Params;
	memcpy_s(&FCeilD_Params.A, 0x8, &A, 0x8);

	uFnFCeilD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFCeilD, &FCeilD_Params, nullptr);

	uFnFCeilD->FunctionFlags |= 0x400;

	return FCeilD_Params.ReturnValue;
};

// Function Core.Object.FFloorD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

int32_t UObject::FFloorD(struct FDouble A)
{
	static UFunction* uFnFFloorD = nullptr;

	if (!uFnFFloorD)
	{
		uFnFFloorD = UFunction::FindFunction("Function Core.Object.FFloorD");
	}

	UObject_execFFloorD_Params FFloorD_Params;
	memcpy_s(&FFloorD_Params.A, 0x8, &A, 0x8);

	uFnFFloorD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFFloorD, &FFloorD_Params, nullptr);

	uFnFFloorD->FunctionFlags |= 0x400;

	return FFloorD_Params.ReturnValue;
};

// Function Core.Object.RoundD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[433])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

int32_t UObject::RoundD(struct FDouble A)
{
	static UFunction* uFnRoundD = nullptr;

	if (!uFnRoundD)
	{
		uFnRoundD = UFunction::FindFunction("Function Core.Object.RoundD");
	}

	UObject_execRoundD_Params RoundD_Params;
	memcpy_s(&RoundD_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnRoundD->iNative;
	uFnRoundD->iNative = 0;

	uFnRoundD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRoundD, &RoundD_Params, nullptr);

	uFnRoundD->FunctionFlags |= 0x400;

	uFnRoundD->iNative = iNativeIndex;

	return RoundD_Params.ReturnValue;
};

// Function Core.Object.LerpD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[432])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)
// struct FDouble                 Alpha                          (CPF_Parm)

struct FDouble UObject::LerpD(struct FDouble A, struct FDouble B, struct FDouble Alpha)
{
	static UFunction* uFnLerpD = nullptr;

	if (!uFnLerpD)
	{
		uFnLerpD = UFunction::FindFunction("Function Core.Object.LerpD");
	}

	UObject_execLerpD_Params LerpD_Params;
	memcpy_s(&LerpD_Params.A, 0x8, &A, 0x8);
	memcpy_s(&LerpD_Params.B, 0x8, &B, 0x8);
	memcpy_s(&LerpD_Params.Alpha, 0x8, &Alpha, 0x8);

	uint16_t iNativeIndex = uFnLerpD->iNative;
	uFnLerpD->iNative = 0;

	uFnLerpD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLerpD, &LerpD_Params, nullptr);

	uFnLerpD->FunctionFlags |= 0x400;

	uFnLerpD->iNative = iNativeIndex;

	return LerpD_Params.ReturnValue;
};

// Function Core.Object.FClampD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[431])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 V                              (CPF_Parm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

struct FDouble UObject::FClampD(struct FDouble V, struct FDouble A, struct FDouble B)
{
	static UFunction* uFnFClampD = nullptr;

	if (!uFnFClampD)
	{
		uFnFClampD = UFunction::FindFunction("Function Core.Object.FClampD");
	}

	UObject_execFClampD_Params FClampD_Params;
	memcpy_s(&FClampD_Params.V, 0x8, &V, 0x8);
	memcpy_s(&FClampD_Params.A, 0x8, &A, 0x8);
	memcpy_s(&FClampD_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnFClampD->iNative;
	uFnFClampD->iNative = 0;

	uFnFClampD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFClampD, &FClampD_Params, nullptr);

	uFnFClampD->FunctionFlags |= 0x400;

	uFnFClampD->iNative = iNativeIndex;

	return FClampD_Params.ReturnValue;
};

// Function Core.Object.FMaxD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[430])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

struct FDouble UObject::FMaxD(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnFMaxD = nullptr;

	if (!uFnFMaxD)
	{
		uFnFMaxD = UFunction::FindFunction("Function Core.Object.FMaxD");
	}

	UObject_execFMaxD_Params FMaxD_Params;
	memcpy_s(&FMaxD_Params.A, 0x8, &A, 0x8);
	memcpy_s(&FMaxD_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnFMaxD->iNative;
	uFnFMaxD->iNative = 0;

	uFnFMaxD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFMaxD, &FMaxD_Params, nullptr);

	uFnFMaxD->FunctionFlags |= 0x400;

	uFnFMaxD->iNative = iNativeIndex;

	return FMaxD_Params.ReturnValue;
};

// Function Core.Object.FMinD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[429])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

struct FDouble UObject::FMinD(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnFMinD = nullptr;

	if (!uFnFMinD)
	{
		uFnFMinD = UFunction::FindFunction("Function Core.Object.FMinD");
	}

	UObject_execFMinD_Params FMinD_Params;
	memcpy_s(&FMinD_Params.A, 0x8, &A, 0x8);
	memcpy_s(&FMinD_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnFMinD->iNative;
	uFnFMinD->iNative = 0;

	uFnFMinD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFMinD, &FMinD_Params, nullptr);

	uFnFMinD->FunctionFlags |= 0x400;

	uFnFMinD->iNative = iNativeIndex;

	return FMinD_Params.ReturnValue;
};

// Function Core.Object.FRandD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[428])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FDouble UObject::FRandD()
{
	static UFunction* uFnFRandD = nullptr;

	if (!uFnFRandD)
	{
		uFnFRandD = UFunction::FindFunction("Function Core.Object.FRandD");
	}

	UObject_execFRandD_Params FRandD_Params;

	uint16_t iNativeIndex = uFnFRandD->iNative;
	uFnFRandD->iNative = 0;

	uFnFRandD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFRandD, &FRandD_Params, nullptr);

	uFnFRandD->FunctionFlags |= 0x400;

	uFnFRandD->iNative = iNativeIndex;

	return FRandD_Params.ReturnValue;
};

// Function Core.Object.SquareD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[427])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::SquareD(struct FDouble A)
{
	static UFunction* uFnSquareD = nullptr;

	if (!uFnSquareD)
	{
		uFnSquareD = UFunction::FindFunction("Function Core.Object.SquareD");
	}

	UObject_execSquareD_Params SquareD_Params;
	memcpy_s(&SquareD_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnSquareD->iNative;
	uFnSquareD->iNative = 0;

	uFnSquareD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSquareD, &SquareD_Params, nullptr);

	uFnSquareD->FunctionFlags |= 0x400;

	uFnSquareD->iNative = iNativeIndex;

	return SquareD_Params.ReturnValue;
};

// Function Core.Object.SqrtD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[426])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::SqrtD(struct FDouble A)
{
	static UFunction* uFnSqrtD = nullptr;

	if (!uFnSqrtD)
	{
		uFnSqrtD = UFunction::FindFunction("Function Core.Object.SqrtD");
	}

	UObject_execSqrtD_Params SqrtD_Params;
	memcpy_s(&SqrtD_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnSqrtD->iNative;
	uFnSqrtD->iNative = 0;

	uFnSqrtD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSqrtD, &SqrtD_Params, nullptr);

	uFnSqrtD->FunctionFlags |= 0x400;

	uFnSqrtD->iNative = iNativeIndex;

	return SqrtD_Params.ReturnValue;
};

// Function Core.Object.LogeD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[425])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::LogeD(struct FDouble A)
{
	static UFunction* uFnLogeD = nullptr;

	if (!uFnLogeD)
	{
		uFnLogeD = UFunction::FindFunction("Function Core.Object.LogeD");
	}

	UObject_execLogeD_Params LogeD_Params;
	memcpy_s(&LogeD_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnLogeD->iNative;
	uFnLogeD->iNative = 0;

	uFnLogeD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLogeD, &LogeD_Params, nullptr);

	uFnLogeD->FunctionFlags |= 0x400;

	uFnLogeD->iNative = iNativeIndex;

	return LogeD_Params.ReturnValue;
};

// Function Core.Object.ExpD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[424])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::ExpD(struct FDouble A)
{
	static UFunction* uFnExpD = nullptr;

	if (!uFnExpD)
	{
		uFnExpD = UFunction::FindFunction("Function Core.Object.ExpD");
	}

	UObject_execExpD_Params ExpD_Params;
	memcpy_s(&ExpD_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnExpD->iNative;
	uFnExpD->iNative = 0;

	uFnExpD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnExpD, &ExpD_Params, nullptr);

	uFnExpD->FunctionFlags |= 0x400;

	uFnExpD->iNative = iNativeIndex;

	return ExpD_Params.ReturnValue;
};

// Function Core.Object.Atan2D
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

struct FDouble UObject::Atan2D(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnAtan2D = nullptr;

	if (!uFnAtan2D)
	{
		uFnAtan2D = UFunction::FindFunction("Function Core.Object.Atan2D");
	}

	UObject_execAtan2D_Params Atan2D_Params;
	memcpy_s(&Atan2D_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Atan2D_Params.B, 0x8, &B, 0x8);

	uFnAtan2D->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAtan2D, &Atan2D_Params, nullptr);

	uFnAtan2D->FunctionFlags |= 0x400;

	return Atan2D_Params.ReturnValue;
};

// Function Core.Object.AtanD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[423])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::AtanD(struct FDouble A)
{
	static UFunction* uFnAtanD = nullptr;

	if (!uFnAtanD)
	{
		uFnAtanD = UFunction::FindFunction("Function Core.Object.AtanD");
	}

	UObject_execAtanD_Params AtanD_Params;
	memcpy_s(&AtanD_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnAtanD->iNative;
	uFnAtanD->iNative = 0;

	uFnAtanD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAtanD, &AtanD_Params, nullptr);

	uFnAtanD->FunctionFlags |= 0x400;

	uFnAtanD->iNative = iNativeIndex;

	return AtanD_Params.ReturnValue;
};

// Function Core.Object.TanD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[422])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::TanD(struct FDouble A)
{
	static UFunction* uFnTanD = nullptr;

	if (!uFnTanD)
	{
		uFnTanD = UFunction::FindFunction("Function Core.Object.TanD");
	}

	UObject_execTanD_Params TanD_Params;
	memcpy_s(&TanD_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnTanD->iNative;
	uFnTanD->iNative = 0;

	uFnTanD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnTanD, &TanD_Params, nullptr);

	uFnTanD->FunctionFlags |= 0x400;

	uFnTanD->iNative = iNativeIndex;

	return TanD_Params.ReturnValue;
};

// Function Core.Object.AcosD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::AcosD(struct FDouble A)
{
	static UFunction* uFnAcosD = nullptr;

	if (!uFnAcosD)
	{
		uFnAcosD = UFunction::FindFunction("Function Core.Object.AcosD");
	}

	UObject_execAcosD_Params AcosD_Params;
	memcpy_s(&AcosD_Params.A, 0x8, &A, 0x8);

	uFnAcosD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAcosD, &AcosD_Params, nullptr);

	uFnAcosD->FunctionFlags |= 0x400;

	return AcosD_Params.ReturnValue;
};

// Function Core.Object.CosD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[421])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::CosD(struct FDouble A)
{
	static UFunction* uFnCosD = nullptr;

	if (!uFnCosD)
	{
		uFnCosD = UFunction::FindFunction("Function Core.Object.CosD");
	}

	UObject_execCosD_Params CosD_Params;
	memcpy_s(&CosD_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnCosD->iNative;
	uFnCosD->iNative = 0;

	uFnCosD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnCosD, &CosD_Params, nullptr);

	uFnCosD->FunctionFlags |= 0x400;

	uFnCosD->iNative = iNativeIndex;

	return CosD_Params.ReturnValue;
};

// Function Core.Object.AsinD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::AsinD(struct FDouble A)
{
	static UFunction* uFnAsinD = nullptr;

	if (!uFnAsinD)
	{
		uFnAsinD = UFunction::FindFunction("Function Core.Object.AsinD");
	}

	UObject_execAsinD_Params AsinD_Params;
	memcpy_s(&AsinD_Params.A, 0x8, &A, 0x8);

	uFnAsinD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAsinD, &AsinD_Params, nullptr);

	uFnAsinD->FunctionFlags |= 0x400;

	return AsinD_Params.ReturnValue;
};

// Function Core.Object.SinD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[420])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::SinD(struct FDouble A)
{
	static UFunction* uFnSinD = nullptr;

	if (!uFnSinD)
	{
		uFnSinD = UFunction::FindFunction("Function Core.Object.SinD");
	}

	UObject_execSinD_Params SinD_Params;
	memcpy_s(&SinD_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnSinD->iNative;
	uFnSinD->iNative = 0;

	uFnSinD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSinD, &SinD_Params, nullptr);

	uFnSinD->FunctionFlags |= 0x400;

	uFnSinD->iNative = iNativeIndex;

	return SinD_Params.ReturnValue;
};

// Function Core.Object.AbsD
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[419])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::AbsD(struct FDouble A)
{
	static UFunction* uFnAbsD = nullptr;

	if (!uFnAbsD)
	{
		uFnAbsD = UFunction::FindFunction("Function Core.Object.AbsD");
	}

	UObject_execAbsD_Params AbsD_Params;
	memcpy_s(&AbsD_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnAbsD->iNative;
	uFnAbsD->iNative = 0;

	uFnAbsD->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAbsD, &AbsD_Params, nullptr);

	uFnAbsD->FunctionFlags |= 0x400;

	uFnAbsD->iNative = iNativeIndex;

	return AbsD_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_DoubleDouble
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[418])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 B                              (CPF_Parm)
// struct FDouble                 A                              (CPF_Parm | CPF_OutParm)

struct FDouble UObject::SubtractEqual_DoubleDouble(struct FDouble B, struct FDouble& A)
{
	static UFunction* uFnSubtractEqual_DoubleDouble = nullptr;

	if (!uFnSubtractEqual_DoubleDouble)
	{
		uFnSubtractEqual_DoubleDouble = UFunction::FindFunction("Function Core.Object.SubtractEqual_DoubleDouble");
	}

	UObject_execSubtractEqual_DoubleDouble_Params SubtractEqual_DoubleDouble_Params;
	memcpy_s(&SubtractEqual_DoubleDouble_Params.B, 0x8, &B, 0x8);
	memcpy_s(&SubtractEqual_DoubleDouble_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnSubtractEqual_DoubleDouble->iNative;
	uFnSubtractEqual_DoubleDouble->iNative = 0;

	uFnSubtractEqual_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_DoubleDouble, &SubtractEqual_DoubleDouble_Params, nullptr);

	uFnSubtractEqual_DoubleDouble->FunctionFlags |= 0x400;

	uFnSubtractEqual_DoubleDouble->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &SubtractEqual_DoubleDouble_Params.A, 0x8);

	return SubtractEqual_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.AddEqual_DoubleDouble
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[417])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 B                              (CPF_Parm)
// struct FDouble                 A                              (CPF_Parm | CPF_OutParm)

struct FDouble UObject::AddEqual_DoubleDouble(struct FDouble B, struct FDouble& A)
{
	static UFunction* uFnAddEqual_DoubleDouble = nullptr;

	if (!uFnAddEqual_DoubleDouble)
	{
		uFnAddEqual_DoubleDouble = UFunction::FindFunction("Function Core.Object.AddEqual_DoubleDouble");
	}

	UObject_execAddEqual_DoubleDouble_Params AddEqual_DoubleDouble_Params;
	memcpy_s(&AddEqual_DoubleDouble_Params.B, 0x8, &B, 0x8);
	memcpy_s(&AddEqual_DoubleDouble_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnAddEqual_DoubleDouble->iNative;
	uFnAddEqual_DoubleDouble->iNative = 0;

	uFnAddEqual_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddEqual_DoubleDouble, &AddEqual_DoubleDouble_Params, nullptr);

	uFnAddEqual_DoubleDouble->FunctionFlags |= 0x400;

	uFnAddEqual_DoubleDouble->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &AddEqual_DoubleDouble_Params.A, 0x8);

	return AddEqual_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_DoubleDouble
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[416])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 B                              (CPF_Parm)
// struct FDouble                 A                              (CPF_Parm | CPF_OutParm)

struct FDouble UObject::DivideEqual_DoubleDouble(struct FDouble B, struct FDouble& A)
{
	static UFunction* uFnDivideEqual_DoubleDouble = nullptr;

	if (!uFnDivideEqual_DoubleDouble)
	{
		uFnDivideEqual_DoubleDouble = UFunction::FindFunction("Function Core.Object.DivideEqual_DoubleDouble");
	}

	UObject_execDivideEqual_DoubleDouble_Params DivideEqual_DoubleDouble_Params;
	memcpy_s(&DivideEqual_DoubleDouble_Params.B, 0x8, &B, 0x8);
	memcpy_s(&DivideEqual_DoubleDouble_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnDivideEqual_DoubleDouble->iNative;
	uFnDivideEqual_DoubleDouble->iNative = 0;

	uFnDivideEqual_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_DoubleDouble, &DivideEqual_DoubleDouble_Params, nullptr);

	uFnDivideEqual_DoubleDouble->FunctionFlags |= 0x400;

	uFnDivideEqual_DoubleDouble->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &DivideEqual_DoubleDouble_Params.A, 0x8);

	return DivideEqual_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_DoubleDouble
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[415])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 B                              (CPF_Parm)
// struct FDouble                 A                              (CPF_Parm | CPF_OutParm)

struct FDouble UObject::MultiplyEqual_DoubleDouble(struct FDouble B, struct FDouble& A)
{
	static UFunction* uFnMultiplyEqual_DoubleDouble = nullptr;

	if (!uFnMultiplyEqual_DoubleDouble)
	{
		uFnMultiplyEqual_DoubleDouble = UFunction::FindFunction("Function Core.Object.MultiplyEqual_DoubleDouble");
	}

	UObject_execMultiplyEqual_DoubleDouble_Params MultiplyEqual_DoubleDouble_Params;
	memcpy_s(&MultiplyEqual_DoubleDouble_Params.B, 0x8, &B, 0x8);
	memcpy_s(&MultiplyEqual_DoubleDouble_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnMultiplyEqual_DoubleDouble->iNative;
	uFnMultiplyEqual_DoubleDouble->iNative = 0;

	uFnMultiplyEqual_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_DoubleDouble, &MultiplyEqual_DoubleDouble_Params, nullptr);

	uFnMultiplyEqual_DoubleDouble->FunctionFlags |= 0x400;

	uFnMultiplyEqual_DoubleDouble->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &MultiplyEqual_DoubleDouble_Params.A, 0x8);

	return MultiplyEqual_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.NotEqual_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[414])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

bool UObject::NotEqual_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnNotEqual_DoubleDouble = nullptr;

	if (!uFnNotEqual_DoubleDouble)
	{
		uFnNotEqual_DoubleDouble = UFunction::FindFunction("Function Core.Object.NotEqual_DoubleDouble");
	}

	UObject_execNotEqual_DoubleDouble_Params NotEqual_DoubleDouble_Params;
	memcpy_s(&NotEqual_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&NotEqual_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnNotEqual_DoubleDouble->iNative;
	uFnNotEqual_DoubleDouble->iNative = 0;

	uFnNotEqual_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_DoubleDouble, &NotEqual_DoubleDouble_Params, nullptr);

	uFnNotEqual_DoubleDouble->FunctionFlags |= 0x400;

	uFnNotEqual_DoubleDouble->iNative = iNativeIndex;

	return NotEqual_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.ComplementEqual_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[413])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

bool UObject::ComplementEqual_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnComplementEqual_DoubleDouble = nullptr;

	if (!uFnComplementEqual_DoubleDouble)
	{
		uFnComplementEqual_DoubleDouble = UFunction::FindFunction("Function Core.Object.ComplementEqual_DoubleDouble");
	}

	UObject_execComplementEqual_DoubleDouble_Params ComplementEqual_DoubleDouble_Params;
	memcpy_s(&ComplementEqual_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&ComplementEqual_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnComplementEqual_DoubleDouble->iNative;
	uFnComplementEqual_DoubleDouble->iNative = 0;

	uFnComplementEqual_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnComplementEqual_DoubleDouble, &ComplementEqual_DoubleDouble_Params, nullptr);

	uFnComplementEqual_DoubleDouble->FunctionFlags |= 0x400;

	uFnComplementEqual_DoubleDouble->iNative = iNativeIndex;

	return ComplementEqual_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[412])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

bool UObject::EqualEqual_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnEqualEqual_DoubleDouble = nullptr;

	if (!uFnEqualEqual_DoubleDouble)
	{
		uFnEqualEqual_DoubleDouble = UFunction::FindFunction("Function Core.Object.EqualEqual_DoubleDouble");
	}

	UObject_execEqualEqual_DoubleDouble_Params EqualEqual_DoubleDouble_Params;
	memcpy_s(&EqualEqual_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&EqualEqual_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnEqualEqual_DoubleDouble->iNative;
	uFnEqualEqual_DoubleDouble->iNative = 0;

	uFnEqualEqual_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_DoubleDouble, &EqualEqual_DoubleDouble_Params, nullptr);

	uFnEqualEqual_DoubleDouble->FunctionFlags |= 0x400;

	uFnEqualEqual_DoubleDouble->iNative = iNativeIndex;

	return EqualEqual_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.GreaterEqual_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[411])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

bool UObject::GreaterEqual_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnGreaterEqual_DoubleDouble = nullptr;

	if (!uFnGreaterEqual_DoubleDouble)
	{
		uFnGreaterEqual_DoubleDouble = UFunction::FindFunction("Function Core.Object.GreaterEqual_DoubleDouble");
	}

	UObject_execGreaterEqual_DoubleDouble_Params GreaterEqual_DoubleDouble_Params;
	memcpy_s(&GreaterEqual_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&GreaterEqual_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnGreaterEqual_DoubleDouble->iNative;
	uFnGreaterEqual_DoubleDouble->iNative = 0;

	uFnGreaterEqual_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterEqual_DoubleDouble, &GreaterEqual_DoubleDouble_Params, nullptr);

	uFnGreaterEqual_DoubleDouble->FunctionFlags |= 0x400;

	uFnGreaterEqual_DoubleDouble->iNative = iNativeIndex;

	return GreaterEqual_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.LessEqual_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[410])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

bool UObject::LessEqual_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnLessEqual_DoubleDouble = nullptr;

	if (!uFnLessEqual_DoubleDouble)
	{
		uFnLessEqual_DoubleDouble = UFunction::FindFunction("Function Core.Object.LessEqual_DoubleDouble");
	}

	UObject_execLessEqual_DoubleDouble_Params LessEqual_DoubleDouble_Params;
	memcpy_s(&LessEqual_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&LessEqual_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnLessEqual_DoubleDouble->iNative;
	uFnLessEqual_DoubleDouble->iNative = 0;

	uFnLessEqual_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLessEqual_DoubleDouble, &LessEqual_DoubleDouble_Params, nullptr);

	uFnLessEqual_DoubleDouble->FunctionFlags |= 0x400;

	uFnLessEqual_DoubleDouble->iNative = iNativeIndex;

	return LessEqual_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.Greater_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[409])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

bool UObject::Greater_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnGreater_DoubleDouble = nullptr;

	if (!uFnGreater_DoubleDouble)
	{
		uFnGreater_DoubleDouble = UFunction::FindFunction("Function Core.Object.Greater_DoubleDouble");
	}

	UObject_execGreater_DoubleDouble_Params Greater_DoubleDouble_Params;
	memcpy_s(&Greater_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Greater_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnGreater_DoubleDouble->iNative;
	uFnGreater_DoubleDouble->iNative = 0;

	uFnGreater_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreater_DoubleDouble, &Greater_DoubleDouble_Params, nullptr);

	uFnGreater_DoubleDouble->FunctionFlags |= 0x400;

	uFnGreater_DoubleDouble->iNative = iNativeIndex;

	return Greater_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.Less_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[408])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

bool UObject::Less_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnLess_DoubleDouble = nullptr;

	if (!uFnLess_DoubleDouble)
	{
		uFnLess_DoubleDouble = UFunction::FindFunction("Function Core.Object.Less_DoubleDouble");
	}

	UObject_execLess_DoubleDouble_Params Less_DoubleDouble_Params;
	memcpy_s(&Less_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Less_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnLess_DoubleDouble->iNative;
	uFnLess_DoubleDouble->iNative = 0;

	uFnLess_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLess_DoubleDouble, &Less_DoubleDouble_Params, nullptr);

	uFnLess_DoubleDouble->FunctionFlags |= 0x400;

	uFnLess_DoubleDouble->iNative = iNativeIndex;

	return Less_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.Subtract_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[407])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

struct FDouble UObject::Subtract_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnSubtract_DoubleDouble = nullptr;

	if (!uFnSubtract_DoubleDouble)
	{
		uFnSubtract_DoubleDouble = UFunction::FindFunction("Function Core.Object.Subtract_DoubleDouble");
	}

	UObject_execSubtract_DoubleDouble_Params Subtract_DoubleDouble_Params;
	memcpy_s(&Subtract_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Subtract_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnSubtract_DoubleDouble->iNative;
	uFnSubtract_DoubleDouble->iNative = 0;

	uFnSubtract_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_DoubleDouble, &Subtract_DoubleDouble_Params, nullptr);

	uFnSubtract_DoubleDouble->FunctionFlags |= 0x400;

	uFnSubtract_DoubleDouble->iNative = iNativeIndex;

	return Subtract_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.Add_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[406])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

struct FDouble UObject::Add_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnAdd_DoubleDouble = nullptr;

	if (!uFnAdd_DoubleDouble)
	{
		uFnAdd_DoubleDouble = UFunction::FindFunction("Function Core.Object.Add_DoubleDouble");
	}

	UObject_execAdd_DoubleDouble_Params Add_DoubleDouble_Params;
	memcpy_s(&Add_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Add_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnAdd_DoubleDouble->iNative;
	uFnAdd_DoubleDouble->iNative = 0;

	uFnAdd_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAdd_DoubleDouble, &Add_DoubleDouble_Params, nullptr);

	uFnAdd_DoubleDouble->FunctionFlags |= 0x400;

	uFnAdd_DoubleDouble->iNative = iNativeIndex;

	return Add_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.Percent_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[405])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

struct FDouble UObject::Percent_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnPercent_DoubleDouble = nullptr;

	if (!uFnPercent_DoubleDouble)
	{
		uFnPercent_DoubleDouble = UFunction::FindFunction("Function Core.Object.Percent_DoubleDouble");
	}

	UObject_execPercent_DoubleDouble_Params Percent_DoubleDouble_Params;
	memcpy_s(&Percent_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Percent_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnPercent_DoubleDouble->iNative;
	uFnPercent_DoubleDouble->iNative = 0;

	uFnPercent_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnPercent_DoubleDouble, &Percent_DoubleDouble_Params, nullptr);

	uFnPercent_DoubleDouble->FunctionFlags |= 0x400;

	uFnPercent_DoubleDouble->iNative = iNativeIndex;

	return Percent_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.Divide_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[404])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

struct FDouble UObject::Divide_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnDivide_DoubleDouble = nullptr;

	if (!uFnDivide_DoubleDouble)
	{
		uFnDivide_DoubleDouble = UFunction::FindFunction("Function Core.Object.Divide_DoubleDouble");
	}

	UObject_execDivide_DoubleDouble_Params Divide_DoubleDouble_Params;
	memcpy_s(&Divide_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Divide_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnDivide_DoubleDouble->iNative;
	uFnDivide_DoubleDouble->iNative = 0;

	uFnDivide_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivide_DoubleDouble, &Divide_DoubleDouble_Params, nullptr);

	uFnDivide_DoubleDouble->FunctionFlags |= 0x400;

	uFnDivide_DoubleDouble->iNative = iNativeIndex;

	return Divide_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.Multiply_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[403])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)
// struct FDouble                 B                              (CPF_Parm)

struct FDouble UObject::Multiply_DoubleDouble(struct FDouble A, struct FDouble B)
{
	static UFunction* uFnMultiply_DoubleDouble = nullptr;

	if (!uFnMultiply_DoubleDouble)
	{
		uFnMultiply_DoubleDouble = UFunction::FindFunction("Function Core.Object.Multiply_DoubleDouble");
	}

	UObject_execMultiply_DoubleDouble_Params Multiply_DoubleDouble_Params;
	memcpy_s(&Multiply_DoubleDouble_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Multiply_DoubleDouble_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnMultiply_DoubleDouble->iNative;
	uFnMultiply_DoubleDouble->iNative = 0;

	uFnMultiply_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_DoubleDouble, &Multiply_DoubleDouble_Params, nullptr);

	uFnMultiply_DoubleDouble->FunctionFlags |= 0x400;

	uFnMultiply_DoubleDouble->iNative = iNativeIndex;

	return Multiply_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.MultiplyMultiply_DoubleDouble
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[402])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 Base                           (CPF_Parm)
// struct FDouble                 Exp                            (CPF_Parm)

struct FDouble UObject::MultiplyMultiply_DoubleDouble(struct FDouble Base, struct FDouble Exp)
{
	static UFunction* uFnMultiplyMultiply_DoubleDouble = nullptr;

	if (!uFnMultiplyMultiply_DoubleDouble)
	{
		uFnMultiplyMultiply_DoubleDouble = UFunction::FindFunction("Function Core.Object.MultiplyMultiply_DoubleDouble");
	}

	UObject_execMultiplyMultiply_DoubleDouble_Params MultiplyMultiply_DoubleDouble_Params;
	memcpy_s(&MultiplyMultiply_DoubleDouble_Params.Base, 0x8, &Base, 0x8);
	memcpy_s(&MultiplyMultiply_DoubleDouble_Params.Exp, 0x8, &Exp, 0x8);

	uint16_t iNativeIndex = uFnMultiplyMultiply_DoubleDouble->iNative;
	uFnMultiplyMultiply_DoubleDouble->iNative = 0;

	uFnMultiplyMultiply_DoubleDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyMultiply_DoubleDouble, &MultiplyMultiply_DoubleDouble_Params, nullptr);

	uFnMultiplyMultiply_DoubleDouble->FunctionFlags |= 0x400;

	uFnMultiplyMultiply_DoubleDouble->iNative = iNativeIndex;

	return MultiplyMultiply_DoubleDouble_Params.ReturnValue;
};

// Function Core.Object.Subtract_PreDouble
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[401])
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 A                              (CPF_Parm)

struct FDouble UObject::Subtract_PreDouble(struct FDouble A)
{
	static UFunction* uFnSubtract_PreDouble = nullptr;

	if (!uFnSubtract_PreDouble)
	{
		uFnSubtract_PreDouble = UFunction::FindFunction("Function Core.Object.Subtract_PreDouble");
	}

	UObject_execSubtract_PreDouble_Params Subtract_PreDouble_Params;
	memcpy_s(&Subtract_PreDouble_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnSubtract_PreDouble->iNative;
	uFnSubtract_PreDouble->iNative = 0;

	uFnSubtract_PreDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_PreDouble, &Subtract_PreDouble_Params, nullptr);

	uFnSubtract_PreDouble->FunctionFlags |= 0x400;

	uFnSubtract_PreDouble->iNative = iNativeIndex;

	return Subtract_PreDouble_Params.ReturnValue;
};

// Function Core.Object.FCeil
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

int32_t UObject::FCeil(float A)
{
	static UFunction* uFnFCeil = nullptr;

	if (!uFnFCeil)
	{
		uFnFCeil = UFunction::FindFunction("Function Core.Object.FCeil");
	}

	UObject_execFCeil_Params FCeil_Params;
	memcpy_s(&FCeil_Params.A, 0x4, &A, 0x4);

	uFnFCeil->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFCeil, &FCeil_Params, nullptr);

	uFnFCeil->FunctionFlags |= 0x400;

	return FCeil_Params.ReturnValue;
};

// Function Core.Object.FFloor
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

int32_t UObject::FFloor(float A)
{
	static UFunction* uFnFFloor = nullptr;

	if (!uFnFFloor)
	{
		uFnFFloor = UFunction::FindFunction("Function Core.Object.FFloor");
	}

	UObject_execFFloor_Params FFloor_Params;
	memcpy_s(&FFloor_Params.A, 0x4, &A, 0x4);

	uFnFFloor->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFFloor, &FFloor_Params, nullptr);

	uFnFFloor->FunctionFlags |= 0x400;

	return FFloor_Params.ReturnValue;
};

// Function Core.Object.Round
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[199])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

int32_t UObject::Round(float A)
{
	static UFunction* uFnRound = nullptr;

	if (!uFnRound)
	{
		uFnRound = UFunction::FindFunction("Function Core.Object.Round");
	}

	UObject_execRound_Params Round_Params;
	memcpy_s(&Round_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnRound->iNative;
	uFnRound->iNative = 0;

	uFnRound->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRound, &Round_Params, nullptr);

	uFnRound->FunctionFlags |= 0x400;

	uFnRound->iNative = iNativeIndex;

	return Round_Params.ReturnValue;
};

// Function Core.Object.Lerp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[247])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)

float UObject::Lerp(float A, float B, float Alpha)
{
	static UFunction* uFnLerp = nullptr;

	if (!uFnLerp)
	{
		uFnLerp = UFunction::FindFunction("Function Core.Object.Lerp");
	}

	UObject_execLerp_Params Lerp_Params;
	memcpy_s(&Lerp_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Lerp_Params.B, 0x4, &B, 0x4);
	memcpy_s(&Lerp_Params.Alpha, 0x4, &Alpha, 0x4);

	uint16_t iNativeIndex = uFnLerp->iNative;
	uFnLerp->iNative = 0;

	uFnLerp->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLerp, &Lerp_Params, nullptr);

	uFnLerp->FunctionFlags |= 0x400;

	uFnLerp->iNative = iNativeIndex;

	return Lerp_Params.ReturnValue;
};

// Function Core.Object.FClamp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[246])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          V                              (CPF_Parm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::FClamp(float V, float A, float B)
{
	static UFunction* uFnFClamp = nullptr;

	if (!uFnFClamp)
	{
		uFnFClamp = UFunction::FindFunction("Function Core.Object.FClamp");
	}

	UObject_execFClamp_Params FClamp_Params;
	memcpy_s(&FClamp_Params.V, 0x4, &V, 0x4);
	memcpy_s(&FClamp_Params.A, 0x4, &A, 0x4);
	memcpy_s(&FClamp_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnFClamp->iNative;
	uFnFClamp->iNative = 0;

	uFnFClamp->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFClamp, &FClamp_Params, nullptr);

	uFnFClamp->FunctionFlags |= 0x400;

	uFnFClamp->iNative = iNativeIndex;

	return FClamp_Params.ReturnValue;
};

// Function Core.Object.FMax
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[245])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::FMax(float A, float B)
{
	static UFunction* uFnFMax = nullptr;

	if (!uFnFMax)
	{
		uFnFMax = UFunction::FindFunction("Function Core.Object.FMax");
	}

	UObject_execFMax_Params FMax_Params;
	memcpy_s(&FMax_Params.A, 0x4, &A, 0x4);
	memcpy_s(&FMax_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnFMax->iNative;
	uFnFMax->iNative = 0;

	uFnFMax->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFMax, &FMax_Params, nullptr);

	uFnFMax->FunctionFlags |= 0x400;

	uFnFMax->iNative = iNativeIndex;

	return FMax_Params.ReturnValue;
};

// Function Core.Object.FMin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[244])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::FMin(float A, float B)
{
	static UFunction* uFnFMin = nullptr;

	if (!uFnFMin)
	{
		uFnFMin = UFunction::FindFunction("Function Core.Object.FMin");
	}

	UObject_execFMin_Params FMin_Params;
	memcpy_s(&FMin_Params.A, 0x4, &A, 0x4);
	memcpy_s(&FMin_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnFMin->iNative;
	uFnFMin->iNative = 0;

	uFnFMin->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFMin, &FMin_Params, nullptr);

	uFnFMin->FunctionFlags |= 0x400;

	uFnFMin->iNative = iNativeIndex;

	return FMin_Params.ReturnValue;
};

// Function Core.Object.FRand
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[195])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UObject::FRand()
{
	static UFunction* uFnFRand = nullptr;

	if (!uFnFRand)
	{
		uFnFRand = UFunction::FindFunction("Function Core.Object.FRand");
	}

	UObject_execFRand_Params FRand_Params;

	uint16_t iNativeIndex = uFnFRand->iNative;
	uFnFRand->iNative = 0;

	uFnFRand->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnFRand, &FRand_Params, nullptr);

	uFnFRand->FunctionFlags |= 0x400;

	uFnFRand->iNative = iNativeIndex;

	return FRand_Params.ReturnValue;
};

// Function Core.Object.Square
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[194])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Square(float A)
{
	static UFunction* uFnSquare = nullptr;

	if (!uFnSquare)
	{
		uFnSquare = UFunction::FindFunction("Function Core.Object.Square");
	}

	UObject_execSquare_Params Square_Params;
	memcpy_s(&Square_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnSquare->iNative;
	uFnSquare->iNative = 0;

	uFnSquare->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSquare, &Square_Params, nullptr);

	uFnSquare->FunctionFlags |= 0x400;

	uFnSquare->iNative = iNativeIndex;

	return Square_Params.ReturnValue;
};

// Function Core.Object.Sqrt
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[193])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Sqrt(float A)
{
	static UFunction* uFnSqrt = nullptr;

	if (!uFnSqrt)
	{
		uFnSqrt = UFunction::FindFunction("Function Core.Object.Sqrt");
	}

	UObject_execSqrt_Params Sqrt_Params;
	memcpy_s(&Sqrt_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnSqrt->iNative;
	uFnSqrt->iNative = 0;

	uFnSqrt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSqrt, &Sqrt_Params, nullptr);

	uFnSqrt->FunctionFlags |= 0x400;

	uFnSqrt->iNative = iNativeIndex;

	return Sqrt_Params.ReturnValue;
};

// Function Core.Object.Loge
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[192])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Loge(float A)
{
	static UFunction* uFnLoge = nullptr;

	if (!uFnLoge)
	{
		uFnLoge = UFunction::FindFunction("Function Core.Object.Loge");
	}

	UObject_execLoge_Params Loge_Params;
	memcpy_s(&Loge_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnLoge->iNative;
	uFnLoge->iNative = 0;

	uFnLoge->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLoge, &Loge_Params, nullptr);

	uFnLoge->FunctionFlags |= 0x400;

	uFnLoge->iNative = iNativeIndex;

	return Loge_Params.ReturnValue;
};

// Function Core.Object.Exp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[191])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Exp(float A)
{
	static UFunction* uFnExp = nullptr;

	if (!uFnExp)
	{
		uFnExp = UFunction::FindFunction("Function Core.Object.Exp");
	}

	UObject_execExp_Params Exp_Params;
	memcpy_s(&Exp_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnExp->iNative;
	uFnExp->iNative = 0;

	uFnExp->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnExp, &Exp_Params, nullptr);

	uFnExp->FunctionFlags |= 0x400;

	uFnExp->iNative = iNativeIndex;

	return Exp_Params.ReturnValue;
};

// Function Core.Object.Atan2
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Atan2(float A, float B)
{
	static UFunction* uFnAtan2 = nullptr;

	if (!uFnAtan2)
	{
		uFnAtan2 = UFunction::FindFunction("Function Core.Object.Atan2");
	}

	UObject_execAtan2_Params Atan2_Params;
	memcpy_s(&Atan2_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Atan2_Params.B, 0x4, &B, 0x4);

	uFnAtan2->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAtan2, &Atan2_Params, nullptr);

	uFnAtan2->FunctionFlags |= 0x400;

	return Atan2_Params.ReturnValue;
};

// Function Core.Object.Atan
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[190])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Atan(float A)
{
	static UFunction* uFnAtan = nullptr;

	if (!uFnAtan)
	{
		uFnAtan = UFunction::FindFunction("Function Core.Object.Atan");
	}

	UObject_execAtan_Params Atan_Params;
	memcpy_s(&Atan_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnAtan->iNative;
	uFnAtan->iNative = 0;

	uFnAtan->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAtan, &Atan_Params, nullptr);

	uFnAtan->FunctionFlags |= 0x400;

	uFnAtan->iNative = iNativeIndex;

	return Atan_Params.ReturnValue;
};

// Function Core.Object.Tan
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[189])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Tan(float A)
{
	static UFunction* uFnTan = nullptr;

	if (!uFnTan)
	{
		uFnTan = UFunction::FindFunction("Function Core.Object.Tan");
	}

	UObject_execTan_Params Tan_Params;
	memcpy_s(&Tan_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnTan->iNative;
	uFnTan->iNative = 0;

	uFnTan->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnTan, &Tan_Params, nullptr);

	uFnTan->FunctionFlags |= 0x400;

	uFnTan->iNative = iNativeIndex;

	return Tan_Params.ReturnValue;
};

// Function Core.Object.Acos
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Acos(float A)
{
	static UFunction* uFnAcos = nullptr;

	if (!uFnAcos)
	{
		uFnAcos = UFunction::FindFunction("Function Core.Object.Acos");
	}

	UObject_execAcos_Params Acos_Params;
	memcpy_s(&Acos_Params.A, 0x4, &A, 0x4);

	uFnAcos->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAcos, &Acos_Params, nullptr);

	uFnAcos->FunctionFlags |= 0x400;

	return Acos_Params.ReturnValue;
};

// Function Core.Object.Cos
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[188])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Cos(float A)
{
	static UFunction* uFnCos = nullptr;

	if (!uFnCos)
	{
		uFnCos = UFunction::FindFunction("Function Core.Object.Cos");
	}

	UObject_execCos_Params Cos_Params;
	memcpy_s(&Cos_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnCos->iNative;
	uFnCos->iNative = 0;

	uFnCos->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnCos, &Cos_Params, nullptr);

	uFnCos->FunctionFlags |= 0x400;

	uFnCos->iNative = iNativeIndex;

	return Cos_Params.ReturnValue;
};

// Function Core.Object.Asin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Asin(float A)
{
	static UFunction* uFnAsin = nullptr;

	if (!uFnAsin)
	{
		uFnAsin = UFunction::FindFunction("Function Core.Object.Asin");
	}

	UObject_execAsin_Params Asin_Params;
	memcpy_s(&Asin_Params.A, 0x4, &A, 0x4);

	uFnAsin->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAsin, &Asin_Params, nullptr);

	uFnAsin->FunctionFlags |= 0x400;

	return Asin_Params.ReturnValue;
};

// Function Core.Object.Sin
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[187])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Sin(float A)
{
	static UFunction* uFnSin = nullptr;

	if (!uFnSin)
	{
		uFnSin = UFunction::FindFunction("Function Core.Object.Sin");
	}

	UObject_execSin_Params Sin_Params;
	memcpy_s(&Sin_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnSin->iNative;
	uFnSin->iNative = 0;

	uFnSin->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSin, &Sin_Params, nullptr);

	uFnSin->FunctionFlags |= 0x400;

	uFnSin->iNative = iNativeIndex;

	return Sin_Params.ReturnValue;
};

// Function Core.Object.Abs
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[186])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Abs(float A)
{
	static UFunction* uFnAbs = nullptr;

	if (!uFnAbs)
	{
		uFnAbs = UFunction::FindFunction("Function Core.Object.Abs");
	}

	UObject_execAbs_Params Abs_Params;
	memcpy_s(&Abs_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnAbs->iNative;
	uFnAbs->iNative = 0;

	uFnAbs->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAbs, &Abs_Params, nullptr);

	uFnAbs->FunctionFlags |= 0x400;

	uFnAbs->iNative = iNativeIndex;

	return Abs_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_FloatFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[185])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::SubtractEqual_FloatFloat(float B, float& A)
{
	static UFunction* uFnSubtractEqual_FloatFloat = nullptr;

	if (!uFnSubtractEqual_FloatFloat)
	{
		uFnSubtractEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.SubtractEqual_FloatFloat");
	}

	UObject_execSubtractEqual_FloatFloat_Params SubtractEqual_FloatFloat_Params;
	memcpy_s(&SubtractEqual_FloatFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&SubtractEqual_FloatFloat_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnSubtractEqual_FloatFloat->iNative;
	uFnSubtractEqual_FloatFloat->iNative = 0;

	uFnSubtractEqual_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_FloatFloat, &SubtractEqual_FloatFloat_Params, nullptr);

	uFnSubtractEqual_FloatFloat->FunctionFlags |= 0x400;

	uFnSubtractEqual_FloatFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &SubtractEqual_FloatFloat_Params.A, 0x4);

	return SubtractEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.AddEqual_FloatFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[184])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::AddEqual_FloatFloat(float B, float& A)
{
	static UFunction* uFnAddEqual_FloatFloat = nullptr;

	if (!uFnAddEqual_FloatFloat)
	{
		uFnAddEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.AddEqual_FloatFloat");
	}

	UObject_execAddEqual_FloatFloat_Params AddEqual_FloatFloat_Params;
	memcpy_s(&AddEqual_FloatFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&AddEqual_FloatFloat_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnAddEqual_FloatFloat->iNative;
	uFnAddEqual_FloatFloat->iNative = 0;

	uFnAddEqual_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddEqual_FloatFloat, &AddEqual_FloatFloat_Params, nullptr);

	uFnAddEqual_FloatFloat->FunctionFlags |= 0x400;

	uFnAddEqual_FloatFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &AddEqual_FloatFloat_Params.A, 0x4);

	return AddEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_FloatFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[183])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::DivideEqual_FloatFloat(float B, float& A)
{
	static UFunction* uFnDivideEqual_FloatFloat = nullptr;

	if (!uFnDivideEqual_FloatFloat)
	{
		uFnDivideEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_FloatFloat");
	}

	UObject_execDivideEqual_FloatFloat_Params DivideEqual_FloatFloat_Params;
	memcpy_s(&DivideEqual_FloatFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&DivideEqual_FloatFloat_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnDivideEqual_FloatFloat->iNative;
	uFnDivideEqual_FloatFloat->iNative = 0;

	uFnDivideEqual_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_FloatFloat, &DivideEqual_FloatFloat_Params, nullptr);

	uFnDivideEqual_FloatFloat->FunctionFlags |= 0x400;

	uFnDivideEqual_FloatFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &DivideEqual_FloatFloat_Params.A, 0x4);

	return DivideEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_FloatFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[182])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_Parm | CPF_OutParm)

float UObject::MultiplyEqual_FloatFloat(float B, float& A)
{
	static UFunction* uFnMultiplyEqual_FloatFloat = nullptr;

	if (!uFnMultiplyEqual_FloatFloat)
	{
		uFnMultiplyEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_FloatFloat");
	}

	UObject_execMultiplyEqual_FloatFloat_Params MultiplyEqual_FloatFloat_Params;
	memcpy_s(&MultiplyEqual_FloatFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&MultiplyEqual_FloatFloat_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnMultiplyEqual_FloatFloat->iNative;
	uFnMultiplyEqual_FloatFloat->iNative = 0;

	uFnMultiplyEqual_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_FloatFloat, &MultiplyEqual_FloatFloat_Params, nullptr);

	uFnMultiplyEqual_FloatFloat->FunctionFlags |= 0x400;

	uFnMultiplyEqual_FloatFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &MultiplyEqual_FloatFloat_Params.A, 0x4);

	return MultiplyEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.NotEqual_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[181])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::NotEqual_FloatFloat(float A, float B)
{
	static UFunction* uFnNotEqual_FloatFloat = nullptr;

	if (!uFnNotEqual_FloatFloat)
	{
		uFnNotEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.NotEqual_FloatFloat");
	}

	UObject_execNotEqual_FloatFloat_Params NotEqual_FloatFloat_Params;
	memcpy_s(&NotEqual_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&NotEqual_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnNotEqual_FloatFloat->iNative;
	uFnNotEqual_FloatFloat->iNative = 0;

	uFnNotEqual_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_FloatFloat, &NotEqual_FloatFloat_Params, nullptr);

	uFnNotEqual_FloatFloat->FunctionFlags |= 0x400;

	uFnNotEqual_FloatFloat->iNative = iNativeIndex;

	return NotEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.ComplementEqual_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[210])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::ComplementEqual_FloatFloat(float A, float B)
{
	static UFunction* uFnComplementEqual_FloatFloat = nullptr;

	if (!uFnComplementEqual_FloatFloat)
	{
		uFnComplementEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.ComplementEqual_FloatFloat");
	}

	UObject_execComplementEqual_FloatFloat_Params ComplementEqual_FloatFloat_Params;
	memcpy_s(&ComplementEqual_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&ComplementEqual_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnComplementEqual_FloatFloat->iNative;
	uFnComplementEqual_FloatFloat->iNative = 0;

	uFnComplementEqual_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnComplementEqual_FloatFloat, &ComplementEqual_FloatFloat_Params, nullptr);

	uFnComplementEqual_FloatFloat->FunctionFlags |= 0x400;

	uFnComplementEqual_FloatFloat->iNative = iNativeIndex;

	return ComplementEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[180])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::EqualEqual_FloatFloat(float A, float B)
{
	static UFunction* uFnEqualEqual_FloatFloat = nullptr;

	if (!uFnEqualEqual_FloatFloat)
	{
		uFnEqualEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.EqualEqual_FloatFloat");
	}

	UObject_execEqualEqual_FloatFloat_Params EqualEqual_FloatFloat_Params;
	memcpy_s(&EqualEqual_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&EqualEqual_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnEqualEqual_FloatFloat->iNative;
	uFnEqualEqual_FloatFloat->iNative = 0;

	uFnEqualEqual_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_FloatFloat, &EqualEqual_FloatFloat_Params, nullptr);

	uFnEqualEqual_FloatFloat->FunctionFlags |= 0x400;

	uFnEqualEqual_FloatFloat->iNative = iNativeIndex;

	return EqualEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.GreaterEqual_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[179])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::GreaterEqual_FloatFloat(float A, float B)
{
	static UFunction* uFnGreaterEqual_FloatFloat = nullptr;

	if (!uFnGreaterEqual_FloatFloat)
	{
		uFnGreaterEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.GreaterEqual_FloatFloat");
	}

	UObject_execGreaterEqual_FloatFloat_Params GreaterEqual_FloatFloat_Params;
	memcpy_s(&GreaterEqual_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&GreaterEqual_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnGreaterEqual_FloatFloat->iNative;
	uFnGreaterEqual_FloatFloat->iNative = 0;

	uFnGreaterEqual_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterEqual_FloatFloat, &GreaterEqual_FloatFloat_Params, nullptr);

	uFnGreaterEqual_FloatFloat->FunctionFlags |= 0x400;

	uFnGreaterEqual_FloatFloat->iNative = iNativeIndex;

	return GreaterEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.LessEqual_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[178])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::LessEqual_FloatFloat(float A, float B)
{
	static UFunction* uFnLessEqual_FloatFloat = nullptr;

	if (!uFnLessEqual_FloatFloat)
	{
		uFnLessEqual_FloatFloat = UFunction::FindFunction("Function Core.Object.LessEqual_FloatFloat");
	}

	UObject_execLessEqual_FloatFloat_Params LessEqual_FloatFloat_Params;
	memcpy_s(&LessEqual_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&LessEqual_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnLessEqual_FloatFloat->iNative;
	uFnLessEqual_FloatFloat->iNative = 0;

	uFnLessEqual_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLessEqual_FloatFloat, &LessEqual_FloatFloat_Params, nullptr);

	uFnLessEqual_FloatFloat->FunctionFlags |= 0x400;

	uFnLessEqual_FloatFloat->iNative = iNativeIndex;

	return LessEqual_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Greater_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[177])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::Greater_FloatFloat(float A, float B)
{
	static UFunction* uFnGreater_FloatFloat = nullptr;

	if (!uFnGreater_FloatFloat)
	{
		uFnGreater_FloatFloat = UFunction::FindFunction("Function Core.Object.Greater_FloatFloat");
	}

	UObject_execGreater_FloatFloat_Params Greater_FloatFloat_Params;
	memcpy_s(&Greater_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Greater_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnGreater_FloatFloat->iNative;
	uFnGreater_FloatFloat->iNative = 0;

	uFnGreater_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreater_FloatFloat, &Greater_FloatFloat_Params, nullptr);

	uFnGreater_FloatFloat->FunctionFlags |= 0x400;

	uFnGreater_FloatFloat->iNative = iNativeIndex;

	return Greater_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Less_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[176])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

bool UObject::Less_FloatFloat(float A, float B)
{
	static UFunction* uFnLess_FloatFloat = nullptr;

	if (!uFnLess_FloatFloat)
	{
		uFnLess_FloatFloat = UFunction::FindFunction("Function Core.Object.Less_FloatFloat");
	}

	UObject_execLess_FloatFloat_Params Less_FloatFloat_Params;
	memcpy_s(&Less_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Less_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnLess_FloatFloat->iNative;
	uFnLess_FloatFloat->iNative = 0;

	uFnLess_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLess_FloatFloat, &Less_FloatFloat_Params, nullptr);

	uFnLess_FloatFloat->FunctionFlags |= 0x400;

	uFnLess_FloatFloat->iNative = iNativeIndex;

	return Less_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Subtract_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[175])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Subtract_FloatFloat(float A, float B)
{
	static UFunction* uFnSubtract_FloatFloat = nullptr;

	if (!uFnSubtract_FloatFloat)
	{
		uFnSubtract_FloatFloat = UFunction::FindFunction("Function Core.Object.Subtract_FloatFloat");
	}

	UObject_execSubtract_FloatFloat_Params Subtract_FloatFloat_Params;
	memcpy_s(&Subtract_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Subtract_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnSubtract_FloatFloat->iNative;
	uFnSubtract_FloatFloat->iNative = 0;

	uFnSubtract_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_FloatFloat, &Subtract_FloatFloat_Params, nullptr);

	uFnSubtract_FloatFloat->FunctionFlags |= 0x400;

	uFnSubtract_FloatFloat->iNative = iNativeIndex;

	return Subtract_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Add_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[174])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Add_FloatFloat(float A, float B)
{
	static UFunction* uFnAdd_FloatFloat = nullptr;

	if (!uFnAdd_FloatFloat)
	{
		uFnAdd_FloatFloat = UFunction::FindFunction("Function Core.Object.Add_FloatFloat");
	}

	UObject_execAdd_FloatFloat_Params Add_FloatFloat_Params;
	memcpy_s(&Add_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Add_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnAdd_FloatFloat->iNative;
	uFnAdd_FloatFloat->iNative = 0;

	uFnAdd_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAdd_FloatFloat, &Add_FloatFloat_Params, nullptr);

	uFnAdd_FloatFloat->FunctionFlags |= 0x400;

	uFnAdd_FloatFloat->iNative = iNativeIndex;

	return Add_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Percent_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[173])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Percent_FloatFloat(float A, float B)
{
	static UFunction* uFnPercent_FloatFloat = nullptr;

	if (!uFnPercent_FloatFloat)
	{
		uFnPercent_FloatFloat = UFunction::FindFunction("Function Core.Object.Percent_FloatFloat");
	}

	UObject_execPercent_FloatFloat_Params Percent_FloatFloat_Params;
	memcpy_s(&Percent_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Percent_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnPercent_FloatFloat->iNative;
	uFnPercent_FloatFloat->iNative = 0;

	uFnPercent_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnPercent_FloatFloat, &Percent_FloatFloat_Params, nullptr);

	uFnPercent_FloatFloat->FunctionFlags |= 0x400;

	uFnPercent_FloatFloat->iNative = iNativeIndex;

	return Percent_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Divide_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[172])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Divide_FloatFloat(float A, float B)
{
	static UFunction* uFnDivide_FloatFloat = nullptr;

	if (!uFnDivide_FloatFloat)
	{
		uFnDivide_FloatFloat = UFunction::FindFunction("Function Core.Object.Divide_FloatFloat");
	}

	UObject_execDivide_FloatFloat_Params Divide_FloatFloat_Params;
	memcpy_s(&Divide_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Divide_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnDivide_FloatFloat->iNative;
	uFnDivide_FloatFloat->iNative = 0;

	uFnDivide_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivide_FloatFloat, &Divide_FloatFloat_Params, nullptr);

	uFnDivide_FloatFloat->FunctionFlags |= 0x400;

	uFnDivide_FloatFloat->iNative = iNativeIndex;

	return Divide_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Multiply_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[171])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)

float UObject::Multiply_FloatFloat(float A, float B)
{
	static UFunction* uFnMultiply_FloatFloat = nullptr;

	if (!uFnMultiply_FloatFloat)
	{
		uFnMultiply_FloatFloat = UFunction::FindFunction("Function Core.Object.Multiply_FloatFloat");
	}

	UObject_execMultiply_FloatFloat_Params Multiply_FloatFloat_Params;
	memcpy_s(&Multiply_FloatFloat_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_FloatFloat_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnMultiply_FloatFloat->iNative;
	uFnMultiply_FloatFloat->iNative = 0;

	uFnMultiply_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_FloatFloat, &Multiply_FloatFloat_Params, nullptr);

	uFnMultiply_FloatFloat->FunctionFlags |= 0x400;

	uFnMultiply_FloatFloat->iNative = iNativeIndex;

	return Multiply_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyMultiply_FloatFloat
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[170])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Base                           (CPF_Parm)
// float                          Exp                            (CPF_Parm)

float UObject::MultiplyMultiply_FloatFloat(float Base, float Exp)
{
	static UFunction* uFnMultiplyMultiply_FloatFloat = nullptr;

	if (!uFnMultiplyMultiply_FloatFloat)
	{
		uFnMultiplyMultiply_FloatFloat = UFunction::FindFunction("Function Core.Object.MultiplyMultiply_FloatFloat");
	}

	UObject_execMultiplyMultiply_FloatFloat_Params MultiplyMultiply_FloatFloat_Params;
	memcpy_s(&MultiplyMultiply_FloatFloat_Params.Base, 0x4, &Base, 0x4);
	memcpy_s(&MultiplyMultiply_FloatFloat_Params.Exp, 0x4, &Exp, 0x4);

	uint16_t iNativeIndex = uFnMultiplyMultiply_FloatFloat->iNative;
	uFnMultiplyMultiply_FloatFloat->iNative = 0;

	uFnMultiplyMultiply_FloatFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyMultiply_FloatFloat, &MultiplyMultiply_FloatFloat_Params, nullptr);

	uFnMultiplyMultiply_FloatFloat->FunctionFlags |= 0x400;

	uFnMultiplyMultiply_FloatFloat->iNative = iNativeIndex;

	return MultiplyMultiply_FloatFloat_Params.ReturnValue;
};

// Function Core.Object.Subtract_PreFloat
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[169])
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          A                              (CPF_Parm)

float UObject::Subtract_PreFloat(float A)
{
	static UFunction* uFnSubtract_PreFloat = nullptr;

	if (!uFnSubtract_PreFloat)
	{
		uFnSubtract_PreFloat = UFunction::FindFunction("Function Core.Object.Subtract_PreFloat");
	}

	UObject_execSubtract_PreFloat_Params Subtract_PreFloat_Params;
	memcpy_s(&Subtract_PreFloat_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnSubtract_PreFloat->iNative;
	uFnSubtract_PreFloat->iNative = 0;

	uFnSubtract_PreFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_PreFloat, &Subtract_PreFloat_Params, nullptr);

	uFnSubtract_PreFloat->FunctionFlags |= 0x400;

	uFnSubtract_PreFloat->iNative = iNativeIndex;

	return Subtract_PreFloat_Params.ReturnValue;
};

// Function Core.Object.SI64_SI64toF64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FDouble                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 SInt64Num                      (CPF_Parm)

struct FDouble UObject::SI64_SI64toF64(struct FSQWord SInt64Num)
{
	static UFunction* uFnSI64_SI64toF64 = nullptr;

	if (!uFnSI64_SI64toF64)
	{
		uFnSI64_SI64toF64 = UFunction::FindFunction("Function Core.Object.SI64_SI64toF64");
	}

	UObject_execSI64_SI64toF64_Params SI64_SI64toF64_Params;
	memcpy_s(&SI64_SI64toF64_Params.SInt64Num, 0x8, &SInt64Num, 0x8);

	uFnSI64_SI64toF64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSI64_SI64toF64, &SI64_SI64toF64_Params, nullptr);

	uFnSI64_SI64toF64->FunctionFlags |= 0x400;

	return SI64_SI64toF64_Params.ReturnValue;
};

// Function Core.Object.SI64_SI64toF
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 SInt64Num                      (CPF_Parm)

float UObject::SI64_SI64toF(struct FSQWord SInt64Num)
{
	static UFunction* uFnSI64_SI64toF = nullptr;

	if (!uFnSI64_SI64toF)
	{
		uFnSI64_SI64toF = UFunction::FindFunction("Function Core.Object.SI64_SI64toF");
	}

	UObject_execSI64_SI64toF_Params SI64_SI64toF_Params;
	memcpy_s(&SI64_SI64toF_Params.SInt64Num, 0x8, &SInt64Num, 0x8);

	uFnSI64_SI64toF->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSI64_SI64toF, &SI64_SI64toF_Params, nullptr);

	uFnSI64_SI64toF->FunctionFlags |= 0x400;

	return SI64_SI64toF_Params.ReturnValue;
};

// Function Core.Object.SI64_SI64toI
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 SInt64Num                      (CPF_Parm)
// float                          MulNum                         (CPF_OptionalParm | CPF_Parm)

int32_t UObject::SI64_SI64toI(struct FSQWord SInt64Num, float MulNum)
{
	static UFunction* uFnSI64_SI64toI = nullptr;

	if (!uFnSI64_SI64toI)
	{
		uFnSI64_SI64toI = UFunction::FindFunction("Function Core.Object.SI64_SI64toI");
	}

	UObject_execSI64_SI64toI_Params SI64_SI64toI_Params;
	memcpy_s(&SI64_SI64toI_Params.SInt64Num, 0x8, &SInt64Num, 0x8);
	memcpy_s(&SI64_SI64toI_Params.MulNum, 0x4, &MulNum, 0x4);

	uFnSI64_SI64toI->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSI64_SI64toI, &SI64_SI64toI_Params, nullptr);

	uFnSI64_SI64toI->FunctionFlags |= 0x400;

	return SI64_SI64toI_Params.ReturnValue;
};

// Function Core.Object.SI64_SI64toA
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FSQWord                 SInt64Num                      (CPF_Parm)

class FString UObject::SI64_SI64toA(struct FSQWord SInt64Num)
{
	static UFunction* uFnSI64_SI64toA = nullptr;

	if (!uFnSI64_SI64toA)
	{
		uFnSI64_SI64toA = UFunction::FindFunction("Function Core.Object.SI64_SI64toA");
	}

	UObject_execSI64_SI64toA_Params SI64_SI64toA_Params;
	memcpy_s(&SI64_SI64toA_Params.SInt64Num, 0x8, &SInt64Num, 0x8);

	uFnSI64_SI64toA->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSI64_SI64toA, &SI64_SI64toA_Params, nullptr);

	uFnSI64_SI64toA->FunctionFlags |= 0x400;

	return SI64_SI64toA_Params.ReturnValue;
};

// Function Core.Object.SI64_AtoSI64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  SInt64String                   (CPF_Parm | CPF_NeedCtorLink)

struct FSQWord UObject::SI64_AtoSI64(class FString SInt64String)
{
	static UFunction* uFnSI64_AtoSI64 = nullptr;

	if (!uFnSI64_AtoSI64)
	{
		uFnSI64_AtoSI64 = UFunction::FindFunction("Function Core.Object.SI64_AtoSI64");
	}

	UObject_execSI64_AtoSI64_Params SI64_AtoSI64_Params;
	memcpy_s(&SI64_AtoSI64_Params.SInt64String, 0x10, &SInt64String, 0x10);

	uFnSI64_AtoSI64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSI64_AtoSI64, &SI64_AtoSI64_Params, nullptr);

	uFnSI64_AtoSI64->FunctionFlags |= 0x400;

	return SI64_AtoSI64_Params.ReturnValue;
};

// Function Core.Object.SI64_F64toSI64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 Num                            (CPF_Parm)

struct FSQWord UObject::SI64_F64toSI64(struct FDouble Num)
{
	static UFunction* uFnSI64_F64toSI64 = nullptr;

	if (!uFnSI64_F64toSI64)
	{
		uFnSI64_F64toSI64 = UFunction::FindFunction("Function Core.Object.SI64_F64toSI64");
	}

	UObject_execSI64_F64toSI64_Params SI64_F64toSI64_Params;
	memcpy_s(&SI64_F64toSI64_Params.Num, 0x8, &Num, 0x8);

	uFnSI64_F64toSI64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSI64_F64toSI64, &SI64_F64toSI64_Params, nullptr);

	uFnSI64_F64toSI64->FunctionFlags |= 0x400;

	return SI64_F64toSI64_Params.ReturnValue;
};

// Function Core.Object.SI64_FtoSI64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          Num                            (CPF_Parm)

struct FSQWord UObject::SI64_FtoSI64(float Num)
{
	static UFunction* uFnSI64_FtoSI64 = nullptr;

	if (!uFnSI64_FtoSI64)
	{
		uFnSI64_FtoSI64 = UFunction::FindFunction("Function Core.Object.SI64_FtoSI64");
	}

	UObject_execSI64_FtoSI64_Params SI64_FtoSI64_Params;
	memcpy_s(&SI64_FtoSI64_Params.Num, 0x4, &Num, 0x4);

	uFnSI64_FtoSI64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSI64_FtoSI64, &SI64_FtoSI64_Params, nullptr);

	uFnSI64_FtoSI64->FunctionFlags |= 0x400;

	return SI64_FtoSI64_Params.ReturnValue;
};

// Function Core.Object.SI64_ItoSI64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Num                            (CPF_Parm)

struct FSQWord UObject::SI64_ItoSI64(int32_t Num)
{
	static UFunction* uFnSI64_ItoSI64 = nullptr;

	if (!uFnSI64_ItoSI64)
	{
		uFnSI64_ItoSI64 = UFunction::FindFunction("Function Core.Object.SI64_ItoSI64");
	}

	UObject_execSI64_ItoSI64_Params SI64_ItoSI64_Params;
	memcpy_s(&SI64_ItoSI64_Params.Num, 0x4, &Num, 0x4);

	uFnSI64_ItoSI64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSI64_ItoSI64, &SI64_ItoSI64_Params, nullptr);

	uFnSI64_ItoSI64->FunctionFlags |= 0x400;

	return SI64_ItoSI64_Params.ReturnValue;
};

// Function Core.Object.ToHexSQW
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FSQWord                 A                              (CPF_Parm)

class FString UObject::ToHexSQW(struct FSQWord A)
{
	static UFunction* uFnToHexSQW = nullptr;

	if (!uFnToHexSQW)
	{
		uFnToHexSQW = UFunction::FindFunction("Function Core.Object.ToHexSQW");
	}

	UObject_execToHexSQW_Params ToHexSQW_Params;
	memcpy_s(&ToHexSQW_Params.A, 0x8, &A, 0x8);

	uFnToHexSQW->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnToHexSQW, &ToHexSQW_Params, nullptr);

	uFnToHexSQW->FunctionFlags |= 0x400;

	return ToHexSQW_Params.ReturnValue;
};

// Function Core.Object.ClampSQW
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[482])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 V                              (CPF_Parm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::ClampSQW(struct FSQWord V, struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnClampSQW = nullptr;

	if (!uFnClampSQW)
	{
		uFnClampSQW = UFunction::FindFunction("Function Core.Object.ClampSQW");
	}

	UObject_execClampSQW_Params ClampSQW_Params;
	memcpy_s(&ClampSQW_Params.V, 0x8, &V, 0x8);
	memcpy_s(&ClampSQW_Params.A, 0x8, &A, 0x8);
	memcpy_s(&ClampSQW_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnClampSQW->iNative;
	uFnClampSQW->iNative = 0;

	uFnClampSQW->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnClampSQW, &ClampSQW_Params, nullptr);

	uFnClampSQW->FunctionFlags |= 0x400;

	uFnClampSQW->iNative = iNativeIndex;

	return ClampSQW_Params.ReturnValue;
};

// Function Core.Object.MaxSQW
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[481])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::MaxSQW(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnMaxSQW = nullptr;

	if (!uFnMaxSQW)
	{
		uFnMaxSQW = UFunction::FindFunction("Function Core.Object.MaxSQW");
	}

	UObject_execMaxSQW_Params MaxSQW_Params;
	memcpy_s(&MaxSQW_Params.A, 0x8, &A, 0x8);
	memcpy_s(&MaxSQW_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnMaxSQW->iNative;
	uFnMaxSQW->iNative = 0;

	uFnMaxSQW->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMaxSQW, &MaxSQW_Params, nullptr);

	uFnMaxSQW->FunctionFlags |= 0x400;

	uFnMaxSQW->iNative = iNativeIndex;

	return MaxSQW_Params.ReturnValue;
};

// Function Core.Object.MinSQW
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[480])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::MinSQW(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnMinSQW = nullptr;

	if (!uFnMinSQW)
	{
		uFnMinSQW = UFunction::FindFunction("Function Core.Object.MinSQW");
	}

	UObject_execMinSQW_Params MinSQW_Params;
	memcpy_s(&MinSQW_Params.A, 0x8, &A, 0x8);
	memcpy_s(&MinSQW_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnMinSQW->iNative;
	uFnMinSQW->iNative = 0;

	uFnMinSQW->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMinSQW, &MinSQW_Params, nullptr);

	uFnMinSQW->FunctionFlags |= 0x400;

	uFnMinSQW->iNative = iNativeIndex;

	return MinSQW_Params.ReturnValue;
};

// Function Core.Object.RandSQW
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[479])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 Max                            (CPF_Parm)

struct FSQWord UObject::RandSQW(struct FSQWord Max)
{
	static UFunction* uFnRandSQW = nullptr;

	if (!uFnRandSQW)
	{
		uFnRandSQW = UFunction::FindFunction("Function Core.Object.RandSQW");
	}

	UObject_execRandSQW_Params RandSQW_Params;
	memcpy_s(&RandSQW_Params.Max, 0x8, &Max, 0x8);

	uint16_t iNativeIndex = uFnRandSQW->iNative;
	uFnRandSQW->iNative = 0;

	uFnRandSQW->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRandSQW, &RandSQW_Params, nullptr);

	uFnRandSQW->FunctionFlags |= 0x400;

	uFnRandSQW->iNative = iNativeIndex;

	return RandSQW_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_SQWord
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[478])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm | CPF_OutParm)

struct FSQWord UObject::SubtractSubtract_SQWord(struct FSQWord& A)
{
	static UFunction* uFnSubtractSubtract_SQWord = nullptr;

	if (!uFnSubtractSubtract_SQWord)
	{
		uFnSubtractSubtract_SQWord = UFunction::FindFunction("Function Core.Object.SubtractSubtract_SQWord");
	}

	UObject_execSubtractSubtract_SQWord_Params SubtractSubtract_SQWord_Params;
	memcpy_s(&SubtractSubtract_SQWord_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnSubtractSubtract_SQWord->iNative;
	uFnSubtractSubtract_SQWord->iNative = 0;

	uFnSubtractSubtract_SQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_SQWord, &SubtractSubtract_SQWord_Params, nullptr);

	uFnSubtractSubtract_SQWord->FunctionFlags |= 0x400;

	uFnSubtractSubtract_SQWord->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &SubtractSubtract_SQWord_Params.A, 0x8);

	return SubtractSubtract_SQWord_Params.ReturnValue;
};

// Function Core.Object.AddAdd_SQWord
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[477])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm | CPF_OutParm)

struct FSQWord UObject::AddAdd_SQWord(struct FSQWord& A)
{
	static UFunction* uFnAddAdd_SQWord = nullptr;

	if (!uFnAddAdd_SQWord)
	{
		uFnAddAdd_SQWord = UFunction::FindFunction("Function Core.Object.AddAdd_SQWord");
	}

	UObject_execAddAdd_SQWord_Params AddAdd_SQWord_Params;
	memcpy_s(&AddAdd_SQWord_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnAddAdd_SQWord->iNative;
	uFnAddAdd_SQWord->iNative = 0;

	uFnAddAdd_SQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddAdd_SQWord, &AddAdd_SQWord_Params, nullptr);

	uFnAddAdd_SQWord->FunctionFlags |= 0x400;

	uFnAddAdd_SQWord->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &AddAdd_SQWord_Params.A, 0x8);

	return AddAdd_SQWord_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreSQWord
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[476])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm | CPF_OutParm)

struct FSQWord UObject::SubtractSubtract_PreSQWord(struct FSQWord& A)
{
	static UFunction* uFnSubtractSubtract_PreSQWord = nullptr;

	if (!uFnSubtractSubtract_PreSQWord)
	{
		uFnSubtractSubtract_PreSQWord = UFunction::FindFunction("Function Core.Object.SubtractSubtract_PreSQWord");
	}

	UObject_execSubtractSubtract_PreSQWord_Params SubtractSubtract_PreSQWord_Params;
	memcpy_s(&SubtractSubtract_PreSQWord_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnSubtractSubtract_PreSQWord->iNative;
	uFnSubtractSubtract_PreSQWord->iNative = 0;

	uFnSubtractSubtract_PreSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_PreSQWord, &SubtractSubtract_PreSQWord_Params, nullptr);

	uFnSubtractSubtract_PreSQWord->FunctionFlags |= 0x400;

	uFnSubtractSubtract_PreSQWord->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &SubtractSubtract_PreSQWord_Params.A, 0x8);

	return SubtractSubtract_PreSQWord_Params.ReturnValue;
};

// Function Core.Object.AddAdd_PreSQWord
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[475])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm | CPF_OutParm)

struct FSQWord UObject::AddAdd_PreSQWord(struct FSQWord& A)
{
	static UFunction* uFnAddAdd_PreSQWord = nullptr;

	if (!uFnAddAdd_PreSQWord)
	{
		uFnAddAdd_PreSQWord = UFunction::FindFunction("Function Core.Object.AddAdd_PreSQWord");
	}

	UObject_execAddAdd_PreSQWord_Params AddAdd_PreSQWord_Params;
	memcpy_s(&AddAdd_PreSQWord_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnAddAdd_PreSQWord->iNative;
	uFnAddAdd_PreSQWord->iNative = 0;

	uFnAddAdd_PreSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddAdd_PreSQWord, &AddAdd_PreSQWord_Params, nullptr);

	uFnAddAdd_PreSQWord->FunctionFlags |= 0x400;

	uFnAddAdd_PreSQWord->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &AddAdd_PreSQWord_Params.A, 0x8);

	return AddAdd_PreSQWord_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_SQWordSQWord
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[474])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 B                              (CPF_Parm)
// struct FSQWord                 A                              (CPF_Parm | CPF_OutParm)

struct FSQWord UObject::SubtractEqual_SQWordSQWord(struct FSQWord B, struct FSQWord& A)
{
	static UFunction* uFnSubtractEqual_SQWordSQWord = nullptr;

	if (!uFnSubtractEqual_SQWordSQWord)
	{
		uFnSubtractEqual_SQWordSQWord = UFunction::FindFunction("Function Core.Object.SubtractEqual_SQWordSQWord");
	}

	UObject_execSubtractEqual_SQWordSQWord_Params SubtractEqual_SQWordSQWord_Params;
	memcpy_s(&SubtractEqual_SQWordSQWord_Params.B, 0x8, &B, 0x8);
	memcpy_s(&SubtractEqual_SQWordSQWord_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnSubtractEqual_SQWordSQWord->iNative;
	uFnSubtractEqual_SQWordSQWord->iNative = 0;

	uFnSubtractEqual_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_SQWordSQWord, &SubtractEqual_SQWordSQWord_Params, nullptr);

	uFnSubtractEqual_SQWordSQWord->FunctionFlags |= 0x400;

	uFnSubtractEqual_SQWordSQWord->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &SubtractEqual_SQWordSQWord_Params.A, 0x8);

	return SubtractEqual_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.AddEqual_SQWordSQWord
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[473])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 B                              (CPF_Parm)
// struct FSQWord                 A                              (CPF_Parm | CPF_OutParm)

struct FSQWord UObject::AddEqual_SQWordSQWord(struct FSQWord B, struct FSQWord& A)
{
	static UFunction* uFnAddEqual_SQWordSQWord = nullptr;

	if (!uFnAddEqual_SQWordSQWord)
	{
		uFnAddEqual_SQWordSQWord = UFunction::FindFunction("Function Core.Object.AddEqual_SQWordSQWord");
	}

	UObject_execAddEqual_SQWordSQWord_Params AddEqual_SQWordSQWord_Params;
	memcpy_s(&AddEqual_SQWordSQWord_Params.B, 0x8, &B, 0x8);
	memcpy_s(&AddEqual_SQWordSQWord_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnAddEqual_SQWordSQWord->iNative;
	uFnAddEqual_SQWordSQWord->iNative = 0;

	uFnAddEqual_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddEqual_SQWordSQWord, &AddEqual_SQWordSQWord_Params, nullptr);

	uFnAddEqual_SQWordSQWord->FunctionFlags |= 0x400;

	uFnAddEqual_SQWordSQWord->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &AddEqual_SQWordSQWord_Params.A, 0x8);

	return AddEqual_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_SQWordDouble
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[472])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 B                              (CPF_Parm)
// struct FSQWord                 A                              (CPF_Parm | CPF_OutParm)

struct FSQWord UObject::DivideEqual_SQWordDouble(struct FDouble B, struct FSQWord& A)
{
	static UFunction* uFnDivideEqual_SQWordDouble = nullptr;

	if (!uFnDivideEqual_SQWordDouble)
	{
		uFnDivideEqual_SQWordDouble = UFunction::FindFunction("Function Core.Object.DivideEqual_SQWordDouble");
	}

	UObject_execDivideEqual_SQWordDouble_Params DivideEqual_SQWordDouble_Params;
	memcpy_s(&DivideEqual_SQWordDouble_Params.B, 0x8, &B, 0x8);
	memcpy_s(&DivideEqual_SQWordDouble_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnDivideEqual_SQWordDouble->iNative;
	uFnDivideEqual_SQWordDouble->iNative = 0;

	uFnDivideEqual_SQWordDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_SQWordDouble, &DivideEqual_SQWordDouble_Params, nullptr);

	uFnDivideEqual_SQWordDouble->FunctionFlags |= 0x400;

	uFnDivideEqual_SQWordDouble->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &DivideEqual_SQWordDouble_Params.A, 0x8);

	return DivideEqual_SQWordDouble_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_SQWordFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[471])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FSQWord                 A                              (CPF_Parm | CPF_OutParm)

struct FSQWord UObject::DivideEqual_SQWordFloat(float B, struct FSQWord& A)
{
	static UFunction* uFnDivideEqual_SQWordFloat = nullptr;

	if (!uFnDivideEqual_SQWordFloat)
	{
		uFnDivideEqual_SQWordFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_SQWordFloat");
	}

	UObject_execDivideEqual_SQWordFloat_Params DivideEqual_SQWordFloat_Params;
	memcpy_s(&DivideEqual_SQWordFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&DivideEqual_SQWordFloat_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnDivideEqual_SQWordFloat->iNative;
	uFnDivideEqual_SQWordFloat->iNative = 0;

	uFnDivideEqual_SQWordFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_SQWordFloat, &DivideEqual_SQWordFloat_Params, nullptr);

	uFnDivideEqual_SQWordFloat->FunctionFlags |= 0x400;

	uFnDivideEqual_SQWordFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &DivideEqual_SQWordFloat_Params.A, 0x8);

	return DivideEqual_SQWordFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_SQWordDouble
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[470])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 B                              (CPF_Parm)
// struct FSQWord                 A                              (CPF_Parm | CPF_OutParm)

struct FSQWord UObject::MultiplyEqual_SQWordDouble(struct FDouble B, struct FSQWord& A)
{
	static UFunction* uFnMultiplyEqual_SQWordDouble = nullptr;

	if (!uFnMultiplyEqual_SQWordDouble)
	{
		uFnMultiplyEqual_SQWordDouble = UFunction::FindFunction("Function Core.Object.MultiplyEqual_SQWordDouble");
	}

	UObject_execMultiplyEqual_SQWordDouble_Params MultiplyEqual_SQWordDouble_Params;
	memcpy_s(&MultiplyEqual_SQWordDouble_Params.B, 0x8, &B, 0x8);
	memcpy_s(&MultiplyEqual_SQWordDouble_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnMultiplyEqual_SQWordDouble->iNative;
	uFnMultiplyEqual_SQWordDouble->iNative = 0;

	uFnMultiplyEqual_SQWordDouble->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_SQWordDouble, &MultiplyEqual_SQWordDouble_Params, nullptr);

	uFnMultiplyEqual_SQWordDouble->FunctionFlags |= 0x400;

	uFnMultiplyEqual_SQWordDouble->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &MultiplyEqual_SQWordDouble_Params.A, 0x8);

	return MultiplyEqual_SQWordDouble_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_SQWordFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[469])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// struct FSQWord                 A                              (CPF_Parm | CPF_OutParm)

struct FSQWord UObject::MultiplyEqual_SQWordFloat(float B, struct FSQWord& A)
{
	static UFunction* uFnMultiplyEqual_SQWordFloat = nullptr;

	if (!uFnMultiplyEqual_SQWordFloat)
	{
		uFnMultiplyEqual_SQWordFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_SQWordFloat");
	}

	UObject_execMultiplyEqual_SQWordFloat_Params MultiplyEqual_SQWordFloat_Params;
	memcpy_s(&MultiplyEqual_SQWordFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&MultiplyEqual_SQWordFloat_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnMultiplyEqual_SQWordFloat->iNative;
	uFnMultiplyEqual_SQWordFloat->iNative = 0;

	uFnMultiplyEqual_SQWordFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_SQWordFloat, &MultiplyEqual_SQWordFloat_Params, nullptr);

	uFnMultiplyEqual_SQWordFloat->FunctionFlags |= 0x400;

	uFnMultiplyEqual_SQWordFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0x8, &MultiplyEqual_SQWordFloat_Params.A, 0x8);

	return MultiplyEqual_SQWordFloat_Params.ReturnValue;
};

// Function Core.Object.Or_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[468])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::Or_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnOr_SQWordSQWord = nullptr;

	if (!uFnOr_SQWordSQWord)
	{
		uFnOr_SQWordSQWord = UFunction::FindFunction("Function Core.Object.Or_SQWordSQWord");
	}

	UObject_execOr_SQWordSQWord_Params Or_SQWordSQWord_Params;
	memcpy_s(&Or_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Or_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnOr_SQWordSQWord->iNative;
	uFnOr_SQWordSQWord->iNative = 0;

	uFnOr_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnOr_SQWordSQWord, &Or_SQWordSQWord_Params, nullptr);

	uFnOr_SQWordSQWord->FunctionFlags |= 0x400;

	uFnOr_SQWordSQWord->iNative = iNativeIndex;

	return Or_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.Xor_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[467])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::Xor_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnXor_SQWordSQWord = nullptr;

	if (!uFnXor_SQWordSQWord)
	{
		uFnXor_SQWordSQWord = UFunction::FindFunction("Function Core.Object.Xor_SQWordSQWord");
	}

	UObject_execXor_SQWordSQWord_Params Xor_SQWordSQWord_Params;
	memcpy_s(&Xor_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Xor_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnXor_SQWordSQWord->iNative;
	uFnXor_SQWordSQWord->iNative = 0;

	uFnXor_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnXor_SQWordSQWord, &Xor_SQWordSQWord_Params, nullptr);

	uFnXor_SQWordSQWord->FunctionFlags |= 0x400;

	uFnXor_SQWordSQWord->iNative = iNativeIndex;

	return Xor_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.And_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[466])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::And_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnAnd_SQWordSQWord = nullptr;

	if (!uFnAnd_SQWordSQWord)
	{
		uFnAnd_SQWordSQWord = UFunction::FindFunction("Function Core.Object.And_SQWordSQWord");
	}

	UObject_execAnd_SQWordSQWord_Params And_SQWordSQWord_Params;
	memcpy_s(&And_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&And_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnAnd_SQWordSQWord->iNative;
	uFnAnd_SQWordSQWord->iNative = 0;

	uFnAnd_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAnd_SQWordSQWord, &And_SQWordSQWord_Params, nullptr);

	uFnAnd_SQWordSQWord->FunctionFlags |= 0x400;

	uFnAnd_SQWordSQWord->iNative = iNativeIndex;

	return And_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.NotEqual_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[465])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

bool UObject::NotEqual_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnNotEqual_SQWordSQWord = nullptr;

	if (!uFnNotEqual_SQWordSQWord)
	{
		uFnNotEqual_SQWordSQWord = UFunction::FindFunction("Function Core.Object.NotEqual_SQWordSQWord");
	}

	UObject_execNotEqual_SQWordSQWord_Params NotEqual_SQWordSQWord_Params;
	memcpy_s(&NotEqual_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&NotEqual_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnNotEqual_SQWordSQWord->iNative;
	uFnNotEqual_SQWordSQWord->iNative = 0;

	uFnNotEqual_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_SQWordSQWord, &NotEqual_SQWordSQWord_Params, nullptr);

	uFnNotEqual_SQWordSQWord->FunctionFlags |= 0x400;

	uFnNotEqual_SQWordSQWord->iNative = iNativeIndex;

	return NotEqual_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[464])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

bool UObject::EqualEqual_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnEqualEqual_SQWordSQWord = nullptr;

	if (!uFnEqualEqual_SQWordSQWord)
	{
		uFnEqualEqual_SQWordSQWord = UFunction::FindFunction("Function Core.Object.EqualEqual_SQWordSQWord");
	}

	UObject_execEqualEqual_SQWordSQWord_Params EqualEqual_SQWordSQWord_Params;
	memcpy_s(&EqualEqual_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&EqualEqual_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnEqualEqual_SQWordSQWord->iNative;
	uFnEqualEqual_SQWordSQWord->iNative = 0;

	uFnEqualEqual_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_SQWordSQWord, &EqualEqual_SQWordSQWord_Params, nullptr);

	uFnEqualEqual_SQWordSQWord->FunctionFlags |= 0x400;

	uFnEqualEqual_SQWordSQWord->iNative = iNativeIndex;

	return EqualEqual_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.GreaterEqual_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[463])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

bool UObject::GreaterEqual_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnGreaterEqual_SQWordSQWord = nullptr;

	if (!uFnGreaterEqual_SQWordSQWord)
	{
		uFnGreaterEqual_SQWordSQWord = UFunction::FindFunction("Function Core.Object.GreaterEqual_SQWordSQWord");
	}

	UObject_execGreaterEqual_SQWordSQWord_Params GreaterEqual_SQWordSQWord_Params;
	memcpy_s(&GreaterEqual_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&GreaterEqual_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnGreaterEqual_SQWordSQWord->iNative;
	uFnGreaterEqual_SQWordSQWord->iNative = 0;

	uFnGreaterEqual_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterEqual_SQWordSQWord, &GreaterEqual_SQWordSQWord_Params, nullptr);

	uFnGreaterEqual_SQWordSQWord->FunctionFlags |= 0x400;

	uFnGreaterEqual_SQWordSQWord->iNative = iNativeIndex;

	return GreaterEqual_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.LessEqual_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[462])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

bool UObject::LessEqual_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnLessEqual_SQWordSQWord = nullptr;

	if (!uFnLessEqual_SQWordSQWord)
	{
		uFnLessEqual_SQWordSQWord = UFunction::FindFunction("Function Core.Object.LessEqual_SQWordSQWord");
	}

	UObject_execLessEqual_SQWordSQWord_Params LessEqual_SQWordSQWord_Params;
	memcpy_s(&LessEqual_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&LessEqual_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnLessEqual_SQWordSQWord->iNative;
	uFnLessEqual_SQWordSQWord->iNative = 0;

	uFnLessEqual_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLessEqual_SQWordSQWord, &LessEqual_SQWordSQWord_Params, nullptr);

	uFnLessEqual_SQWordSQWord->FunctionFlags |= 0x400;

	uFnLessEqual_SQWordSQWord->iNative = iNativeIndex;

	return LessEqual_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.Greater_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[461])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

bool UObject::Greater_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnGreater_SQWordSQWord = nullptr;

	if (!uFnGreater_SQWordSQWord)
	{
		uFnGreater_SQWordSQWord = UFunction::FindFunction("Function Core.Object.Greater_SQWordSQWord");
	}

	UObject_execGreater_SQWordSQWord_Params Greater_SQWordSQWord_Params;
	memcpy_s(&Greater_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Greater_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnGreater_SQWordSQWord->iNative;
	uFnGreater_SQWordSQWord->iNative = 0;

	uFnGreater_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreater_SQWordSQWord, &Greater_SQWordSQWord_Params, nullptr);

	uFnGreater_SQWordSQWord->FunctionFlags |= 0x400;

	uFnGreater_SQWordSQWord->iNative = iNativeIndex;

	return Greater_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.Less_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[460])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

bool UObject::Less_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnLess_SQWordSQWord = nullptr;

	if (!uFnLess_SQWordSQWord)
	{
		uFnLess_SQWordSQWord = UFunction::FindFunction("Function Core.Object.Less_SQWordSQWord");
	}

	UObject_execLess_SQWordSQWord_Params Less_SQWordSQWord_Params;
	memcpy_s(&Less_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Less_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnLess_SQWordSQWord->iNative;
	uFnLess_SQWordSQWord->iNative = 0;

	uFnLess_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLess_SQWordSQWord, &Less_SQWordSQWord_Params, nullptr);

	uFnLess_SQWordSQWord->FunctionFlags |= 0x400;

	uFnLess_SQWordSQWord->iNative = iNativeIndex;

	return Less_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.GreaterGreaterGreater_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[459])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::GreaterGreaterGreater_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnGreaterGreaterGreater_SQWordSQWord = nullptr;

	if (!uFnGreaterGreaterGreater_SQWordSQWord)
	{
		uFnGreaterGreaterGreater_SQWordSQWord = UFunction::FindFunction("Function Core.Object.GreaterGreaterGreater_SQWordSQWord");
	}

	UObject_execGreaterGreaterGreater_SQWordSQWord_Params GreaterGreaterGreater_SQWordSQWord_Params;
	memcpy_s(&GreaterGreaterGreater_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&GreaterGreaterGreater_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnGreaterGreaterGreater_SQWordSQWord->iNative;
	uFnGreaterGreaterGreater_SQWordSQWord->iNative = 0;

	uFnGreaterGreaterGreater_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterGreaterGreater_SQWordSQWord, &GreaterGreaterGreater_SQWordSQWord_Params, nullptr);

	uFnGreaterGreaterGreater_SQWordSQWord->FunctionFlags |= 0x400;

	uFnGreaterGreaterGreater_SQWordSQWord->iNative = iNativeIndex;

	return GreaterGreaterGreater_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.GreaterGreater_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[458])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::GreaterGreater_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnGreaterGreater_SQWordSQWord = nullptr;

	if (!uFnGreaterGreater_SQWordSQWord)
	{
		uFnGreaterGreater_SQWordSQWord = UFunction::FindFunction("Function Core.Object.GreaterGreater_SQWordSQWord");
	}

	UObject_execGreaterGreater_SQWordSQWord_Params GreaterGreater_SQWordSQWord_Params;
	memcpy_s(&GreaterGreater_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&GreaterGreater_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnGreaterGreater_SQWordSQWord->iNative;
	uFnGreaterGreater_SQWordSQWord->iNative = 0;

	uFnGreaterGreater_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterGreater_SQWordSQWord, &GreaterGreater_SQWordSQWord_Params, nullptr);

	uFnGreaterGreater_SQWordSQWord->FunctionFlags |= 0x400;

	uFnGreaterGreater_SQWordSQWord->iNative = iNativeIndex;

	return GreaterGreater_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.LessLess_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[457])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::LessLess_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnLessLess_SQWordSQWord = nullptr;

	if (!uFnLessLess_SQWordSQWord)
	{
		uFnLessLess_SQWordSQWord = UFunction::FindFunction("Function Core.Object.LessLess_SQWordSQWord");
	}

	UObject_execLessLess_SQWordSQWord_Params LessLess_SQWordSQWord_Params;
	memcpy_s(&LessLess_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&LessLess_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnLessLess_SQWordSQWord->iNative;
	uFnLessLess_SQWordSQWord->iNative = 0;

	uFnLessLess_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLessLess_SQWordSQWord, &LessLess_SQWordSQWord_Params, nullptr);

	uFnLessLess_SQWordSQWord->FunctionFlags |= 0x400;

	uFnLessLess_SQWordSQWord->iNative = iNativeIndex;

	return LessLess_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.Subtract_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[456])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::Subtract_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnSubtract_SQWordSQWord = nullptr;

	if (!uFnSubtract_SQWordSQWord)
	{
		uFnSubtract_SQWordSQWord = UFunction::FindFunction("Function Core.Object.Subtract_SQWordSQWord");
	}

	UObject_execSubtract_SQWordSQWord_Params Subtract_SQWordSQWord_Params;
	memcpy_s(&Subtract_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Subtract_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnSubtract_SQWordSQWord->iNative;
	uFnSubtract_SQWordSQWord->iNative = 0;

	uFnSubtract_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_SQWordSQWord, &Subtract_SQWordSQWord_Params, nullptr);

	uFnSubtract_SQWordSQWord->FunctionFlags |= 0x400;

	uFnSubtract_SQWordSQWord->iNative = iNativeIndex;

	return Subtract_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.Add_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[455])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::Add_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnAdd_SQWordSQWord = nullptr;

	if (!uFnAdd_SQWordSQWord)
	{
		uFnAdd_SQWordSQWord = UFunction::FindFunction("Function Core.Object.Add_SQWordSQWord");
	}

	UObject_execAdd_SQWordSQWord_Params Add_SQWordSQWord_Params;
	memcpy_s(&Add_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Add_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnAdd_SQWordSQWord->iNative;
	uFnAdd_SQWordSQWord->iNative = 0;

	uFnAdd_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAdd_SQWordSQWord, &Add_SQWordSQWord_Params, nullptr);

	uFnAdd_SQWordSQWord->FunctionFlags |= 0x400;

	uFnAdd_SQWordSQWord->iNative = iNativeIndex;

	return Add_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.Percent_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[454])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::Percent_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnPercent_SQWordSQWord = nullptr;

	if (!uFnPercent_SQWordSQWord)
	{
		uFnPercent_SQWordSQWord = UFunction::FindFunction("Function Core.Object.Percent_SQWordSQWord");
	}

	UObject_execPercent_SQWordSQWord_Params Percent_SQWordSQWord_Params;
	memcpy_s(&Percent_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Percent_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnPercent_SQWordSQWord->iNative;
	uFnPercent_SQWordSQWord->iNative = 0;

	uFnPercent_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnPercent_SQWordSQWord, &Percent_SQWordSQWord_Params, nullptr);

	uFnPercent_SQWordSQWord->FunctionFlags |= 0x400;

	uFnPercent_SQWordSQWord->iNative = iNativeIndex;

	return Percent_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.Divide_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[453])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::Divide_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnDivide_SQWordSQWord = nullptr;

	if (!uFnDivide_SQWordSQWord)
	{
		uFnDivide_SQWordSQWord = UFunction::FindFunction("Function Core.Object.Divide_SQWordSQWord");
	}

	UObject_execDivide_SQWordSQWord_Params Divide_SQWordSQWord_Params;
	memcpy_s(&Divide_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Divide_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnDivide_SQWordSQWord->iNative;
	uFnDivide_SQWordSQWord->iNative = 0;

	uFnDivide_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivide_SQWordSQWord, &Divide_SQWordSQWord_Params, nullptr);

	uFnDivide_SQWordSQWord->FunctionFlags |= 0x400;

	uFnDivide_SQWordSQWord->iNative = iNativeIndex;

	return Divide_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.Multiply_SQWordSQWord
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[452])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)
// struct FSQWord                 B                              (CPF_Parm)

struct FSQWord UObject::Multiply_SQWordSQWord(struct FSQWord A, struct FSQWord B)
{
	static UFunction* uFnMultiply_SQWordSQWord = nullptr;

	if (!uFnMultiply_SQWordSQWord)
	{
		uFnMultiply_SQWordSQWord = UFunction::FindFunction("Function Core.Object.Multiply_SQWordSQWord");
	}

	UObject_execMultiply_SQWordSQWord_Params Multiply_SQWordSQWord_Params;
	memcpy_s(&Multiply_SQWordSQWord_Params.A, 0x8, &A, 0x8);
	memcpy_s(&Multiply_SQWordSQWord_Params.B, 0x8, &B, 0x8);

	uint16_t iNativeIndex = uFnMultiply_SQWordSQWord->iNative;
	uFnMultiply_SQWordSQWord->iNative = 0;

	uFnMultiply_SQWordSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_SQWordSQWord, &Multiply_SQWordSQWord_Params, nullptr);

	uFnMultiply_SQWordSQWord->FunctionFlags |= 0x400;

	uFnMultiply_SQWordSQWord->iNative = iNativeIndex;

	return Multiply_SQWordSQWord_Params.ReturnValue;
};

// Function Core.Object.Subtract_PreSQWord
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[451])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)

struct FSQWord UObject::Subtract_PreSQWord(struct FSQWord A)
{
	static UFunction* uFnSubtract_PreSQWord = nullptr;

	if (!uFnSubtract_PreSQWord)
	{
		uFnSubtract_PreSQWord = UFunction::FindFunction("Function Core.Object.Subtract_PreSQWord");
	}

	UObject_execSubtract_PreSQWord_Params Subtract_PreSQWord_Params;
	memcpy_s(&Subtract_PreSQWord_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnSubtract_PreSQWord->iNative;
	uFnSubtract_PreSQWord->iNative = 0;

	uFnSubtract_PreSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_PreSQWord, &Subtract_PreSQWord_Params, nullptr);

	uFnSubtract_PreSQWord->FunctionFlags |= 0x400;

	uFnSubtract_PreSQWord->iNative = iNativeIndex;

	return Subtract_PreSQWord_Params.ReturnValue;
};

// Function Core.Object.Complement_PreSQWord
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[450])
// Parameter info:
// struct FSQWord                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FSQWord                 A                              (CPF_Parm)

struct FSQWord UObject::Complement_PreSQWord(struct FSQWord A)
{
	static UFunction* uFnComplement_PreSQWord = nullptr;

	if (!uFnComplement_PreSQWord)
	{
		uFnComplement_PreSQWord = UFunction::FindFunction("Function Core.Object.Complement_PreSQWord");
	}

	UObject_execComplement_PreSQWord_Params Complement_PreSQWord_Params;
	memcpy_s(&Complement_PreSQWord_Params.A, 0x8, &A, 0x8);

	uint16_t iNativeIndex = uFnComplement_PreSQWord->iNative;
	uFnComplement_PreSQWord->iNative = 0;

	uFnComplement_PreSQWord->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnComplement_PreSQWord, &Complement_PreSQWord_Params, nullptr);

	uFnComplement_PreSQWord->FunctionFlags |= 0x400;

	uFnComplement_PreSQWord->iNative = iNativeIndex;

	return Complement_PreSQWord_Params.ReturnValue;
};

// Function Core.Object.Clamp64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[582])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       V                              (CPF_Parm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::Clamp64(uint64_t V, uint64_t A, uint64_t B)
{
	static UFunction* uFnClamp64 = nullptr;

	if (!uFnClamp64)
	{
		uFnClamp64 = UFunction::FindFunction("Function Core.Object.Clamp64");
	}

	UObject_execClamp64_Params Clamp64_Params;
	Clamp64_Params.V = V;
	Clamp64_Params.A = A;
	Clamp64_Params.B = B;

	uint16_t iNativeIndex = uFnClamp64->iNative;
	uFnClamp64->iNative = 0;

	uFnClamp64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnClamp64, &Clamp64_Params, nullptr);

	uFnClamp64->FunctionFlags |= 0x400;

	uFnClamp64->iNative = iNativeIndex;

	return Clamp64_Params.ReturnValue;
};

// Function Core.Object.Max64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[581])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::Max64(uint64_t A, uint64_t B)
{
	static UFunction* uFnMax64 = nullptr;

	if (!uFnMax64)
	{
		uFnMax64 = UFunction::FindFunction("Function Core.Object.Max64");
	}

	UObject_execMax64_Params Max64_Params;
	Max64_Params.A = A;
	Max64_Params.B = B;

	uint16_t iNativeIndex = uFnMax64->iNative;
	uFnMax64->iNative = 0;

	uFnMax64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMax64, &Max64_Params, nullptr);

	uFnMax64->FunctionFlags |= 0x400;

	uFnMax64->iNative = iNativeIndex;

	return Max64_Params.ReturnValue;
};

// Function Core.Object.Min64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[580])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::Min64(uint64_t A, uint64_t B)
{
	static UFunction* uFnMin64 = nullptr;

	if (!uFnMin64)
	{
		uFnMin64 = UFunction::FindFunction("Function Core.Object.Min64");
	}

	UObject_execMin64_Params Min64_Params;
	Min64_Params.A = A;
	Min64_Params.B = B;

	uint16_t iNativeIndex = uFnMin64->iNative;
	uFnMin64->iNative = 0;

	uFnMin64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMin64, &Min64_Params, nullptr);

	uFnMin64->FunctionFlags |= 0x400;

	uFnMin64->iNative = iNativeIndex;

	return Min64_Params.ReturnValue;
};

// Function Core.Object.Rand64
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[579])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       Max                            (CPF_Parm)

uint64_t UObject::Rand64(uint64_t Max)
{
	static UFunction* uFnRand64 = nullptr;

	if (!uFnRand64)
	{
		uFnRand64 = UFunction::FindFunction("Function Core.Object.Rand64");
	}

	UObject_execRand64_Params Rand64_Params;
	Rand64_Params.Max = Max;

	uint16_t iNativeIndex = uFnRand64->iNative;
	uFnRand64->iNative = 0;

	uFnRand64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRand64, &Rand64_Params, nullptr);

	uFnRand64->FunctionFlags |= 0x400;

	uFnRand64->iNative = iNativeIndex;

	return Rand64_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Int64
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[578])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm | CPF_OutParm)

uint64_t UObject::SubtractSubtract_Int64(uint64_t& A)
{
	static UFunction* uFnSubtractSubtract_Int64 = nullptr;

	if (!uFnSubtractSubtract_Int64)
	{
		uFnSubtractSubtract_Int64 = UFunction::FindFunction("Function Core.Object.SubtractSubtract_Int64");
	}

	UObject_execSubtractSubtract_Int64_Params SubtractSubtract_Int64_Params;
	A = SubtractSubtract_Int64_Params.A;

	uint16_t iNativeIndex = uFnSubtractSubtract_Int64->iNative;
	uFnSubtractSubtract_Int64->iNative = 0;

	uFnSubtractSubtract_Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_Int64, &SubtractSubtract_Int64_Params, nullptr);

	uFnSubtractSubtract_Int64->FunctionFlags |= 0x400;

	uFnSubtractSubtract_Int64->iNative = iNativeIndex;

	A = SubtractSubtract_Int64_Params.A;

	return SubtractSubtract_Int64_Params.ReturnValue;
};

// Function Core.Object.AddAdd_Int64
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[577])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm | CPF_OutParm)

uint64_t UObject::AddAdd_Int64(uint64_t& A)
{
	static UFunction* uFnAddAdd_Int64 = nullptr;

	if (!uFnAddAdd_Int64)
	{
		uFnAddAdd_Int64 = UFunction::FindFunction("Function Core.Object.AddAdd_Int64");
	}

	UObject_execAddAdd_Int64_Params AddAdd_Int64_Params;
	A = AddAdd_Int64_Params.A;

	uint16_t iNativeIndex = uFnAddAdd_Int64->iNative;
	uFnAddAdd_Int64->iNative = 0;

	uFnAddAdd_Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddAdd_Int64, &AddAdd_Int64_Params, nullptr);

	uFnAddAdd_Int64->FunctionFlags |= 0x400;

	uFnAddAdd_Int64->iNative = iNativeIndex;

	A = AddAdd_Int64_Params.A;

	return AddAdd_Int64_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreInt64
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[576])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm | CPF_OutParm)

uint64_t UObject::SubtractSubtract_PreInt64(uint64_t& A)
{
	static UFunction* uFnSubtractSubtract_PreInt64 = nullptr;

	if (!uFnSubtractSubtract_PreInt64)
	{
		uFnSubtractSubtract_PreInt64 = UFunction::FindFunction("Function Core.Object.SubtractSubtract_PreInt64");
	}

	UObject_execSubtractSubtract_PreInt64_Params SubtractSubtract_PreInt64_Params;
	A = SubtractSubtract_PreInt64_Params.A;

	uint16_t iNativeIndex = uFnSubtractSubtract_PreInt64->iNative;
	uFnSubtractSubtract_PreInt64->iNative = 0;

	uFnSubtractSubtract_PreInt64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_PreInt64, &SubtractSubtract_PreInt64_Params, nullptr);

	uFnSubtractSubtract_PreInt64->FunctionFlags |= 0x400;

	uFnSubtractSubtract_PreInt64->iNative = iNativeIndex;

	A = SubtractSubtract_PreInt64_Params.A;

	return SubtractSubtract_PreInt64_Params.ReturnValue;
};

// Function Core.Object.AddAdd_PreInt64
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[575])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm | CPF_OutParm)

uint64_t UObject::AddAdd_PreInt64(uint64_t& A)
{
	static UFunction* uFnAddAdd_PreInt64 = nullptr;

	if (!uFnAddAdd_PreInt64)
	{
		uFnAddAdd_PreInt64 = UFunction::FindFunction("Function Core.Object.AddAdd_PreInt64");
	}

	UObject_execAddAdd_PreInt64_Params AddAdd_PreInt64_Params;
	A = AddAdd_PreInt64_Params.A;

	uint16_t iNativeIndex = uFnAddAdd_PreInt64->iNative;
	uFnAddAdd_PreInt64->iNative = 0;

	uFnAddAdd_PreInt64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddAdd_PreInt64, &AddAdd_PreInt64_Params, nullptr);

	uFnAddAdd_PreInt64->FunctionFlags |= 0x400;

	uFnAddAdd_PreInt64->iNative = iNativeIndex;

	A = AddAdd_PreInt64_Params.A;

	return AddAdd_PreInt64_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_Int64Int64
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[574])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       B                              (CPF_Parm)
// uint64_t                       A                              (CPF_Parm | CPF_OutParm)

uint64_t UObject::SubtractEqual_Int64Int64(uint64_t B, uint64_t& A)
{
	static UFunction* uFnSubtractEqual_Int64Int64 = nullptr;

	if (!uFnSubtractEqual_Int64Int64)
	{
		uFnSubtractEqual_Int64Int64 = UFunction::FindFunction("Function Core.Object.SubtractEqual_Int64Int64");
	}

	UObject_execSubtractEqual_Int64Int64_Params SubtractEqual_Int64Int64_Params;
	SubtractEqual_Int64Int64_Params.B = B;
	A = SubtractEqual_Int64Int64_Params.A;

	uint16_t iNativeIndex = uFnSubtractEqual_Int64Int64->iNative;
	uFnSubtractEqual_Int64Int64->iNative = 0;

	uFnSubtractEqual_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_Int64Int64, &SubtractEqual_Int64Int64_Params, nullptr);

	uFnSubtractEqual_Int64Int64->FunctionFlags |= 0x400;

	uFnSubtractEqual_Int64Int64->iNative = iNativeIndex;

	A = SubtractEqual_Int64Int64_Params.A;

	return SubtractEqual_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.AddEqual_Int64Int64
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[573])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       B                              (CPF_Parm)
// uint64_t                       A                              (CPF_Parm | CPF_OutParm)

uint64_t UObject::AddEqual_Int64Int64(uint64_t B, uint64_t& A)
{
	static UFunction* uFnAddEqual_Int64Int64 = nullptr;

	if (!uFnAddEqual_Int64Int64)
	{
		uFnAddEqual_Int64Int64 = UFunction::FindFunction("Function Core.Object.AddEqual_Int64Int64");
	}

	UObject_execAddEqual_Int64Int64_Params AddEqual_Int64Int64_Params;
	AddEqual_Int64Int64_Params.B = B;
	A = AddEqual_Int64Int64_Params.A;

	uint16_t iNativeIndex = uFnAddEqual_Int64Int64->iNative;
	uFnAddEqual_Int64Int64->iNative = 0;

	uFnAddEqual_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddEqual_Int64Int64, &AddEqual_Int64Int64_Params, nullptr);

	uFnAddEqual_Int64Int64->FunctionFlags |= 0x400;

	uFnAddEqual_Int64Int64->iNative = iNativeIndex;

	A = AddEqual_Int64Int64_Params.A;

	return AddEqual_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_Int64Double
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[572])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 B                              (CPF_Parm)
// uint64_t                       A                              (CPF_Parm | CPF_OutParm)

uint64_t UObject::DivideEqual_Int64Double(struct FDouble B, uint64_t& A)
{
	static UFunction* uFnDivideEqual_Int64Double = nullptr;

	if (!uFnDivideEqual_Int64Double)
	{
		uFnDivideEqual_Int64Double = UFunction::FindFunction("Function Core.Object.DivideEqual_Int64Double");
	}

	UObject_execDivideEqual_Int64Double_Params DivideEqual_Int64Double_Params;
	memcpy_s(&DivideEqual_Int64Double_Params.B, 0x8, &B, 0x8);
	A = DivideEqual_Int64Double_Params.A;

	uint16_t iNativeIndex = uFnDivideEqual_Int64Double->iNative;
	uFnDivideEqual_Int64Double->iNative = 0;

	uFnDivideEqual_Int64Double->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_Int64Double, &DivideEqual_Int64Double_Params, nullptr);

	uFnDivideEqual_Int64Double->FunctionFlags |= 0x400;

	uFnDivideEqual_Int64Double->iNative = iNativeIndex;

	A = DivideEqual_Int64Double_Params.A;

	return DivideEqual_Int64Double_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_Int64Float
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[571])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// uint64_t                       A                              (CPF_Parm | CPF_OutParm)

uint64_t UObject::DivideEqual_Int64Float(float B, uint64_t& A)
{
	static UFunction* uFnDivideEqual_Int64Float = nullptr;

	if (!uFnDivideEqual_Int64Float)
	{
		uFnDivideEqual_Int64Float = UFunction::FindFunction("Function Core.Object.DivideEqual_Int64Float");
	}

	UObject_execDivideEqual_Int64Float_Params DivideEqual_Int64Float_Params;
	memcpy_s(&DivideEqual_Int64Float_Params.B, 0x4, &B, 0x4);
	A = DivideEqual_Int64Float_Params.A;

	uint16_t iNativeIndex = uFnDivideEqual_Int64Float->iNative;
	uFnDivideEqual_Int64Float->iNative = 0;

	uFnDivideEqual_Int64Float->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_Int64Float, &DivideEqual_Int64Float_Params, nullptr);

	uFnDivideEqual_Int64Float->FunctionFlags |= 0x400;

	uFnDivideEqual_Int64Float->iNative = iNativeIndex;

	A = DivideEqual_Int64Float_Params.A;

	return DivideEqual_Int64Float_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_Int64Double
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[570])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FDouble                 B                              (CPF_Parm)
// uint64_t                       A                              (CPF_Parm | CPF_OutParm)

uint64_t UObject::MultiplyEqual_Int64Double(struct FDouble B, uint64_t& A)
{
	static UFunction* uFnMultiplyEqual_Int64Double = nullptr;

	if (!uFnMultiplyEqual_Int64Double)
	{
		uFnMultiplyEqual_Int64Double = UFunction::FindFunction("Function Core.Object.MultiplyEqual_Int64Double");
	}

	UObject_execMultiplyEqual_Int64Double_Params MultiplyEqual_Int64Double_Params;
	memcpy_s(&MultiplyEqual_Int64Double_Params.B, 0x8, &B, 0x8);
	A = MultiplyEqual_Int64Double_Params.A;

	uint16_t iNativeIndex = uFnMultiplyEqual_Int64Double->iNative;
	uFnMultiplyEqual_Int64Double->iNative = 0;

	uFnMultiplyEqual_Int64Double->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_Int64Double, &MultiplyEqual_Int64Double_Params, nullptr);

	uFnMultiplyEqual_Int64Double->FunctionFlags |= 0x400;

	uFnMultiplyEqual_Int64Double->iNative = iNativeIndex;

	A = MultiplyEqual_Int64Double_Params.A;

	return MultiplyEqual_Int64Double_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_Int64Float
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[569])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// uint64_t                       A                              (CPF_Parm | CPF_OutParm)

uint64_t UObject::MultiplyEqual_Int64Float(float B, uint64_t& A)
{
	static UFunction* uFnMultiplyEqual_Int64Float = nullptr;

	if (!uFnMultiplyEqual_Int64Float)
	{
		uFnMultiplyEqual_Int64Float = UFunction::FindFunction("Function Core.Object.MultiplyEqual_Int64Float");
	}

	UObject_execMultiplyEqual_Int64Float_Params MultiplyEqual_Int64Float_Params;
	memcpy_s(&MultiplyEqual_Int64Float_Params.B, 0x4, &B, 0x4);
	A = MultiplyEqual_Int64Float_Params.A;

	uint16_t iNativeIndex = uFnMultiplyEqual_Int64Float->iNative;
	uFnMultiplyEqual_Int64Float->iNative = 0;

	uFnMultiplyEqual_Int64Float->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_Int64Float, &MultiplyEqual_Int64Float_Params, nullptr);

	uFnMultiplyEqual_Int64Float->FunctionFlags |= 0x400;

	uFnMultiplyEqual_Int64Float->iNative = iNativeIndex;

	A = MultiplyEqual_Int64Float_Params.A;

	return MultiplyEqual_Int64Float_Params.ReturnValue;
};

// Function Core.Object.Or_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[568])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::Or_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnOr_Int64Int64 = nullptr;

	if (!uFnOr_Int64Int64)
	{
		uFnOr_Int64Int64 = UFunction::FindFunction("Function Core.Object.Or_Int64Int64");
	}

	UObject_execOr_Int64Int64_Params Or_Int64Int64_Params;
	Or_Int64Int64_Params.A = A;
	Or_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnOr_Int64Int64->iNative;
	uFnOr_Int64Int64->iNative = 0;

	uFnOr_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnOr_Int64Int64, &Or_Int64Int64_Params, nullptr);

	uFnOr_Int64Int64->FunctionFlags |= 0x400;

	uFnOr_Int64Int64->iNative = iNativeIndex;

	return Or_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.Xor_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[567])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::Xor_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnXor_Int64Int64 = nullptr;

	if (!uFnXor_Int64Int64)
	{
		uFnXor_Int64Int64 = UFunction::FindFunction("Function Core.Object.Xor_Int64Int64");
	}

	UObject_execXor_Int64Int64_Params Xor_Int64Int64_Params;
	Xor_Int64Int64_Params.A = A;
	Xor_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnXor_Int64Int64->iNative;
	uFnXor_Int64Int64->iNative = 0;

	uFnXor_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnXor_Int64Int64, &Xor_Int64Int64_Params, nullptr);

	uFnXor_Int64Int64->FunctionFlags |= 0x400;

	uFnXor_Int64Int64->iNative = iNativeIndex;

	return Xor_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.And_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[566])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::And_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnAnd_Int64Int64 = nullptr;

	if (!uFnAnd_Int64Int64)
	{
		uFnAnd_Int64Int64 = UFunction::FindFunction("Function Core.Object.And_Int64Int64");
	}

	UObject_execAnd_Int64Int64_Params And_Int64Int64_Params;
	And_Int64Int64_Params.A = A;
	And_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnAnd_Int64Int64->iNative;
	uFnAnd_Int64Int64->iNative = 0;

	uFnAnd_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAnd_Int64Int64, &And_Int64Int64_Params, nullptr);

	uFnAnd_Int64Int64->FunctionFlags |= 0x400;

	uFnAnd_Int64Int64->iNative = iNativeIndex;

	return And_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.NotEqual_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[565])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

bool UObject::NotEqual_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnNotEqual_Int64Int64 = nullptr;

	if (!uFnNotEqual_Int64Int64)
	{
		uFnNotEqual_Int64Int64 = UFunction::FindFunction("Function Core.Object.NotEqual_Int64Int64");
	}

	UObject_execNotEqual_Int64Int64_Params NotEqual_Int64Int64_Params;
	NotEqual_Int64Int64_Params.A = A;
	NotEqual_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnNotEqual_Int64Int64->iNative;
	uFnNotEqual_Int64Int64->iNative = 0;

	uFnNotEqual_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_Int64Int64, &NotEqual_Int64Int64_Params, nullptr);

	uFnNotEqual_Int64Int64->FunctionFlags |= 0x400;

	uFnNotEqual_Int64Int64->iNative = iNativeIndex;

	return NotEqual_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[564])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

bool UObject::EqualEqual_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnEqualEqual_Int64Int64 = nullptr;

	if (!uFnEqualEqual_Int64Int64)
	{
		uFnEqualEqual_Int64Int64 = UFunction::FindFunction("Function Core.Object.EqualEqual_Int64Int64");
	}

	UObject_execEqualEqual_Int64Int64_Params EqualEqual_Int64Int64_Params;
	EqualEqual_Int64Int64_Params.A = A;
	EqualEqual_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnEqualEqual_Int64Int64->iNative;
	uFnEqualEqual_Int64Int64->iNative = 0;

	uFnEqualEqual_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_Int64Int64, &EqualEqual_Int64Int64_Params, nullptr);

	uFnEqualEqual_Int64Int64->FunctionFlags |= 0x400;

	uFnEqualEqual_Int64Int64->iNative = iNativeIndex;

	return EqualEqual_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.GreaterEqual_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[563])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

bool UObject::GreaterEqual_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnGreaterEqual_Int64Int64 = nullptr;

	if (!uFnGreaterEqual_Int64Int64)
	{
		uFnGreaterEqual_Int64Int64 = UFunction::FindFunction("Function Core.Object.GreaterEqual_Int64Int64");
	}

	UObject_execGreaterEqual_Int64Int64_Params GreaterEqual_Int64Int64_Params;
	GreaterEqual_Int64Int64_Params.A = A;
	GreaterEqual_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnGreaterEqual_Int64Int64->iNative;
	uFnGreaterEqual_Int64Int64->iNative = 0;

	uFnGreaterEqual_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterEqual_Int64Int64, &GreaterEqual_Int64Int64_Params, nullptr);

	uFnGreaterEqual_Int64Int64->FunctionFlags |= 0x400;

	uFnGreaterEqual_Int64Int64->iNative = iNativeIndex;

	return GreaterEqual_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.LessEqual_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[562])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

bool UObject::LessEqual_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnLessEqual_Int64Int64 = nullptr;

	if (!uFnLessEqual_Int64Int64)
	{
		uFnLessEqual_Int64Int64 = UFunction::FindFunction("Function Core.Object.LessEqual_Int64Int64");
	}

	UObject_execLessEqual_Int64Int64_Params LessEqual_Int64Int64_Params;
	LessEqual_Int64Int64_Params.A = A;
	LessEqual_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnLessEqual_Int64Int64->iNative;
	uFnLessEqual_Int64Int64->iNative = 0;

	uFnLessEqual_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLessEqual_Int64Int64, &LessEqual_Int64Int64_Params, nullptr);

	uFnLessEqual_Int64Int64->FunctionFlags |= 0x400;

	uFnLessEqual_Int64Int64->iNative = iNativeIndex;

	return LessEqual_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.Greater_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[561])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

bool UObject::Greater_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnGreater_Int64Int64 = nullptr;

	if (!uFnGreater_Int64Int64)
	{
		uFnGreater_Int64Int64 = UFunction::FindFunction("Function Core.Object.Greater_Int64Int64");
	}

	UObject_execGreater_Int64Int64_Params Greater_Int64Int64_Params;
	Greater_Int64Int64_Params.A = A;
	Greater_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnGreater_Int64Int64->iNative;
	uFnGreater_Int64Int64->iNative = 0;

	uFnGreater_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreater_Int64Int64, &Greater_Int64Int64_Params, nullptr);

	uFnGreater_Int64Int64->FunctionFlags |= 0x400;

	uFnGreater_Int64Int64->iNative = iNativeIndex;

	return Greater_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.Less_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[560])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

bool UObject::Less_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnLess_Int64Int64 = nullptr;

	if (!uFnLess_Int64Int64)
	{
		uFnLess_Int64Int64 = UFunction::FindFunction("Function Core.Object.Less_Int64Int64");
	}

	UObject_execLess_Int64Int64_Params Less_Int64Int64_Params;
	Less_Int64Int64_Params.A = A;
	Less_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnLess_Int64Int64->iNative;
	uFnLess_Int64Int64->iNative = 0;

	uFnLess_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLess_Int64Int64, &Less_Int64Int64_Params, nullptr);

	uFnLess_Int64Int64->FunctionFlags |= 0x400;

	uFnLess_Int64Int64->iNative = iNativeIndex;

	return Less_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.GreaterGreaterGreater_Int64Int
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[559])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

uint64_t UObject::GreaterGreaterGreater_Int64Int(uint64_t A, int32_t B)
{
	static UFunction* uFnGreaterGreaterGreater_Int64Int = nullptr;

	if (!uFnGreaterGreaterGreater_Int64Int)
	{
		uFnGreaterGreaterGreater_Int64Int = UFunction::FindFunction("Function Core.Object.GreaterGreaterGreater_Int64Int");
	}

	UObject_execGreaterGreaterGreater_Int64Int_Params GreaterGreaterGreater_Int64Int_Params;
	GreaterGreaterGreater_Int64Int_Params.A = A;
	memcpy_s(&GreaterGreaterGreater_Int64Int_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnGreaterGreaterGreater_Int64Int->iNative;
	uFnGreaterGreaterGreater_Int64Int->iNative = 0;

	uFnGreaterGreaterGreater_Int64Int->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterGreaterGreater_Int64Int, &GreaterGreaterGreater_Int64Int_Params, nullptr);

	uFnGreaterGreaterGreater_Int64Int->FunctionFlags |= 0x400;

	uFnGreaterGreaterGreater_Int64Int->iNative = iNativeIndex;

	return GreaterGreaterGreater_Int64Int_Params.ReturnValue;
};

// Function Core.Object.GreaterGreater_Int64Int
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[558])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

uint64_t UObject::GreaterGreater_Int64Int(uint64_t A, int32_t B)
{
	static UFunction* uFnGreaterGreater_Int64Int = nullptr;

	if (!uFnGreaterGreater_Int64Int)
	{
		uFnGreaterGreater_Int64Int = UFunction::FindFunction("Function Core.Object.GreaterGreater_Int64Int");
	}

	UObject_execGreaterGreater_Int64Int_Params GreaterGreater_Int64Int_Params;
	GreaterGreater_Int64Int_Params.A = A;
	memcpy_s(&GreaterGreater_Int64Int_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnGreaterGreater_Int64Int->iNative;
	uFnGreaterGreater_Int64Int->iNative = 0;

	uFnGreaterGreater_Int64Int->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterGreater_Int64Int, &GreaterGreater_Int64Int_Params, nullptr);

	uFnGreaterGreater_Int64Int->FunctionFlags |= 0x400;

	uFnGreaterGreater_Int64Int->iNative = iNativeIndex;

	return GreaterGreater_Int64Int_Params.ReturnValue;
};

// Function Core.Object.LessLess_Int64Int
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[557])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

uint64_t UObject::LessLess_Int64Int(uint64_t A, int32_t B)
{
	static UFunction* uFnLessLess_Int64Int = nullptr;

	if (!uFnLessLess_Int64Int)
	{
		uFnLessLess_Int64Int = UFunction::FindFunction("Function Core.Object.LessLess_Int64Int");
	}

	UObject_execLessLess_Int64Int_Params LessLess_Int64Int_Params;
	LessLess_Int64Int_Params.A = A;
	memcpy_s(&LessLess_Int64Int_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnLessLess_Int64Int->iNative;
	uFnLessLess_Int64Int->iNative = 0;

	uFnLessLess_Int64Int->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLessLess_Int64Int, &LessLess_Int64Int_Params, nullptr);

	uFnLessLess_Int64Int->FunctionFlags |= 0x400;

	uFnLessLess_Int64Int->iNative = iNativeIndex;

	return LessLess_Int64Int_Params.ReturnValue;
};

// Function Core.Object.Subtract_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[556])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::Subtract_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnSubtract_Int64Int64 = nullptr;

	if (!uFnSubtract_Int64Int64)
	{
		uFnSubtract_Int64Int64 = UFunction::FindFunction("Function Core.Object.Subtract_Int64Int64");
	}

	UObject_execSubtract_Int64Int64_Params Subtract_Int64Int64_Params;
	Subtract_Int64Int64_Params.A = A;
	Subtract_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnSubtract_Int64Int64->iNative;
	uFnSubtract_Int64Int64->iNative = 0;

	uFnSubtract_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_Int64Int64, &Subtract_Int64Int64_Params, nullptr);

	uFnSubtract_Int64Int64->FunctionFlags |= 0x400;

	uFnSubtract_Int64Int64->iNative = iNativeIndex;

	return Subtract_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.Add_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[555])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::Add_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnAdd_Int64Int64 = nullptr;

	if (!uFnAdd_Int64Int64)
	{
		uFnAdd_Int64Int64 = UFunction::FindFunction("Function Core.Object.Add_Int64Int64");
	}

	UObject_execAdd_Int64Int64_Params Add_Int64Int64_Params;
	Add_Int64Int64_Params.A = A;
	Add_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnAdd_Int64Int64->iNative;
	uFnAdd_Int64Int64->iNative = 0;

	uFnAdd_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAdd_Int64Int64, &Add_Int64Int64_Params, nullptr);

	uFnAdd_Int64Int64->FunctionFlags |= 0x400;

	uFnAdd_Int64Int64->iNative = iNativeIndex;

	return Add_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.Percent_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[554])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::Percent_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnPercent_Int64Int64 = nullptr;

	if (!uFnPercent_Int64Int64)
	{
		uFnPercent_Int64Int64 = UFunction::FindFunction("Function Core.Object.Percent_Int64Int64");
	}

	UObject_execPercent_Int64Int64_Params Percent_Int64Int64_Params;
	Percent_Int64Int64_Params.A = A;
	Percent_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnPercent_Int64Int64->iNative;
	uFnPercent_Int64Int64->iNative = 0;

	uFnPercent_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnPercent_Int64Int64, &Percent_Int64Int64_Params, nullptr);

	uFnPercent_Int64Int64->FunctionFlags |= 0x400;

	uFnPercent_Int64Int64->iNative = iNativeIndex;

	return Percent_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.Divide_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[553])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::Divide_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnDivide_Int64Int64 = nullptr;

	if (!uFnDivide_Int64Int64)
	{
		uFnDivide_Int64Int64 = UFunction::FindFunction("Function Core.Object.Divide_Int64Int64");
	}

	UObject_execDivide_Int64Int64_Params Divide_Int64Int64_Params;
	Divide_Int64Int64_Params.A = A;
	Divide_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnDivide_Int64Int64->iNative;
	uFnDivide_Int64Int64->iNative = 0;

	uFnDivide_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivide_Int64Int64, &Divide_Int64Int64_Params, nullptr);

	uFnDivide_Int64Int64->FunctionFlags |= 0x400;

	uFnDivide_Int64Int64->iNative = iNativeIndex;

	return Divide_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.Multiply_Int64Int64
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[552])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)
// uint64_t                       B                              (CPF_Parm)

uint64_t UObject::Multiply_Int64Int64(uint64_t A, uint64_t B)
{
	static UFunction* uFnMultiply_Int64Int64 = nullptr;

	if (!uFnMultiply_Int64Int64)
	{
		uFnMultiply_Int64Int64 = UFunction::FindFunction("Function Core.Object.Multiply_Int64Int64");
	}

	UObject_execMultiply_Int64Int64_Params Multiply_Int64Int64_Params;
	Multiply_Int64Int64_Params.A = A;
	Multiply_Int64Int64_Params.B = B;

	uint16_t iNativeIndex = uFnMultiply_Int64Int64->iNative;
	uFnMultiply_Int64Int64->iNative = 0;

	uFnMultiply_Int64Int64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_Int64Int64, &Multiply_Int64Int64_Params, nullptr);

	uFnMultiply_Int64Int64->FunctionFlags |= 0x400;

	uFnMultiply_Int64Int64->iNative = iNativeIndex;

	return Multiply_Int64Int64_Params.ReturnValue;
};

// Function Core.Object.Subtract_PreInt64
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[551])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)

uint64_t UObject::Subtract_PreInt64(uint64_t A)
{
	static UFunction* uFnSubtract_PreInt64 = nullptr;

	if (!uFnSubtract_PreInt64)
	{
		uFnSubtract_PreInt64 = UFunction::FindFunction("Function Core.Object.Subtract_PreInt64");
	}

	UObject_execSubtract_PreInt64_Params Subtract_PreInt64_Params;
	Subtract_PreInt64_Params.A = A;

	uint16_t iNativeIndex = uFnSubtract_PreInt64->iNative;
	uFnSubtract_PreInt64->iNative = 0;

	uFnSubtract_PreInt64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_PreInt64, &Subtract_PreInt64_Params, nullptr);

	uFnSubtract_PreInt64->FunctionFlags |= 0x400;

	uFnSubtract_PreInt64->iNative = iNativeIndex;

	return Subtract_PreInt64_Params.ReturnValue;
};

// Function Core.Object.Complement_PreInt64
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[550])
// Parameter info:
// uint64_t                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint64_t                       A                              (CPF_Parm)

uint64_t UObject::Complement_PreInt64(uint64_t A)
{
	static UFunction* uFnComplement_PreInt64 = nullptr;

	if (!uFnComplement_PreInt64)
	{
		uFnComplement_PreInt64 = UFunction::FindFunction("Function Core.Object.Complement_PreInt64");
	}

	UObject_execComplement_PreInt64_Params Complement_PreInt64_Params;
	Complement_PreInt64_Params.A = A;

	uint16_t iNativeIndex = uFnComplement_PreInt64->iNative;
	uFnComplement_PreInt64->iNative = 0;

	uFnComplement_PreInt64->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnComplement_PreInt64, &Complement_PreInt64_Params, nullptr);

	uFnComplement_PreInt64->FunctionFlags |= 0x400;

	uFnComplement_PreInt64->iNative = iNativeIndex;

	return Complement_PreInt64_Params.ReturnValue;
};

// Function Core.Object.ToHex
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        A                              (CPF_Parm)

class FString UObject::ToHex(int32_t A)
{
	static UFunction* uFnToHex = nullptr;

	if (!uFnToHex)
	{
		uFnToHex = UFunction::FindFunction("Function Core.Object.ToHex");
	}

	UObject_execToHex_Params ToHex_Params;
	memcpy_s(&ToHex_Params.A, 0x4, &A, 0x4);

	uFnToHex->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnToHex, &ToHex_Params, nullptr);

	uFnToHex->FunctionFlags |= 0x400;

	return ToHex_Params.ReturnValue;
};

// Function Core.Object.Clamp
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[251])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        V                              (CPF_Parm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Clamp(int32_t V, int32_t A, int32_t B)
{
	static UFunction* uFnClamp = nullptr;

	if (!uFnClamp)
	{
		uFnClamp = UFunction::FindFunction("Function Core.Object.Clamp");
	}

	UObject_execClamp_Params Clamp_Params;
	memcpy_s(&Clamp_Params.V, 0x4, &V, 0x4);
	memcpy_s(&Clamp_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Clamp_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnClamp->iNative;
	uFnClamp->iNative = 0;

	uFnClamp->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnClamp, &Clamp_Params, nullptr);

	uFnClamp->FunctionFlags |= 0x400;

	uFnClamp->iNative = iNativeIndex;

	return Clamp_Params.ReturnValue;
};

// Function Core.Object.Max
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[250])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Max(int32_t A, int32_t B)
{
	static UFunction* uFnMax = nullptr;

	if (!uFnMax)
	{
		uFnMax = UFunction::FindFunction("Function Core.Object.Max");
	}

	UObject_execMax_Params Max_Params;
	memcpy_s(&Max_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Max_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnMax->iNative;
	uFnMax->iNative = 0;

	uFnMax->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMax, &Max_Params, nullptr);

	uFnMax->FunctionFlags |= 0x400;

	uFnMax->iNative = iNativeIndex;

	return Max_Params.ReturnValue;
};

// Function Core.Object.Min
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[249])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Min(int32_t A, int32_t B)
{
	static UFunction* uFnMin = nullptr;

	if (!uFnMin)
	{
		uFnMin = UFunction::FindFunction("Function Core.Object.Min");
	}

	UObject_execMin_Params Min_Params;
	memcpy_s(&Min_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Min_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnMin->iNative;
	uFnMin->iNative = 0;

	uFnMin->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMin, &Min_Params, nullptr);

	uFnMin->FunctionFlags |= 0x400;

	uFnMin->iNative = iNativeIndex;

	return Min_Params.ReturnValue;
};

// Function Core.Object.Rand
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[167])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Max                            (CPF_Parm)

int32_t UObject::Rand(int32_t Max)
{
	static UFunction* uFnRand = nullptr;

	if (!uFnRand)
	{
		uFnRand = UFunction::FindFunction("Function Core.Object.Rand");
	}

	UObject_execRand_Params Rand_Params;
	memcpy_s(&Rand_Params.Max, 0x4, &Max, 0x4);

	uint16_t iNativeIndex = uFnRand->iNative;
	uFnRand->iNative = 0;

	uFnRand->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnRand, &Rand_Params, nullptr);

	uFnRand->FunctionFlags |= 0x400;

	uFnRand->iNative = iNativeIndex;

	return Rand_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Int
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[166])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::SubtractSubtract_Int(int32_t& A)
{
	static UFunction* uFnSubtractSubtract_Int = nullptr;

	if (!uFnSubtractSubtract_Int)
	{
		uFnSubtractSubtract_Int = UFunction::FindFunction("Function Core.Object.SubtractSubtract_Int");
	}

	UObject_execSubtractSubtract_Int_Params SubtractSubtract_Int_Params;
	memcpy_s(&SubtractSubtract_Int_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnSubtractSubtract_Int->iNative;
	uFnSubtractSubtract_Int->iNative = 0;

	uFnSubtractSubtract_Int->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_Int, &SubtractSubtract_Int_Params, nullptr);

	uFnSubtractSubtract_Int->FunctionFlags |= 0x400;

	uFnSubtractSubtract_Int->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &SubtractSubtract_Int_Params.A, 0x4);

	return SubtractSubtract_Int_Params.ReturnValue;
};

// Function Core.Object.AddAdd_Int
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[165])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::AddAdd_Int(int32_t& A)
{
	static UFunction* uFnAddAdd_Int = nullptr;

	if (!uFnAddAdd_Int)
	{
		uFnAddAdd_Int = UFunction::FindFunction("Function Core.Object.AddAdd_Int");
	}

	UObject_execAddAdd_Int_Params AddAdd_Int_Params;
	memcpy_s(&AddAdd_Int_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnAddAdd_Int->iNative;
	uFnAddAdd_Int->iNative = 0;

	uFnAddAdd_Int->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddAdd_Int, &AddAdd_Int_Params, nullptr);

	uFnAddAdd_Int->FunctionFlags |= 0x400;

	uFnAddAdd_Int->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &AddAdd_Int_Params.A, 0x4);

	return AddAdd_Int_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreInt
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[164])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::SubtractSubtract_PreInt(int32_t& A)
{
	static UFunction* uFnSubtractSubtract_PreInt = nullptr;

	if (!uFnSubtractSubtract_PreInt)
	{
		uFnSubtractSubtract_PreInt = UFunction::FindFunction("Function Core.Object.SubtractSubtract_PreInt");
	}

	UObject_execSubtractSubtract_PreInt_Params SubtractSubtract_PreInt_Params;
	memcpy_s(&SubtractSubtract_PreInt_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnSubtractSubtract_PreInt->iNative;
	uFnSubtractSubtract_PreInt->iNative = 0;

	uFnSubtractSubtract_PreInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_PreInt, &SubtractSubtract_PreInt_Params, nullptr);

	uFnSubtractSubtract_PreInt->FunctionFlags |= 0x400;

	uFnSubtractSubtract_PreInt->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &SubtractSubtract_PreInt_Params.A, 0x4);

	return SubtractSubtract_PreInt_Params.ReturnValue;
};

// Function Core.Object.AddAdd_PreInt
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[163])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::AddAdd_PreInt(int32_t& A)
{
	static UFunction* uFnAddAdd_PreInt = nullptr;

	if (!uFnAddAdd_PreInt)
	{
		uFnAddAdd_PreInt = UFunction::FindFunction("Function Core.Object.AddAdd_PreInt");
	}

	UObject_execAddAdd_PreInt_Params AddAdd_PreInt_Params;
	memcpy_s(&AddAdd_PreInt_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnAddAdd_PreInt->iNative;
	uFnAddAdd_PreInt->iNative = 0;

	uFnAddAdd_PreInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddAdd_PreInt, &AddAdd_PreInt_Params, nullptr);

	uFnAddAdd_PreInt->FunctionFlags |= 0x400;

	uFnAddAdd_PreInt->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &AddAdd_PreInt_Params.A, 0x4);

	return AddAdd_PreInt_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_IntInt
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[162])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        B                              (CPF_Parm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::SubtractEqual_IntInt(int32_t B, int32_t& A)
{
	static UFunction* uFnSubtractEqual_IntInt = nullptr;

	if (!uFnSubtractEqual_IntInt)
	{
		uFnSubtractEqual_IntInt = UFunction::FindFunction("Function Core.Object.SubtractEqual_IntInt");
	}

	UObject_execSubtractEqual_IntInt_Params SubtractEqual_IntInt_Params;
	memcpy_s(&SubtractEqual_IntInt_Params.B, 0x4, &B, 0x4);
	memcpy_s(&SubtractEqual_IntInt_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnSubtractEqual_IntInt->iNative;
	uFnSubtractEqual_IntInt->iNative = 0;

	uFnSubtractEqual_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_IntInt, &SubtractEqual_IntInt_Params, nullptr);

	uFnSubtractEqual_IntInt->FunctionFlags |= 0x400;

	uFnSubtractEqual_IntInt->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &SubtractEqual_IntInt_Params.A, 0x4);

	return SubtractEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.AddEqual_IntInt
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[161])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        B                              (CPF_Parm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::AddEqual_IntInt(int32_t B, int32_t& A)
{
	static UFunction* uFnAddEqual_IntInt = nullptr;

	if (!uFnAddEqual_IntInt)
	{
		uFnAddEqual_IntInt = UFunction::FindFunction("Function Core.Object.AddEqual_IntInt");
	}

	UObject_execAddEqual_IntInt_Params AddEqual_IntInt_Params;
	memcpy_s(&AddEqual_IntInt_Params.B, 0x4, &B, 0x4);
	memcpy_s(&AddEqual_IntInt_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnAddEqual_IntInt->iNative;
	uFnAddEqual_IntInt->iNative = 0;

	uFnAddEqual_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddEqual_IntInt, &AddEqual_IntInt_Params, nullptr);

	uFnAddEqual_IntInt->FunctionFlags |= 0x400;

	uFnAddEqual_IntInt->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &AddEqual_IntInt_Params.A, 0x4);

	return AddEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_IntFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[160])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::DivideEqual_IntFloat(float B, int32_t& A)
{
	static UFunction* uFnDivideEqual_IntFloat = nullptr;

	if (!uFnDivideEqual_IntFloat)
	{
		uFnDivideEqual_IntFloat = UFunction::FindFunction("Function Core.Object.DivideEqual_IntFloat");
	}

	UObject_execDivideEqual_IntFloat_Params DivideEqual_IntFloat_Params;
	memcpy_s(&DivideEqual_IntFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&DivideEqual_IntFloat_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnDivideEqual_IntFloat->iNative;
	uFnDivideEqual_IntFloat->iNative = 0;

	uFnDivideEqual_IntFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_IntFloat, &DivideEqual_IntFloat_Params, nullptr);

	uFnDivideEqual_IntFloat->FunctionFlags |= 0x400;

	uFnDivideEqual_IntFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &DivideEqual_IntFloat_Params.A, 0x4);

	return DivideEqual_IntFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_IntFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[159])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// int32_t                        A                              (CPF_Parm | CPF_OutParm)

int32_t UObject::MultiplyEqual_IntFloat(float B, int32_t& A)
{
	static UFunction* uFnMultiplyEqual_IntFloat = nullptr;

	if (!uFnMultiplyEqual_IntFloat)
	{
		uFnMultiplyEqual_IntFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_IntFloat");
	}

	UObject_execMultiplyEqual_IntFloat_Params MultiplyEqual_IntFloat_Params;
	memcpy_s(&MultiplyEqual_IntFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&MultiplyEqual_IntFloat_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnMultiplyEqual_IntFloat->iNative;
	uFnMultiplyEqual_IntFloat->iNative = 0;

	uFnMultiplyEqual_IntFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_IntFloat, &MultiplyEqual_IntFloat_Params, nullptr);

	uFnMultiplyEqual_IntFloat->FunctionFlags |= 0x400;

	uFnMultiplyEqual_IntFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0x4, &MultiplyEqual_IntFloat_Params.A, 0x4);

	return MultiplyEqual_IntFloat_Params.ReturnValue;
};

// Function Core.Object.Or_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[158])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Or_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnOr_IntInt = nullptr;

	if (!uFnOr_IntInt)
	{
		uFnOr_IntInt = UFunction::FindFunction("Function Core.Object.Or_IntInt");
	}

	UObject_execOr_IntInt_Params Or_IntInt_Params;
	memcpy_s(&Or_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Or_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnOr_IntInt->iNative;
	uFnOr_IntInt->iNative = 0;

	uFnOr_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnOr_IntInt, &Or_IntInt_Params, nullptr);

	uFnOr_IntInt->FunctionFlags |= 0x400;

	uFnOr_IntInt->iNative = iNativeIndex;

	return Or_IntInt_Params.ReturnValue;
};

// Function Core.Object.Xor_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[157])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Xor_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnXor_IntInt = nullptr;

	if (!uFnXor_IntInt)
	{
		uFnXor_IntInt = UFunction::FindFunction("Function Core.Object.Xor_IntInt");
	}

	UObject_execXor_IntInt_Params Xor_IntInt_Params;
	memcpy_s(&Xor_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Xor_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnXor_IntInt->iNative;
	uFnXor_IntInt->iNative = 0;

	uFnXor_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnXor_IntInt, &Xor_IntInt_Params, nullptr);

	uFnXor_IntInt->FunctionFlags |= 0x400;

	uFnXor_IntInt->iNative = iNativeIndex;

	return Xor_IntInt_Params.ReturnValue;
};

// Function Core.Object.And_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[156])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::And_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnAnd_IntInt = nullptr;

	if (!uFnAnd_IntInt)
	{
		uFnAnd_IntInt = UFunction::FindFunction("Function Core.Object.And_IntInt");
	}

	UObject_execAnd_IntInt_Params And_IntInt_Params;
	memcpy_s(&And_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&And_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnAnd_IntInt->iNative;
	uFnAnd_IntInt->iNative = 0;

	uFnAnd_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAnd_IntInt, &And_IntInt_Params, nullptr);

	uFnAnd_IntInt->FunctionFlags |= 0x400;

	uFnAnd_IntInt->iNative = iNativeIndex;

	return And_IntInt_Params.ReturnValue;
};

// Function Core.Object.NotEqual_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[155])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::NotEqual_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnNotEqual_IntInt = nullptr;

	if (!uFnNotEqual_IntInt)
	{
		uFnNotEqual_IntInt = UFunction::FindFunction("Function Core.Object.NotEqual_IntInt");
	}

	UObject_execNotEqual_IntInt_Params NotEqual_IntInt_Params;
	memcpy_s(&NotEqual_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&NotEqual_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnNotEqual_IntInt->iNative;
	uFnNotEqual_IntInt->iNative = 0;

	uFnNotEqual_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_IntInt, &NotEqual_IntInt_Params, nullptr);

	uFnNotEqual_IntInt->FunctionFlags |= 0x400;

	uFnNotEqual_IntInt->iNative = iNativeIndex;

	return NotEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[154])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::EqualEqual_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnEqualEqual_IntInt = nullptr;

	if (!uFnEqualEqual_IntInt)
	{
		uFnEqualEqual_IntInt = UFunction::FindFunction("Function Core.Object.EqualEqual_IntInt");
	}

	UObject_execEqualEqual_IntInt_Params EqualEqual_IntInt_Params;
	memcpy_s(&EqualEqual_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&EqualEqual_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnEqualEqual_IntInt->iNative;
	uFnEqualEqual_IntInt->iNative = 0;

	uFnEqualEqual_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_IntInt, &EqualEqual_IntInt_Params, nullptr);

	uFnEqualEqual_IntInt->FunctionFlags |= 0x400;

	uFnEqualEqual_IntInt->iNative = iNativeIndex;

	return EqualEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.GreaterEqual_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[153])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::GreaterEqual_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnGreaterEqual_IntInt = nullptr;

	if (!uFnGreaterEqual_IntInt)
	{
		uFnGreaterEqual_IntInt = UFunction::FindFunction("Function Core.Object.GreaterEqual_IntInt");
	}

	UObject_execGreaterEqual_IntInt_Params GreaterEqual_IntInt_Params;
	memcpy_s(&GreaterEqual_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&GreaterEqual_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnGreaterEqual_IntInt->iNative;
	uFnGreaterEqual_IntInt->iNative = 0;

	uFnGreaterEqual_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterEqual_IntInt, &GreaterEqual_IntInt_Params, nullptr);

	uFnGreaterEqual_IntInt->FunctionFlags |= 0x400;

	uFnGreaterEqual_IntInt->iNative = iNativeIndex;

	return GreaterEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.LessEqual_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[152])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::LessEqual_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnLessEqual_IntInt = nullptr;

	if (!uFnLessEqual_IntInt)
	{
		uFnLessEqual_IntInt = UFunction::FindFunction("Function Core.Object.LessEqual_IntInt");
	}

	UObject_execLessEqual_IntInt_Params LessEqual_IntInt_Params;
	memcpy_s(&LessEqual_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&LessEqual_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnLessEqual_IntInt->iNative;
	uFnLessEqual_IntInt->iNative = 0;

	uFnLessEqual_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLessEqual_IntInt, &LessEqual_IntInt_Params, nullptr);

	uFnLessEqual_IntInt->FunctionFlags |= 0x400;

	uFnLessEqual_IntInt->iNative = iNativeIndex;

	return LessEqual_IntInt_Params.ReturnValue;
};

// Function Core.Object.Greater_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[151])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::Greater_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnGreater_IntInt = nullptr;

	if (!uFnGreater_IntInt)
	{
		uFnGreater_IntInt = UFunction::FindFunction("Function Core.Object.Greater_IntInt");
	}

	UObject_execGreater_IntInt_Params Greater_IntInt_Params;
	memcpy_s(&Greater_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Greater_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnGreater_IntInt->iNative;
	uFnGreater_IntInt->iNative = 0;

	uFnGreater_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreater_IntInt, &Greater_IntInt_Params, nullptr);

	uFnGreater_IntInt->FunctionFlags |= 0x400;

	uFnGreater_IntInt->iNative = iNativeIndex;

	return Greater_IntInt_Params.ReturnValue;
};

// Function Core.Object.Less_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[150])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

bool UObject::Less_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnLess_IntInt = nullptr;

	if (!uFnLess_IntInt)
	{
		uFnLess_IntInt = UFunction::FindFunction("Function Core.Object.Less_IntInt");
	}

	UObject_execLess_IntInt_Params Less_IntInt_Params;
	memcpy_s(&Less_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Less_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnLess_IntInt->iNative;
	uFnLess_IntInt->iNative = 0;

	uFnLess_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLess_IntInt, &Less_IntInt_Params, nullptr);

	uFnLess_IntInt->FunctionFlags |= 0x400;

	uFnLess_IntInt->iNative = iNativeIndex;

	return Less_IntInt_Params.ReturnValue;
};

// Function Core.Object.GreaterGreaterGreater_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[196])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::GreaterGreaterGreater_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnGreaterGreaterGreater_IntInt = nullptr;

	if (!uFnGreaterGreaterGreater_IntInt)
	{
		uFnGreaterGreaterGreater_IntInt = UFunction::FindFunction("Function Core.Object.GreaterGreaterGreater_IntInt");
	}

	UObject_execGreaterGreaterGreater_IntInt_Params GreaterGreaterGreater_IntInt_Params;
	memcpy_s(&GreaterGreaterGreater_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&GreaterGreaterGreater_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnGreaterGreaterGreater_IntInt->iNative;
	uFnGreaterGreaterGreater_IntInt->iNative = 0;

	uFnGreaterGreaterGreater_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterGreaterGreater_IntInt, &GreaterGreaterGreater_IntInt_Params, nullptr);

	uFnGreaterGreaterGreater_IntInt->FunctionFlags |= 0x400;

	uFnGreaterGreaterGreater_IntInt->iNative = iNativeIndex;

	return GreaterGreaterGreater_IntInt_Params.ReturnValue;
};

// Function Core.Object.GreaterGreater_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[149])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::GreaterGreater_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnGreaterGreater_IntInt = nullptr;

	if (!uFnGreaterGreater_IntInt)
	{
		uFnGreaterGreater_IntInt = UFunction::FindFunction("Function Core.Object.GreaterGreater_IntInt");
	}

	UObject_execGreaterGreater_IntInt_Params GreaterGreater_IntInt_Params;
	memcpy_s(&GreaterGreater_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&GreaterGreater_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnGreaterGreater_IntInt->iNative;
	uFnGreaterGreater_IntInt->iNative = 0;

	uFnGreaterGreater_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnGreaterGreater_IntInt, &GreaterGreater_IntInt_Params, nullptr);

	uFnGreaterGreater_IntInt->FunctionFlags |= 0x400;

	uFnGreaterGreater_IntInt->iNative = iNativeIndex;

	return GreaterGreater_IntInt_Params.ReturnValue;
};

// Function Core.Object.LessLess_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[148])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::LessLess_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnLessLess_IntInt = nullptr;

	if (!uFnLessLess_IntInt)
	{
		uFnLessLess_IntInt = UFunction::FindFunction("Function Core.Object.LessLess_IntInt");
	}

	UObject_execLessLess_IntInt_Params LessLess_IntInt_Params;
	memcpy_s(&LessLess_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&LessLess_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnLessLess_IntInt->iNative;
	uFnLessLess_IntInt->iNative = 0;

	uFnLessLess_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnLessLess_IntInt, &LessLess_IntInt_Params, nullptr);

	uFnLessLess_IntInt->FunctionFlags |= 0x400;

	uFnLessLess_IntInt->iNative = iNativeIndex;

	return LessLess_IntInt_Params.ReturnValue;
};

// Function Core.Object.Subtract_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[147])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Subtract_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnSubtract_IntInt = nullptr;

	if (!uFnSubtract_IntInt)
	{
		uFnSubtract_IntInt = UFunction::FindFunction("Function Core.Object.Subtract_IntInt");
	}

	UObject_execSubtract_IntInt_Params Subtract_IntInt_Params;
	memcpy_s(&Subtract_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Subtract_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnSubtract_IntInt->iNative;
	uFnSubtract_IntInt->iNative = 0;

	uFnSubtract_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_IntInt, &Subtract_IntInt_Params, nullptr);

	uFnSubtract_IntInt->FunctionFlags |= 0x400;

	uFnSubtract_IntInt->iNative = iNativeIndex;

	return Subtract_IntInt_Params.ReturnValue;
};

// Function Core.Object.Add_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[146])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Add_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnAdd_IntInt = nullptr;

	if (!uFnAdd_IntInt)
	{
		uFnAdd_IntInt = UFunction::FindFunction("Function Core.Object.Add_IntInt");
	}

	UObject_execAdd_IntInt_Params Add_IntInt_Params;
	memcpy_s(&Add_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Add_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnAdd_IntInt->iNative;
	uFnAdd_IntInt->iNative = 0;

	uFnAdd_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAdd_IntInt, &Add_IntInt_Params, nullptr);

	uFnAdd_IntInt->FunctionFlags |= 0x400;

	uFnAdd_IntInt->iNative = iNativeIndex;

	return Add_IntInt_Params.ReturnValue;
};

// Function Core.Object.Percent_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[253])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Percent_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnPercent_IntInt = nullptr;

	if (!uFnPercent_IntInt)
	{
		uFnPercent_IntInt = UFunction::FindFunction("Function Core.Object.Percent_IntInt");
	}

	UObject_execPercent_IntInt_Params Percent_IntInt_Params;
	memcpy_s(&Percent_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Percent_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnPercent_IntInt->iNative;
	uFnPercent_IntInt->iNative = 0;

	uFnPercent_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnPercent_IntInt, &Percent_IntInt_Params, nullptr);

	uFnPercent_IntInt->FunctionFlags |= 0x400;

	uFnPercent_IntInt->iNative = iNativeIndex;

	return Percent_IntInt_Params.ReturnValue;
};

// Function Core.Object.Divide_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[145])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Divide_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnDivide_IntInt = nullptr;

	if (!uFnDivide_IntInt)
	{
		uFnDivide_IntInt = UFunction::FindFunction("Function Core.Object.Divide_IntInt");
	}

	UObject_execDivide_IntInt_Params Divide_IntInt_Params;
	memcpy_s(&Divide_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Divide_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnDivide_IntInt->iNative;
	uFnDivide_IntInt->iNative = 0;

	uFnDivide_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivide_IntInt, &Divide_IntInt_Params, nullptr);

	uFnDivide_IntInt->FunctionFlags |= 0x400;

	uFnDivide_IntInt->iNative = iNativeIndex;

	return Divide_IntInt_Params.ReturnValue;
};

// Function Core.Object.Multiply_IntInt
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[144])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)
// int32_t                        B                              (CPF_Parm)

int32_t UObject::Multiply_IntInt(int32_t A, int32_t B)
{
	static UFunction* uFnMultiply_IntInt = nullptr;

	if (!uFnMultiply_IntInt)
	{
		uFnMultiply_IntInt = UFunction::FindFunction("Function Core.Object.Multiply_IntInt");
	}

	UObject_execMultiply_IntInt_Params Multiply_IntInt_Params;
	memcpy_s(&Multiply_IntInt_Params.A, 0x4, &A, 0x4);
	memcpy_s(&Multiply_IntInt_Params.B, 0x4, &B, 0x4);

	uint16_t iNativeIndex = uFnMultiply_IntInt->iNative;
	uFnMultiply_IntInt->iNative = 0;

	uFnMultiply_IntInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiply_IntInt, &Multiply_IntInt_Params, nullptr);

	uFnMultiply_IntInt->FunctionFlags |= 0x400;

	uFnMultiply_IntInt->iNative = iNativeIndex;

	return Multiply_IntInt_Params.ReturnValue;
};

// Function Core.Object.Subtract_PreInt
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[143])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)

int32_t UObject::Subtract_PreInt(int32_t A)
{
	static UFunction* uFnSubtract_PreInt = nullptr;

	if (!uFnSubtract_PreInt)
	{
		uFnSubtract_PreInt = UFunction::FindFunction("Function Core.Object.Subtract_PreInt");
	}

	UObject_execSubtract_PreInt_Params Subtract_PreInt_Params;
	memcpy_s(&Subtract_PreInt_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnSubtract_PreInt->iNative;
	uFnSubtract_PreInt->iNative = 0;

	uFnSubtract_PreInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtract_PreInt, &Subtract_PreInt_Params, nullptr);

	uFnSubtract_PreInt->FunctionFlags |= 0x400;

	uFnSubtract_PreInt->iNative = iNativeIndex;

	return Subtract_PreInt_Params.ReturnValue;
};

// Function Core.Object.Complement_PreInt
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[141])
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        A                              (CPF_Parm)

int32_t UObject::Complement_PreInt(int32_t A)
{
	static UFunction* uFnComplement_PreInt = nullptr;

	if (!uFnComplement_PreInt)
	{
		uFnComplement_PreInt = UFunction::FindFunction("Function Core.Object.Complement_PreInt");
	}

	UObject_execComplement_PreInt_Params Complement_PreInt_Params;
	memcpy_s(&Complement_PreInt_Params.A, 0x4, &A, 0x4);

	uint16_t iNativeIndex = uFnComplement_PreInt->iNative;
	uFnComplement_PreInt->iNative = 0;

	uFnComplement_PreInt->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnComplement_PreInt, &Complement_PreInt_Params, nullptr);

	uFnComplement_PreInt->FunctionFlags |= 0x400;

	uFnComplement_PreInt->iNative = iNativeIndex;

	return Complement_PreInt_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Byte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[140])
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::SubtractSubtract_Byte(uint8_t& A)
{
	static UFunction* uFnSubtractSubtract_Byte = nullptr;

	if (!uFnSubtractSubtract_Byte)
	{
		uFnSubtractSubtract_Byte = UFunction::FindFunction("Function Core.Object.SubtractSubtract_Byte");
	}

	UObject_execSubtractSubtract_Byte_Params SubtractSubtract_Byte_Params;
	memcpy_s(&SubtractSubtract_Byte_Params.A, 0x1, &A, 0x1);

	uint16_t iNativeIndex = uFnSubtractSubtract_Byte->iNative;
	uFnSubtractSubtract_Byte->iNative = 0;

	uFnSubtractSubtract_Byte->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_Byte, &SubtractSubtract_Byte_Params, nullptr);

	uFnSubtractSubtract_Byte->FunctionFlags |= 0x400;

	uFnSubtractSubtract_Byte->iNative = iNativeIndex;

	memcpy_s(&A, 0x1, &SubtractSubtract_Byte_Params.A, 0x1);

	return SubtractSubtract_Byte_Params.ReturnValue;
};

// Function Core.Object.AddAdd_Byte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[139])
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::AddAdd_Byte(uint8_t& A)
{
	static UFunction* uFnAddAdd_Byte = nullptr;

	if (!uFnAddAdd_Byte)
	{
		uFnAddAdd_Byte = UFunction::FindFunction("Function Core.Object.AddAdd_Byte");
	}

	UObject_execAddAdd_Byte_Params AddAdd_Byte_Params;
	memcpy_s(&AddAdd_Byte_Params.A, 0x1, &A, 0x1);

	uint16_t iNativeIndex = uFnAddAdd_Byte->iNative;
	uFnAddAdd_Byte->iNative = 0;

	uFnAddAdd_Byte->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddAdd_Byte, &AddAdd_Byte_Params, nullptr);

	uFnAddAdd_Byte->FunctionFlags |= 0x400;

	uFnAddAdd_Byte->iNative = iNativeIndex;

	memcpy_s(&A, 0x1, &AddAdd_Byte_Params.A, 0x1);

	return AddAdd_Byte_Params.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreByte
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[138])
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::SubtractSubtract_PreByte(uint8_t& A)
{
	static UFunction* uFnSubtractSubtract_PreByte = nullptr;

	if (!uFnSubtractSubtract_PreByte)
	{
		uFnSubtractSubtract_PreByte = UFunction::FindFunction("Function Core.Object.SubtractSubtract_PreByte");
	}

	UObject_execSubtractSubtract_PreByte_Params SubtractSubtract_PreByte_Params;
	memcpy_s(&SubtractSubtract_PreByte_Params.A, 0x1, &A, 0x1);

	uint16_t iNativeIndex = uFnSubtractSubtract_PreByte->iNative;
	uFnSubtractSubtract_PreByte->iNative = 0;

	uFnSubtractSubtract_PreByte->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractSubtract_PreByte, &SubtractSubtract_PreByte_Params, nullptr);

	uFnSubtractSubtract_PreByte->FunctionFlags |= 0x400;

	uFnSubtractSubtract_PreByte->iNative = iNativeIndex;

	memcpy_s(&A, 0x1, &SubtractSubtract_PreByte_Params.A, 0x1);

	return SubtractSubtract_PreByte_Params.ReturnValue;
};

// Function Core.Object.AddAdd_PreByte
// [0x00423411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[137])
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::AddAdd_PreByte(uint8_t& A)
{
	static UFunction* uFnAddAdd_PreByte = nullptr;

	if (!uFnAddAdd_PreByte)
	{
		uFnAddAdd_PreByte = UFunction::FindFunction("Function Core.Object.AddAdd_PreByte");
	}

	UObject_execAddAdd_PreByte_Params AddAdd_PreByte_Params;
	memcpy_s(&AddAdd_PreByte_Params.A, 0x1, &A, 0x1);

	uint16_t iNativeIndex = uFnAddAdd_PreByte->iNative;
	uFnAddAdd_PreByte->iNative = 0;

	uFnAddAdd_PreByte->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddAdd_PreByte, &AddAdd_PreByte_Params, nullptr);

	uFnAddAdd_PreByte->FunctionFlags |= 0x400;

	uFnAddAdd_PreByte->iNative = iNativeIndex;

	memcpy_s(&A, 0x1, &AddAdd_PreByte_Params.A, 0x1);

	return AddAdd_PreByte_Params.ReturnValue;
};

// Function Core.Object.SubtractEqual_ByteByte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[136])
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        B                              (CPF_Parm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::SubtractEqual_ByteByte(uint8_t B, uint8_t& A)
{
	static UFunction* uFnSubtractEqual_ByteByte = nullptr;

	if (!uFnSubtractEqual_ByteByte)
	{
		uFnSubtractEqual_ByteByte = UFunction::FindFunction("Function Core.Object.SubtractEqual_ByteByte");
	}

	UObject_execSubtractEqual_ByteByte_Params SubtractEqual_ByteByte_Params;
	memcpy_s(&SubtractEqual_ByteByte_Params.B, 0x1, &B, 0x1);
	memcpy_s(&SubtractEqual_ByteByte_Params.A, 0x1, &A, 0x1);

	uint16_t iNativeIndex = uFnSubtractEqual_ByteByte->iNative;
	uFnSubtractEqual_ByteByte->iNative = 0;

	uFnSubtractEqual_ByteByte->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnSubtractEqual_ByteByte, &SubtractEqual_ByteByte_Params, nullptr);

	uFnSubtractEqual_ByteByte->FunctionFlags |= 0x400;

	uFnSubtractEqual_ByteByte->iNative = iNativeIndex;

	memcpy_s(&A, 0x1, &SubtractEqual_ByteByte_Params.A, 0x1);

	return SubtractEqual_ByteByte_Params.ReturnValue;
};

// Function Core.Object.AddEqual_ByteByte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[135])
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        B                              (CPF_Parm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::AddEqual_ByteByte(uint8_t B, uint8_t& A)
{
	static UFunction* uFnAddEqual_ByteByte = nullptr;

	if (!uFnAddEqual_ByteByte)
	{
		uFnAddEqual_ByteByte = UFunction::FindFunction("Function Core.Object.AddEqual_ByteByte");
	}

	UObject_execAddEqual_ByteByte_Params AddEqual_ByteByte_Params;
	memcpy_s(&AddEqual_ByteByte_Params.B, 0x1, &B, 0x1);
	memcpy_s(&AddEqual_ByteByte_Params.A, 0x1, &A, 0x1);

	uint16_t iNativeIndex = uFnAddEqual_ByteByte->iNative;
	uFnAddEqual_ByteByte->iNative = 0;

	uFnAddEqual_ByteByte->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAddEqual_ByteByte, &AddEqual_ByteByte_Params, nullptr);

	uFnAddEqual_ByteByte->FunctionFlags |= 0x400;

	uFnAddEqual_ByteByte->iNative = iNativeIndex;

	memcpy_s(&A, 0x1, &AddEqual_ByteByte_Params.A, 0x1);

	return AddEqual_ByteByte_Params.ReturnValue;
};

// Function Core.Object.DivideEqual_ByteByte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[134])
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        B                              (CPF_Parm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::DivideEqual_ByteByte(uint8_t B, uint8_t& A)
{
	static UFunction* uFnDivideEqual_ByteByte = nullptr;

	if (!uFnDivideEqual_ByteByte)
	{
		uFnDivideEqual_ByteByte = UFunction::FindFunction("Function Core.Object.DivideEqual_ByteByte");
	}

	UObject_execDivideEqual_ByteByte_Params DivideEqual_ByteByte_Params;
	memcpy_s(&DivideEqual_ByteByte_Params.B, 0x1, &B, 0x1);
	memcpy_s(&DivideEqual_ByteByte_Params.A, 0x1, &A, 0x1);

	uint16_t iNativeIndex = uFnDivideEqual_ByteByte->iNative;
	uFnDivideEqual_ByteByte->iNative = 0;

	uFnDivideEqual_ByteByte->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnDivideEqual_ByteByte, &DivideEqual_ByteByte_Params, nullptr);

	uFnDivideEqual_ByteByte->FunctionFlags |= 0x400;

	uFnDivideEqual_ByteByte->iNative = iNativeIndex;

	memcpy_s(&A, 0x1, &DivideEqual_ByteByte_Params.A, 0x1);

	return DivideEqual_ByteByte_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_ByteFloat
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[198])
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          B                              (CPF_Parm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::MultiplyEqual_ByteFloat(float B, uint8_t& A)
{
	static UFunction* uFnMultiplyEqual_ByteFloat = nullptr;

	if (!uFnMultiplyEqual_ByteFloat)
	{
		uFnMultiplyEqual_ByteFloat = UFunction::FindFunction("Function Core.Object.MultiplyEqual_ByteFloat");
	}

	UObject_execMultiplyEqual_ByteFloat_Params MultiplyEqual_ByteFloat_Params;
	memcpy_s(&MultiplyEqual_ByteFloat_Params.B, 0x4, &B, 0x4);
	memcpy_s(&MultiplyEqual_ByteFloat_Params.A, 0x1, &A, 0x1);

	uint16_t iNativeIndex = uFnMultiplyEqual_ByteFloat->iNative;
	uFnMultiplyEqual_ByteFloat->iNative = 0;

	uFnMultiplyEqual_ByteFloat->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_ByteFloat, &MultiplyEqual_ByteFloat_Params, nullptr);

	uFnMultiplyEqual_ByteFloat->FunctionFlags |= 0x400;

	uFnMultiplyEqual_ByteFloat->iNative = iNativeIndex;

	memcpy_s(&A, 0x1, &MultiplyEqual_ByteFloat_Params.A, 0x1);

	return MultiplyEqual_ByteFloat_Params.ReturnValue;
};

// Function Core.Object.MultiplyEqual_ByteByte
// [0x00423401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[133])
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        B                              (CPF_Parm)
// uint8_t                        A                              (CPF_Parm | CPF_OutParm)

uint8_t UObject::MultiplyEqual_ByteByte(uint8_t B, uint8_t& A)
{
	static UFunction* uFnMultiplyEqual_ByteByte = nullptr;

	if (!uFnMultiplyEqual_ByteByte)
	{
		uFnMultiplyEqual_ByteByte = UFunction::FindFunction("Function Core.Object.MultiplyEqual_ByteByte");
	}

	UObject_execMultiplyEqual_ByteByte_Params MultiplyEqual_ByteByte_Params;
	memcpy_s(&MultiplyEqual_ByteByte_Params.B, 0x1, &B, 0x1);
	memcpy_s(&MultiplyEqual_ByteByte_Params.A, 0x1, &A, 0x1);

	uint16_t iNativeIndex = uFnMultiplyEqual_ByteByte->iNative;
	uFnMultiplyEqual_ByteByte->iNative = 0;

	uFnMultiplyEqual_ByteByte->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnMultiplyEqual_ByteByte, &MultiplyEqual_ByteByte_Params, nullptr);

	uFnMultiplyEqual_ByteByte->FunctionFlags |= 0x400;

	uFnMultiplyEqual_ByteByte->iNative = iNativeIndex;

	memcpy_s(&A, 0x1, &MultiplyEqual_ByteByte_Params.A, 0x1);

	return MultiplyEqual_ByteByte_Params.ReturnValue;
};

// Function Core.Object.OrOr_BoolBool
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[132])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)
// unsigned long                  B                              (CPF_Parm | CPF_SkipParm)

bool UObject::OrOr_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* uFnOrOr_BoolBool = nullptr;

	if (!uFnOrOr_BoolBool)
	{
		uFnOrOr_BoolBool = UFunction::FindFunction("Function Core.Object.OrOr_BoolBool");
	}

	UObject_execOrOr_BoolBool_Params OrOr_BoolBool_Params;
	OrOr_BoolBool_Params.A = A;
	OrOr_BoolBool_Params.B = B;

	uint16_t iNativeIndex = uFnOrOr_BoolBool->iNative;
	uFnOrOr_BoolBool->iNative = 0;

	uFnOrOr_BoolBool->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnOrOr_BoolBool, &OrOr_BoolBool_Params, nullptr);

	uFnOrOr_BoolBool->FunctionFlags |= 0x400;

	uFnOrOr_BoolBool->iNative = iNativeIndex;

	return OrOr_BoolBool_Params.ReturnValue;
};

// Function Core.Object.XorXor_BoolBool
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[131])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)
// unsigned long                  B                              (CPF_Parm)

bool UObject::XorXor_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* uFnXorXor_BoolBool = nullptr;

	if (!uFnXorXor_BoolBool)
	{
		uFnXorXor_BoolBool = UFunction::FindFunction("Function Core.Object.XorXor_BoolBool");
	}

	UObject_execXorXor_BoolBool_Params XorXor_BoolBool_Params;
	XorXor_BoolBool_Params.A = A;
	XorXor_BoolBool_Params.B = B;

	uint16_t iNativeIndex = uFnXorXor_BoolBool->iNative;
	uFnXorXor_BoolBool->iNative = 0;

	uFnXorXor_BoolBool->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnXorXor_BoolBool, &XorXor_BoolBool_Params, nullptr);

	uFnXorXor_BoolBool->FunctionFlags |= 0x400;

	uFnXorXor_BoolBool->iNative = iNativeIndex;

	return XorXor_BoolBool_Params.ReturnValue;
};

// Function Core.Object.AndAnd_BoolBool
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[130])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)
// unsigned long                  B                              (CPF_Parm | CPF_SkipParm)

bool UObject::AndAnd_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* uFnAndAnd_BoolBool = nullptr;

	if (!uFnAndAnd_BoolBool)
	{
		uFnAndAnd_BoolBool = UFunction::FindFunction("Function Core.Object.AndAnd_BoolBool");
	}

	UObject_execAndAnd_BoolBool_Params AndAnd_BoolBool_Params;
	AndAnd_BoolBool_Params.A = A;
	AndAnd_BoolBool_Params.B = B;

	uint16_t iNativeIndex = uFnAndAnd_BoolBool->iNative;
	uFnAndAnd_BoolBool->iNative = 0;

	uFnAndAnd_BoolBool->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnAndAnd_BoolBool, &AndAnd_BoolBool_Params, nullptr);

	uFnAndAnd_BoolBool->FunctionFlags |= 0x400;

	uFnAndAnd_BoolBool->iNative = iNativeIndex;

	return AndAnd_BoolBool_Params.ReturnValue;
};

// Function Core.Object.NotEqual_BoolBool
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[243])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)
// unsigned long                  B                              (CPF_Parm)

bool UObject::NotEqual_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* uFnNotEqual_BoolBool = nullptr;

	if (!uFnNotEqual_BoolBool)
	{
		uFnNotEqual_BoolBool = UFunction::FindFunction("Function Core.Object.NotEqual_BoolBool");
	}

	UObject_execNotEqual_BoolBool_Params NotEqual_BoolBool_Params;
	NotEqual_BoolBool_Params.A = A;
	NotEqual_BoolBool_Params.B = B;

	uint16_t iNativeIndex = uFnNotEqual_BoolBool->iNative;
	uFnNotEqual_BoolBool->iNative = 0;

	uFnNotEqual_BoolBool->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNotEqual_BoolBool, &NotEqual_BoolBool_Params, nullptr);

	uFnNotEqual_BoolBool->FunctionFlags |= 0x400;

	uFnNotEqual_BoolBool->iNative = iNativeIndex;

	return NotEqual_BoolBool_Params.ReturnValue;
};

// Function Core.Object.EqualEqual_BoolBool
// [0x00023401] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[242])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)
// unsigned long                  B                              (CPF_Parm)

bool UObject::EqualEqual_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* uFnEqualEqual_BoolBool = nullptr;

	if (!uFnEqualEqual_BoolBool)
	{
		uFnEqualEqual_BoolBool = UFunction::FindFunction("Function Core.Object.EqualEqual_BoolBool");
	}

	UObject_execEqualEqual_BoolBool_Params EqualEqual_BoolBool_Params;
	EqualEqual_BoolBool_Params.A = A;
	EqualEqual_BoolBool_Params.B = B;

	uint16_t iNativeIndex = uFnEqualEqual_BoolBool->iNative;
	uFnEqualEqual_BoolBool->iNative = 0;

	uFnEqualEqual_BoolBool->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnEqualEqual_BoolBool, &EqualEqual_BoolBool_Params, nullptr);

	uFnEqualEqual_BoolBool->FunctionFlags |= 0x400;

	uFnEqualEqual_BoolBool->iNative = iNativeIndex;

	return EqualEqual_BoolBool_Params.ReturnValue;
};

// Function Core.Object.Not_PreBool
// [0x00023411] (FUNC_Final | FUNC_Native | FUNC_NetResponse | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[129])
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  A                              (CPF_Parm)

bool UObject::Not_PreBool(unsigned long A)
{
	static UFunction* uFnNot_PreBool = nullptr;

	if (!uFnNot_PreBool)
	{
		uFnNot_PreBool = UFunction::FindFunction("Function Core.Object.Not_PreBool");
	}

	UObject_execNot_PreBool_Params Not_PreBool_Params;
	Not_PreBool_Params.A = A;

	uint16_t iNativeIndex = uFnNot_PreBool->iNative;
	uFnNot_PreBool->iNative = 0;

	uFnNot_PreBool->FunctionFlags |= ~0x400;

	UObject::StaticClass()->ProcessEvent(uFnNot_PreBool, &Not_PreBool_Params, nullptr);

	uFnNot_PreBool->FunctionFlags |= 0x400;

	uFnNot_PreBool->iNative = iNativeIndex;

	return Not_PreBool_Params.ReturnValue;
};

UFunction* UFunction::FindFunction(const const std::string& functionFullName)
{
	static bool initialized = false;
	static std::map<const std::string, UFunction*> foundFunctions{};

	if (!initialized)
	{
		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject)
			{
				const std::string objectFullName = uObject->GetFullName();

				if (objectFullName.find("Function") == 0)
				{
					foundFunctions[objectFullName] = reinterpret_cast<UFunction*>(uObject);
				}
			}
		}

		initialized = true;
	}

	if (foundFunctions.find(functionFullName) != foundFunctions.end())
	{
		return foundFunctions[functionFullName];
	}

	return nullptr;
}

// Function Core.DistributionVector.GetVectorValue
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          F                              (CPF_OptionalParm | CPF_Parm)
// int32_t                        LastExtreme                    (CPF_OptionalParm | CPF_Parm)

struct FVector UDistributionVector::GetVectorValue(float F, int32_t LastExtreme)
{
	static UFunction* uFnGetVectorValue = nullptr;

	if (!uFnGetVectorValue)
	{
		uFnGetVectorValue = UFunction::FindFunction("Function Core.DistributionVector.GetVectorValue");
	}

	UDistributionVector_execGetVectorValue_Params GetVectorValue_Params;
	memcpy_s(&GetVectorValue_Params.F, 0x4, &F, 0x4);
	memcpy_s(&GetVectorValue_Params.LastExtreme, 0x4, &LastExtreme, 0x4);

	uFnGetVectorValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetVectorValue, &GetVectorValue_Params, nullptr);

	uFnGetVectorValue->FunctionFlags |= 0x400;

	return GetVectorValue_Params.ReturnValue;
};

// Function Core.DistributionFloat.GetFloatValue
// [0x00024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          F                              (CPF_OptionalParm | CPF_Parm)

float UDistributionFloat::GetFloatValue(float F)
{
	static UFunction* uFnGetFloatValue = nullptr;

	if (!uFnGetFloatValue)
	{
		uFnGetFloatValue = UFunction::FindFunction("Function Core.DistributionFloat.GetFloatValue");
	}

	UDistributionFloat_execGetFloatValue_Params GetFloatValue_Params;
	memcpy_s(&GetFloatValue_Params.F, 0x4, &F, 0x4);

	uFnGetFloatValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetFloatValue, &GetFloatValue_Params, nullptr);

	uFnGetFloatValue->FunctionFlags |= 0x400;

	return GetFloatValue_Params.ReturnValue;
};

// Function Core.HelpCommandlet.Main
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Params                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UHelpCommandlet::eventMain(class FString Params)
{
	static UFunction* uFnMain = nullptr;

	if (!uFnMain)
	{
		uFnMain = UFunction::FindFunction("Function Core.HelpCommandlet.Main");
	}

	UHelpCommandlet_eventMain_Params Main_Params;
	memcpy_s(&Main_Params.Params, 0x10, &Params, 0x10);

	this->ProcessEvent(uFnMain, &Main_Params, nullptr);

	return Main_Params.ReturnValue;
};

// Function Core.Commandlet.Main
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Params                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UCommandlet::eventMain(class FString Params)
{
	static UFunction* uFnMain = nullptr;

	if (!uFnMain)
	{
		uFnMain = UFunction::FindFunction("Function Core.Commandlet.Main");
	}

	UCommandlet_eventMain_Params Main_Params;
	memcpy_s(&Main_Params.Params, 0x10, &Params, 0x10);

	this->ProcessEvent(uFnMain, &Main_Params, nullptr);

	return Main_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
