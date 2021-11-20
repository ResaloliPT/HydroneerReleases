#pragma once

// Name: Hydroneer, Version: 1.7.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UWorks.UWorksSteamID
// 0x0008
struct FUWorksSteamID
{
	unsigned char                                      UnknownData_K4LF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct UWorks.UWorksGameID
// 0x0008
struct FUWorksGameID
{
	unsigned char                                      UnknownData_IPSI[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct UWorks.UWorksPublishedFileID
// 0x0008
struct FUWorksPublishedFileID
{
	unsigned char                                      UnknownData_AN01[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct UWorks.UWorksSteamItemDef
// 0x0004
struct FUWorksSteamItemDef
{
	int                                                Value;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct UWorks.UWorksSteamItemInstanceID
// 0x0008
struct FUWorksSteamItemInstanceID
{
	unsigned char                                      UnknownData_MZP3[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
