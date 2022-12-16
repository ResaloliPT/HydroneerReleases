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
	 * BlueprintGeneratedClass BP_DirtResource.BP_DirtResource_C
	 * Size -> 0x0010 (FullSize[0x03F8] - InheritedSize[0x03E8])
	 */
	class ABP_DirtResource_C : public ABP_ParentResource_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		int32_t                                                  DirtQuality;                                             // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash


		float                                                    MaxDirtSize;                                             // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void SetChunkMaterial();

		void UserConstructionScript();

		void Cooldown();

		void OverrideHit(
class AActor* OtherActor
);

		void ReceiveBeginPlay();

		void ToggleSaveDirtChunksChanged(
bool NewValue
);

		void ExecuteUbergraph_BP_DirtResource(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
