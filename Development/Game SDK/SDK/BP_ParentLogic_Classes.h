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
	 * BlueprintGeneratedClass BP_ParentLogic.BP_ParentLogic_C
	 * Size -> 0x0030 (FullSize[0x0438] - InheritedSize[0x0408])
	 */
	class ABP_ParentLogic_C : public ABP_ParentBuild_C
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0408(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		bool                                                     OverflowPrevent;                                         // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_WR9U[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class FString                                            Logic;                                                   // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash


		bool                                                     ReceivedOverflow;                                        // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_3LXP[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTimerHandle                                      OverflowWaitTimer;                                       // 0x0430(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


	public:

		void AttachmentFunctionalityCheck(
class USceneComponent* Component
, 
bool* CanPass
);

		void CastLogicOut(
class USceneComponent* OutComponent
, 
const class FString& Logic
);

		void OverrideLogicIn(
class USceneComponent* Component
);

		void SpawnLogic(
const struct FVector& SpawnLocation
, 
const struct FRotator& SpawnRotation
);

		void StackOverflowPrevention();

		void LogicIn(
class USceneComponent* Component
, 
const class FString& Logic
);

		void OverrideWaterIn(
class USceneComponent* Component
, 
int32_t Quality
, 
float Pressure
);

		void OverridePickedup();

		void ExecuteUbergraph_BP_ParentLogic(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
