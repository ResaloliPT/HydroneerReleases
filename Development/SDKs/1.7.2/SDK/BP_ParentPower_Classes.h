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
	 * BlueprintGeneratedClass BP_ParentPower.BP_ParentPower_C
	 * Size -> 0x0052 (FullSize[0x0582] - InheritedSize[0x0530])
	 */
	class ABP_ParentPower_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                LegsLeft;                                                // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LegsRight;                                               // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LegsUp;                                                  // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LegsDown;                                                // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Pwr3;                                                    // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Pwr2;                                                    // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Pwr1;                                                    // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfLegs;                                            // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TP38[0x4];                                   // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ParentPower_C*                                   PowerSource;                                             // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Legs_;                                                   // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OverflowPrevent_;                                        // 0x0581(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PowerTraceLine(class USceneComponent* Box, class AActor** Hit_Actor, class FString* Hit_Box, struct FVector* End_Trace);
		void TryPassPower(class AActor* Hit_Actor, const class FString& Hit_Box, const struct FVector& Trace_End, class ABP_ParentPower_C* PowerSource);
		void ClearLegs();
		void LegCheck();
		void OverridePlacedDown();
		void OverrideLoaded();
		void OverridePickedup();
		void OverrideNeighbourChecked();
		void EmptyPowerTimer();
		void OverridePowerPassedIn(const class FString& Box);
		void OverrideNoPower();
		void OverrideFirstPower();
		void OverrideLogicPassedIn(const class FString& New_Logic);
		void PowerPassedIn(const class FString& Box, class ABP_ParentPower_C* Source);
		void SapPower(int32_t Amount);
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void StackOverflowPrevention();
		void ExecuteUbergraph_BP_ParentPower(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
