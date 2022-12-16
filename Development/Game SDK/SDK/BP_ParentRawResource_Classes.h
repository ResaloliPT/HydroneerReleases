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
	 * BlueprintGeneratedClass BP_ParentRawResource.BP_ParentRawResource_C
	 * Size -> 0x0008 (FullSize[0x03F0] - InheritedSize[0x03E8])
	 */
	class ABP_ParentRawResource_C : public ABP_ParentResource_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


	public:

		void SetDoNotClear(
bool DoNotClear
);

		void ToggleSaveRawResourcesChanged(
bool NewValue
);

		void OverrideLoaded();

		void ReceiveBeginPlay();

		void ExecuteUbergraph_BP_ParentRawResource(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
