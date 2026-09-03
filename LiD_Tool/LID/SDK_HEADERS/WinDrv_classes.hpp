/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: WinDrv_classes.hpp
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

// Class WinDrv.FacebookWindows
// 0x0010 (0x00D0 - 0x00E0)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x00D0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    ChildProcHandle;                               // 0x00D8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.FacebookWindows");
		}

		return uClassPointer;
	};

	void FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	void ProcessFacebookRequest(class FString Payload, int32_t ResponseCode);
	void FacebookRequest(class FString GraphRequest);
	void Disconnect();
	bool IsAuthorized();
	bool Authorize();
	bool Init();
};

// Class WinDrv.HttpRequestWindows
// 0x0030 (0x0080 - 0x00B0)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                       // 0x0080 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class FString                                      RequestVerb;                                   // 0x0088 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    RequestURL;                                    // 0x0098 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<uint8_t>                                    Payload;                                       // 0x00A0 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		}

		return uClassPointer;
	};

	void Clean();
	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(class FString HeaderName, class FString HeaderValue);
	class UHttpRequestInterface* SetContentAsString(class FString ContentString);
	class UHttpRequestInterface* SetContent(TArray<uint8_t>& ContentPayload);
	class UHttpRequestInterface* SetURL(class FString URL);
	class UHttpRequestInterface* SetVerb(class FString Verb);
	class FString GetVerb();
	void GetContent(TArray<uint8_t>& Content);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(class FString ParameterName);
	TArray<class FString> GetHeaders();
	class FString GetHeader(class FString HeaderName);
};

// Class WinDrv.HttpResponseWindows
// 0x0018 (0x0060 - 0x0078)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                      // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<uint8_t>                                    Payload;                                       // 0x0068 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		}

		return uClassPointer;
	};

	void Clean();
	int32_t GetResponseCode();
	class FString GetContentAsString();
	void GetContent(TArray<uint8_t>& Content);
	class FString GetURL();
	int32_t GetContentLength();
	class FString GetContentType();
	class FString GetURLParameter(class FString ParameterName);
	TArray<class FString> GetHeaders();
	class FString GetHeader(class FString HeaderName);
};

// Class WinDrv.WindowsClient
// 0x01C4 (0x0078 - 0x023C)
class UWindowsClient : public UClient
{
public:
	uint8_t                                           UnknownData00[0x178];                          // 0x0078 (0x0178) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                              // 0x01F0 (0x0008) [0x0000000000004000] (CPF_Config)  
	uint8_t                                           UnknownData01[0x30];                           // 0x01F8 (0x0030) MISSED OFFSET
	int32_t                                            AllowJoystickInput;                            // 0x0228 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                           UnknownData02[0x10];                           // 0x022C (0x0010) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.WindowsClient");
		}

		return uClassPointer;
	};

};

// Class WinDrv.WinOrbisForceFeedbackManager
// 0x0000 (0x0080 - 0x0080)
class UWinOrbisForceFeedbackManager : public UForceFeedbackManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.WinOrbisForceFeedbackManager");
		}

		return uClassPointer;
	};

};

// Class WinDrv.WinSixaxisForceFeedbackManager
// 0x0000 (0x0080 - 0x0080)
class UWinSixaxisForceFeedbackManager : public UForceFeedbackManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.WinSixaxisForceFeedbackManager");
		}

		return uClassPointer;
	};

};

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0080 - 0x0080)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
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
