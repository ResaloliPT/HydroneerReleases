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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ParentWaterItemDurabilitySwitched.BP_ParentWaterItemDurabilitySwitched_C
// 0x0001 (FullSize[0x0585] - InheritedSize[0x0584])
class ABP_ParentWaterItemDurabilitySwitched_C : public ABP_ParentWaterItemDurability_C
{
public:
	bool                                               SwitchOn_;                                                 // 0x0584(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentWaterItemDurabilitySwitched.BP_ParentWaterItemDurabilitySwitched_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
