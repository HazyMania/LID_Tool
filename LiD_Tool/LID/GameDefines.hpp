/*
#############################################################################################
# LET IT DIE (6.9.420.1337) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: GameDefines.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK & LiD by Ant
# Links: www.github.com/itsbrank/UE3SDKGenerator, www.twitter.com/itsbrank
#############################################################################################
*/
#pragma once
#include <Windows.h>
#include <algorithm>
#include <locale>
#include <stdlib.h>
#include <xlocale>
#include <ctype.h>
#include <chrono>
#include <thread>
#include <vector>
#include <map>

/*
# ========================================================================================= #
# Flags
# ========================================================================================= #
*/

// Function Flags
// https://docs.unrealengine.com/en-US/API/Runtime/CoreUObject/UObject/EFunctionFlags/index.html
enum EFunctionFlags
{
	FUNC_None =                             0x00000000,
	FUNC_Final =                            0x00000001,
	FUNC_RequiredAPI =                      0x00000002,
	FUNC_BlueprintAuthorityOnly =           0x00000004,
	FUNC_BlueprintCosmetic =                0x00000008,
	FUNC_Net =                              0x00000040,
	FUNC_NetReliable =                      0x00000080,
	FUNC_NetRequest =                       0x00000100,
	FUNC_Exec =                             0x00000200,
	FUNC_Native =                           0x00000400,
	FUNC_Event =                            0x00000800,
	FUNC_NetResponse =                      0x00001000,
	FUNC_Static =                           0x00002000,
	FUNC_NetMulticast =                     0x00004000,
	FUNC_UbergraphFunction =                0x00008000,
	FUNC_MulticastDelegate =                0x00010000,
	FUNC_Public =                           0x00020000,
	FUNC_Private =                          0x00040000,
	FUNC_Protected =                        0x00080000,
	FUNC_Delegate =                         0x00100000,
	FUNC_NetServer =                        0x00200000,
	FUNC_HasOutParms =                      0x00400000,
	FUNC_HasDefaults =                      0x00800000,
	FUNC_NetClient =                        0x01000000,
	FUNC_DLLImport =                        0x02000000,
	FUNC_BlueprintCallable =                0x04000000,
	FUNC_BlueprintEvent =                   0x08000000,
	FUNC_BlueprintPure =                    0x10000000,
	FUNC_EditorOnly =                       0x20000000,
	FUNC_Const =                            0x40000000,
	FUNC_NetValidate =                      0x80000000,
	FUNC_AllFlags =                         0xFFFFFFFF
};

// Proprerty Flags
// https://docs.unrealengine.com/en-US/API/Runtime/CoreUObject/UObject/EPropertyFlags/index.html (The ones in this link are UE4 specific, so I had to modify accordingly here.)
enum EPropertyFlags
{
	CPF_Edit =								0x0000000000000001,	// Property is user-settable in the editor.
	CPF_Const =								0x0000000000000002,	// Actor's property always matches class's default actor property.
	CPF_Input =							    0x0000000000000004,	// Variable is writable by the input system.
	CPF_ExportObject =						0x0000000000000008,	// Object can be exported with actor.
	CPF_OptionalParm =						0x0000000000000010,	// Optional parameter (if CPF_Param is set).
	CPF_Net =								0x0000000000000020,	// Property is relevant to network replication.
	CPF_EditConstArray =					0x0000000000000040,	// Prevent adding/removing of items from dynamic a array in the editor.
	CPF_Parm =								0x0000000000000080,	// Function/When call parameter.
	CPF_OutParm =							0x0000000000000100,	// Value is copied out after function call.
	CPF_SkipParm =							0x0000000000000200,	// Property is a short-circuitable evaluation function parm.
	CPF_ReturnParm =						0x0000000000000400,	// Return value.
	CPF_CoerceParm =						0x0000000000000800,	// Coerce args into this function parameter.
	CPF_Native =							0x0000000000001000,	// Property is native: C++ code is responsible for serializing it.
	CPF_Transient =							0x0000000000002000,	// Property is transient: shouldn't be saved, zero-filled at load time.
	CPF_Config =							0x0000000000004000,	// Property should be loaded/saved as permanent profile.
	CPF_Localized =							0x0000000000008000,	// Property should be loaded as localizable text.
	CPF_Travel =							0x0000000000010000,	// Property travels across levels/servers.
	CPF_EditConst =							0x0000000000020000,	// Property is uneditable in the editor.
	CPF_GlobalConfig =						0x0000000000040000,	// Load config from base class, not subclass.
	CPF_Component =							0x0000000000080000,	// Property containts component references.
	CPF_NeedCtorLink =						0x0000000000400000,	// Fields need construction/destruction.
	CPF_NoExport =							0x0000000000800000,	// Property should not be exported to the native class header file.
	CPF_NoClear =							0x0000000002000000,	// Hide clear (and browse) button.
	CPF_EditInline =						0x0000000004000000,	// Edit this object reference inline.
	CPF_EdFindable =						0x0000000008000000,	// References are set by clicking on actors in the editor viewports.
	CPF_EditInlineUse =						0x0000000010000000,	// EditInline with Use button.
	CPF_Deprecated =						0x0000000020000000,	// Property is deprecated.  Read it from an archive, but don't save it.
	CPF_EditInlineNotify =					0x0000000040000000,	// EditInline, notify outer object on editor change.
	CPF_RepNotify =							0x0000000100000000,	// Notify actors when a property is replicated
	CPF_Interp =							0x0000000200000000,	// interpolatable property for use with matinee
	CPF_NonTransactional =					0x0000000400000000,	// Property isn't transacted
	CPF_EditorOnly =						0x0000000800000000,	// Property should only be loaded in the editor.
	CPF_NoDestructor =						0x0000001000000000,	// No destructor.
	CPF_AutoWeak =							0x0000004000000000,	// CPF_ = 0x0000002000000000, ///<.
	CPF_ContainsInstancedReference =        0x0000008000000000,	// Property contains component refuerences.
	CPF_AssetRegistrySearchable =           0x0000010000000000,	// Asset instances will add properties with this flag to the asset registry automatically
	CPF_SimpleDisplay =						0x0000020000000000,	// The property is visible by default in the editor details view.
	CPF_AdvancedDisplay =					0x0000040000000000,	// The property is advanced and not visible by default in the editor details view.
	CPF_Protected =							0x0000080000000000,	// Property is protected from the perspective of scrip
	CPF_BlueprintCallable =					0x0000100000000000,	// MC Delegates only. Property should be exposed for calling in blueprint code.
	CPF_BlueprintAuthorityOnly =			0x0000200000000000,	// MC Delegates only. This delegate accepts (only in blueprint) only events with BlueprintAuthorityOnly.
	CPF_TextExportTransient =				0x0000400000000000,	// Property shouldn't be exported to text format (e.g. copy/paste)
	CPF_NonPIEDuplicateTransient =			0x0000800000000000,	// Property should only be copied in PIE.
	CPF_ExposeOnSpawn =						0x0001000000000000,	// Property is exposed on spawn.
	CPF_PersistentInstance =				0x0002000000000000,	// A object referenced by the property is duplicated like a component. (Each actor should have an own instance.)
	CPF_UObjectWrapper =					0x0004000000000000,	// Property was parsed as a wrapper class like TSubclassOf , FScriptInterface etc., rather than a USomething*.
	CPF_HasGetValueTypeHash =				0x0008000000000000,	// This property can generate a meaningful hash value.
	CPF_NativeAccessSpecifierPublic =		0x0010000000000000,	// Public native access specifier.
	CPF_NativeAccessSpecifierProtected =	0x0020000000000000,	// Protected native access specifier.
	CPF_NativeAccessSpecifierPrivate =		0x0040000000000000,	// Private native access specifier.
	CPF_SkipSerialization =					0x0080000000000000	// Property shouldn't be serialized, can still be exported to text.
};

// https://docs.unrealengine.com/4.26/en-US/API/Runtime/CoreUObject/UObject/EObjectFlags/
// Object Flags
enum EObjectFlags
{
	RF_NoFlags = 0x00000000,
	RF_Public = 0x00000001,
	RF_Standalone = 0x00000002,
	RF_MarkAsNative = 0x00000004,
	RF_Transactional = 0x00000008,
	RF_ClassDefaultObject = 0x00000010,
	RF_ArchetypeObject = 0x00000020,
	RF_Transient = 0x00000040,
	RF_MarkAsRootSet = 0x00000080,
	RF_TagGarbageTemp = 0x00000100,
	RF_NeedInitialization = 0x00000200,
	RF_NeedLoad = 0x00000400,
	RF_KeepForCooker = 0x00000800,
	RF_NeedPostLoad = 0x00001000,
	RF_NeedPostLoadSubobjects = 0x00002000,
	RF_NewerVersionExists = 0x00004000,
	RF_BeginDestroyed = 0x00008000,
	RF_FinishDestroyed = 0x00010000,
	RF_BeingRegenerated = 0x00020000,
	RF_DefaultSubObject = 0x00040000,
	RF_WasLoaded = 0x00080000,
	RF_TextExportTransient = 0x00100000,
	RF_LoadCompleted = 0x00200000,
	RF_InheritableComponentTemplate = 0x00400000,
	RF_DuplicateTransient = 0x00800000,
	RF_StrongRefOnFrame = 0x01000000,
	RF_NonPIEDuplicateTransient = 0x02000000,
	RF_Dynamic = 0x04000000,
	RF_WillBeLoaded = 0x08000000,
};

/*
# ========================================================================================= #
# Globals
# ========================================================================================= #
*/

// GObjects
#define GObjects_Offset		(uintptr_t)0x0000000002949CE0	//48 8B 05 ?? ?? ?? ?? 48 8B 0C F8 8B 41 10 48 0F BA E0 09
// GNames
#define GNames_Offset		(uintptr_t)0x0000000002949C98	//48 8B 05 ?? ?? ?? ?? 48 83 3C D0 00
// ProcessEvent
#define ProcessEvent_Offset (uintptr_t)0x000000000010E770	//40 55 41 56 41 57 48 81 EC ?? 00 00 00 48 8D 6C 24 20
// Decal Null
#define DecalNull0_Offset	(uintptr_t)0x0000000000FB30E0	//The call right above Return0.
// Decal Null
#define DecalNull1_Offset	(uintptr_t)0x0000000000FB30F0	//DecalReturn1 - 0x1D - !!!NO LONGER AS OF 4.6!! -> Right under Null 0, jmp. !!
// Decal Return 001
#define DecalReturn0_Offset (uintptr_t)0x0000000001077854	//90 ?? ?? AC ?? ?? 04 00 00 1st || 48 8B CE E8 ?? ?? ?? ?? 90 ?? ?? AC ?? ?? 04 00 00 || 48 8b 43 24 0f b6 08 48 ff c0 48 89 43 24 8b c1 4c 8d 0d ?? ?? ?? ?? 4c 8d 44 24 30
// Decal Return 002
#define DecalReturn1_Offset (uintptr_t)0x0000000000FA9A0D	//41 8B 46 08 45 33 ?? 33 DB 1st || 48 8B F1 E8 ?? ?? ?? ?? 41 8B 46 08 45 33 ?? 33 DB
// Item Compare 
#define ItemCompare_Offset	(uintptr_t)0x0000000000019900	//EB 07 48 8D 15 7F CC 58 01 4C 63 43 08 48 8B 0B
// Item Return 0
#define ItemReturn0_Offset	(uintptr_t)0x0000000000E65E54	//
// Item Return 1
#define ItemReturn1_Offset	(uintptr_t)0x0000000000F78A47	//
// Item Return 2
#define ItemReturn2_Offset	(uintptr_t)0x0000000000F30655	//
// Item Return 3
#define ItemReturn3_Offset	(uintptr_t)0x0000000000F30689	//

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template<typename TArray>
class TIterator
{
public:
	using ElementType = typename TArray::ElementType;
	using ElementPointer = ElementType*;
	using ElementReference = ElementType&;
	using ElementConstReference = const ElementType&;

private:
	ElementPointer IteratorData;

public:
	TIterator(ElementPointer inElementPointer)
	{
		IteratorData = inElementPointer;
	}

public:
	TIterator& operator++()
	{
		IteratorData++;
		return *this;
	}

	TIterator operator++(int32_t)
	{
		TIterator iteratorCopy = *this;
		++(*this);
		return iteratorCopy;
	}

	TIterator& operator--()
	{
		IteratorData--;
		return *this;
	}

	TIterator operator--(int32_t)
	{
		TIterator iteratorCopy = *this;
		--(*this);
		return iteratorCopy;
	}

	ElementReference operator[](int32_t index)
	{
		return *(IteratorData[index]);
	}

	ElementPointer operator->()
	{
		return IteratorData;
	}

	ElementReference operator*()
	{
		return *IteratorData;
	}

public:
	bool operator==(const TIterator& other) const
	{
		return (IteratorData == other.IteratorData);
	}

	bool operator!=(const TIterator& other) const
	{
		return !(*this == other);
	}
};

template<typename InElementType>
class TArray
{
public:
	using ElementType = InElementType;
	using ElementPointer = ElementType*;
	using ElementReference = ElementType&;
	using ElementConstReference = const ElementType&;
	using Iterator = TIterator<TArray<ElementType>>;

private:
	ElementPointer ArrayData;
	int32_t ArrayCount;
	int32_t ArrayMax;

public:
	TArray() : ArrayData(nullptr), ArrayCount(0), ArrayMax(0)
	{
		//ReAllocate(sizeof(ElementType));
	}

	~TArray()
	{
		//Clear();
		//::operator delete(ArrayData, ArrayMax * sizeof(ElementType));
	}

public:
	ElementConstReference operator[](int32_t index) const
	{
		if (index <= ArrayCount)
		{
			return ArrayData[index];
		}
	}

	ElementReference operator[](int32_t index)
	{
		if (index <= ArrayCount)
		{
			return ArrayData[index];
		} 
	}

	ElementConstReference At(int32_t index) const
	{
		if (index <= ArrayCount)
		{
			return ArrayData[index];
		} 
	}

	ElementReference At(int32_t index)
	{
		if (index <= ArrayCount)
		{
			return ArrayData[index];
		} 
	}

	void Add(ElementConstReference newElement)
	{
		if (ArrayCount >= ArrayMax)
		{
			ReAllocate(sizeof(ElementType) * (ArrayCount + 1));
		}

		new(&ArrayData[ArrayCount]) ElementType(newElement);
		ArrayCount++;
	}

	void Add(ElementReference& newElement)
	{
		if (ArrayCount >= ArrayMax)
		{
			ReAllocate(sizeof(ElementType) * (ArrayCount + 1));
		}

		new(&ArrayData[ArrayCount]) ElementType(newElement);
		ArrayCount++;
	}

	void PopBack()
	{
		if (ArrayCount > 0)
		{
			ArrayCount--;
			ArrayData[ArrayCount].~ElementType();
		}
	}

	void Clear()
	{
		for (int32_t i = 0; i < ArrayCount; i++)
		{
			ArrayData[i].~ElementType();
		}

		ArrayCount = 0;
	}

	int32_t Num() const
	{
		return ArrayCount;
	}

	int32_t Max() const
	{
		return ArrayMax;
	}

	Iterator begin()
	{
		return Iterator(ArrayData);
	}

	Iterator end()
	{
		return Iterator(ArrayData + ArrayCount);
	}

private:
	void ReAllocate(int32_t newArrayMax)
	{
		ElementPointer newArrayData = (ElementPointer)::operator new(newArrayMax * sizeof(ElementType));

		int32_t newNum = ArrayCount;

		if (newArrayMax < newNum)
		{
			newNum = newArrayMax;
		}

		for (int32_t i = 0; i < newNum; i++)
		{
			new(newArrayData + i) ElementType(std::move(ArrayData[i]));
		}

		for (int32_t i = 0; i < ArrayCount; i++)
		{
			ArrayData[i].~ElementType();
		}

		::operator delete(ArrayData, ArrayMax * sizeof(ElementType));
		ArrayData = newArrayData;
		ArrayMax = newArrayMax;
	}
};

template<typename TKey, typename TValue>
class TMap
{
private:
	class TPair
	{
		TKey Key;
		TValue Value;
		int32_t* HashNext;
	};

public:
	using ElementType = TPair;
	using ElementPointer = ElementType*;
	using ElementReference = ElementType&;
	using ElementConstReference = const ElementType&;
	using Iterator = TIterator<TMap<TKey, TValue>>;

public:
	ElementPointer ElementData; // 0x0000 (0x0008)
	int32_t ElementCount; // 0x0008 (0x0004)
	int32_t ElementMax; // 0x000C (0x0004)
	uintptr_t IndirectData; // 0x0010 (0x0008)
	int32_t InlineData[0x4]; // 0x0018 (0x0010)
	int32_t NumBits; // 0x0028 (0x0004)
	int32_t MaxBits; // 0x002C (0x0004)
	int32_t FirstFreeIndex; // 0x0030 (0x0004)
	int32_t NumFreeIndices; // 0x0034 (0x0004)
	int64_t InlineHash; // 0x0038 (0x0008)
	int32_t* Hash; // 0x0040 (0x0008)
	int32_t HashCount; // 0x0048 (0x0004)

public:
	TMap()
	{
		ElementData = nullptr;
		ElementCount = 0;
		ElementMax = 0;
		IndirectData = NULL;
		NumBits = 0;
		MaxBits = 0;
		FirstFreeIndex = 0;
		NumFreeIndices = 0;
		InlineHash = 0;
		Hash = nullptr;
		HashCount = 0;
	}

	TMap(struct FMap_Mirror& fMap)
	{
		*this = *reinterpret_cast<TMap<TKey, TValue>*>(&fMap);
	}

	~TMap() { }

public:
	ElementConstReference operator[](const int32_t index) const
	{
		if (index <= ElementCount)
		{
			return ElementData[index];
		}
	}

	ElementReference operator[](const int32_t index)
	{
		if (index <= ElementCount)
		{
			return ElementData[index];
		}
	}

	const TValue& operator[](const TKey key) const
	{
		for (int32_t i = 0; i < Num(); i++)
		{
			const TPair& pair = ElementData[i];

			if (pair.Key == key)
			{
				return pair.Value;
			}
		}
	}

	TValue& operator[](const TKey key)
	{
		for (int32_t i = 0; i < Num(); i++)
		{
			TPair& pair = ElementData[i];

			if (pair.Key == key)
			{
				return pair.Value;
			}
		}
	}

	TMap<TKey, TValue> operator=(const struct FMap_Mirror& fMap)
	{
		*this = *reinterpret_cast<TMap<TKey, TValue>*>(&fMap);
		return *this;
	}

	ElementConstReference At(const int32_t index) const
	{
		if (index <= ElementCount)
		{
			return ElementData[index];
		}
	}

	ElementReference At(const int32_t index)
	{
		if (index <= ElementCount)
		{
			return ElementData[index];
		}
	}

	int32_t Num() const
	{
		return ElementCount;
	}

	int32_t Max() const
	{
		return ElementMax;
	}

	Iterator begin()
	{
		return Iterator(ElementData);
	}

	Iterator end()
	{
		return Iterator(ElementData + ElementCount);
	}
};

/*
# ========================================================================================= #
# Globals
# ========================================================================================= #
*/

extern TArray<class UObject*>* GObjects;
extern TArray<struct FNameEntry*>* GNames;
extern HMODULE myModule;

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

struct FNameEntry
{
public:
	uint8_t UnknownData00[0x8]; // 0x0000 (0x0008) DYNAMIC FIELD PADDING
	int32_t Index; // 0x0008 (0x0004)
	uint8_t UnknownData01[0x8]; // 0x000C (0x0008) DYNAMIC FIELD PADDING
	char Name[0x400]; // 0x0014 (0x0002)

public:
	int32_t GetIndex() const
	{
		return Index;
	}

	std::string ToString() const
	{
		return std::string(Name);
	}

	const char* GetAnsiName() const
	{
		return Name;
	}
};

struct FName
{
public:
	using ElementType = const char;
	using ElementPointer = ElementType*;

private:
	int32_t			FNameEntryId;									// 0x0000 (0x04)
	int32_t			InstanceNumber;									// 0x0004 (0x04)

public:
	FName() : FNameEntryId(0), InstanceNumber(0) { }

	FName(int32_t id) : FNameEntryId(id), InstanceNumber(0) { }

	FName(ElementPointer nameToFind)
	{
		static std::vector<int32_t> nameCache{};

		FNameEntryId = 0;
		InstanceNumber = 0;

		for (int32_t entryId : nameCache)
		{
			if (Names()->At(entryId))
			{
				if (!strcmp(Names()->At(entryId)->Name, nameToFind))
				{
					FNameEntryId = entryId;
					return;
				}
			}
		}

		for (int32_t i = 0; i < Names()->Num(); i++)
		{
			if (Names()->At(i))
			{
				if (!strcmp(Names()->At(i)->Name, nameToFind))
				{
					nameCache.push_back(i);
					FNameEntryId = i;
				}
			}
		}
	}

	~FName() { }

public:
	static class TArray<struct FNameEntry*>* Names()
	{
		TArray<FNameEntry*>* GNamesArray = reinterpret_cast<TArray<FNameEntry*>*>(GNames);
		return GNamesArray;
	}

	int32_t GetDisplayIndex() const
	{
		return FNameEntryId;
	}

	const struct FNameEntry GetDisplayNameEntry() const
	{
		if (IsValid())
		{
			return *Names()->At(FNameEntryId);
		}

		return FNameEntry();
	}

	struct FNameEntry* GetEntry()
	{
		if (IsValid())
		{
			return Names()->At(FNameEntryId);
		}

		return nullptr;
	}

	int32_t GetNumber() const
	{
		return InstanceNumber;
	}

	void SetNumber(const int32_t& newNumber)
	{
		InstanceNumber = newNumber;
	}

	std::string ToString() const
	{
		if (IsValid())
		{
			return GetDisplayNameEntry().ToString();
		}

		return std::string("UnknownName");
	}

	bool IsValid() const
	{
		if (FNameEntryId < 0 || FNameEntryId > Names()->Num())
		{
			return false;
		}

		return true;
	}

public:
	struct FName operator=(const struct FName& other)
	{
		FNameEntryId = other.FNameEntryId;
		InstanceNumber = other.InstanceNumber;
		return *this;
	}

	bool operator==(const struct FName& other) const
	{
		return (FNameEntryId == other.FNameEntryId);
	}

	bool operator!=(const struct FName& other) const
	{
		return (FNameEntryId != other.FNameEntryId);
	}
};

class FString
{
public:
	using ElementType = const wchar_t;
	using ElementPointer = ElementType*;

public:
	ElementPointer	ArrayData;										// 0x0000 (0x08)
	int32_t			ArrayCount;										// 0x0008 (0x04)
	int32_t			ArrayMax;										// 0x000C (0x04)

public:
	FString() : ArrayData(nullptr), ArrayCount(0), ArrayMax(0) { }

	FString(std::wstring wStr)
	{
		uint32_t wStrLen = wStr.length();
		wchar_t* Ptr = new wchar_t[wStrLen];

		ArrayData = Ptr;
		ArrayCount = wStrLen;
		ArrayMax = wStrLen + 2;
	}

	FString(ElementPointer other)
	{
		ArrayData = nullptr;
		ArrayCount = 0;
		ArrayMax = 0;

		ArrayMax = ArrayCount = *other ? (lstrlenW(other) + 1) : 0;

		if (ArrayCount > 0)
		{
			ArrayData = other;
		}
	}

	~FString() { }

public:
	std::wstring ToWString() const
	{
		if (IsValid())
		{
			return std::wstring(ArrayData);
		}

		return std::wstring(L"null");
	}

	bool IsValid() const
	{
		return !!ArrayData;
	}

	FString operator=(ElementPointer other)
	{
		if (ArrayData != other)
		{
			ArrayMax = ArrayCount = *other ? (lstrlenW(other) + 1) : 0;

			if (ArrayCount > 0)
			{
				ArrayData = other;
			}
		}

		return *this;
	}

public:
	bool operator==(const FString& other)
	{
		return (!lstrcmpW(ArrayData, other.ArrayData));
	}

	bool operator!=(const FString& other)
	{
		return (lstrcmpW(ArrayData, other.ArrayData));
	}
};

struct FScriptDelegate
{
	uint8_t UnknownData00[0x10];
};
struct FPointer
{
	uintptr_t Dummy;
};

struct FQWord
{
	int32_t A;
	int32_t B;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/
