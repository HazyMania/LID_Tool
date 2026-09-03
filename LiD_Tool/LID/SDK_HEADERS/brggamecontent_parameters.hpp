/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: brggamecontent_parameters.hpp
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
# Function Parameters
# ========================================================================================= #
*/

// Function brggamecontent.BrgSeqAct_TitleMenu.GetObjClassVersion
// [0x00022802] 
struct UBrgSeqAct_TitleMenu_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function brggamecontent.BrgSeqAct_TitleMenu.Update
// [0x00020802] 
struct UBrgSeqAct_TitleMenu_eventUpdate_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UBrgUIManager*                               lUIMan;                                           		// 0x0008 (0x0008) [0x0000000000000000]               
};

// Function brggamecontent.BrgSeqAct_TitleMenu.Activated
// [0x00020802] 
struct UBrgSeqAct_TitleMenu_eventActivated_Params
{
	// class UBrgUIManager*                               lUIMan;                                           		// 0x0000 (0x0008) [0x0000000000000000]               
	// class UBrgUIMenu_Title*                            lTitle;                                           		// 0x0008 (0x0008) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
