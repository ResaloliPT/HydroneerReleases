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
	 * BlueprintGeneratedClass BP_HydroRoller.BP_HydroRoller_C
	 * Size -> 0x00C0 (FullSize[0x07F4] - InheritedSize[0x0734])
	 */
	class ABP_HydroRoller_C : public ABP_ParentVehicle_C
	{
	public:

		unsigned char                                            UnknownData_USY2[0x4];                                   // 0x0734(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0738(0x0008) ZeroConstructor, Transient, DuplicateTransient


		class USceneComponent*                                   HandleL;                                                 // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   HandleR;                                                 // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              SteeringWheel;                                           // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   SteeringWheel_Pivot;                                     // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   RollHeightRef;                                           // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USpotLightComponent*                               Headlights2;                                             // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USpotLightComponent*                               Headlights1;                                             // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              Wheel1;                                                  // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              Wheel0;                                                  // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              RollingDrum;                                             // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UAudioComponent*                                   S_Roller_Rolling;                                        // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   MiddleRoller;                                            // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              RollerDigRef3;                                           // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              RollerDigRef2;                                           // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              RollerDigRef1;                                           // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   RightRollerSide;                                         // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class USceneComponent*                                   LeftRollerSide;                                          // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              ArmLift;                                                 // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class UStaticMeshComponent*                              RotationArm;                                             // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    RollerTimeline_Movement_DEA663564CFEB181E1E86EBAC3D00EE3; // 0x07D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       RollerTimeline__Direction_DEA663564CFEB181E1E86EBAC3D00EE3; // 0x07DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_UV07[0x3];                                   // 0x07DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                RollerTimeline;                                          // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class ABP_HydroVoxelWorld_C*                             Voxel_World;                                             // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		int32_t                                                  RollerState;                                             // 0x07F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void SetSteeringWheelAngle();

		void PostPlayerAttached(
bool Attached
);

		void TryVoxelDig(
class UStaticMeshComponent* Scene
);

		void TryFindVoxelWorldHit(
TArray<struct FHitResult>* Hits
, 
struct FHitResult* Hit
, 
class ABP_HydroVoxelWorld_C** VoxelWorld
);

		void RollerTimeline__FinishedFunc();

		void RollerTimeline__UpdateFunc();

		void ReceiveTick(
float DeltaSeconds
);

		void RMBDownWhileDriving();

		void EnterVehicle(
class APawn* Pawn
);

		void ExitVehicle();

		void ExecuteUbergraph_BP_HydroRoller(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
