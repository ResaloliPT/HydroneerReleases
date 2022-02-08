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
	 * BlueprintGeneratedClass BP_ParentLogic.BP_ParentLogic_C
	 * Size -> 0x0064 (FullSize[0x0594] - InheritedSize[0x0530])
	 */
	class ABP_ParentLogic_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                LegsLeft;                                                // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LegsRight;                                               // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LegsUp;                                                  // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LegsDown;                                                // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Lgk3;                                                    // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Lgk2;                                                    // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Lgk1;                                                    // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfLegs;                                            // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5SNB[0x4];                                   // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ParentPower_C*                                   Power_Source;                                            // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Logic;                                                   // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       Legs_;                                                   // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RejectPassthrough_;                                      // 0x0591(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverflowPrevent_;                                        // 0x0592(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RejectLogicSet_;                                         // 0x0593(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void TryPassLogic(class UObject* Hit_Actor, const class FString& Hit_Box, const struct FVector& Trace_End, const class FString& Logic_To_Pass);
		void LogicLineTrace(class USceneComponent* LogicBox, class AActor** Hit_Actor, class FString* Hit_Box, struct FVector* Trace_End);
		void ClearLegs();
		void LegCheck();
		void OverridePlacedDown();
		void OverrideLoaded();
		void OverridePickedup();
		void OverrideNeighbourChecked();
		void OverrideLogicPassedIn(const class FString& Box, const class FString& Logic);
		void LogicPassedIn(const class FString& Box, const class FString& Logic);
		void OverrideNewLogic(const class FString& Box, const class FString& New_Logic);
		void PowerIn(class ABP_ParentPower_C* Source);
		void EmptyPowerTimer();
		void OverrideFirstPower(class ABP_ParentPower_C* Source);
		void OverrideNoPower();
		void OverridePowerIn(class ABP_ParentPower_C* Source);
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void StackOverflowPrevention();
		void ExecuteUbergraph_BP_ParentLogic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
