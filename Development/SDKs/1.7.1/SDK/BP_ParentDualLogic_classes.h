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

// BlueprintGeneratedClass BP_ParentDualLogic.BP_ParentDualLogic_C
// 0x001C (FullSize[0x05B0] - InheritedSize[0x0594])
class ABP_ParentDualLogic_C : public ABP_ParentLogic_C
{
public:
	unsigned char                                      UnknownData_JHYM[0x4];                                     // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0598(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     LogicB;                                                    // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParentDualLogic.BP_ParentDualLogic_C");
		return ptr;
	}



	void AddZeros(const struct FString& LogicToOutput, struct FString* FullOutput);
	void LogicPassedIn(const struct FString& Box, const struct FString& Logic);
	void ExecuteUbergraph_BP_ParentDualLogic(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
