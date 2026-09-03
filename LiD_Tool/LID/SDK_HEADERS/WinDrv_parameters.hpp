/*
#############################################################################################
# LET IT DIE (5.0.1.0) SDK
# Generated with the UE3SDKGenerator v2.2.5
# ========================================================================================= #
# File: WinDrv_parameters.hpp
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

// Function WinDrv.FacebookWindows.FacebookRequestCallback
// [0x00020002] 
struct UFacebookWindows_execFacebookRequestCallback_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UHttpResponseInterface*                      Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               bDidSucceed : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class FString                                      Payload;                                          		// 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function WinDrv.FacebookWindows.ProcessFacebookRequest
// [0x00020400] 
struct UFacebookWindows_execProcessFacebookRequest_Params
{
	class FString                                      Payload;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ResponseCode;                                     		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function WinDrv.FacebookWindows.FacebookRequest
// [0x00020002] 
struct UFacebookWindows_execFacebookRequest_Params
{
	class FString                                      GraphRequest;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function WinDrv.FacebookWindows.Disconnect
// [0x00020400] 
struct UFacebookWindows_execDisconnect_Params
{
};

// Function WinDrv.FacebookWindows.IsAuthorized
// [0x00020400] 
struct UFacebookWindows_execIsAuthorized_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.FacebookWindows.Authorize
// [0x00020400] 
struct UFacebookWindows_execAuthorize_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.FacebookWindows.Init
// [0x00020400] 
struct UFacebookWindows_execInit_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.HttpRequestWindows.Clean
// [0x00020400] 
struct UHttpRequestWindows_execClean_Params
{
};

// Function WinDrv.HttpRequestWindows.ProcessRequest
// [0x00020400] 
struct UHttpRequestWindows_execProcessRequest_Params
{
	bool                                               ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.HttpRequestWindows.SetHeader
// [0x00020400] 
struct UHttpRequestWindows_execSetHeader_Params
{
	class FString                                      HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      HeaderValue;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.HttpRequestWindows.SetContentAsString
// [0x00020400] 
struct UHttpRequestWindows_execSetContentAsString_Params
{
	class FString                                      ContentString;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.HttpRequestWindows.SetContent
// [0x00420400] 
struct UHttpRequestWindows_execSetContent_Params
{
	TArray<uint8_t>                                    ContentPayload;                                   		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.HttpRequestWindows.SetURL
// [0x00020400] 
struct UHttpRequestWindows_execSetURL_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.HttpRequestWindows.SetVerb
// [0x00020400] 
struct UHttpRequestWindows_execSetVerb_Params
{
	class FString                                      Verb;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.HttpRequestWindows.GetVerb
// [0x00020400] 
struct UHttpRequestWindows_execGetVerb_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetContent
// [0x00420400] 
struct UHttpRequestWindows_execGetContent_Params
{
	TArray<uint8_t>                                    Content;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetURL
// [0x00020400] 
struct UHttpRequestWindows_execGetURL_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetContentLength
// [0x00020400] 
struct UHttpRequestWindows_execGetContentLength_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.HttpRequestWindows.GetContentType
// [0x00020400] 
struct UHttpRequestWindows_execGetContentType_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetURLParameter
// [0x00020400] 
struct UHttpRequestWindows_execGetURLParameter_Params
{
	class FString                                      ParameterName;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetHeaders
// [0x00020400] 
struct UHttpRequestWindows_execGetHeaders_Params
{
	TArray<class FString>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetHeader
// [0x00020400] 
struct UHttpRequestWindows_execGetHeader_Params
{
	class FString                                      HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.Clean
// [0x00020400] 
struct UHttpResponseWindows_execClean_Params
{
};

// Function WinDrv.HttpResponseWindows.GetResponseCode
// [0x00020400] 
struct UHttpResponseWindows_execGetResponseCode_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.HttpResponseWindows.GetContentAsString
// [0x00020400] 
struct UHttpResponseWindows_execGetContentAsString_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetContent
// [0x00420400] 
struct UHttpResponseWindows_execGetContent_Params
{
	TArray<uint8_t>                                    Content;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetURL
// [0x00020400] 
struct UHttpResponseWindows_execGetURL_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetContentLength
// [0x00020400] 
struct UHttpResponseWindows_execGetContentLength_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function WinDrv.HttpResponseWindows.GetContentType
// [0x00020400] 
struct UHttpResponseWindows_execGetContentType_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetURLParameter
// [0x00020400] 
struct UHttpResponseWindows_execGetURLParameter_Params
{
	class FString                                      ParameterName;                                    		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetHeaders
// [0x00020400] 
struct UHttpResponseWindows_execGetHeaders_Params
{
	TArray<class FString>                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetHeader
// [0x00020400] 
struct UHttpResponseWindows_execGetHeader_Params
{
	class FString                                      HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
