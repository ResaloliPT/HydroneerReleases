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
	 * BlueprintGeneratedClass BP_ParentBuildWall.BP_ParentBuildWall_C
	 * Size -> 0x0009 (FullSize[0x0539] - InheritedSize[0x0530])
	 */
	class ABP_ParentBuildWall_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient
		E_PaintColor_E_PaintColor                                  Color;                                                   // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OverrideLoaded();
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void PaintWall(E_PaintColor_E_PaintColor Color);
		void ExecuteUbergraph_BP_ParentBuildWall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
