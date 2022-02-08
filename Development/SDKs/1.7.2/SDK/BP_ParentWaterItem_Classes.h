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
	 * BlueprintGeneratedClass BP_ParentWaterItem.BP_ParentWaterItem_C
	 * Size -> 0x0034 (FullSize[0x0564] - InheritedSize[0x0530])
	 */
	class ABP_ParentWaterItem_C : public ABP_ParentBuild_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box3;                                                    // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    ErrorWidget;                                             // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box2;                                                    // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box1;                                                    // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       OverflowPrevent_;                                        // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V3R3[0x3];                                   // 0x0559(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PressureDecrement;                                       // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentPressure;                                         // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void WaterLineTrace(class USceneComponent* Box, class AActor** Hit_Actor, class UPrimitiveComponent** Hit_Component, struct FVector* TraceEnd);
		void CheckWaterHit(class AActor* Actor, class UPrimitiveComponent* Component, const struct FVector& TraceEnd, int32_t Water_Quality, float Water_Pressure);
		void WaterIn(const class FString& Box, int32_t WaterQuality, float WaterPressure);
		void OverrideWaterIn(const class FString& Box, int32_t Water_Quality, float Water_Pressure);
		void CountDownToEmpty();
		void OverrideNoWater();
		void StackOverflowPrevention();
		void OverrideFirstWater();
		void OverridePickedup();
		void OverrideLogicIn(const class FString& Box, const class FString& Logic);
		void OverrideMouseActivated(class UPrimitiveComponent* Component);
		void ExecuteUbergraph_BP_ParentWaterItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
