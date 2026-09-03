/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: brggamecontent_classes.hpp
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class brggamecontent.BrgSeqAct_TitleMenu
// 0x0004 (0x0170 - 0x0174)
class UBrgSeqAct_TitleMenu : public USeqAct_Latent
{
public:
	unsigned long                                      mDisableSoundSelectionMenu : 1;                // 0x0170 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      mbStart : 1;                                   // 0x0170 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class brggamecontent.BrgSeqAct_TitleMenu");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
	bool eventUpdate(float DeltaTime);
	void eventActivated();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
