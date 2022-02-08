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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Niagara.NiagaraComponent.SetSeekDelta
	 */
	struct UNiagaraComponent_SetSeekDelta_Params
	{
	public:
		float                                                      InSeekDelta;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetRenderingEnabled
	 */
	struct UNiagaraComponent_SetRenderingEnabled_Params
	{
	public:
		bool                                                       bInRenderingEnabled;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetPaused
	 */
	struct UNiagaraComponent_SetPaused_Params
	{
	public:
		bool                                                       bInPaused;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
	 */
	struct UNiagaraComponent_SetNiagaraVariableVec4_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            InValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
	 */
	struct UNiagaraComponent_SetNiagaraVariableVec3_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
	 */
	struct UNiagaraComponent_SetNiagaraVariableVec2_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InValue;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
	 */
	struct UNiagaraComponent_SetNiagaraVariableQuat_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               InValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	 */
	struct UNiagaraComponent_SetNiagaraVariableLinearColor_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableInt
	 */
	struct UNiagaraComponent_SetNiagaraVariableInt_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
	 */
	struct UNiagaraComponent_SetNiagaraVariableFloat_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableBool
	 */
	struct UNiagaraComponent_SetNiagaraVariableBool_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableActor
	 */
	struct UNiagaraComponent_SetNiagaraVariableActor_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetMaxSimTime
	 */
	struct UNiagaraComponent_SetMaxSimTime_Params
	{
	public:
		float                                                      InMaxTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetForceSolo
	 */
	struct UNiagaraComponent_SetForceSolo_Params
	{
	public:
		bool                                                       bInForceSolo;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetDesiredAge
	 */
	struct UNiagaraComponent_SetDesiredAge_Params
	{
	public:
		float                                                      InDesiredAge;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	 */
	struct UNiagaraComponent_SetCanRenderWhileSeeking_Params
	{
	public:
		bool                                                       bInCanRenderWhileSeeking;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetAutoDestroy
	 */
	struct UNiagaraComponent_SetAutoDestroy_Params
	{
	public:
		bool                                                       bInAutoDestroy;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetAutoAttachmentParameters
	 */
	struct UNiagaraComponent_SetAutoAttachmentParameters_Params
	{
	public:
		class USceneComponent*                                     Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine_EAttachmentRule                                     LocationRule;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine_EAttachmentRule                                     RotationRule;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine_EAttachmentRule                                     ScaleRule;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetAsset
	 */
	struct UNiagaraComponent_SetAsset_Params
	{
	public:
		class UNiagaraSystem*                                      InAsset;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SetAgeUpdateMode
	 */
	struct UNiagaraComponent_SetAgeUpdateMode_Params
	{
	public:
		Niagara_ENiagaraAgeUpdateMode                              InAgeUpdateMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.SeekToDesiredAge
	 */
	struct UNiagaraComponent_SeekToDesiredAge_Params
	{
	public:
		float                                                      InDesiredAge;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.ResetSystem
	 */
	struct UNiagaraComponent_ResetSystem_Params
	{
	};

	/**
	 * Function Niagara.NiagaraComponent.ReinitializeSystem
	 */
	struct UNiagaraComponent_ReinitializeSystem_Params
	{
	};

	/**
	 * Function Niagara.NiagaraComponent.IsPaused
	 */
	struct UNiagaraComponent_IsPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.GetSeekDelta
	 */
	struct UNiagaraComponent_GetSeekDelta_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	 */
	struct UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params
	{
	public:
		class FString                                              InEmitterName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InValueName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	 */
	struct UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params
	{
	public:
		class FString                                              InEmitterName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InValueName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	 */
	struct UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params
	{
	public:
		class FString                                              InEmitterName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.GetMaxSimTime
	 */
	struct UNiagaraComponent_GetMaxSimTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.GetForceSolo
	 */
	struct UNiagaraComponent_GetForceSolo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.GetDesiredAge
	 */
	struct UNiagaraComponent_GetDesiredAge_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.GetAsset
	 */
	struct UNiagaraComponent_GetAsset_Params
	{
	public:
		class UNiagaraSystem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.GetAgeUpdateMode
	 */
	struct UNiagaraComponent_GetAgeUpdateMode_Params
	{
	public:
		Niagara_ENiagaraAgeUpdateMode                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.AdvanceSimulationByTime
	 */
	struct UNiagaraComponent_AdvanceSimulationByTime_Params
	{
	public:
		float                                                      SimulateTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TickDeltaSeconds;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraComponent.AdvanceSimulation
	 */
	struct UNiagaraComponent_AdvanceSimulation_Params
	{
	public:
		int32_t                                                    TickCount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TickDeltaSeconds;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	 */
	struct UNiagaraFunctionLibrary_SpawnSystemAttached_Params
	{
	public:
		class UNiagaraSystem*                                      SystemTemplate;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     AttachToComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttachPointName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		Engine_EAttachLocation                                     LocationType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	 */
	struct UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraSystem*                                      SystemTemplate;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	 */
	struct UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraParameterCollection*                         Collection;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraParameterCollectionInstance*                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetVectorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	 */
	struct UNiagaraParameterCollectionInstance_SetVector4Parameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            InValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetVector2DParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InValue;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetQuatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               InValue;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetIntParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetFloatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetColorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetBoolParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetVectorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	 */
	struct UNiagaraParameterCollectionInstance_GetVector4Parameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetVector2DParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetQuatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetIntParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetFloatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetColorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetBoolParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function Niagara.NiagaraScript.OnCompilationComplete
	 */
	struct UNiagaraScript_OnCompilationComplete_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
