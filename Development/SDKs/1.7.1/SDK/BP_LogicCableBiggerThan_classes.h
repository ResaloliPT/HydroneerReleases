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

// BlueprintGeneratedClass BP_LogicCableBiggerThan.BP_LogicCableBiggerThan_C
// 0x0010 (FullSize[0x05C0] - InheritedSize[0x05B0])
class ABP_LogicCableBiggerThan_C : public ABP_ParentDualLogic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LogicCableBiggerThan.BP_LogicCableBiggerThan_C");
		return ptr;
	}



	void OverrideLogicPassedIn(const struct FString& Box, const struct FString& Logic);
	void ExecuteUbergraph_BP_LogicCableBiggerThan(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
