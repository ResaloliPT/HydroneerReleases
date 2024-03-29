#ifndef UE4SS_SDK_Niagara_HPP
#define UE4SS_SDK_Niagara_HPP

#include "Niagara_enums.hpp"

class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
};

class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

struct FNiagaraTypeDefinitionHandle
{
    int32 RegisteredTypeIndex;

};

struct FNiagaraVariableBase
{
    FName Name;
    FNiagaraTypeDefinitionHandle TypeDefHandle;

};

struct FNiagaraVariable : public FNiagaraVariableBase
{
    TArray<uint8> VarData;

};

class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
    FNiagaraVariable Parameter;

};

class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
};

class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
};

class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
};

class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
};

class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;
    ENiagaraAgeUpdateMode AgeUpdateMode;

};

class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
};

class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
    int32 ChannelsUsed;

};

class ANiagaraActor : public AActor
{
    class UNiagaraComponent* NiagaraComponent;
    uint8 bDestroyOnSystemFinish;

    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
};

struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
    int32 Offset;

};

struct FNiagaraParameterStore
{
    class UObject* Owner;
    TArray<FNiagaraVariableWithOffset> SortedParameterOffsets;
    TArray<uint8> ParameterData;
    TArray<class UNiagaraDataInterface*> DataInterfaces;
    TArray<class UObject*> UObjects;

};

struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
    TMap<class FNiagaraVariable, class FNiagaraVariable> UserParameterRedirects;

};

struct FNiagaraMaterialOverride
{
    class UMaterialInterface* Material;
    uint32 MaterialSubIndex;
    class UNiagaraRendererProperties* EmitterRendererProperty;

};

class UNiagaraComponent : public UFXSystemComponent
{
    class UNiagaraSystem* Asset;
    ENiagaraTickBehavior TickBehavior;
    FNiagaraUserRedirectionParameterStore OverrideParameters;
    uint8 bForceSolo;
    uint8 bEnableGpuComputeDebug;
    uint8 bAutoDestroy;
    uint8 bRenderingEnabled;
    uint8 bAutoManageAttachment;
    uint8 bAutoAttachWeldSimulatedBodies;
    float MaxTimeBeforeForceUpdateTransform;
    TArray<FNiagaraMaterialOverride> EmitterMaterials;
    FNiagaraComponentOnSystemFinished OnSystemFinished;
    void OnNiagaraSystemFinished(class UNiagaraComponent* PSystem);
    TWeakObjectPtr<class USceneComponent> AutoAttachParent;
    FName AutoAttachSocketName;
    EAttachmentRule AutoAttachLocationRule;
    EAttachmentRule AutoAttachRotationRule;
    EAttachmentRule AutoAttachScaleRule;

    void SetVariableVec4(FName InVariableName, const FVector4& InValue);
    void SetVariableVec3(FName InVariableName, FVector InValue);
    void SetVariableVec2(FName InVariableName, FVector2D InValue);
    void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);
    void SetVariableQuat(FName InVariableName, const FQuat& InValue);
    void SetVariableObject(FName InVariableName, class UObject* Object);
    void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);
    void SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue);
    void SetVariableInt(FName InVariableName, int32 InValue);
    void SetVariableFloat(FName InVariableName, float InValue);
    void SetVariableBool(FName InVariableName, bool InValue);
    void SetVariableActor(FName InVariableName, class AActor* Actor);
    void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);
    void SetSeekDelta(float InSeekDelta);
    void SetRenderingEnabled(bool bInRenderingEnabled);
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
    void SetPaused(bool bInPaused);
    void SetNiagaraVariableVec4(FString InVariableName, const FVector4& InValue);
    void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);
    void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);
    void SetNiagaraVariableQuat(FString InVariableName, const FQuat& InValue);
    void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);
    void SetNiagaraVariableLinearColor(FString InVariableName, const FLinearColor& InValue);
    void SetNiagaraVariableInt(FString InVariableName, int32 InValue);
    void SetNiagaraVariableFloat(FString InVariableName, float InValue);
    void SetNiagaraVariableBool(FString InVariableName, bool InValue);
    void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);
    void SetMaxSimTime(float InMaxTime);
    void SetGpuComputeDebug(bool bEnableDebug);
    void SetForceSolo(bool bInForceSolo);
    void SetDesiredAge(float InDesiredAge);
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
    void SetAutoDestroy(bool bInAutoDestroy);
    void SetAsset(class UNiagaraSystem* InAsset);
    void SetAllowScalability(bool bAllow);
    void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
    void SeekToDesiredAge(float InDesiredAge);
    void ResetSystem();
    void ReinitializeSystem();
    bool IsPaused();
    ENiagaraTickBehavior GetTickBehavior();
    float GetSeekDelta();
    bool GetPreviewLODDistanceEnabled();
    int32 GetPreviewLODDistance();
    TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);
    float GetMaxSimTime();
    bool GetForceSolo();
    float GetDesiredAge();
    class UNiagaraDataInterface* GetDataInterface(FString Name);
    class UNiagaraSystem* GetAsset();
    ENiagaraAgeUpdateMode GetAgeUpdateMode();
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
};

struct FNCPoolElement
{
    class UNiagaraComponent* Component;

};

struct FNCPool
{
    TArray<FNCPoolElement> FreeElements;
    TArray<class UNiagaraComponent*> InUseComponents_Auto;
    TArray<class UNiagaraComponent*> InUseComponents_Manual;

};

class UNiagaraComponentPool : public UObject
{
    TMap<class UNiagaraSystem*, class FNCPool> WorldParticleSystemPools;

};

struct FNiagaraDeviceProfileStateEntry
{
    FName ProfileName;
    uint32 QualityLevelMask;
    uint32 SetQualityLevelMask;

};

struct FNiagaraPlatformSetCVarCondition
{
    FName CVarName;
    bool Value;
    int32 MinInt;
    int32 MaxInt;
    float MinFloat;
    float MaxFloat;
    uint8 bUseMinInt;
    uint8 bUseMaxInt;
    uint8 bUseMinFloat;
    uint8 bUseMaxFloat;

};

struct FNiagaraPlatformSet
{
    int32 QualityLevelMask;
    TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates;
    TArray<FNiagaraPlatformSetCVarCondition> CVarConditions;

};

class UNiagaraRendererProperties : public UNiagaraMergeable
{
    FNiagaraPlatformSet Platforms;
    int32 SortOrderHint;
    bool BIsEnabled;
    bool bMotionBlurEnabled;

};

struct FNiagaraVariableAttributeBinding
{
    FNiagaraVariableBase ParamMapVariable;
    FNiagaraVariable DataSetVariable;
    FNiagaraVariable RootVariable;
    TEnumAsByte<ENiagaraBindingSource> BindingSourceMode;
    uint8 bBindingExistsOnSource;
    uint8 bIsCachedParticleValue;

};

struct FNiagaraTypeDefinition
{
    class UObject* ClassStructOrEnum;
    uint16 UnderlyingType;

};

struct FNiagaraComponentPropertyBinding
{
    FNiagaraVariableAttributeBinding AttributeBinding;
    FName PropertyName;
    FNiagaraTypeDefinition PropertyType;
    FName MetadataSetterName;
    FNiagaraVariable WritableValue;

};

class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
    TSubclassOf<class USceneComponent> ComponentType;
    uint32 ComponentCountLimit;
    FNiagaraVariableAttributeBinding EnabledBinding;
    bool bAssignComponentsOnParticleID;
    bool bOnlyCreateComponentsOnParticleSpawn;
    class USceneComponent* TemplateComponent;
    TArray<FNiagaraComponentPropertyBinding> PropertyBindings;

};

class UNiagaraComponentSettings : public UObject
{
    TSet<FName> SuppressActivationList;
    TSet<FName> ForceAutoPooolingList;
    TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList;

};

class UNiagaraConvertInPlaceUtilityBase : public UObject
{
};

class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
    class UTexture2DArray* Texture;

};

class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{
    int32 MaxElements;

};

class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
    TArray<float> FloatData;

};

class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
    TArray<FVector2D> FloatData;

};

class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
    TArray<FVector> FloatData;

};

class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
    TArray<FVector4> FloatData;

};

class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
    TArray<FLinearColor> ColorData;

};

class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
    TArray<FQuat> QuatData;

};

class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector4>& ArrayData);
    void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector2D>& ArrayData);
    void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector>& ArrayData);
    void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FQuat>& ArrayData);
    void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<int32>& ArrayData);
    void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<float>& ArrayData);
    void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FLinearColor>& ArrayData);
    void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<bool>& ArrayData);
    TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    TArray<int32> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
};

class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
    TArray<int32> IntData;

};

class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
    TArray<bool> BoolData;

};

class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
    class USoundSubmix* Submix;

};

class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
    class USoundSubmix* Submix;
    int32 Resolution;
    float ScopeInMilliseconds;

};

class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
    class USoundBase* SoundToPlay;
    class USoundAttenuation* Attenuation;
    class USoundConcurrency* Concurrency;
    TArray<FName> ParameterNames;
    bool bLimitPlaysPerTick;
    int32 MaxPlaysPerTick;
    bool bStopWhenComponentIsDestroyed;

};

class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
    int32 Resolution;
    float MinimumFrequency;
    float MaximumFrequency;
    float NoiseFloorDb;

};

class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
    int32 PlayerControllerIndex;
    bool bRequireCurrentFrameData;

};

class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
};

class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
    TArray<float> ShaderLUT;
    float LUTMinTime;
    float LUTMaxTime;
    float LUTInvTimeRange;
    float LUTNumSamplesMinusOne;
    uint8 bUseLUT;
    uint8 bExposeCurve;
    FName ExposedName;
    class UTexture2D* ExposedTexture;

};

class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve RedCurve;
    FRichCurve GreenCurve;
    FRichCurve BlueCurve;
    FRichCurve AlphaCurve;

};

class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
    uint32 Seed;

};

class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve Curve;

};

struct FBasicParticleData
{
    FVector Position;
    float Size;
    FVector Velocity;

};

class INiagaraParticleCallbackHandler : public IInterface
{

    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
};

struct FNiagaraUserParameterBinding
{
    FNiagaraVariable Parameter;

};

class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
    FNiagaraUserParameterBinding CallbackHandlerParameter;
    ENDIExport_GPUAllocationMode GPUAllocationMode;
    int32 GPUAllocationFixedSize;
    float GPUAllocationPerParticleSize;

};

class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
};

class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
    TSet<int32> OutputShaderStages;
    TSet<int32> IterationShaderStages;

};

class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
    int32 NumCellsX;
    int32 NumCellsY;
    int32 NumCellsMaxAxis;
    int32 NumAttributes;
    bool SetGridFromMaxAxis;
    FVector2D WorldBBoxSize;

};

class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    ENiagaraGpuBufferFormat OverrideBufferFormat;
    uint8 bOverrideFormat;
    TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;

    void GetTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    void GetRawTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    bool FillTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
    bool FillRawTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32& TilesX, int32& TilesY);
};

class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{
    FString EmitterName;
    FString DIName;

};

class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
    FIntVector NumCells;
    float CellSize;
    int32 NumCellsMaxAxis;
    ESetResolutionMethod SetResolutionMethod;
    FVector WorldBBoxSize;

};

class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
    int32 NumAttributes;
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    ENiagaraGpuBufferFormat BufferFormat;

    void GetTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    void GetRawTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    bool FillVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex);
    bool FillRawVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32& TilesX, int32& TilesY, int32& TileZ);
};

class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
    class AActor* SourceLandscape;

};

class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
    uint32 MaxNeighborsPerCell;

};

class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
};

class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
    FString EmitterName;

};

class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
    FNiagaraPlatformSet Platforms;

};

class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
    FIntPoint Size;
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    uint8 bOverrideFormat;
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    TMap<uint64, UTextureRenderTarget2D*> ManagedRenderTargets;

};

class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
    FIntVector Size;
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    uint8 bOverrideFormat;
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;

};

class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
    FIntVector Size;
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    uint8 bOverrideFormat;
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    TMap<uint64, UTextureRenderTargetVolume*> ManagedRenderTargets;

};

class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
};

class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
    ENDISkeletalMesh_SourceMode SourceMode;
    class AActor* Source;
    FNiagaraUserParameterBinding MeshUserParameter;
    class USkeletalMeshComponent* SourceComponent;
    ENDISkeletalMesh_SkinningMode SkinningMode;
    TArray<FName> SamplingRegions;
    int32 WholeMeshLOD;
    TArray<FName> FilteredBones;
    TArray<FName> FilteredSockets;
    FName ExcludeBoneName;
    uint8 bExcludeBone;
    bool bRequireCurrentFrameData;

};

class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
    class AActor* Source;

};

struct FNDIStaticMeshSectionFilter
{
    TArray<int32> AllowedMaterialSlots;

};

class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
    ENDIStaticMesh_SourceMode SourceMode;
    class UStaticMesh* DefaultMesh;
    class AActor* Source;
    class UStaticMeshComponent* SourceComponent;
    FNDIStaticMeshSectionFilter SectionFilter;
    bool bUsePhysicsBodyVelocity;
    TArray<FName> FilteredSockets;

};

class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;

};

class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;
    FRichCurve YCurve;

};

class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;
    FRichCurve YCurve;
    FRichCurve ZCurve;
    FRichCurve WCurve;

};

class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;
    FRichCurve YCurve;
    FRichCurve ZCurve;

};

class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
    class UVectorField* Field;
    bool bTileX;
    bool bTileY;
    bool bTileZ;

};

class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
    class UVolumeTexture* Texture;

};

class UNiagaraEditorDataBase : public UObject
{
};

class UNiagaraSignificanceHandler : public UObject
{
};

class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
};

class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
};

struct FNiagaraSystemScalabilitySettings
{
    FNiagaraPlatformSet Platforms;
    uint8 bCullByDistance;
    uint8 bCullMaxInstanceCount;
    uint8 bCullPerSystemMaxInstanceCount;
    uint8 bCullByMaxTimeWithoutRender;
    float MaxDistance;
    int32 MaxInstances;
    int32 MaxSystemInstances;
    float MaxTimeWithoutRender;

};

struct FNiagaraSystemScalabilitySettingsArray
{
    TArray<FNiagaraSystemScalabilitySettings> Settings;

};

struct FNiagaraEmitterScalabilitySettings
{
    FNiagaraPlatformSet Platforms;
    uint8 bScaleSpawnCount;
    float SpawnCountScale;

};

struct FNiagaraEmitterScalabilitySettingsArray
{
    TArray<FNiagaraEmitterScalabilitySettings> Settings;

};

class UNiagaraEffectType : public UObject
{
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;
    ENiagaraCullReaction CullReaction;
    class UNiagaraSignificanceHandler* SignificanceHandler;
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;

};

struct FNiagaraEventReceiverProperties
{
    FName Name;
    FName SourceEventGenerator;
    FName SourceEmitter;

};

struct FNiagaraTypeLayoutInfo
{
    TArray<uint32> FloatComponentByteOffsets;
    TArray<uint32> FloatComponentRegisterOffsets;
    TArray<uint32> Int32ComponentByteOffsets;
    TArray<uint32> Int32ComponentRegisterOffsets;
    TArray<uint32> HalfComponentByteOffsets;
    TArray<uint32> HalfComponentRegisterOffsets;

};

struct FNiagaraVariableLayoutInfo
{
    uint32 FloatComponentStart;
    uint32 Int32ComponentStart;
    uint32 HalfComponentStart;
    FNiagaraTypeLayoutInfo LayoutInfo;

};

struct FNiagaraDataSetID
{
    FName Name;
    ENiagaraDataSetType Type;

};

struct FNiagaraDataSetCompiledData
{
    TArray<FNiagaraVariable> Variables;
    TArray<FNiagaraVariableLayoutInfo> VariableLayouts;
    FNiagaraDataSetID ID;
    uint32 TotalFloatComponents;
    uint32 TotalInt32Components;
    uint32 TotalHalfComponents;
    uint8 bRequiresPersistentIDs;
    ENiagaraSimTarget SimTarget;

};

struct FNiagaraEventGeneratorProperties
{
    int32 MaxEventsPerFrame;
    FName ID;
    FNiagaraDataSetCompiledData DataSetCompiledData;

};

struct FNiagaraEmitterScriptProperties
{
    class UNiagaraScript* Script;
    TArray<FNiagaraEventReceiverProperties> EventReceivers;
    TArray<FNiagaraEventGeneratorProperties> EventGenerators;

};

struct FNiagaraDetailsLevelScaleOverrides
{
    float Low;
    float Medium;
    float High;
    float Epic;
    float Cine;

};

struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
    uint8 bOverrideSpawnCountScale;

};

struct FNiagaraEmitterScalabilityOverrides
{
    TArray<FNiagaraEmitterScalabilityOverride> Overrides;

};

struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
    EScriptExecutionMode ExecutionMode;
    uint32 SpawnNumber;
    uint32 MaxEventsPerFrame;
    FGuid SourceEmitterID;
    FName SourceEventName;
    bool bRandomSpawnNumber;
    uint32 MinSpawnNumber;

};

class UNiagaraEmitter : public UObject
{
    bool bLocalSpace;
    bool bDeterminism;
    int32 RandomSeed;
    EParticleAllocationMode AllocationMode;
    int32 PreAllocationCount;
    FNiagaraEmitterScriptProperties UpdateScriptProps;
    FNiagaraEmitterScriptProperties SpawnScriptProps;
    ENiagaraSimTarget SimTarget;
    FBox FixedBounds;
    int32 MinDetailLevel;
    int32 MaxDetailLevel;
    FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides;
    FNiagaraPlatformSet Platforms;
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;
    uint8 bInterpolatedSpawning;
    uint8 bFixedBounds;
    uint8 bUseMinDetailLevel;
    uint8 bUseMaxDetailLevel;
    uint8 bOverrideGlobalSpawnCountScale;
    uint8 bRequiresPersistentIDs;
    uint8 bCombineEventSpawn;
    float MaxDeltaTimePerTick;
    uint32 DefaultShaderStageIndex;
    uint32 MaxUpdateIterations;
    TSet<uint32> SpawnStages;
    uint8 bSimulationStagesEnabled;
    uint8 bDeprecatedShaderStagesEnabled;
    uint8 bLimitDeltaTime;
    FString UniqueEmitterName;
    TArray<class UNiagaraRendererProperties*> RendererProperties;
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;
    TArray<class UNiagaraSimulationStageBase*> SimulationStages;
    class UNiagaraScript* GPUComputeScript;
    TArray<FName> SharedEventGeneratorIds;

};

class UNiagaraEventReceiverEmitterAction : public UObject
{
};

class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
    uint32 NumParticles;

};

class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    class UNiagaraComponent* SpawnSystemAtLocation(const class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture);
    void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);
    void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, const TArray<FName>& SamplingRegions);
    void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent);
    void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh);
    void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
    class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
};

class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
    uint8 bUseInverseSquaredFalloff;
    uint8 bAffectsTranslucency;
    float RadiusScale;
    FVector ColorAdd;
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;
    FNiagaraVariableAttributeBinding LightExponentBinding;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding RadiusBinding;
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding;

};

struct FNiagaraMeshMaterialOverride
{
    class UMaterialInterface* ExplicitMat;
    FNiagaraUserParameterBinding UserParamBinding;

};

class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
    class UStaticMesh* ParticleMesh;
    ENiagaraSortMode SortMode;
    uint8 bOverrideMaterials;
    uint8 bSortOnlyWhenTranslucent;
    TArray<FNiagaraMeshMaterialOverride> OverrideMaterials;
    FVector2D SubImageSize;
    uint8 bSubImageBlend;
    ENiagaraMeshFacingMode FacingMode;
    uint8 bLockedAxisEnable;
    FVector LockedAxis;
    ENiagaraMeshLockedAxisSpace LockedAxisSpace;
    FVector PivotOffset;
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;
    uint8 bEnableFrustumCulling;
    uint8 bEnableCameraDistanceCulling;
    float MinCameraDistance;
    float MaxCameraDistance;
    uint32 RendererVisibility;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding VelocityBinding;
    FNiagaraVariableAttributeBinding MeshOrientationBinding;
    FNiagaraVariableAttributeBinding ScaleBinding;
    FNiagaraVariableAttributeBinding SubImageIndexBinding;
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    FNiagaraVariableAttributeBinding CustomSortingBinding;
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    FNiagaraVariableAttributeBinding CameraOffsetBinding;
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;

};

class UNiagaraMessageDataBase : public UObject
{
};

class UNiagaraParameterCollectionInstance : public UObject
{
    class UNiagaraParameterCollection* Collection;
    TArray<FNiagaraVariable> OverridenParameters;
    FNiagaraParameterStore ParameterStorage;

    void SetVectorParameter(FString InVariableName, FVector InValue);
    void SetVector4Parameter(FString InVariableName, const FVector4& InValue);
    void SetVector2DParameter(FString InVariableName, FVector2D InValue);
    void SetQuatParameter(FString InVariableName, const FQuat& InValue);
    void SetIntParameter(FString InVariableName, int32 InValue);
    void SetFloatParameter(FString InVariableName, float InValue);
    void SetColorParameter(FString InVariableName, FLinearColor InValue);
    void SetBoolParameter(FString InVariableName, bool InValue);
    FVector GetVectorParameter(FString InVariableName);
    FVector4 GetVector4Parameter(FString InVariableName);
    FVector2D GetVector2DParameter(FString InVariableName);
    FQuat GetQuatParameter(FString InVariableName);
    int32 GetIntParameter(FString InVariableName);
    float GetFloatParameter(FString InVariableName);
    FLinearColor GetColorParameter(FString InVariableName);
    bool GetBoolParameter(FString InVariableName);
};

class UNiagaraParameterCollection : public UObject
{
    FName Namespace;
    TArray<FNiagaraVariable> Parameters;
    class UMaterialParameterCollection* SourceMaterialCollection;
    class UNiagaraParameterCollectionInstance* DefaultInstance;
    FGuid CompileId;

};

class UNiagaraPrecompileContainer : public UObject
{
    TArray<class UNiagaraScript*> Scripts;
    class UNiagaraSystem* System;

};

class ANiagaraPreviewBase : public AActor
{

    void SetSystem(class UNiagaraSystem* InSystem);
    void SetLabelText(const FText& InXAxisText, const FText& InYAxisText);
};

class UNiagaraPreviewAxis : public UObject
{

    int32 Num();
    void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText);
};

class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
    FName Param;
    int32 Count;

};

class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
    int32 Min;
    int32 Max;

};

class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
    float Min;
    float Max;

};

class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector2D Min;
    FVector2D Max;

};

class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector Min;
    FVector Max;

};

class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector4 Min;
    FVector4 Max;

};

class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
    FLinearColor Min;
    FLinearColor Max;

};

class ANiagaraPreviewGrid : public AActor
{
    class UNiagaraSystem* System;
    ENiagaraPreviewGridResetMode ResetMode;
    class UNiagaraPreviewAxis* PreviewAxisX;
    class UNiagaraPreviewAxis* PreviewAxisY;
    TSubclassOf<class ANiagaraPreviewBase> PreviewClass;
    float SpacingX;
    float SpacingY;
    int32 NumX;
    int32 NumY;
    TArray<class UChildActorComponent*> PreviewComponents;

    void SetPaused(bool bPaused);
    void GetPreviews(TArray<class UNiagaraComponent*>& OutPreviews);
    void DeactivatePreviews();
    void ActivatePreviews(bool bReset);
};

struct FNiagaraRibbonUVSettings
{
    ENiagaraRibbonUVEdgeMode LeadingEdgeMode;
    ENiagaraRibbonUVEdgeMode TrailingEdgeMode;
    ENiagaraRibbonUVDistributionMode DistributionMode;
    float TilingLength;
    FVector2D Offset;
    FVector2D Scale;
    bool bEnablePerParticleUOverride;
    bool bEnablePerParticleVRangeOverride;

};

class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;
    FNiagaraUserParameterBinding MaterialUserParamBinding;
    ENiagaraRibbonFacingMode FacingMode;
    FNiagaraRibbonUVSettings UV0Settings;
    FNiagaraRibbonUVSettings UV1Settings;
    ENiagaraRibbonDrawDirection DrawDirection;
    float CurveTension;
    ENiagaraRibbonTessellationMode TessellationMode;
    int32 TessellationFactor;
    bool bUseConstantFactor;
    float TessellationAngle;
    bool bScreenSpaceTessellation;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding VelocityBinding;
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    FNiagaraVariableAttributeBinding RibbonTwistBinding;
    FNiagaraVariableAttributeBinding RibbonWidthBinding;
    FNiagaraVariableAttributeBinding RibbonFacingBinding;
    FNiagaraVariableAttributeBinding RibbonIdBinding;
    FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    FNiagaraVariableAttributeBinding U0OverrideBinding;
    FNiagaraVariableAttributeBinding V0RangeOverrideBinding;
    FNiagaraVariableAttributeBinding U1OverrideBinding;
    FNiagaraVariableAttributeBinding V1RangeOverrideBinding;

};

struct FNiagaraScriptExecutionPaddingInfo
{
    uint16 SrcOffset;
    uint16 DestOffset;
    uint16 SrcSize;
    uint16 DestSize;

};

struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
    int32 ParameterSize;
    uint32 PaddedParameterSize;
    TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo;
    uint8 bInitialized;

};

struct FNiagaraBoundParameter
{
    FNiagaraVariable Parameter;
    int32 SrcOffset;
    int32 DestOffset;

};

struct FNiagaraVMExecutableDataId
{
    FGuid CompilerVersionID;
    ENiagaraScriptUsage ScriptUsageType;
    FGuid ScriptUsageTypeID;
    uint8 bUsesRapidIterationParams;
    uint8 bInterpolatedSpawn;
    uint8 bRequiresPersistentIDs;
    FGuid BaseScriptID;
    FNiagaraCompileHash BaseScriptCompileHash;

};

struct FNiagaraScriptDataUsageInfo
{
    bool bReadsAttributeData;

};

struct FNiagaraScriptDataInterfaceCompileInfo
{
    FName Name;
    int32 UserPtrIdx;
    FNiagaraTypeDefinition Type;
    FName RegisteredParameterMapRead;
    FName RegisteredParameterMapWrite;
    bool bIsPlaceholder;

};

struct FVMFunctionSpecifier
{
    FName Key;
    FName Value;

};

struct FVMExternalFunctionBindingInfo
{
    FName Name;
    FName OwnerName;
    TArray<bool> InputParamLocations;
    int32 NumOutputs;
    TArray<FVMFunctionSpecifier> FunctionSpecifiers;

};

struct FNiagaraDataSetProperties
{
    FNiagaraDataSetID ID;
    TArray<FNiagaraVariable> Variables;

};

struct FNiagaraStatScope
{
    FName FullName;
    FName FriendlyName;

};

struct FNiagaraVMExecutableData
{
    TArray<uint8> ByteCode;
    TArray<uint8> OptimizedByteCode;
    int32 NumTempRegisters;
    int32 NumUserPtrs;
    TArray<uint8> ScriptLiterals;
    TArray<FNiagaraVariable> Attributes;
    FNiagaraScriptDataUsageInfo DataUsage;
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;
    TArray<FNiagaraDataSetID> ReadDataSets;
    TArray<FNiagaraDataSetProperties> WriteDataSets;
    TArray<FNiagaraStatScope> StatScopes;
    TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;
    ENiagaraScriptCompileStatus LastCompileStatus;
    TArray<FSimulationStageMetaData> SimulationStageMetaData;
    uint8 bReadsSignificanceIndex;

};

struct FNiagaraScriptDataInterfaceInfo
{
    class UNiagaraDataInterface* DataInterface;
    FName Name;
    int32 UserPtrIdx;
    FNiagaraTypeDefinition Type;
    FName RegisteredParameterMapRead;
    FName RegisteredParameterMapWrite;

};

class UNiagaraScript : public UNiagaraScriptBase
{
    ENiagaraScriptUsage Usage;
    int32 UsageIndex;
    FGuid UsageId;
    FNiagaraParameterStore RapidIterationParameters;
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;
    FNiagaraVMExecutableDataId CachedScriptVMId;
    FNiagaraVMExecutableData CachedScriptVM;
    TArray<class UNiagaraParameterCollection*> CachedParameterCollectionReferences;
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;

    void RaiseOnGPUCompilationComplete();
};

class UNiagaraScriptSourceBase : public UObject
{
};

class UNiagaraSettings : public UDeveloperSettings
{
    FSoftObjectPath DefaultEffectType;
    TArray<FText> QualityLevels;
    TMap<class FString, class FText> ComponentRendererWarningsPerClass;
    TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat;
    ENiagaraGpuBufferFormat DefaultGridFormat;
    class UNiagaraEffectType* DefaultEffectTypePtr;

};

class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
    class UNiagaraScript* Script;
    FName SimulationStageName;
    uint8 bEnabled;

};

struct FNiagaraVariableDataInterfaceBinding
{
    FNiagaraVariable BoundVariable;

};

class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
    ENiagaraIterationSource IterationSource;
    int32 Iterations;
    uint8 bSpawnOnly;
    uint8 bDisablePartialParticleUpdate;
    FNiagaraVariableDataInterfaceBinding DataInterface;

};

struct FNiagaraMaterialAttributeBinding
{
    FName MaterialParameterName;
    FNiagaraVariableBase NiagaraVariable;
    FNiagaraVariableBase ResolvedNiagaraVariable;
    FNiagaraVariableBase NiagaraChildVariable;

};

class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;
    ENiagaraRendererSourceDataMode SourceMode;
    FNiagaraUserParameterBinding MaterialUserParamBinding;
    ENiagaraSpriteAlignment Alignment;
    ENiagaraSpriteFacingMode FacingMode;
    FVector2D PivotInUVSpace;
    ENiagaraSortMode SortMode;
    FVector2D SubImageSize;
    uint8 bSubImageBlend;
    uint8 bRemoveHMDRollInVR;
    uint8 bSortOnlyWhenTranslucent;
    uint8 bGpuLowLatencyTranslucency;
    float MinFacingCameraBlendDistance;
    float MaxFacingCameraBlendDistance;
    uint8 bEnableCameraDistanceCulling;
    float MinCameraDistance;
    float MaxCameraDistance;
    uint32 RendererVisibility;
    FNiagaraVariableAttributeBinding PositionBinding;
    FNiagaraVariableAttributeBinding ColorBinding;
    FNiagaraVariableAttributeBinding VelocityBinding;
    FNiagaraVariableAttributeBinding SpriteRotationBinding;
    FNiagaraVariableAttributeBinding SpriteSizeBinding;
    FNiagaraVariableAttributeBinding SpriteFacingBinding;
    FNiagaraVariableAttributeBinding SpriteAlignmentBinding;
    FNiagaraVariableAttributeBinding SubImageIndexBinding;
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    FNiagaraVariableAttributeBinding CameraOffsetBinding;
    FNiagaraVariableAttributeBinding UVScaleBinding;
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    FNiagaraVariableAttributeBinding CustomSortingBinding;
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;
    TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings;

};

struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
    uint8 bOverrideDistanceSettings;
    uint8 bOverrideInstanceCountSettings;
    uint8 bOverridePerSystemInstanceCountSettings;
    uint8 bOverrideTimeSinceRendererSettings;

};

struct FNiagaraSystemScalabilityOverrides
{
    TArray<FNiagaraSystemScalabilityOverride> Overrides;

};

struct FNiagaraEmitterHandle
{
    FGuid ID;
    FName IdName;
    bool BIsEnabled;
    FName Name;
    class UNiagaraEmitter* Instance;

};

struct FNiagaraParameterDataSetBinding
{
    int32 ParameterOffset;
    int32 DataSetComponentOffset;

};

struct FNiagaraParameterDataSetBindingCollection
{
    TArray<FNiagaraParameterDataSetBinding> FloatOffsets;
    TArray<FNiagaraParameterDataSetBinding> Int32Offsets;

};

struct FNiagaraSystemCompiledData
{
    FNiagaraParameterStore InstanceParamStore;
    FNiagaraDataSetCompiledData DataSetCompiledData;
    FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;
    FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;
    FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;
    FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;
    FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;
    TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;
    FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;
    FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;
    FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;
    TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;

};

class UNiagaraSystem : public UFXSystemAsset
{
    bool bDumpDebugSystemInfo;
    bool bDumpDebugEmitterInfo;
    bool bRequireCurrentFrameData;
    uint8 bFixedBounds;
    class UNiagaraEffectType* EffectType;
    bool bOverrideScalabilitySettings;
    TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides;
    FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;
    TArray<FNiagaraEmitterHandle> EmitterHandles;
    TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;
    class UNiagaraScript* SystemSpawnScript;
    class UNiagaraScript* SystemUpdateScript;
    FNiagaraSystemCompiledData SystemCompiledData;
    FNiagaraUserRedirectionParameterStore ExposedParameters;
    FBox FixedBounds;
    bool bAutoDeactivate;
    float WarmupTime;
    int32 WarmupTickCount;
    float WarmupTickDelta;
    bool bHasSystemScriptDIsWithPerInstanceData;
    TArray<FName> UserDINamesReadInSystemScripts;

};

struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    FNiagaraVariable Parameter;

};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneBoolChannel BoolChannel;

};

struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel RedChannel;
    FMovieSceneFloatChannel GreenChannel;
    FMovieSceneFloatChannel BlueChannel;
    FMovieSceneFloatChannel AlphaChannel;

};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel FloatChannel;

};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneIntegerChannel IntegerChannel;

};

struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
    FFrameNumber SpawnSectionStartFrame;
    FFrameNumber SpawnSectionEndFrame;
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;
    ENiagaraAgeUpdateMode AgeUpdateMode;

};

struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel VectorChannels;
    int32 ChannelsUsed;

};

struct FNiagaraRandInfo
{
    int32 Seed1;
    int32 Seed2;
    int32 Seed3;

};

struct FNiagaraScriptVariableBinding
{
    FName Name;

};

struct FNiagaraVariableInfo
{
    FNiagaraVariable Variable;
    FText Definition;
    class UNiagaraDataInterface* DataInterface;

};

struct FNiagaraSystemUpdateContext
{
    TArray<class UNiagaraComponent*> ComponentsToReset;
    TArray<class UNiagaraComponent*> ComponentsToReInit;
    TArray<class UNiagaraComponent*> ComponentsToNotifySimDestroy;
    TArray<class UNiagaraSystem*> SystemSimsToDestroy;

};

struct FNiagaraFunctionSignature
{
    FName Name;
    TArray<FNiagaraVariable> Inputs;
    TArray<FNiagaraVariable> Outputs;
    FName OwnerName;
    uint8 bRequiresContext;
    uint8 bRequiresExecPin;
    uint8 bMemberFunction;
    uint8 bExperimental;
    uint8 bSupportsCPU;
    uint8 bSupportsGPU;
    uint8 bWriteFunction;
    uint8 bSoftDeprecatedFunction;
    int32 ModuleUsageBitmask;
    int32 ContextStageMinIndex;
    int32 ContextStageMaxIndex;
    TMap<class FName, class FName> FunctionSpecifiers;

};

struct FNiagaraEmitterNameSettingsRef
{
    FName SystemName;
    FString EmitterName;

};

struct FMeshTriCoordinate
{
    int32 Tri;
    FVector BaryCoord;

};

struct FNiagaraGraphViewSettings
{
    FVector2D Location;
    float Zoom;
    bool bIsValid;

};

struct FNiagaraCollisionEventPayload
{
    FVector CollisionPos;
    FVector CollisionNormal;
    FVector CollisionVelocity;
    int32 ParticleIndex;
    int32 PhysicalMaterialIndex;

};

struct FNiagaraParameters
{
    TArray<FNiagaraVariable> Parameters;

};

struct FNiagaraPlatformSetConflictEntry
{
    FName ProfileName;
    int32 QualityLevelMask;

};

struct FNiagaraPlatformSetConflictInfo
{
    int32 SetAIndex;
    int32 SetBIndex;
    TArray<FNiagaraPlatformSetConflictEntry> Conflicts;

};

struct FNiagaraScalabilityManager
{
    class UNiagaraEffectType* EffectType;
    TArray<class UNiagaraComponent*> ManagedComponents;

};

struct FNiagaraModuleDependency
{
    FName ID;
    ENiagaraModuleDependencyType Type;
    ENiagaraModuleDependencyScriptConstraint ScriptConstraint;
    FText Description;

};

struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
};

struct FNiagaraScriptHighlight
{
    FLinearColor Color;
    FText DisplayName;

};

struct FNiagaraSystemCompileRequest
{
    TArray<class UObject*> RootObjects;

};

struct FEmitterCompiledScriptPair
{
};

struct FNiagaraEmitterCompiledData
{
    TArray<FName> SpawnAttributes;
    FNiagaraVariable EmitterSpawnIntervalVar;
    FNiagaraVariable EmitterInterpSpawnStartDTVar;
    FNiagaraVariable EmitterSpawnGroupVar;
    FNiagaraVariable EmitterAgeVar;
    FNiagaraVariable EmitterRandomSeedVar;
    FNiagaraVariable EmitterInstanceSeedVar;
    FNiagaraVariable EmitterTotalSpawnedParticlesVar;
    FNiagaraDataSetCompiledData DataSetCompiledData;

};

struct FNiagaraInputConditionMetadata
{
    FName InputName;
    TArray<FString> TargetValues;

};

struct FNiagaraVariableMetaData
{
    FText Description;
    FText CategoryName;
    bool bAdvancedDisplay;
    int32 EditorSortPriority;
    bool bInlineEditConditionToggle;
    FNiagaraInputConditionMetadata EditCondition;
    FNiagaraInputConditionMetadata VisibleCondition;
    TMap<class FName, class FString> PropertyMetaData;
    FName ParentAttribute;
    FName ScopeName;
    ENiagaraScriptParameterUsage Usage;
    bool bIsStaticSwitch;
    int32 StaticSwitchDefaultValue;
    bool bAddedToNodeGraphDeepCopy;
    bool bOutputIsPersistent;
    FName CachedNamespacelessVariableName;
    bool bCreatedInSystemEditor;
    bool bUseLegacyNameString;

};

struct FNiagaraParameterScopeInfo
{
    ENiagaraParameterScope Scope;
    FString NamespaceString;

};

struct FNiagaraCompileHashVisitorDebugInfo
{
    FString Object;
    TArray<FString> PropertyKeys;
    TArray<FString> PropertyValues;

};

struct FNiagaraID
{
    int32 Index;
    int32 AcquireTag;

};

struct FNiagaraSpawnInfo
{
    int32 Count;
    float InterpStartDt;
    float IntervalDt;
    int32 SpawnGroup;

};

struct FNiagaraMatrix
{
    FVector4 Row0;
    FVector4 Row1;
    FVector4 Row2;
    FVector4 Row3;

};

struct FNiagaraParameterMap
{
};

struct FNiagaraNumeric
{
};

struct FNiagaraHalfVector4
{
    uint16 X;
    uint16 Y;
    uint16 Z;
    uint16 W;

};

struct FNiagaraHalfVector3
{
    uint16 X;
    uint16 Y;
    uint16 Z;

};

struct FNiagaraHalfVector2
{
    uint16 X;
    uint16 Y;

};

struct FNiagaraHalf
{
    uint16 Value;

};

struct FNiagaraBool
{
    int32 Value;

};

struct FNiagaraInt32
{
    int32 Value;

};

struct FNiagaraFloat
{
    float Value;

};

struct FNiagaraVariant
{
    class UObject* Object;
    class UNiagaraDataInterface* DataInterface;
    TArray<uint8> Bytes;
    ENiagaraVariantMode CurrentMode;

};

struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
};

#endif
