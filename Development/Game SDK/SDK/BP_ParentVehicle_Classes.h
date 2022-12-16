﻿#pragma once

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
	 * BlueprintGeneratedClass BP_ParentVehicle.BP_ParentVehicle_C
	 * Size -> 0x04B4 (FullSize[0x0734] - InheritedSize[0x0280])
	 */
	class ABP_ParentVehicle_C : public APawn
	{
	public:

		struct FPointerToUberGraphFrame                          UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper


		class UAudioComponent*                                   ExhaustAudio;                                            // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              RefuelStaticMesh;                                        // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UVoxelSimpleInvokerComponent*                      VoxelInvoker;                                            // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              FuelLevel;                                               // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              TruckLights;                                             // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              PlayerCollision;                                         // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USpotLightComponent*                               ReverseLightRight;                                       // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USpotLightComponent*                               ReverseLightLeft;                                        // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UCameraComponent*                                  Camera;                                                  // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   CameraAnchor;                                            // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   VehicleExitPoint;                                        // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              WheelMeshBR;                                             // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              WheelMeshBL;                                             // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              WheelMeshFR;                                             // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              WheelMeshFL;                                             // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   WheelBR;                                                 // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   WheelBL;                                                 // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   WheelFR;                                                 // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   WheelFL;                                                 // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAudioComponent*                                   ReverseBeep;                                             // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UPointLightComponent*                              FuelEmptyLight;                                          // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAudioComponent*                                   FuelEmptyAudio;                                          // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UPointLightComponent*                              BrakeLightRight;                                         // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UPointLightComponent*                              BrakeLightLeft;                                          // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UNiagaraComponent*                                 Exhaust;                                                 // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UAudioComponent*                                   EngineAudio;                                             // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USpringArmComponent*                               SpringArm;                                               // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UStaticMeshComponent*                              Body;                                                    // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   TraceBR;                                                 // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   TraceBL;                                                 // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   TraceFR;                                                 // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class USceneComponent*                                   TraceFL;                                                 // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		class UFloatingPawnMovement*                             MovementComponent;                                       // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash


		float                                                    Fuel_Light_Bleep_Intensity_04ADEAC54F4882E7F34D7C91084AF6BB; // 0x0390(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       Fuel_Light_Bleep__Direction_04ADEAC54F4882E7F34D7C91084AF6BB; // 0x0394(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_KW0F[0x3];                                   // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                Fuel_Light_Bleep;                                        // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    CamTransition_Progress_B2F62E0F484C3C136FDFBBA19151F19B; // 0x03A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       CamTransition__Direction_B2F62E0F484C3C136FDFBBA19151F19B; // 0x03A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_0SFB[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                CamTransition;                                           // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    BlendFuelSFX_Blend_18BDD7304D1E08455C822E9595B17EF8;     // 0x03B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       BlendFuelSFX__Direction_18BDD7304D1E08455C822E9595B17EF8; // 0x03B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_LUA1[0x3];                                   // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                BlendFuelSFX;                                            // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    TurnOnHeadlights_Attenuation_30864BD34CB7D4A5FAC9B0886E0EB265; // 0x03C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		float                                                    TurnOnHeadlights_Intensity_30864BD34CB7D4A5FAC9B0886E0EB265; // 0x03C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		ETimelineDirection                                       TurnOnHeadlights__Direction_30864BD34CB7D4A5FAC9B0886E0EB265; // 0x03C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_54B4[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UTimelineComponent*                                TurnOnHeadlights;                                        // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		TArray<struct FS_VehWheelData>                           WheelData;                                               // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TArray<struct FS_VehSuspensionData>                      SuspensionData;                                          // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TArray<class USceneComponent*>                           TraceOrigins;                                            // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference


		TArray<class USceneComponent*>                           WheelComponents;                                         // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference


		TArray<float>                                            RayLength;                                               // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TArray<bool>                                             RayBlockingHits;                                         // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TArray<struct FHitResult>                                RayHitResults;                                           // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference


		TArray<float>                                            ForceX;                                                  // 0x0448(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TArray<float>                                            ForceY;                                                  // 0x0458(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TArray<float>                                            ForceZ;                                                  // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TArray<float>                                            Length;                                                  // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame


		TArray<float>                                            LastLength;                                              // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		TArray<struct FVector>                                   WheelLinearVelocity;                                     // 0x0498(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		bool                                                     DebugForces;                                             // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_RI1W[0x3];                                   // 0x04A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		float                                                    SteeringAngle;                                           // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    SteeringAngleMax;                                        // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    SideFrictionMultiplier;                                  // 0x04B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     bGrounded;                                               // 0x04B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     bHeadlightsOn;                                           // 0x04B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_JGKS[0x2];                                   // 0x04BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		float                                                    AirControlScalar;                                        // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    AirControlGainSpeed;                                     // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     bPlayFuelSFX;                                            // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_OKSI[0x3];                                   // 0x04C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		float                                                    FuelAlertBlendVolume;                                    // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    HornCooldown;                                            // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     bHornOnCooldown;                                         // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_LWTK[0x3];                                   // 0x04D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		float                                                    Fuel;                                                    // 0x04D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     bIgnition;                                               // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     bBraking;                                                // 0x04D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     bReversing;                                              // 0x04DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_GEOV[0x1];                                   // 0x04DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		float                                                    FuelConsumptionRate;                                     // 0x04DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     bTiltAllowed;                                            // 0x04E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_ZKF5[0x7];                                   // 0x04E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TMap<class UPrimitiveComponent*, ECollisionEnabled>      PawnCollisionComponents;                                 // 0x04E8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference


		TMap<int32_t, class APawn*>                              StoredPawns;                                             // 0x0538(0x0050) Edit, BlueprintVisible, DisableEditOnInstance


		unsigned char                                            UnknownData_P2FU[0x8];                                   // 0x0588(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		struct FTransform                                        CachedCamTransform;                                      // 0x0590(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor


		float                                                    CamZoomMin;                                              // 0x05C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    CamZoomMax;                                              // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    ZoomSpeed;                                               // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    ZoomSnapIncrements;                                      // 0x05CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    CameraZoom;                                              // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_7AKZ[0x4];                                   // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TMap<E_CargoType, int32_t>                               DefaultCargoPoints;                                      // 0x05D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance


		float                                                    TireFriction;                                            // 0x0628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     bHandbraking;                                            // 0x062C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_V73E[0x3];                                   // 0x062D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		float                                                    Friction;                                                // 0x0630(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    HandbrakeFriction;                                       // 0x0634(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    UphillTorque;                                            // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    BaseTorque;                                              // 0x063C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    MinSpeedForTurn;                                         // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     bDebugPrints;                                            // 0x0644(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     bFreezePhysics;                                          // 0x0645(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     CheckingUnwedge;                                         // 0x0646(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		bool                                                     Unwedging;                                               // 0x0647(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		float                                                    EngineSoundPeakRPM;                                      // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_WDQ0[0x4];                                   // 0x064C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class ACharacter*                                        PlayerCharacter;                                         // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		class APlayerController*                                 PlayerController;                                        // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash


		bool                                                     bCanHighlight;                                           // 0x0660(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_YGH2[0x7];                                   // 0x0661(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TArray<int32_t>                                          HighlightArray;                                          // 0x0668(0x0010) Edit, BlueprintVisible, DisableEditOnInstance


		struct FTimerHandle                                      YeetTimer;                                               // 0x0678(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash


		bool                                                     bCanYeet;                                                // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_A803[0x7];                                   // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class UAudioComponent*                                   BurnoutSound;                                            // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    ForwardInput;                                            // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     InvertMouseY;                                            // 0x0694(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_FRU9[0x3];                                   // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		float                                                    LastMoveForward;                                         // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    SpeedMultiplyer;                                         // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    FuelMeshBottomLevel;                                     // 0x06A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    FuelMeshTopLevel;                                        // 0x06A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UMaterialInterface*                                LightsOffMaterial;                                       // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UMaterialInterface*                                LightsOnMaterial;                                        // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		int32_t                                                  HeadlightsMatIndex;                                      // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_2GWB[0x4];                                   // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class USoundBase*                                        EngineIgnitionSound;                                     // 0x06C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		bool                                                     HasDoors;                                                // 0x06C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor


		unsigned char                                            UnknownData_YI8I[0x7];                                   // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		class USoundBase*                                        HornSound;                                               // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class USoundBase*                                        EngineStopSound;                                         // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		class UAnimSequence*                                     VehiclePose;                                             // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		float                                                    LocalWheelRotationAdd;                                   // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


		unsigned char                                            UnknownData_HP4H[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)


		TArray<class USpotLightComponent*>                       HeadlightArray;                                          // 0x06F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference


		class FText                                              Name;                                                    // 0x0700(0x0018) Edit, BlueprintVisible


		class FText                                              Description;                                             // 0x0718(0x0018) Edit, BlueprintVisible


		float                                                    CharacterSteering;                                       // 0x0730(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash


	public:

		void BPI_GetHighlightArray(
TArray<int32_t>* HighlightArray
);

		void BPI_SetHighlightArray(
TArray<int32_t>* HighlightArray
, 
bool* Result
);

		void BPI_GetCanHighlight(
bool* CanHighlight
);

		void ComponentsToSave(
TArray<class UActorComponent*>* Components
);

		void PostPlayerAttached(
bool Attached
);

		void ToggleAffectNavigation(
bool bCanAffectNavigation
);

		void SetPhysicsDampening();

		void FindExitPoint(
struct FVector* NewParam
);

		void CanEnter(
bool* Result
);

		void FreezePhysics(
bool bNewState
);

		void ForceWheelsToRestLength();

		void ApplyFriction();

		void OnLand();

		void TickCameraZoom(
float DeltaTime
);

		void DetachPawnFromVehicle();

		void AttachPawnToVehicle(
class APawn* Pawn
, 
int32_t Index
);

		void SetHeadlights(
bool NewValue
);

		void ToggleHeadlights();

		void DrawDebugForces();

		void ApplyWheelRotation();

		void ApplyTireForce(
int32_t Index
);

		void GetTireForce(
int32_t Index
);

		void GetWheelLinearVelocityLocal(
int32_t Index
);

		void UpdateWheelLocation(
int32_t Index
);

		void ApplySuspensionForce(
int32_t Index
);

		void GetSuspensionForce(
int32_t Index
);

		void UpdateSuspensionLength(
int32_t Index
);

		void SuspensionInit();

		void SetupReferences();

		void RayInit();

		void RayCast();

		void UserConstructionScript();

		void TurnOnHeadlights__FinishedFunc();

		void TurnOnHeadlights__UpdateFunc();

		void BlendFuelSFX__FinishedFunc();

		void BlendFuelSFX__UpdateFunc();

		void Fuel_Light_Bleep__FinishedFunc();

		void Fuel_Light_Bleep__UpdateFunc();

		void CamTransition__FinishedFunc();

		void CamTransition__UpdateFunc();

		void InpActEvt_Jump_K2Node_InputActionEvent_2(
const struct FKey& Key
);

		void InpActEvt_Jump_K2Node_InputActionEvent_1(
const struct FKey& Key
);

		void HornFinishCooldown();

		void EnterVehicle(
class APawn* Pawn
);

		void ReceiveBeginPlay();

		void ReceiveTick(
float DeltaSeconds
);

		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(
float AxisValue
);

		void ActorSaved();

		void ActorPreSave();

		void StartCamTransition();

		void BPI_Unhighlight(
class ABP_GameController_C* Controller
);

		void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(
float AxisValue
);

		void BPI_Highlight(
class ABP_GameController_C* Controller
);

		void ExitVehicle();

		void HasWater();

		void InpAxisEvt_MouseUp_K2Node_InputAxisEvent_5(
float AxisValue
);

		void InpAxisEvt_MouseRight_K2Node_InputAxisEvent_6(
float AxisValue
);

		void HasNoWater();

		void ActorLoaded();

		void WaterParticleHit();

		void FOVChanged(
float NewValue
);

		void FuelVisualHeight();

		void Loaded();

		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_4(
float AxisValue
);

		void BPI_ToggleLookAt(
class ABP_GameController_C* Controller
, 
bool LookingAt
);

		void InvertMouseYChanged(
bool NewValue
);

		void LMBDownWhileDriving();

		void RMBDownWhileDriving();

		void OverrideMoveForward(
float AxisValue
);

		void ForceVehicleOff();

		void InWater(
bool WaterBody
, 
class UPrimitiveComponent* Comp
);

		void EDownWhileDriving();

		void EUpWhileDriving();

		void ExecuteUbergraph_BP_ParentVehicle(
int32_t EntryPoint
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
