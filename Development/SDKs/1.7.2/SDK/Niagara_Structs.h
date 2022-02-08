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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Niagara.ENiagaraCollisionMode
	 */
	enum class Niagara_ENiagaraCollisionMode : uint8_t
	{
		ENiagaraCollisionMode__None                      = 0,
		ENiagaraCollisionMode__SceneGeometry             = 1,
		ENiagaraCollisionMode__DepthBuffer               = 2,
		ENiagaraCollisionMode__DistanceField             = 3,
		ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraScriptGroup
	 */
	enum class Niagara_ENiagaraScriptGroup : uint8_t
	{
		ENiagaraScriptGroup__Particle = 0,
		ENiagaraScriptGroup__Emitter  = 1,
		ENiagaraScriptGroup__System   = 2,
		ENiagaraScriptGroup__Max      = 3
	};

	/**
	 * Enum Niagara.ENiagaraScriptUsage
	 */
	enum class Niagara_ENiagaraScriptUsage : uint8_t
	{
		ENiagaraScriptUsage__Function                        = 0,
		ENiagaraScriptUsage__Module                          = 1,
		ENiagaraScriptUsage__DynamicInput                    = 2,
		ENiagaraScriptUsage__ParticleSpawnScript             = 3,
		ENiagaraScriptUsage__ParticleSpawnScriptInterpolated = 4,
		ENiagaraScriptUsage__ParticleUpdateScript            = 5,
		ENiagaraScriptUsage__ParticleEventScript             = 6,
		ENiagaraScriptUsage__ParticleGPUComputeScript        = 7,
		ENiagaraScriptUsage__EmitterSpawnScript              = 8,
		ENiagaraScriptUsage__EmitterUpdateScript             = 9,
		ENiagaraScriptUsage__SystemSpawnScript               = 10,
		ENiagaraScriptUsage__SystemUpdateScript              = 11,
		ENiagaraScriptUsage__ENiagaraScriptUsage_MAX         = 12
	};

	/**
	 * Enum Niagara.ENiagaraScriptCompileStatus
	 */
	enum class Niagara_ENiagaraScriptCompileStatus : uint8_t
	{
		ENiagaraScriptCompileStatus__NCS_Unknown                     = 0,
		ENiagaraScriptCompileStatus__NCS_Dirty                       = 1,
		ENiagaraScriptCompileStatus__NCS_Error                       = 2,
		ENiagaraScriptCompileStatus__NCS_UpToDate                    = 3,
		ENiagaraScriptCompileStatus__NCS_BeingCreated                = 4,
		ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings        = 5,
		ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings = 6,
		ENiagaraScriptCompileStatus__NCS_MAX                         = 7
	};

	/**
	 * Enum Niagara.ENiagaraInputNodeUsage
	 */
	enum class Niagara_ENiagaraInputNodeUsage : uint8_t
	{
		ENiagaraInputNodeUsage__Undefined                  = 0,
		ENiagaraInputNodeUsage__Parameter                  = 1,
		ENiagaraInputNodeUsage__Attribute                  = 2,
		ENiagaraInputNodeUsage__SystemConstant             = 3,
		ENiagaraInputNodeUsage__TranslatorConstant         = 4,
		ENiagaraInputNodeUsage__RapidIterationParameter    = 5,
		ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 6
	};

	/**
	 * Enum Niagara.ENiagaraDataSetType
	 */
	enum class Niagara_ENiagaraDataSetType : uint8_t
	{
		ENiagaraDataSetType__ParticleData            = 0,
		ENiagaraDataSetType__Shared                  = 1,
		ENiagaraDataSetType__Event                   = 2,
		ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraAgeUpdateMode
	 */
	enum class Niagara_ENiagaraAgeUpdateMode : uint8_t
	{
		ENiagaraAgeUpdateMode__TickDeltaTime             = 0,
		ENiagaraAgeUpdateMode__DesiredAge                = 1,
		ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraSimTarget
	 */
	enum class Niagara_ENiagaraSimTarget : uint8_t
	{
		ENiagaraSimTarget__CPUSim                 = 0,
		ENiagaraSimTarget__GPUComputeSim          = 1,
		ENiagaraSimTarget__DynamicLoadBalancedSim = 2,
		ENiagaraSimTarget__ENiagaraSimTarget_MAX  = 3
	};

	/**
	 * Enum Niagara.ENDISkeletalMesh_SkinningMode
	 */
	enum class Niagara_ENDISkeletalMesh_SkinningMode : uint8_t
	{
		ENDISkeletalMesh_SkinningMode__None                 = 0,
		ENDISkeletalMesh_SkinningMode__SkinOnTheFly         = 1,
		ENDISkeletalMesh_SkinningMode__PreSkin              = 2,
		ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX = 3
	};

	/**
	 * Enum Niagara.EScriptExecutionMode
	 */
	enum class Niagara_EScriptExecutionMode : uint8_t
	{
		EScriptExecutionMode__EveryParticle            = 0,
		EScriptExecutionMode__SpawnedParticles         = 1,
		EScriptExecutionMode__SingleParticle           = 2,
		EScriptExecutionMode__EScriptExecutionMode_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraMeshFacingMode
	 */
	enum class Niagara_ENiagaraMeshFacingMode : uint8_t
	{
		ENiagaraMeshFacingMode__Default                    = 0,
		ENiagaraMeshFacingMode__Velocity                   = 1,
		ENiagaraMeshFacingMode__CameraPosition             = 2,
		ENiagaraMeshFacingMode__CameraPlane                = 3,
		ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraSortMode
	 */
	enum class Niagara_ENiagaraSortMode : uint8_t
	{
		ENiagaraSortMode__None                 = 0,
		ENiagaraSortMode__ViewDepth            = 1,
		ENiagaraSortMode__ViewDistance         = 2,
		ENiagaraSortMode__CustomAscending      = 3,
		ENiagaraSortMode__CustomDecending      = 4,
		ENiagaraSortMode__ENiagaraSortMode_MAX = 5
	};

	/**
	 * Enum Niagara.ENiagaraRibbonDrawDirection
	 */
	enum class Niagara_ENiagaraRibbonDrawDirection : uint8_t
	{
		ENiagaraRibbonDrawDirection__FrontToBack                     = 0,
		ENiagaraRibbonDrawDirection__BackToFront                     = 1,
		ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonAgeOffsetMode
	 */
	enum class Niagara_ENiagaraRibbonAgeOffsetMode : uint8_t
	{
		ENiagaraRibbonAgeOffsetMode__Scale                           = 0,
		ENiagaraRibbonAgeOffsetMode__Clip                            = 1,
		ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraRibbonFacingMode
	 */
	enum class Niagara_ENiagaraRibbonFacingMode : uint8_t
	{
		ENiagaraRibbonFacingMode__Screen                       = 0,
		ENiagaraRibbonFacingMode__Custom                       = 1,
		ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyScriptConstraint
	 */
	enum class Niagara_ENiagaraModuleDependencyScriptConstraint : uint8_t
	{
		ENiagaraModuleDependencyScriptConstraint__SameScript                                   = 0,
		ENiagaraModuleDependencyScriptConstraint__AllScripts                                   = 1,
		ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2
	};

	/**
	 * Enum Niagara.ENiagaraModuleDependencyType
	 */
	enum class Niagara_ENiagaraModuleDependencyType : uint8_t
	{
		ENiagaraModuleDependencyType__PreDependency                    = 0,
		ENiagaraModuleDependencyType__PostDependency                   = 1,
		ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX = 2
	};

	/**
	 * Enum Niagara.EUnusedAttributeBehaviour
	 */
	enum class Niagara_EUnusedAttributeBehaviour : uint8_t
	{
		EUnusedAttributeBehaviour__Copy                          = 0,
		EUnusedAttributeBehaviour__Zero                          = 1,
		EUnusedAttributeBehaviour__None                          = 2,
		EUnusedAttributeBehaviour__MarkInvalid                   = 3,
		EUnusedAttributeBehaviour__PassThrough                   = 4,
		EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
	};

	/**
	 * Enum Niagara.ENiagaraSpriteFacingMode
	 */
	enum class Niagara_ENiagaraSpriteFacingMode : uint8_t
	{
		ENiagaraSpriteFacingMode__FaceCamera                   = 0,
		ENiagaraSpriteFacingMode__FaceCameraPlane              = 1,
		ENiagaraSpriteFacingMode__CustomFacingVector           = 2,
		ENiagaraSpriteFacingMode__FaceCameraPosition           = 3,
		ENiagaraSpriteFacingMode__FaceCameraDistanceBlend      = 4,
		ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 5
	};

	/**
	 * Enum Niagara.ENiagaraSpriteAlignment
	 */
	enum class Niagara_ENiagaraSpriteAlignment : uint8_t
	{
		ENiagaraSpriteAlignment__Unaligned                   = 0,
		ENiagaraSpriteAlignment__VelocityAligned             = 1,
		ENiagaraSpriteAlignment__CustomAlignment             = 2,
		ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3
	};

	/**
	 * Enum Niagara.ENiagaraExecutionState
	 */
	enum class Niagara_ENiagaraExecutionState : uint8_t
	{
		ENiagaraExecutionState__Active                     = 0,
		ENiagaraExecutionState__Inactive                   = 1,
		ENiagaraExecutionState__InactiveClear              = 2,
		ENiagaraExecutionState__Complete                   = 3,
		ENiagaraExecutionState__Disabled                   = 4,
		ENiagaraExecutionState__Num                        = 5,
		ENiagaraExecutionState__ENiagaraExecutionState_MAX = 6
	};

	/**
	 * Enum Niagara.ENiagaraExecutionStateSource
	 */
	enum class Niagara_ENiagaraExecutionStateSource : uint8_t
	{
		ENiagaraExecutionStateSource__Scalability                      = 0,
		ENiagaraExecutionStateSource__Internal                         = 1,
		ENiagaraExecutionStateSource__Owner                            = 2,
		ENiagaraExecutionStateSource__InternalCompletion               = 3,
		ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX = 4
	};

	/**
	 * Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
	 */
	enum class Niagara_ENiagaraNumericOutputTypeSelectionMode : uint8_t
	{
		ENiagaraNumericOutputTypeSelectionMode__None                                       = 0,
		ENiagaraNumericOutputTypeSelectionMode__Largest                                    = 1,
		ENiagaraNumericOutputTypeSelectionMode__Smallest                                   = 2,
		ENiagaraNumericOutputTypeSelectionMode__Scalar                                     = 3,
		ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Niagara.NiagaraTypeDefinition
	 * Size -> 0x0018
	 */
	struct FNiagaraTypeDefinition
	{
	public:
		class UStruct*                                             Struct;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEnum*                                               Enum;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN5H[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariable
	 * Size -> 0x0030
	 */
	struct FNiagaraVariable
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNiagaraTypeDefinition                              TypeDef;                                                 // 0x0008(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      VarData;                                                 // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterStore
	 * Size -> 0x00E8
	 */
	struct FNiagaraParameterStore
	{
	public:
		unsigned char                                              UnknownData_ER4U[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Owner;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<struct FNiagaraVariable, int32_t>                     ParameterOffsets;                                        // 0x0010(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      ParameterData;                                           // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UNiagaraDataInterface*>                       DataInterfaces;                                          // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KMDQ[0x68];                                  // 0x0080(0x0068) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
	 * Size -> 0x0010
	 */
	struct FNiagaraScriptExecutionPaddingInfo
	{
	public:
		unsigned char                                              UnknownData_7O6Z[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
	{
	public:
		int32_t                                                    ParameterSize;                                           // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   PaddedParameterSize;                                     // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraScriptExecutionPaddingInfo>          PaddingInfo;                                             // 0x00F0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              bInitialized : 1;                                        // 0x0100(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OUSA[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
	 * Size -> 0x0050 (FullSize[0x0138] - InheritedSize[0x00E8])
	 */
	struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
	{
	public:
		TMap<struct FNiagaraVariable, struct FNiagaraVariable>     UserParameterRedirects;                                  // 0x00E8(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.NDIStaticMeshSectionFilter
	 * Size -> 0x0010
	 */
	struct FNDIStaticMeshSectionFilter
	{
	public:
		TArray<int32_t>                                            AllowedMaterialSlots;                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraEventReceiverProperties
	 * Size -> 0x0018
	 */
	struct FNiagaraEventReceiverProperties
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEventGenerator;                                    // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEmitter;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetID
	 * Size -> 0x000C
	 */
	struct FNiagaraDataSetID
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Niagara_ENiagaraDataSetType                                Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIAE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraDataSetProperties
	 * Size -> 0x0020
	 */
	struct FNiagaraDataSetProperties
	{
	public:
		struct FNiagaraDataSetID                                   ID;                                                      // 0x0000(0x000C) Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JGV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraVariable>                            Variables;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraEventGeneratorProperties
	 * Size -> 0x0030
	 */
	struct FNiagaraEventGeneratorProperties
	{
	public:
		int32_t                                                    MaxEventsPerFrame;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ID;                                                      // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9UTR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraDataSetProperties                           SetProps;                                                // 0x0010(0x0020) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterScriptProperties
	 * Size -> 0x0028
	 */
	struct FNiagaraEmitterScriptProperties
	{
	public:
		class UNiagaraScript*                                      Script;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraEventReceiverProperties>             EventReceivers;                                          // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraEventGeneratorProperties>            EventGenerators;                                         // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraEventScriptProperties
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
	{
	public:
		Niagara_EScriptExecutionMode                               ExecutionMode;                                           // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59I2[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SpawnNumber;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxEventsPerFrame;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               SourceEmitterID;                                         // 0x0034(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SourceEventName;                                         // 0x0044(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomSpawnNumber;                                      // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X35J[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MinSpawnNumber;                                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_753W[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableAttributeBinding
	 * Size -> 0x0090
	 */
	struct FNiagaraVariableAttributeBinding
	{
	public:
		struct FNiagaraVariable                                    BoundVariable;                                           // 0x0000(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    DataSetVariable;                                         // 0x0030(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraVariable                                    DefaultValueIfNonExistent;                               // 0x0060(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataUsageInfo
	 * Size -> 0x0001
	 */
	struct FNiagaraScriptDataUsageInfo
	{
	public:
		bool                                                       bReadsAttributeData;                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.VMExternalFunctionBindingInfo
	 * Size -> 0x0028
	 */
	struct FVMExternalFunctionBindingInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OwnerName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               InputParamLocations;                                     // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumOutputs;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EC6D[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraStatScope
	 * Size -> 0x0010
	 */
	struct FNiagaraStatScope
	{
	public:
		class FName                                                FullName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FriendlyName;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraParameters
	 * Size -> 0x0010
	 */
	struct FNiagaraParameters
	{
	public:
		TArray<struct FNiagaraVariable>                            Parameters;                                              // 0x0000(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraFunctionSignature
	 * Size -> 0x0038
	 */
	struct FNiagaraFunctionSignature
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Inputs;                                                  // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Outputs;                                                 // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                OwnerName;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresContext;                                        // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMemberFunction;                                         // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5D4E[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
	 * Size -> 0x0050
	 */
	struct FNiagaraScriptDataInterfaceCompileInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserPtrIdx;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LB84[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeDefinition                              Type;                                                    // 0x0010(0x0018) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraFunctionSignature>                   RegisteredFunctions;                                     // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapRead;                              // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapWrite;                             // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlaceholder;                                          // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9C3[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableData
	 * Size -> 0x0168
	 */
	struct FNiagaraVMExecutableData
	{
	public:
		TArray<unsigned char>                                      ByteCode;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NumUserPtrs;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILMH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraParameters                                  Parameters;                                              // 0x0018(0x0010) NativeAccessSpecifierPublic
		struct FNiagaraParameters                                  InternalParameters;                                      // 0x0028(0x0010) NativeAccessSpecifierPublic
		TMap<class FName, struct FNiagaraParameters>               DataSetToParameters;                                     // 0x0038(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            Attributes;                                              // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraScriptDataUsageInfo                         DataUsage;                                               // 0x0098(0x0001) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGXR[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraScriptDataInterfaceCompileInfo>      DataInterfaceInfo;                                       // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVMExternalFunctionBindingInfo>              CalledVMExternalFunctions;                               // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataSetID>                           ReadDataSets;                                            // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraDataSetProperties>                   WriteDataSets;                                           // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNiagaraStatScope>                           StatScopes;                                              // 0x00E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              LastHlslTranslation;                                     // 0x00F0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastHlslTranslationGPU;                                  // 0x0100(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastAssemblyTranslation;                                 // 0x0110(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   LastOpCount;                                             // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Q2W[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraDataInterfaceGPUParamInfo>           DIParamInfo;                                             // 0x0128(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      ParameterCollectionPaths;                                // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		Niagara_ENiagaraScriptCompileStatus                        LastCompileStatus;                                       // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReadsAttributeData;                                     // 0x0149(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFQZ[0x6];                                   // 0x014A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ErrorMsg;                                                // 0x0150(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompileTime;                                             // 0x0160(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0GV[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
	 * Size -> 0x0040
	 */
	struct FNiagaraScriptDataInterfaceInfo
	{
	public:
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UserPtrIdx;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVG5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraTypeDefinition                              Type;                                                    // 0x0018(0x0018) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapRead;                              // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RegisteredParameterMapWrite;                             // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterHandle
	 * Size -> 0x0030
	 */
	struct FNiagaraEmitterHandle
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                IdName;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       BIsEnabled;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1UGU[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T6ZW[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEmitter*                                     Instance;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.NiagaraSystemCompileRequest
	 * Size -> 0x0078
	 */
	struct FNiagaraSystemCompileRequest
	{
	public:
		unsigned char                                              UnknownData_DOMS[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     RootObjects;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V32Q[0x60];                                  // 0x0018(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraEmitterSpawnAttributes
	 * Size -> 0x0010
	 */
	struct FNiagaraEmitterSpawnAttributes
	{
	public:
		TArray<class FName>                                        SpawnAttributes;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
	 * Size -> 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0020(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
	 * Size -> 0x0090 (FullSize[0x00E0] - InheritedSize[0x0050])
	 */
	struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneBoolChannel                              BoolChannel;                                             // 0x0050(0x0090) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
	 * Size -> 0x0280 (FullSize[0x02D0] - InheritedSize[0x0050])
	 */
	struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             RedChannel;                                              // 0x0050(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             GreenChannel;                                            // 0x00F0(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             BlueChannel;                                             // 0x0190(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             AlphaChannel;                                            // 0x0230(0x00A0) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
	 * Size -> 0x00A0 (FullSize[0x00F0] - InheritedSize[0x0050])
	 */
	struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             FloatChannel;                                            // 0x0050(0x00A0) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
	 * Size -> 0x0090 (FullSize[0x00E0] - InheritedSize[0x0050])
	 */
	struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneIntegerChannel                           IntegerChannel;                                          // 0x0050(0x0090) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
	{
	public:
		unsigned char                                              UnknownData_GQMM[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
	{
	};

	/**
	 * ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
	 * Size -> 0x0288 (FullSize[0x02D8] - InheritedSize[0x0050])
	 */
	struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             VectorChannels[0x4];                                     // 0x0050(0x0280) NativeAccessSpecifierPrivate
		int32_t                                                    ChannelsUsed;                                            // 0x02D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V3QK[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
	 * Size -> 0x0030
	 */
	struct FNiagaraVariableDataInterfaceBinding
	{
	public:
		struct FNiagaraVariable                                    BoundVariable;                                           // 0x0000(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableInfo
	 * Size -> 0x0050
	 */
	struct FNiagaraVariableInfo
	{
	public:
		struct FNiagaraVariable                                    Variable;                                                // 0x0000(0x0030) HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Definition;                                              // 0x0030(0x0018) NativeAccessSpecifierPublic
		class UNiagaraDataInterface*                               DataInterface;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.MeshTriCoordinate
	 * Size -> 0x0010
	 */
	struct FMeshTriCoordinate
	{
	public:
		int32_t                                                    Tri;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BaryCoord;                                               // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraCollisionEventPayload
	 * Size -> 0x002C
	 */
	struct FNiagaraCollisionEventPayload
	{
	public:
		struct FVector                                             CollisionPos;                                            // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionNormal;                                         // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CollisionVelocity;                                       // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticleIndex;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhysicalMaterialIndex;                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraModuleDependency
	 * Size -> 0x0028
	 */
	struct FNiagaraModuleDependency
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Niagara_ENiagaraModuleDependencyType                       Type;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Niagara_ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                        // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJ1T[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Description;                                             // 0x0010(0x0018) Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.EmitterCompiledScriptPair
	 * Size -> 0x0098
	 */
	struct FEmitterCompiledScriptPair
	{
	public:
		unsigned char                                              UnknownData_CX9N[0x98];                                  // 0x0000(0x0098) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraVariableMetaData
	 * Size -> 0x0098
	 */
	struct FNiagaraVariableMetaData
	{
	public:
		TMap<class FName, class FString>                           PropertyMetaData;                                        // 0x0000(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0050(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                CategoryName;                                            // 0x0068(0x0018) Edit, NativeAccessSpecifierPublic
		int32_t                                                    EditorSortPriority;                                      // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CallSortPriority;                                        // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<TWeakObjectPtr<class UObject>>                      ReferencerNodes;                                         // 0x0088(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraID
	 * Size -> 0x0008
	 */
	struct FNiagaraID
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AcquireTag;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraSpawnInfo
	 * Size -> 0x0010
	 */
	struct FNiagaraSpawnInfo
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpStartDt;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IntervalDt;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnGroup;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraMatrix
	 * Size -> 0x0040
	 */
	struct FNiagaraMatrix
	{
	public:
		struct FVector4                                            Row0;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row1;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row2;                                                    // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Row3;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraTestStructInner
	 * Size -> 0x0018
	 */
	struct FNiagaraTestStructInner
	{
	public:
		struct FVector                                             InnerVector1;                                            // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InnerVector2;                                            // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraTestStruct
	 * Size -> 0x0048
	 */
	struct FNiagaraTestStruct
	{
	public:
		struct FVector                                             Vector1;                                                 // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector2;                                                 // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraTestStructInner                             InnerStruct1;                                            // 0x0018(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraTestStructInner                             InnerStruct2;                                            // 0x0030(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraParameterMap
	 * Size -> 0x0001
	 */
	struct FNiagaraParameterMap
	{
	public:
		unsigned char                                              UnknownData_Z530[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraNumeric
	 * Size -> 0x0001
	 */
	struct FNiagaraNumeric
	{
	public:
		unsigned char                                              UnknownData_08SA[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct Niagara.NiagaraBool
	 * Size -> 0x0004
	 */
	struct FNiagaraBool
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct Niagara.NiagaraInt32
	 * Size -> 0x0004
	 */
	struct FNiagaraInt32
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraFloat
	 * Size -> 0x0004
	 */
	struct FNiagaraFloat
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct Niagara.NiagaraVMExecutableDataId
	 * Size -> 0x0068
	 */
	struct FNiagaraVMExecutableDataId
	{
	public:
		struct FGuid                                               CompilerVersionID;                                       // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		Niagara_ENiagaraScriptUsage                                ScriptUsageType;                                         // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBQI[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ScriptUsageTypeID;                                       // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1P2V[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      AdditionalDefines;                                       // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               BaseScriptID;                                            // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       ReferencedDependencyIds;                                 // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8S17[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
