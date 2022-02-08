#pragma once

/**
 * Name: Hydroneer
 * Version: 1.7.2
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
	 * BlueprintGeneratedClass BP_PaintBucketParent.BP_PaintBucketParent_C
	 * Size -> 0x0015 (FullSize[0x04A9] - InheritedSize[0x0494])
	 */
	class ABP_PaintBucketParent_C : public ABP_ParentToolUses_C
	{
	public:
		unsigned char                                              UnknownData_PIZB[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		E_PaintColor_E_PaintColor                                  Color;                                                   // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void RefreshPaintLevel(int32_t NewLevel);
		void ExecuteUbergraph_BP_PaintBucketParent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
