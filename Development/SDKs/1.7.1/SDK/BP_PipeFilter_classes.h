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

// BlueprintGeneratedClass BP_PipeFilter.BP_PipeFilter_C
// 0x000C (FullSize[0x0590] - InheritedSize[0x0584])
class ABP_PipeFilter_C : public ABP_ParentWaterItemDurability_C
{
public:
	unsigned char                                      UnknownData_SYWD[0x4];                                     // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0588(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PipeFilter.BP_PipeFilter_C");
		return ptr;
	}



	void OverrideWaterIn(const struct FString& Box, int Water_Quality, float Water_Pressure);
	void ExecuteUbergraph_BP_PipeFilter(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
