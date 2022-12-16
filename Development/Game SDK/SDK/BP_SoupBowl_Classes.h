#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------

	/**
	 * BlueprintGeneratedClass BP_SoupBowl.BP_SoupBowl_C
	 * Size -> 0x003C (FullSize[0x0440] - InheritedSize[0x0404])
	 */
	class ABP_SoupBowl_C : public ABP_ParentCraftedResource_C
	{
	public:

		unsigned char                                            UnknownData_FJ75[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UStaticMeshComponent*                              LiquidMesh;                                              // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              VegMesh2;                                                // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              VegMesh1;                                                // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              VegMesh0;                                                // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		TArray<class UClass*>                                    DebugToppers;                                            // 0x0430(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


	public:

		void UpdateItemDescription();

		void SetTopperScale(
float Weight
, 
class UStaticMeshComponent* TopperMesh
);

		void RandomiseContents();

		void EmptySoup();

		void UserConstructionScript();

		void SetSoup(
TArray<struct FS_CookingPotContents> CookingPotContent
);

		void ActorLoaded();

		void ExecuteUbergraph_BP_SoupBowl(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
