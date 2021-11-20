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

// UserDefinedStruct S_SavedConveyer.S_SavedConveyer
// 0x0044
struct FS_SavedConveyer
{
	class UClass*                                      Item_17_1F85D05B4280BC5D178F66A0E8252E5A;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ESZ1[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform_11_82DA4B5E46D0AA194976E2BBE8A4C5C2;             // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                               Bought__8_9E38BFA843E56F648EEE2A9A6989A3F5;                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PlacedDown__9_2A03037C418863B1500206942BA16924;            // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Locked__14_2744027540013250BAD915800BDFBF1F;               // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Valve__16_BB87EAB04455FAC92E6A0A88E3BBC6A4;                // 0x0043(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
