/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: Core_classes.hpp
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

#define CONST_InvAspectRatio16x9                                0
#define CONST_InvAspectRatio5x4                                 0
#define CONST_InvAspectRatio4x3                                 0
#define CONST_AspectRatio16x9                                   1
#define CONST_AspectRatio5x4                                    1
#define CONST_AspectRatio4x3                                    1
#define CONST_INDEX_NONE                                        -
#define CONST_UnrRotToDeg                                       0
#define CONST_DegToUnrRot                                       1
#define CONST_RadToUnrRot                                       1
#define CONST_UnrRotToRad                                       0
#define CONST_DegToRad                                          0
#define CONST_RadToDeg                                          5
#define CONST_Pi                                                3
#define CONST_MaxInt                                            0

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
enum class EDebugBreakType : uint8_t
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_END                                       = 3
};

// Enum Core.Object.EAutomatedRunResult
enum class EAutomatedRunResult : uint8_t
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_END                                            = 3
};

// Enum Core.Object.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV                           = 0,
	AspectRatio_MaintainXFOV                           = 1,
	AspectRatio_MajorAxisFOV                           = 2,
	AspectRatio_END                                    = 3
};

// Enum Core.Object.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_END                                            = 6
};

// Enum Core.Object.EInterpMethodType
enum class EInterpMethodType : uint8_t
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_END                                            = 3
};

// Enum Core.Object.EAxis
enum class EAxis : uint8_t
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_END                                           = 5
};

// Enum Core.Object.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_EffectsUpdateWork                               = 4,
	TG_END                                             = 5
};

// Enum Core.Object.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_END                                             = 5
};

// Enum Core.Object.AlphaBlendType
enum class EAlphaBlendType : uint8_t
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_END                                            = 7
};

// Enum Core.DistributionVector.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_END                                          = 5
};

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_END                                          = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x0060
class UObject
{
public:
	struct FPointer                                    VfTableObject;                                 // 0x0000 (0x0008) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	struct FPointer                                    HashNext;                                      // 0x0008 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FQWord                                      ObjectFlags;                                   // 0x0010 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FPointer                                    HashOuterNext;                                 // 0x0018 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FPointer                                    StateFrame;                                    // 0x0020 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	class UObject*                                     Linker;                                        // 0x0028 (0x0008) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	struct FPointer                                    LinkerIndex;                                   // 0x0030 (0x0008) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	int32_t                                            ObjectInternalInteger;                         // 0x0038 (0x0004) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	int32_t                                            NetIndex;                                      // 0x003C (0x0004) [0x0000000000821002] (CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport)
	class UObject*                                     Outer;                                         // 0x0040 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	struct FName                                       Name;                                          // 0x0048 (0x0008) [0x0000000000021003] (CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst)
	class UClass*                                      Class;                                         // 0x0050 (0x0008) [0x0000000000021002] (CPF_Const | CPF_Native | CPF_EditConst)
	class UObject*                                     ObjectArchetype;                               // 0x0058 (0x0008) [0x0000000000021003] (CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Object");
		}

		return uClassPointer;
	};

	static TArray<class UObject*>* GObjObjects();

	std::string GetName();
	std::string GetNameCPP();
	std::string GetFullName();
	class UObject* GetPackageObj();
	template<typename T> static T* FindObject(const std::string& objectFullName)
	{
		for (UObject* uObject : *UObject::GObjObjects())
		{
			if (uObject && uObject->IsA(T::StaticClass()))
			{
				if (uObject->GetFullName() == objectFullName)
				{
					return reinterpret_cast<T*>(uObject);
				}
			}
		}

		return nullptr;
	}
	template<typename T> static uint32_t CountObject(const std::string& objectName)
	{
		static std::map<std::string, int32_t> countCache;

		if (countCache.find(objectName) == countCache.end())
		{
			countCache[objectName] = 0;

			for (UObject* uObject : *UObject::GObjObjects())
			{
				if (uObject && uObject->IsA(T::StaticClass()))
				{
					if (uObject->GetName() == objectName)
					{
						countCache[uObject->GetName()]++;
					}
				}
			}
		}

		return countCache[objectName];
	}
	static class UClass* FindClass(const std::string& classFullName);
	bool IsA(class UClass* uClass);
	bool IsA(int32_t objInternalInteger);

	static class FString GetStringFromGuid(struct FGuid& InGuid);
	static struct FGuid GetGuidFromString(class FString& InGuidString);
	static struct FGuid CreateGuid();
	static bool IsGuidValid(struct FGuid& InGuid);
	static void InvalidateGuid(struct FGuid& InGuid);
	static class FString GetLanguage();
	int32_t GetRandomOptionSumFrequency(TArray<float>& FreqList);
	int32_t GetBuildChangelistNumber();
	int32_t GetEngineVersion();
	void GetSystemTime(int32_t& Year, int32_t& Month, int32_t& DayOfWeek, int32_t& Day, int32_t& Hour, int32_t& Min, int32_t& Sec, int32_t& MSec);
	class FString TimeStamp();
	struct FVector TransformVectorByRotation(struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse);
	struct FName GetPackageName();
	bool IsPendingKill();
	float ByteToFloat(uint8_t inputByte, unsigned long bSigned);
	uint8_t FloatToByte(float inputFloat, unsigned long bSigned);
	static float UnwindHeading(float A);
	static float FindDeltaAngle(float A1, float A2);
	static float GetHeadingAngle(struct FVector Dir);
	static void GetAngularDegreesFromRadians(struct FVector2D& OutFOV);
	static void GetAngularFromDotDist(struct FVector2D DotDist, struct FVector2D& OutAngDist);
	static bool GetAngularDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutAngularDist);
	static bool GetDotDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D& OutDotDist);
	static struct FVector PointProjectToPlane(struct FVector Point, struct FVector A, struct FVector B, struct FVector C);
	float PointDistToPlane(struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector& out_ClosestPoint);
	float PointDistToSegment(struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector& OutClosestPoint);
	float PointDistToLine(struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector& OutClosestPoint);
	static bool GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int32_t MaxResults, TArray<class FString>& out_SectionNames);
	static void StaticSaveConfig();
	void SaveConfig();
	static class UObject* FindObject(class FString ObjectName, class UClass* ObjectClass);
	static class UObject* DynamicLoadObject(class FString ObjectName, class UClass* ObjectClass, unsigned long MayFail);
	static struct FName GetEnum(class UObject* E, int32_t I);
	void Disable(struct FName ProbeFunc);
	void Enable(struct FName ProbeFunc);
	void eventContinuedState();
	void eventPausedState();
	void eventPoppedState();
	void eventPushedState();
	void eventEndState(struct FName NextStateName);
	void eventBeginState(struct FName PreviousStateName);
	void DumpStateStack();
	void PopState(unsigned long bPopAll);
	void PushState(struct FName NewState, struct FName NewLabel);
	struct FName GetStateName();
	bool IsChildState(struct FName TestState, struct FName TestParentState);
	bool IsInState(struct FName TestState, unsigned long bTestStateStack);
	void GotoState(struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack);
	static bool IsUTracing();
	static void SetUTracing(unsigned long bShouldUTrace);
	static struct FName GetFuncName();
	static void DebugBreak(int32_t UserFlags, uint8_t DebuggerType);
	static class FString GetScriptTrace();
	static void ScriptTrace();
	static class FString ParseLocalizedPropertyPath(class FString PathName);
	static class FString Localize(class FString SectionName, class FString KeyName, class FString PackageName);
	static void WarnInternal(class FString S);
	static void LogInternal(class FString S, struct FName Tag);
	static struct FLinearColor Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B);
	static struct FLinearColor Multiply_LinearColorFloat(struct FLinearColor LC, float Mult);
	static struct FLinearColor ColorToLinearColor(struct FColor OldColor);
	static struct FLinearColor MakeLinearColor(float R, float G, float B, float A);
	static struct FColor LerpColor(struct FColor A, struct FColor B, float Alpha);
	static struct FColor MakeColor(uint8_t R, uint8_t G, uint8_t B, uint8_t A);
	static struct FColor Add_ColorColor(struct FColor A, struct FColor B);
	static struct FColor Multiply_ColorFloat(struct FColor A, float B);
	static struct FColor Multiply_FloatColor(float A, struct FColor B);
	static struct FColor Subtract_ColorColor(struct FColor A, struct FColor B);
	static struct FVector2D EvalInterpCurveVector2D(struct FInterpCurveVector2D Vector2DCurve, float InVal);
	static struct FVector EvalInterpCurveVector(struct FInterpCurveVector VectorCurve, float InVal);
	static float EvalInterpCurveFloat(struct FInterpCurveFloat FloatCurve, float InVal);
	static struct FVector2D vect2d(float InX, float InY);
	static float GetMappedRangeValue(struct FVector2D InputRange, struct FVector2D OutputRange, float Value);
	static float GetRangePctByValue(struct FVector2D Range, float Value);
	static float GetRangeValueByPct(struct FVector2D Range, float Pct);
	static struct FVector2D SubtractEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A);
	static struct FVector2D AddEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D& A);
	static struct FVector2D DivideEqual_Vector2DFloat(float B, struct FVector2D& A);
	static struct FVector2D MultiplyEqual_Vector2DFloat(float B, struct FVector2D& A);
	static struct FVector2D Divide_Vector2DFloat(struct FVector2D A, float B);
	static struct FVector2D Multiply_Vector2DFloat(struct FVector2D A, float B);
	static struct FVector2D Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B);
	static struct FVector2D Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B);
	static struct FQuat Subtract_QuatQuat(struct FQuat A, struct FQuat B);
	static struct FQuat Add_QuatQuat(struct FQuat A, struct FQuat B);
	static struct FQuat QuatSlerp(struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath);
	static struct FRotator QuatToRotator(struct FQuat A);
	static struct FQuat QuatFromRotator(struct FRotator A);
	static struct FQuat QuatFromAxisAndAngle(struct FVector Axis, float Angle);
	static struct FQuat QuatFindBetween(struct FVector A, struct FVector B);
	static struct FVector QuatRotateVector(struct FQuat A, struct FVector B);
	static struct FQuat QuatInvert(struct FQuat A);
	static float QuatDot(struct FQuat A, struct FQuat B);
	static struct FQuat QuatProduct(struct FQuat A, struct FQuat B);
	static struct FVector MatrixGetAxis(struct FMatrix TM, uint8_t Axis);
	static struct FVector MatrixGetOrigin(struct FMatrix TM);
	static struct FRotator MatrixGetRotator(struct FMatrix TM);
	static struct FMatrix MakeRotationMatrix(struct FRotator Rotation);
	static struct FMatrix MakeRotationTranslationMatrix(struct FVector Translation, struct FRotator Rotation);
	static struct FVector InverseTransformNormal(struct FMatrix TM, struct FVector A);
	static struct FVector TransformNormal(struct FMatrix TM, struct FVector A);
	static struct FVector InverseTransformVector(struct FMatrix TM, struct FVector A);
	static struct FVector TransformVector(struct FMatrix TM, struct FVector A);
	static struct FMatrix Multiply_MatrixMatrix(struct FMatrix A, struct FMatrix B);
	static bool NotEqual_NameName(struct FName A, struct FName B);
	static bool EqualEqual_NameName(struct FName A, struct FName B);
	bool IsA(struct FName ClassName);
	static bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	static bool NotEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	static bool EqualEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	static bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	static bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	static class FString PathName(class UObject* CheckObject);
	static TArray<class FString> SplitString(class FString Source, class FString Delimiter, unsigned long bCullEmpty);
	static void ParseStringIntoArray(class FString BaseString, class FString delim, unsigned long bCullEmpty, TArray<class FString>& Pieces);
	static void JoinArray(TArray<class FString> StringArray, class FString delim, unsigned long bIgnoreBlanks, class FString& out_Result);
	static class FString GetRightMost(class FString Text);
	static class FString Split(class FString Text, class FString SplitStr, unsigned long bOmitSplitStr);
	static class FString Repl(class FString Src, class FString Match, class FString With, unsigned long bCaseSensitive);
	static int32_t Asc(class FString S);
	static class FString Chr(int32_t I);
	static class FString Locs(class FString S);
	static class FString Caps(class FString S);
	static class FString Right(class FString S, int32_t I);
	static class FString Left(class FString S, int32_t I);
	static class FString Mid(class FString S, int32_t I, int32_t J);
	static int32_t InStr(class FString S, class FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int32_t StartPos);
	static int32_t Len(class FString S);
	static class FString SubtractEqual_StrStr(class FString B, class FString& A);
	static class FString AtEqual_StrStr(class FString B, class FString& A);
	static class FString ConcatEqual_StrStr(class FString B, class FString& A);
	static bool ComplementEqual_StrStr(class FString A, class FString B);
	static bool NotEqual_StrStr(class FString A, class FString B);
	static bool EqualEqual_StrStr(class FString A, class FString B);
	static bool GreaterEqual_StrStr(class FString A, class FString B);
	static bool LessEqual_StrStr(class FString A, class FString B);
	static bool Greater_StrStr(class FString A, class FString B);
	static bool Less_StrStr(class FString A, class FString B);
	static class FString At_StrStr(class FString A, class FString B);
	static class FString Concat_StrStr(class FString A, class FString B);
	static struct FRotator MakeRotator(int32_t Pitch, int32_t Yaw, int32_t Roll);
	static bool SClampRotAxis(float DeltaTime, int32_t ViewAxis, int32_t MaxLimit, int32_t MinLimit, float InterpolationSpeed, int32_t& out_DeltaViewAxis);
	static int32_t ClampRotAxisFromRange(int32_t Current, int32_t Min, int32_t Max);
	static int32_t ClampRotAxisFromBase(int32_t Current, int32_t Center, int32_t MaxDelta);
	static void ClampRotAxis(int32_t ViewAxis, int32_t MaxLimit, int32_t MinLimit, int32_t& out_DeltaViewAxis);
	static float RSize(struct FRotator R);
	static float RDiff(struct FRotator A, struct FRotator B);
	static int32_t NormalizeRotAxis(int32_t Angle);
	static struct FRotator RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed);
	static struct FRotator RTransform(struct FRotator R, struct FRotator RBasis);
	static struct FRotator RLerp(struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath);
	static struct FRotator Normalize(struct FRotator Rot);
	static struct FRotator OrthoRotation(struct FVector X, struct FVector Y, struct FVector Z);
	static struct FRotator RotRand(unsigned long bRoll);
	static struct FVector GetRotatorAxis(struct FRotator A, int32_t Axis);
	static void GetUnAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z);
	static void GetAxes(struct FRotator A, struct FVector& X, struct FVector& Y, struct FVector& Z);
	static bool ClockwiseFrom_IntInt(int32_t A, int32_t B);
	static struct FRotator SubtractEqual_RotatorRotator(struct FRotator B, struct FRotator& A);
	static struct FRotator AddEqual_RotatorRotator(struct FRotator B, struct FRotator& A);
	static struct FRotator Subtract_RotatorRotator(struct FRotator A, struct FRotator B);
	static struct FRotator Add_RotatorRotator(struct FRotator A, struct FRotator B);
	static struct FRotator DivideEqual_RotatorFloat(float B, struct FRotator& A);
	static struct FRotator MultiplyEqual_RotatorFloat(float B, struct FRotator& A);
	static struct FRotator Divide_RotatorFloat(struct FRotator A, float B);
	static struct FRotator Multiply_FloatRotator(float A, struct FRotator B);
	static struct FRotator Multiply_RotatorFloat(struct FRotator A, float B);
	static bool NotEqual_RotatorRotator(struct FRotator A, struct FRotator B);
	static bool EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B);
	bool InCylinder(struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ);
	static float NoZDot(struct FVector A, struct FVector B);
	static struct FVector ClampLength(struct FVector V, float MaxLength);
	static struct FVector VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed);
	static bool IsZero(struct FVector A);
	static struct FVector ProjectOnTo(struct FVector X, struct FVector Y);
	static struct FVector MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal);
	static struct FVector VRandCone2(struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	static struct FVector VRandCone(struct FVector Dir, float ConeHalfAngleRadians);
	static struct FVector VRand();
	static struct FVector VLerp(struct FVector A, struct FVector B, float Alpha);
	static struct FVector Normal2D(struct FVector A);
	static struct FVector Normal(struct FVector A);
	static float VSizeSq2D(struct FVector A);
	static float VSizeSq(struct FVector A);
	static float VSize2D(struct FVector A);
	static float VSize(struct FVector A);
	static struct FVector SubtractEqual_VectorVector(struct FVector B, struct FVector& A);
	static struct FVector AddEqual_VectorVector(struct FVector B, struct FVector& A);
	static struct FVector DivideEqual_VectorFloat(float B, struct FVector& A);
	static struct FVector MultiplyEqual_VectorVector(struct FVector B, struct FVector& A);
	static struct FVector MultiplyEqual_VectorFloat(float B, struct FVector& A);
	static struct FVector Cross_VectorVector(struct FVector A, struct FVector B);
	static float Dot_VectorVector(struct FVector A, struct FVector B);
	static bool NotEqual_VectorVector(struct FVector A, struct FVector B);
	static bool EqualEqual_VectorVector(struct FVector A, struct FVector B);
	static struct FVector GreaterGreater_VectorRotator(struct FVector A, struct FRotator B);
	static struct FVector LessLess_VectorRotator(struct FVector A, struct FRotator B);
	static struct FVector Subtract_VectorVector(struct FVector A, struct FVector B);
	static struct FVector Add_VectorVector(struct FVector A, struct FVector B);
	static struct FVector Divide_VectorFloat(struct FVector A, float B);
	static struct FVector Multiply_VectorVector(struct FVector A, struct FVector B);
	static struct FVector Multiply_FloatVector(float A, struct FVector B);
	static struct FVector Multiply_VectorFloat(struct FVector A, float B);
	static struct FVector Subtract_PreVector(struct FVector A);
	static float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	static float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	static float FPctByRange(float Value, float InMin, float InMax);
	static float RandRange(float InMin, float InMax);
	static float FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	static float FInterpEaseOut(float A, float B, float Alpha, float Exp);
	static float FInterpEaseIn(float A, float B, float Alpha, float Exp);
	static float FCubicInterp(float P0, float T0, float P1, float T1, float A);
	static float F64_F64toF(struct FDouble Float64Num);
	static int32_t F64_F64toI(struct FDouble Float64Num, float MulNum);
	static class FString F64_F64toA(struct FDouble Float64Num);
	static struct FDouble F64_AtoF64(class FString Float64String);
	static struct FDouble F64_FtoF64(float Num);
	static struct FDouble F64_ItoF64(int32_t Num);
	static int32_t FCeilD(struct FDouble A);
	static int32_t FFloorD(struct FDouble A);
	static int32_t RoundD(struct FDouble A);
	static struct FDouble LerpD(struct FDouble A, struct FDouble B, struct FDouble Alpha);
	static struct FDouble FClampD(struct FDouble V, struct FDouble A, struct FDouble B);
	static struct FDouble FMaxD(struct FDouble A, struct FDouble B);
	static struct FDouble FMinD(struct FDouble A, struct FDouble B);
	static struct FDouble FRandD();
	static struct FDouble SquareD(struct FDouble A);
	static struct FDouble SqrtD(struct FDouble A);
	static struct FDouble LogeD(struct FDouble A);
	static struct FDouble ExpD(struct FDouble A);
	static struct FDouble Atan2D(struct FDouble A, struct FDouble B);
	static struct FDouble AtanD(struct FDouble A);
	static struct FDouble TanD(struct FDouble A);
	static struct FDouble AcosD(struct FDouble A);
	static struct FDouble CosD(struct FDouble A);
	static struct FDouble AsinD(struct FDouble A);
	static struct FDouble SinD(struct FDouble A);
	static struct FDouble AbsD(struct FDouble A);
	static struct FDouble SubtractEqual_DoubleDouble(struct FDouble B, struct FDouble& A);
	static struct FDouble AddEqual_DoubleDouble(struct FDouble B, struct FDouble& A);
	static struct FDouble DivideEqual_DoubleDouble(struct FDouble B, struct FDouble& A);
	static struct FDouble MultiplyEqual_DoubleDouble(struct FDouble B, struct FDouble& A);
	static bool NotEqual_DoubleDouble(struct FDouble A, struct FDouble B);
	static bool ComplementEqual_DoubleDouble(struct FDouble A, struct FDouble B);
	static bool EqualEqual_DoubleDouble(struct FDouble A, struct FDouble B);
	static bool GreaterEqual_DoubleDouble(struct FDouble A, struct FDouble B);
	static bool LessEqual_DoubleDouble(struct FDouble A, struct FDouble B);
	static bool Greater_DoubleDouble(struct FDouble A, struct FDouble B);
	static bool Less_DoubleDouble(struct FDouble A, struct FDouble B);
	static struct FDouble Subtract_DoubleDouble(struct FDouble A, struct FDouble B);
	static struct FDouble Add_DoubleDouble(struct FDouble A, struct FDouble B);
	static struct FDouble Percent_DoubleDouble(struct FDouble A, struct FDouble B);
	static struct FDouble Divide_DoubleDouble(struct FDouble A, struct FDouble B);
	static struct FDouble Multiply_DoubleDouble(struct FDouble A, struct FDouble B);
	static struct FDouble MultiplyMultiply_DoubleDouble(struct FDouble Base, struct FDouble Exp);
	static struct FDouble Subtract_PreDouble(struct FDouble A);
	static int32_t FCeil(float A);
	static int32_t FFloor(float A);
	static int32_t Round(float A);
	static float Lerp(float A, float B, float Alpha);
	static float FClamp(float V, float A, float B);
	static float FMax(float A, float B);
	static float FMin(float A, float B);
	static float FRand();
	static float Square(float A);
	static float Sqrt(float A);
	static float Loge(float A);
	static float Exp(float A);
	static float Atan2(float A, float B);
	static float Atan(float A);
	static float Tan(float A);
	static float Acos(float A);
	static float Cos(float A);
	static float Asin(float A);
	static float Sin(float A);
	static float Abs(float A);
	static float SubtractEqual_FloatFloat(float B, float& A);
	static float AddEqual_FloatFloat(float B, float& A);
	static float DivideEqual_FloatFloat(float B, float& A);
	static float MultiplyEqual_FloatFloat(float B, float& A);
	static bool NotEqual_FloatFloat(float A, float B);
	static bool ComplementEqual_FloatFloat(float A, float B);
	static bool EqualEqual_FloatFloat(float A, float B);
	static bool GreaterEqual_FloatFloat(float A, float B);
	static bool LessEqual_FloatFloat(float A, float B);
	static bool Greater_FloatFloat(float A, float B);
	static bool Less_FloatFloat(float A, float B);
	static float Subtract_FloatFloat(float A, float B);
	static float Add_FloatFloat(float A, float B);
	static float Percent_FloatFloat(float A, float B);
	static float Divide_FloatFloat(float A, float B);
	static float Multiply_FloatFloat(float A, float B);
	static float MultiplyMultiply_FloatFloat(float Base, float Exp);
	static float Subtract_PreFloat(float A);
	static struct FDouble SI64_SI64toF64(struct FSQWord SInt64Num);
	static float SI64_SI64toF(struct FSQWord SInt64Num);
	static int32_t SI64_SI64toI(struct FSQWord SInt64Num, float MulNum);
	static class FString SI64_SI64toA(struct FSQWord SInt64Num);
	static struct FSQWord SI64_AtoSI64(class FString SInt64String);
	static struct FSQWord SI64_F64toSI64(struct FDouble Num);
	static struct FSQWord SI64_FtoSI64(float Num);
	static struct FSQWord SI64_ItoSI64(int32_t Num);
	static class FString ToHexSQW(struct FSQWord A);
	static struct FSQWord ClampSQW(struct FSQWord V, struct FSQWord A, struct FSQWord B);
	static struct FSQWord MaxSQW(struct FSQWord A, struct FSQWord B);
	static struct FSQWord MinSQW(struct FSQWord A, struct FSQWord B);
	static struct FSQWord RandSQW(struct FSQWord Max);
	static struct FSQWord SubtractSubtract_SQWord(struct FSQWord& A);
	static struct FSQWord AddAdd_SQWord(struct FSQWord& A);
	static struct FSQWord SubtractSubtract_PreSQWord(struct FSQWord& A);
	static struct FSQWord AddAdd_PreSQWord(struct FSQWord& A);
	static struct FSQWord SubtractEqual_SQWordSQWord(struct FSQWord B, struct FSQWord& A);
	static struct FSQWord AddEqual_SQWordSQWord(struct FSQWord B, struct FSQWord& A);
	static struct FSQWord DivideEqual_SQWordDouble(struct FDouble B, struct FSQWord& A);
	static struct FSQWord DivideEqual_SQWordFloat(float B, struct FSQWord& A);
	static struct FSQWord MultiplyEqual_SQWordDouble(struct FDouble B, struct FSQWord& A);
	static struct FSQWord MultiplyEqual_SQWordFloat(float B, struct FSQWord& A);
	static struct FSQWord Or_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord Xor_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord And_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static bool NotEqual_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static bool EqualEqual_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static bool GreaterEqual_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static bool LessEqual_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static bool Greater_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static bool Less_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord GreaterGreaterGreater_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord GreaterGreater_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord LessLess_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord Subtract_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord Add_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord Percent_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord Divide_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord Multiply_SQWordSQWord(struct FSQWord A, struct FSQWord B);
	static struct FSQWord Subtract_PreSQWord(struct FSQWord A);
	static struct FSQWord Complement_PreSQWord(struct FSQWord A);
	static uint64_t Clamp64(uint64_t V, uint64_t A, uint64_t B);
	static uint64_t Max64(uint64_t A, uint64_t B);
	static uint64_t Min64(uint64_t A, uint64_t B);
	static uint64_t Rand64(uint64_t Max);
	static uint64_t SubtractSubtract_Int64(uint64_t& A);
	static uint64_t AddAdd_Int64(uint64_t& A);
	static uint64_t SubtractSubtract_PreInt64(uint64_t& A);
	static uint64_t AddAdd_PreInt64(uint64_t& A);
	static uint64_t SubtractEqual_Int64Int64(uint64_t B, uint64_t& A);
	static uint64_t AddEqual_Int64Int64(uint64_t B, uint64_t& A);
	static uint64_t DivideEqual_Int64Double(struct FDouble B, uint64_t& A);
	static uint64_t DivideEqual_Int64Float(float B, uint64_t& A);
	static uint64_t MultiplyEqual_Int64Double(struct FDouble B, uint64_t& A);
	static uint64_t MultiplyEqual_Int64Float(float B, uint64_t& A);
	static uint64_t Or_Int64Int64(uint64_t A, uint64_t B);
	static uint64_t Xor_Int64Int64(uint64_t A, uint64_t B);
	static uint64_t And_Int64Int64(uint64_t A, uint64_t B);
	static bool NotEqual_Int64Int64(uint64_t A, uint64_t B);
	static bool EqualEqual_Int64Int64(uint64_t A, uint64_t B);
	static bool GreaterEqual_Int64Int64(uint64_t A, uint64_t B);
	static bool LessEqual_Int64Int64(uint64_t A, uint64_t B);
	static bool Greater_Int64Int64(uint64_t A, uint64_t B);
	static bool Less_Int64Int64(uint64_t A, uint64_t B);
	static uint64_t GreaterGreaterGreater_Int64Int(uint64_t A, int32_t B);
	static uint64_t GreaterGreater_Int64Int(uint64_t A, int32_t B);
	static uint64_t LessLess_Int64Int(uint64_t A, int32_t B);
	static uint64_t Subtract_Int64Int64(uint64_t A, uint64_t B);
	static uint64_t Add_Int64Int64(uint64_t A, uint64_t B);
	static uint64_t Percent_Int64Int64(uint64_t A, uint64_t B);
	static uint64_t Divide_Int64Int64(uint64_t A, uint64_t B);
	static uint64_t Multiply_Int64Int64(uint64_t A, uint64_t B);
	static uint64_t Subtract_PreInt64(uint64_t A);
	static uint64_t Complement_PreInt64(uint64_t A);
	static class FString ToHex(int32_t A);
	static int32_t Clamp(int32_t V, int32_t A, int32_t B);
	static int32_t Max(int32_t A, int32_t B);
	static int32_t Min(int32_t A, int32_t B);
	static int32_t Rand(int32_t Max);
	static int32_t SubtractSubtract_Int(int32_t& A);
	static int32_t AddAdd_Int(int32_t& A);
	static int32_t SubtractSubtract_PreInt(int32_t& A);
	static int32_t AddAdd_PreInt(int32_t& A);
	static int32_t SubtractEqual_IntInt(int32_t B, int32_t& A);
	static int32_t AddEqual_IntInt(int32_t B, int32_t& A);
	static int32_t DivideEqual_IntFloat(float B, int32_t& A);
	static int32_t MultiplyEqual_IntFloat(float B, int32_t& A);
	static int32_t Or_IntInt(int32_t A, int32_t B);
	static int32_t Xor_IntInt(int32_t A, int32_t B);
	static int32_t And_IntInt(int32_t A, int32_t B);
	static bool NotEqual_IntInt(int32_t A, int32_t B);
	static bool EqualEqual_IntInt(int32_t A, int32_t B);
	static bool GreaterEqual_IntInt(int32_t A, int32_t B);
	static bool LessEqual_IntInt(int32_t A, int32_t B);
	static bool Greater_IntInt(int32_t A, int32_t B);
	static bool Less_IntInt(int32_t A, int32_t B);
	static int32_t GreaterGreaterGreater_IntInt(int32_t A, int32_t B);
	static int32_t GreaterGreater_IntInt(int32_t A, int32_t B);
	static int32_t LessLess_IntInt(int32_t A, int32_t B);
	static int32_t Subtract_IntInt(int32_t A, int32_t B);
	static int32_t Add_IntInt(int32_t A, int32_t B);
	static int32_t Percent_IntInt(int32_t A, int32_t B);
	static int32_t Divide_IntInt(int32_t A, int32_t B);
	static int32_t Multiply_IntInt(int32_t A, int32_t B);
	static int32_t Subtract_PreInt(int32_t A);
	static int32_t Complement_PreInt(int32_t A);
	static uint8_t SubtractSubtract_Byte(uint8_t& A);
	static uint8_t AddAdd_Byte(uint8_t& A);
	static uint8_t SubtractSubtract_PreByte(uint8_t& A);
	static uint8_t AddAdd_PreByte(uint8_t& A);
	static uint8_t SubtractEqual_ByteByte(uint8_t B, uint8_t& A);
	static uint8_t AddEqual_ByteByte(uint8_t B, uint8_t& A);
	static uint8_t DivideEqual_ByteByte(uint8_t B, uint8_t& A);
	static uint8_t MultiplyEqual_ByteFloat(float B, uint8_t& A);
	static uint8_t MultiplyEqual_ByteByte(uint8_t B, uint8_t& A);
	static bool OrOr_BoolBool(unsigned long A, unsigned long B);
	static bool XorXor_BoolBool(unsigned long A, unsigned long B);
	static bool AndAnd_BoolBool(unsigned long A, unsigned long B);
	static bool NotEqual_BoolBool(unsigned long A, unsigned long B);
	static bool EqualEqual_BoolBool(unsigned long A, unsigned long B);
	static bool Not_PreBool(unsigned long A);
	void ProcessEvent(class UFunction* uFunction, void* uParams, void* uResult);
};

// Class Core.TextBuffer
// 0x002C (0x0060 - 0x008C)
class UTextBuffer : public UObject
{
public:
	uint8_t                                           UnknownData00[0x2C];                           // 0x0060 (0x002C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TextBuffer");
		}

		return uClassPointer;
	};

};

// Class Core.Subsystem
// 0x0008 (0x0060 - 0x0068)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                 // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Subsystem");
		}

		return uClassPointer;
	};

};

// Class Core.System
// 0x00E4 (0x0068 - 0x014C)
class USystem : public USubsystem
{
public:
	int32_t                                            StaleCacheDays;                                // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxStaleCacheSize;                             // 0x006C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxOverallCacheSize;                           // 0x0070 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            PackageSizeSoftLimit;                          // 0x0074 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              AsyncIOBandwidthLimit;                         // 0x0078 (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      SavePath;                                      // 0x007C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      CachePath;                                     // 0x008C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      CacheExt;                                      // 0x009C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              Paths;                                         // 0x00AC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              SeekFreePCPaths;                               // 0x00BC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              ScriptPaths;                                   // 0x00CC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              FRScriptPaths;                                 // 0x00DC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              CutdownPaths;                                  // 0x00EC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FName>                               Suppress;                                      // 0x00FC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              Extensions;                                    // 0x010C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              SeekFreePCExtensions;                          // 0x011C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class FString>                              LocalizationPaths;                             // 0x012C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      TextureFileCacheExtension;                     // 0x013C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.System");
		}

		return uClassPointer;
	};

};

// Class Core.PackageMap
// 0x00A0 (0x0060 - 0x0100)
class UPackageMap : public UObject
{
public:
	uint8_t                                           UnknownData00[0xA0];                           // 0x0060 (0x00A0) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.PackageMap");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectSerializer
// 0x0010 (0x0060 - 0x0070)
class UObjectSerializer : public UObject
{
public:
	uint8_t                                           UnknownData00[0x10];                           // 0x0060 (0x0010) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectSerializer");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectRedirector
// 0x0008 (0x0060 - 0x0068)
class UObjectRedirector : public UObject
{
public:
	uint8_t                                           UnknownData00[0x8];                            // 0x0060 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectRedirector");
		}

		return uClassPointer;
	};

};

// Class Core.MetaData
// 0x0048 (0x0060 - 0x00A8)
class UMetaData : public UObject
{
public:
	uint8_t                                           UnknownData00[0x48];                           // 0x0060 (0x0048) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.MetaData");
		}

		return uClassPointer;
	};

};

// Class Core.Linker
// 0x0168 (0x0060 - 0x01C8)
class ULinker : public UObject
{
public:
	uint8_t                                           UnknownData00[0x168];                          // 0x0060 (0x0168) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Linker");
		}

		return uClassPointer;
	};

};

// Class Core.LinkerSave
// 0x00B4 (0x01C8 - 0x027C)
class ULinkerSave : public ULinker
{
public:
	uint8_t                                           UnknownData00[0xB4];                           // 0x01C8 (0x00B4) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.LinkerSave");
		}

		return uClassPointer;
	};

};

// Class Core.LinkerLoad
// 0x0604 (0x01C8 - 0x07CC)
class ULinkerLoad : public ULinker
{
public:
	uint8_t                                           UnknownData00[0x604];                          // 0x01C8 (0x0604) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.LinkerLoad");
		}

		return uClassPointer;
	};

};

// Class Core.Interface
// 0x0000 (0x0060 - 0x0060)
class UInterface : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Interface");
		}

		return uClassPointer;
	};

};

// Class Core.Field
// 0x0008 (0x0060 - 0x0068)
class UField : public UObject
{
public:
	class UField* Next; // 0x0060 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Field");
		}

		return uClassPointer;
	};

};

// Class Core.Struct
// 0x0068 (0x0068 - 0x00D0)
class UStruct : public UField
{
public:
	uint8_t UnknownData00[0x10]; // 0x0068 (0x0010) DYNAMIC FIELD PADDING
	class UField* SuperField; // 0x0078 (0x0008)
	class UField* Children; // 0x0080 (0x0008)
	unsigned long PropertySize; // 0x0088 (0x0004)
	uint8_t UnknownData01[0x44]; // 0x008C (0x0044) DYNAMIC FIELD PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Struct");
		}

		return uClassPointer;
	};

};

// Class Core.ScriptStruct
// 0x0024 (0x00D0 - 0x00F4)
class UScriptStruct : public UStruct
{
public:
	uint8_t                                           UnknownData00[0x24];                           // 0x00D0 (0x0024) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ScriptStruct");
		}

		return uClassPointer;
	};

};

// Class Core.Function
// 0x0028 (0x00D0 - 0x00F8)
class UFunction : public UStruct
{
public:
	uint64_t FunctionFlags; // 0x00D0 (0x0004)
	uint16_t iNative; // 0x00D4 (0x0002)
	uint8_t UnknownData00[0x22]; // 0x00D6 (0x0022) DYNAMIC FIELD PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Function");
		}

		return uClassPointer;
	};

	static UFunction* FindFunction(const std::string& functionFullName);
};

// Class Core.Property
// 0x0048 (0x0068 - 0x00B0)
class UProperty : public UField
{
public:
	unsigned long ArrayDim; // 0x0068 (0x0004)
	unsigned long ElementSize; // 0x006C (0x0004)
	uint64_t PropertyFlags; // 0x0070 (0x0004)
	uint8_t UnknownData00[0x20]; // 0x0074 (0x0020) DYNAMIC FIELD PADDING
	unsigned long Offset; // 0x0094 (0x0004)
	uint8_t UnknownData01[0x18]; // 0x0098 (0x0018) DYNAMIC FIELD PADDING

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Property");
		}

		return uClassPointer;
	};

};

// Class Core.StructProperty
// 0x0008 (0x00B0 - 0x00B8)
class UStructProperty : public UProperty
{
public:
	class UStruct* Struct; // 0x00B0 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StructProperty");
		}

		return uClassPointer;
	};

};

// Class Core.StrProperty
// 0x0000 (0x00B0 - 0x00B0)
class UStrProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.StrProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ObjectProperty
// 0x0008 (0x00B0 - 0x00B8)
class UObjectProperty : public UProperty
{
public:
	uint8_t UnknownData00[0x50]; // 0x0060 (0x0050) DYNAMIC FIELD PADDING
	class UClass* PropertyClass; // 0x00B0 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ObjectProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ComponentProperty
// 0x0000 (0x00B8 - 0x00B8)
class UComponentProperty : public UObjectProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ComponentProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ClassProperty
// 0x0008 (0x00B8 - 0x00C0)
class UClassProperty : public UObjectProperty
{
public:
	uint8_t                                           UnknownData00[0x8];                            // 0x00B8 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ClassProperty");
		}

		return uClassPointer;
	};

};

// Class Core.NameProperty
// 0x0000 (0x00B0 - 0x00B0)
class UNameProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.NameProperty");
		}

		return uClassPointer;
	};

};

// Class Core.MapProperty
// 0x0010 (0x00B0 - 0x00C0)
class UMapProperty : public UProperty
{
public:
	class UProperty* Key; // 0x00B0 (0x0008)
	class UProperty* Value; // 0x00B8 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.MapProperty");
		}

		return uClassPointer;
	};

};

// Class Core.IntProperty
// 0x0000 (0x00B0 - 0x00B0)
class UIntProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.IntProperty");
		}

		return uClassPointer;
	};

};

// Class Core.InterfaceProperty
// 0x0008 (0x00B0 - 0x00B8)
class UInterfaceProperty : public UProperty
{
public:
	class UClass* InterfaceClass; // 0x00B0 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.InterfaceProperty");
		}

		return uClassPointer;
	};

};

// Class Core.Int64Property
// 0x0000 (0x00B0 - 0x00B0)
class UInt64Property : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Int64Property");
		}

		return uClassPointer;
	};

};

// Class Core.FloatProperty
// 0x0000 (0x00B0 - 0x00B0)
class UFloatProperty : public UProperty
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.FloatProperty");
		}

		return uClassPointer;
	};

};

// Class Core.DelegateProperty
// 0x0010 (0x00B0 - 0x00C0)
class UDelegateProperty : public UProperty
{
public:
	class UFuncton* Function; // 0x00B0 (0x0008)
	struct FName Name; // 0x00B8 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DelegateProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ByteProperty
// 0x0008 (0x00B0 - 0x00B8)
class UByteProperty : public UProperty
{
public:
	class UEnum* Enum; // 0x00B0 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ByteProperty");
		}

		return uClassPointer;
	};

};

// Class Core.BoolProperty
// 0x0004 (0x00B0 - 0x00B4)
class UBoolProperty : public UProperty
{
public:
	uint64_t BitMask; // 0x00B0 (0x0004)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.BoolProperty");
		}

		return uClassPointer;
	};

};

// Class Core.ArrayProperty
// 0x0008 (0x00B0 - 0x00B8)
class UArrayProperty : public UProperty
{
public:
	class UProperty* Inner; // 0x00B0 (0x0008)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.ArrayProperty");
		}

		return uClassPointer;
	};

};

// Class Core.Enum
// 0x0010 (0x0068 - 0x0078)
class UEnum : public UField
{
public:
	TArray<struct FName> Names; // 0x0068 (0x0010)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Enum");
		}

		return uClassPointer;
	};

};

// Class Core.Const
// 0x0010 (0x0068 - 0x0078)
class UConst : public UField
{
public:
	class FString Value; // 0x0068 (0x0010)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Const");
		}

		return uClassPointer;
	};

};

// Class Core.Factory
// 0x0048 (0x0060 - 0x00A8)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                // 0x0060 (0x0008) [0x0000000000000000]               
	class UClass*                                      ContextClass;                                  // 0x0068 (0x0008) [0x0000000000000000]               
	class FString                                      Description;                                   // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              Formats;                                       // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bCreateNew : 1;                                // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEditAfterNew : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEditorImport : 1;                             // 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bText : 1;                                     // 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            AutoPriority;                                  // 0x0094 (0x0004) [0x0000000000000000]               
	TArray<class FString>                              ValidGameNames;                                // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Factory");
		}

		return uClassPointer;
	};

};

// Class Core.TextBufferFactory
// 0x0000 (0x00A8 - 0x00A8)
class UTextBufferFactory : public UFactory
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.TextBufferFactory");
		}

		return uClassPointer;
	};

};

// Class Core.Exporter
// 0x0034 (0x0060 - 0x0094)
class UExporter : public UObject
{
public:
	uint8_t                                           UnknownData00[0x8];                            // 0x0060 (0x0008) MISSED OFFSET
	TArray<class FString>                              FormatExtension;                               // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class FString>                              FormatDescription;                             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                           UnknownData01[0xC];                            // 0x0088 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Exporter");
		}

		return uClassPointer;
	};

};

// Class Core.Component
// 0x0010 (0x0060 - 0x0070)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                            // 0x0060 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FName                                       TemplateName;                                  // 0x0068 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Component");
		}

		return uClassPointer;
	};

};

// Class Core.DistributionVector
// 0x000C (0x0070 - 0x007C)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                     // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	unsigned long                                      bCanBeBaked : 1;                               // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bIsDirty : 1;                                  // 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DistributionVector");
		}

		return uClassPointer;
	};

	struct FVector GetVectorValue(float F, int32_t LastExtreme);
};

// Class Core.DistributionFloat
// 0x000C (0x0070 - 0x007C)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                     // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	unsigned long                                      bCanBeBaked : 1;                               // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bIsDirty : 1;                                  // 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.DistributionFloat");
		}

		return uClassPointer;
	};

	float GetFloatValue(float F);
};

// Class Core.Commandlet
// 0x0054 (0x0060 - 0x00B4)
class UCommandlet : public UObject
{
public:
	class FString                                      HelpDescription;                               // 0x0060 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      HelpUsage;                                     // 0x0070 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      HelpWebLink;                                   // 0x0080 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<class FString>                              HelpParamNames;                                // 0x0090 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<class FString>                              HelpParamDescriptions;                         // 0x00A0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	unsigned long                                      IsServer : 1;                                  // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                  // 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                  // 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                              // 0x00B0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                            // 0x00B0 (0x0004) [0x0000000000000000] [0x00000010] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Commandlet");
		}

		return uClassPointer;
	};

	int32_t eventMain(class FString Params);
};

// Class Core.HelpCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UHelpCommandlet : public UCommandlet
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.HelpCommandlet");
		}

		return uClassPointer;
	};

	int32_t eventMain(class FString Params);
};

// Class Core.State
// 0x009C (0x00D0 - 0x016C)
class UState : public UStruct
{
public:
	uint8_t                                           UnknownData00[0x9C];                           // 0x00D0 (0x009C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.State");
		}

		return uClassPointer;
	};

};

// Class Core.Package
// 0x00E8 (0x0060 - 0x0148)
class UPackage : public UObject
{
public:
	uint8_t                                           UnknownData00[0xE8];                           // 0x0060 (0x00E8) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Package");
		}

		return uClassPointer;
	};

};

// Class Core.Class
// 0x0194 (0x016C - 0x0300)
class UClass : public UState
{
public:
	uint8_t                                           UnknownData00[0x194];                          // 0x016C (0x0194) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Core.Class");
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
