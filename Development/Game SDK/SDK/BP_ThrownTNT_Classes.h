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
	 * BlueprintGeneratedClass BP_ThrownTNT.BP_ThrownTNT_C
	 * Size -> 0x003B (FullSize[0x0404] - InheritedSize[0x03C9])
	 */
	class ABP_ThrownTNT_C : public ABP_ParentTool_C
	{
	public:

		unsigned char                                            UnknownData_L8AR[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class UAC_ResourceSpawn_C*                               AC_ResourceSpawn;                                        // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAC_Explosive_C*                                   AC_Explosive;                                            // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UParticleSystemComponent*                          ParticleSystem;                                          // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		TArray<class AActor*>                                    Items_To_Delete;                                         // 0x03F0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance


		float                                                    TimeToExplode;                                           // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void LMBDownWhileCarrying(
class ABP_GameController_C* Controller
, 
class AActor* HitActor
, 
const struct FVector& HitLocation
, 
bool* ConsumeInput
);

		void UserConstructionScript();

		void Explode_Timer();

		void Throw(
class ABP_GameController_C* Controller
);

		void ExecuteUbergraph_BP_ThrownTNT(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
