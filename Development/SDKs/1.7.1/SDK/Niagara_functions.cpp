// Name: Hydroneer, Version: 1.7.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FNiagaraTypeDefinition::AfterRead()
{
	READ_PTR_FULL(Struct, UStruct);
	READ_PTR_FULL(Enum, UEnum);
}

void FNiagaraTypeDefinition::BeforeDelete()
{
	DELE_PTR_FULL(Struct);
	DELE_PTR_FULL(Enum);
}

void FNiagaraVariable::AfterRead()
{
}

void FNiagaraVariable::BeforeDelete()
{
}

void FNiagaraParameterStore::AfterRead()
{
	READ_PTR_FULL(Owner, UObject);
}

void FNiagaraParameterStore::BeforeDelete()
{
	DELE_PTR_FULL(Owner);
}

void FNiagaraUserRedirectionParameterStore::AfterRead()
{
	FNiagaraParameterStore::AfterRead();

}

void FNiagaraUserRedirectionParameterStore::BeforeDelete()
{
	FNiagaraParameterStore::BeforeDelete();

}

void FNDIStaticMeshSectionFilter::AfterRead()
{
}

void FNDIStaticMeshSectionFilter::BeforeDelete()
{
}

void FNiagaraVMExecutableDataId::AfterRead()
{
}

void FNiagaraVMExecutableDataId::BeforeDelete()
{
}

void FNiagaraEventReceiverProperties::AfterRead()
{
}

void FNiagaraEventReceiverProperties::BeforeDelete()
{
}

void FNiagaraDataSetID::AfterRead()
{
}

void FNiagaraDataSetID::BeforeDelete()
{
}

void FNiagaraDataSetProperties::AfterRead()
{
}

void FNiagaraDataSetProperties::BeforeDelete()
{
}

void FNiagaraEventGeneratorProperties::AfterRead()
{
}

void FNiagaraEventGeneratorProperties::BeforeDelete()
{
}

void FNiagaraEmitterScriptProperties::AfterRead()
{
	READ_PTR_FULL(Script, UNiagaraScript);
}

void FNiagaraEmitterScriptProperties::BeforeDelete()
{
	DELE_PTR_FULL(Script);
}

void FNiagaraEventScriptProperties::AfterRead()
{
	FNiagaraEmitterScriptProperties::AfterRead();

}

void FNiagaraEventScriptProperties::BeforeDelete()
{
	FNiagaraEmitterScriptProperties::BeforeDelete();

}

void FNiagaraVariableAttributeBinding::AfterRead()
{
}

void FNiagaraVariableAttributeBinding::BeforeDelete()
{
}

void FNiagaraScriptExecutionPaddingInfo::AfterRead()
{
}

void FNiagaraScriptExecutionPaddingInfo::BeforeDelete()
{
}

void FNiagaraScriptDataUsageInfo::AfterRead()
{
}

void FNiagaraScriptDataUsageInfo::BeforeDelete()
{
}

void FVMExternalFunctionBindingInfo::AfterRead()
{
}

void FVMExternalFunctionBindingInfo::BeforeDelete()
{
}

void FNiagaraStatScope::AfterRead()
{
}

void FNiagaraStatScope::BeforeDelete()
{
}

void FNiagaraParameters::AfterRead()
{
}

void FNiagaraParameters::BeforeDelete()
{
}

void FNiagaraFunctionSignature::AfterRead()
{
}

void FNiagaraFunctionSignature::BeforeDelete()
{
}

void FNiagaraScriptDataInterfaceCompileInfo::AfterRead()
{
}

void FNiagaraScriptDataInterfaceCompileInfo::BeforeDelete()
{
}

void FNiagaraVMExecutableData::AfterRead()
{
}

void FNiagaraVMExecutableData::BeforeDelete()
{
}

void FNiagaraScriptDataInterfaceInfo::AfterRead()
{
	READ_PTR_FULL(DataInterface, UNiagaraDataInterface);
}

void FNiagaraScriptDataInterfaceInfo::BeforeDelete()
{
	DELE_PTR_FULL(DataInterface);
}

void FNiagaraEmitterHandle::AfterRead()
{
	READ_PTR_FULL(Instance, UNiagaraEmitter);
}

void FNiagaraEmitterHandle::BeforeDelete()
{
	DELE_PTR_FULL(Instance);
}

void FNiagaraSystemCompileRequest::AfterRead()
{
}

void FNiagaraSystemCompileRequest::BeforeDelete()
{
}

void FNiagaraEmitterSpawnAttributes::AfterRead()
{
}

void FNiagaraEmitterSpawnAttributes::BeforeDelete()
{
}

void FMovieSceneNiagaraParameterSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneNiagaraBoolParameterSectionTemplate::AfterRead()
{
	FMovieSceneNiagaraParameterSectionTemplate::AfterRead();

}

void FMovieSceneNiagaraBoolParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneNiagaraColorParameterSectionTemplate::AfterRead()
{
	FMovieSceneNiagaraParameterSectionTemplate::AfterRead();

}

void FMovieSceneNiagaraColorParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneNiagaraFloatParameterSectionTemplate::AfterRead()
{
	FMovieSceneNiagaraParameterSectionTemplate::AfterRead();

}

void FMovieSceneNiagaraFloatParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneNiagaraIntegerParameterSectionTemplate::AfterRead()
{
	FMovieSceneNiagaraParameterSectionTemplate::AfterRead();

}

void FMovieSceneNiagaraIntegerParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneNiagaraSystemTrackImplementation::AfterRead()
{
	FMovieSceneTrackImplementation::AfterRead();

}

void FMovieSceneNiagaraSystemTrackImplementation::BeforeDelete()
{
	FMovieSceneTrackImplementation::BeforeDelete();

}

void FMovieSceneNiagaraSystemTrackTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneNiagaraSystemTrackTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneNiagaraVectorParameterSectionTemplate::AfterRead()
{
	FMovieSceneNiagaraParameterSectionTemplate::AfterRead();

}

void FMovieSceneNiagaraVectorParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneNiagaraParameterSectionTemplate::BeforeDelete();

}

void FNiagaraVariableDataInterfaceBinding::AfterRead()
{
}

void FNiagaraVariableDataInterfaceBinding::BeforeDelete()
{
}

void FNiagaraVariableInfo::AfterRead()
{
	READ_PTR_FULL(DataInterface, UNiagaraDataInterface);
}

void FNiagaraVariableInfo::BeforeDelete()
{
	DELE_PTR_FULL(DataInterface);
}

void FMeshTriCoordinate::AfterRead()
{
}

void FMeshTriCoordinate::BeforeDelete()
{
}

void FNiagaraCollisionEventPayload::AfterRead()
{
}

void FNiagaraCollisionEventPayload::BeforeDelete()
{
}

void FNiagaraModuleDependency::AfterRead()
{
}

void FNiagaraModuleDependency::BeforeDelete()
{
}

void FEmitterCompiledScriptPair::AfterRead()
{
}

void FEmitterCompiledScriptPair::BeforeDelete()
{
}

void FNiagaraVariableMetaData::AfterRead()
{
}

void FNiagaraVariableMetaData::BeforeDelete()
{
}

void FNiagaraID::AfterRead()
{
}

void FNiagaraID::BeforeDelete()
{
}

void FNiagaraSpawnInfo::AfterRead()
{
}

void FNiagaraSpawnInfo::BeforeDelete()
{
}

void FNiagaraScriptExecutionParameterStore::AfterRead()
{
	FNiagaraParameterStore::AfterRead();

}

void FNiagaraScriptExecutionParameterStore::BeforeDelete()
{
	FNiagaraParameterStore::BeforeDelete();

}

void FNiagaraMatrix::AfterRead()
{
}

void FNiagaraMatrix::BeforeDelete()
{
}

void FNiagaraTestStructInner::AfterRead()
{
}

void FNiagaraTestStructInner::BeforeDelete()
{
}

void FNiagaraTestStruct::AfterRead()
{
}

void FNiagaraTestStruct::BeforeDelete()
{
}

void FNiagaraParameterMap::AfterRead()
{
}

void FNiagaraParameterMap::BeforeDelete()
{
}

void FNiagaraNumeric::AfterRead()
{
}

void FNiagaraNumeric::BeforeDelete()
{
}

void FNiagaraBool::AfterRead()
{
}

void FNiagaraBool::BeforeDelete()
{
}

void FNiagaraInt32::AfterRead()
{
}

void FNiagaraInt32::BeforeDelete()
{
}

void FNiagaraFloat::AfterRead()
{
}

void FNiagaraFloat::BeforeDelete()
{
}

void UNiagaraDataInterface::AfterRead()
{
	UNiagaraDataInterfaceBase::AfterRead();

}

void UNiagaraDataInterface::BeforeDelete()
{
	UNiagaraDataInterfaceBase::BeforeDelete();

}

void UMovieSceneNiagaraTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneNiagaraTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneNiagaraParameterTrack::AfterRead()
{
	UMovieSceneNiagaraTrack::AfterRead();

}

void UMovieSceneNiagaraParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraTrack::BeforeDelete();

}

void UMovieSceneNiagaraBoolParameterTrack::AfterRead()
{
	UMovieSceneNiagaraParameterTrack::AfterRead();

}

void UMovieSceneNiagaraBoolParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraParameterTrack::BeforeDelete();

}

void UMovieSceneNiagaraColorParameterTrack::AfterRead()
{
	UMovieSceneNiagaraParameterTrack::AfterRead();

}

void UMovieSceneNiagaraColorParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraParameterTrack::BeforeDelete();

}

void UMovieSceneNiagaraFloatParameterTrack::AfterRead()
{
	UMovieSceneNiagaraParameterTrack::AfterRead();

}

void UMovieSceneNiagaraFloatParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraParameterTrack::BeforeDelete();

}

void UMovieSceneNiagaraIntegerParameterTrack::AfterRead()
{
	UMovieSceneNiagaraParameterTrack::AfterRead();

}

void UMovieSceneNiagaraIntegerParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraParameterTrack::BeforeDelete();

}

void UMovieSceneNiagaraSystemSpawnSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneNiagaraSystemSpawnSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneNiagaraSystemTrack::AfterRead()
{
	UMovieSceneNiagaraTrack::AfterRead();

}

void UMovieSceneNiagaraSystemTrack::BeforeDelete()
{
	UMovieSceneNiagaraTrack::BeforeDelete();

}

void UMovieSceneNiagaraVectorParameterTrack::AfterRead()
{
	UMovieSceneNiagaraParameterTrack::AfterRead();

}

void UMovieSceneNiagaraVectorParameterTrack::BeforeDelete()
{
	UMovieSceneNiagaraParameterTrack::BeforeDelete();

}

void ANiagaraActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(NiagaraComponent, UNiagaraComponent);
}

void ANiagaraActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(NiagaraComponent);
}

// Function:
//		Offset -> 0x00566E90
//		Name   -> Function Niagara.NiagaraComponent.SetSeekDelta
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InSeekDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSeekDelta");

	UNiagaraComponent_SetSeekDelta_Params params {};
	params.InSeekDelta = InSeekDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566E00
//		Name   -> Function Niagara.NiagaraComponent.SetRenderingEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInRenderingEnabled                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetRenderingEnabled");

	UNiagaraComponent_SetRenderingEnabled_Params params {};
	params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566D70
//		Name   -> Function Niagara.NiagaraComponent.SetPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInPaused                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetPaused(bool bInPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPaused");

	UNiagaraComponent_SetPaused_Params params {};
	params.bInPaused = bInPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566C80
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4");

	UNiagaraComponent_SetNiagaraVariableVec4_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566B90
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3");

	UNiagaraComponent_SetNiagaraVariableVec3_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566AC0
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2");

	UNiagaraComponent_SetNiagaraVariableVec2_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005669E0
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FQuat                                       InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat");

	UNiagaraComponent_SetNiagaraVariableQuat_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566900
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor");

	UNiagaraComponent_SetNiagaraVariableLinearColor_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566820
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableInt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableInt(const struct FString& InVariableName, int InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableInt");

	UNiagaraComponent_SetNiagaraVariableInt_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566740
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat");

	UNiagaraComponent_SetNiagaraVariableFloat_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566660
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableBool
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableBool");

	UNiagaraComponent_SetNiagaraVariableBool_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005665A0
//		Name   -> Function Niagara.NiagaraComponent.SetNiagaraVariableActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableActor");

	UNiagaraComponent_SetNiagaraVariableActor_Params params {};
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566520
//		Name   -> Function Niagara.NiagaraComponent.SetMaxSimTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InMaxTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetMaxSimTime");

	UNiagaraComponent_SetMaxSimTime_Params params {};
	params.InMaxTime = InMaxTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566490
//		Name   -> Function Niagara.NiagaraComponent.SetForceSolo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInForceSolo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetForceSolo");

	UNiagaraComponent_SetForceSolo_Params params {};
	params.bInForceSolo = bInForceSolo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566410
//		Name   -> Function Niagara.NiagaraComponent.SetDesiredAge
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InDesiredAge                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetDesiredAge");

	UNiagaraComponent_SetDesiredAge_Params params {};
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566380
//		Name   -> Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInCanRenderWhileSeeking                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking");

	UNiagaraComponent_SetCanRenderWhileSeeking_Params params {};
	params.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005662F0
//		Name   -> Function Niagara.NiagaraComponent.SetAutoDestroy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInAutoDestroy                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAutoDestroy");

	UNiagaraComponent_SetAutoDestroy_Params params {};
	params.bInAutoDestroy = bInAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566160
//		Name   -> Function Niagara.NiagaraComponent.SetAutoAttachmentParameters
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_EAttachmentRule                             LocationRule                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_EAttachmentRule                             RotationRule                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_EAttachmentRule                             ScaleRule                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAutoAttachmentParameters(class USceneComponent* Parent, const struct FName& SocketName, Engine_EAttachmentRule LocationRule, Engine_EAttachmentRule RotationRule, Engine_EAttachmentRule ScaleRule)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAutoAttachmentParameters");

	UNiagaraComponent_SetAutoAttachmentParameters_Params params {};
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005660E0
//		Name   -> Function Niagara.NiagaraComponent.SetAsset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UNiagaraSystem*                              InAsset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAsset");

	UNiagaraComponent_SetAsset_Params params {};
	params.InAsset = InAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00566060
//		Name   -> Function Niagara.NiagaraComponent.SetAgeUpdateMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Niagara_ENiagaraAgeUpdateMode                      InAgeUpdateMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SetAgeUpdateMode(Niagara_ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAgeUpdateMode");

	UNiagaraComponent_SetAgeUpdateMode_Params params {};
	params.InAgeUpdateMode = InAgeUpdateMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00565FE0
//		Name   -> Function Niagara.NiagaraComponent.SeekToDesiredAge
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InDesiredAge                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SeekToDesiredAge");

	UNiagaraComponent_SeekToDesiredAge_Params params {};
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00565FC0
//		Name   -> Function Niagara.NiagaraComponent.ResetSystem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UNiagaraComponent::ResetSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ResetSystem");

	UNiagaraComponent_ResetSystem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00565FA0
//		Name   -> Function Niagara.NiagaraComponent.ReinitializeSystem
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UNiagaraComponent::ReinitializeSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ReinitializeSystem");

	UNiagaraComponent_ReinitializeSystem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00565F70
//		Name   -> Function Niagara.NiagaraComponent.IsPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::IsPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.IsPaused");

	UNiagaraComponent_IsPaused_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00565F40
//		Name   -> Function Niagara.NiagaraComponent.GetSeekDelta
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetSeekDelta()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSeekDelta");

	UNiagaraComponent_GetSeekDelta_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00565CC0
//		Name   -> Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InEmitterName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InValueName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly");

	UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params params {};
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00565E00
//		Name   -> Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InEmitterName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InValueName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly");

	UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params params {};
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00565BD0
//		Name   -> Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InEmitterName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly");

	UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params params {};
	params.InEmitterName = InEmitterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00565BA0
//		Name   -> Function Niagara.NiagaraComponent.GetMaxSimTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetMaxSimTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetMaxSimTime");

	UNiagaraComponent_GetMaxSimTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00565B70
//		Name   -> Function Niagara.NiagaraComponent.GetForceSolo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraComponent::GetForceSolo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetForceSolo");

	UNiagaraComponent_GetForceSolo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00565B40
//		Name   -> Function Niagara.NiagaraComponent.GetDesiredAge
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraComponent::GetDesiredAge()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDesiredAge");

	UNiagaraComponent_GetDesiredAge_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00565B20
//		Name   -> Function Niagara.NiagaraComponent.GetAsset
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UNiagaraSystem*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraSystem* UNiagaraComponent::GetAsset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAsset");

	UNiagaraComponent_GetAsset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00565AF0
//		Name   -> Function Niagara.NiagaraComponent.GetAgeUpdateMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		Niagara_ENiagaraAgeUpdateMode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Niagara_ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAgeUpdateMode");

	UNiagaraComponent_GetAgeUpdateMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00565A30
//		Name   -> Function Niagara.NiagaraComponent.AdvanceSimulationByTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              SimulateTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TickDeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulationByTime");

	UNiagaraComponent_AdvanceSimulationByTime_Params params {};
	params.SimulateTime = SimulateTime;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00565960
//		Name   -> Function Niagara.NiagaraComponent.AdvanceSimulation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TickCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TickDeltaSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraComponent::AdvanceSimulation(int TickCount, float TickDeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulation");

	UNiagaraComponent_AdvanceSimulation_Params params {};
	params.TickCount = TickCount;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNiagaraComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

	READ_PTR_FULL(Asset, UNiagaraSystem);
}

void UNiagaraComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

	DELE_PTR_FULL(Asset);
}

void UNiagaraDataInterfaceCurveBase::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceCurveBase::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceCollisionQuery::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceCollisionQuery::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceColorCurve::AfterRead()
{
	UNiagaraDataInterfaceCurveBase::AfterRead();

}

void UNiagaraDataInterfaceColorCurve::BeforeDelete()
{
	UNiagaraDataInterfaceCurveBase::BeforeDelete();

}

void UNiagaraDataInterfaceCurlNoise::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceCurlNoise::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceCurve::AfterRead()
{
	UNiagaraDataInterfaceCurveBase::AfterRead();

}

void UNiagaraDataInterfaceCurve::BeforeDelete()
{
	UNiagaraDataInterfaceCurveBase::BeforeDelete();

}

void UNiagaraDataInterfaceSimpleCounter::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

}

void UNiagaraDataInterfaceSimpleCounter::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

}

void UNiagaraDataInterfaceSkeletalMesh::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(DefaultMesh, USkeletalMesh);
	READ_PTR_FULL(Source, AActor);
}

void UNiagaraDataInterfaceSkeletalMesh::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(DefaultMesh);
	DELE_PTR_FULL(Source);
}

void UNiagaraDataInterfaceSpline::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Source, AActor);
}

void UNiagaraDataInterfaceSpline::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Source);
}

void UNiagaraDataInterfaceStaticMesh::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(DefaultMesh, UStaticMesh);
	READ_PTR_FULL(Source, AActor);
}

void UNiagaraDataInterfaceStaticMesh::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(DefaultMesh);
	DELE_PTR_FULL(Source);
}

void UNiagaraDataInterfaceTexture::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Texture, UTexture);
}

void UNiagaraDataInterfaceTexture::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Texture);
}

void UNiagaraDataInterfaceVector2DCurve::AfterRead()
{
	UNiagaraDataInterfaceCurveBase::AfterRead();

}

void UNiagaraDataInterfaceVector2DCurve::BeforeDelete()
{
	UNiagaraDataInterfaceCurveBase::BeforeDelete();

}

void UNiagaraDataInterfaceVector4Curve::AfterRead()
{
	UNiagaraDataInterfaceCurveBase::AfterRead();

}

void UNiagaraDataInterfaceVector4Curve::BeforeDelete()
{
	UNiagaraDataInterfaceCurveBase::BeforeDelete();

}

void UNiagaraDataInterfaceVectorCurve::AfterRead()
{
	UNiagaraDataInterfaceCurveBase::AfterRead();

}

void UNiagaraDataInterfaceVectorCurve::BeforeDelete()
{
	UNiagaraDataInterfaceCurveBase::BeforeDelete();

}

void UNiagaraDataInterfaceVectorField::AfterRead()
{
	UNiagaraDataInterface::AfterRead();

	READ_PTR_FULL(Field, UVectorField);
}

void UNiagaraDataInterfaceVectorField::BeforeDelete()
{
	UNiagaraDataInterface::BeforeDelete();

	DELE_PTR_FULL(Field);
}

void UNiagaraEditorDataBase::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraEditorDataBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraEmitter::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(GPUComputeScript, UNiagaraScript);
}

void UNiagaraEmitter::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(GPUComputeScript);
}

void UNiagaraEventReceiverEmitterAction::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraEventReceiverEmitterAction::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraEventReceiverEmitterAction_SpawnParticles::AfterRead()
{
	UNiagaraEventReceiverEmitterAction::AfterRead();

}

void UNiagaraEventReceiverEmitterAction_SpawnParticles::BeforeDelete()
{
	UNiagaraEventReceiverEmitterAction::BeforeDelete();

}

// Function:
//		Offset -> 0x0056A9A0
//		Name   -> Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UNiagaraSystem*                              SystemTemplate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraComponent*                           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached");

	UNiagaraFunctionLibrary_SpawnSystemAttached_Params params {};
	params.SystemTemplate = SystemTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0056A810
//		Name   -> Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraSystem*                              SystemTemplate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraComponent*                           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation");

	UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SystemTemplate = SystemTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00569D70
//		Name   -> Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraParameterCollection*                 Collection                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNiagaraParameterCollectionInstance*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection");

	UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UNiagaraFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UNiagaraFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UNiagaraRendererProperties::AfterRead()
{
	UNiagaraMergeable::AfterRead();

}

void UNiagaraRendererProperties::BeforeDelete()
{
	UNiagaraMergeable::BeforeDelete();

}

void UNiagaraLightRendererProperties::AfterRead()
{
	UNiagaraRendererProperties::AfterRead();

}

void UNiagaraLightRendererProperties::BeforeDelete()
{
	UNiagaraRendererProperties::BeforeDelete();

}

void UNiagaraMeshRendererProperties::AfterRead()
{
	UNiagaraRendererProperties::AfterRead();

	READ_PTR_FULL(ParticleMesh, UStaticMesh);
}

void UNiagaraMeshRendererProperties::BeforeDelete()
{
	UNiagaraRendererProperties::BeforeDelete();

	DELE_PTR_FULL(ParticleMesh);
}

// Function:
//		Offset -> 0x0056A720
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter");

	UNiagaraParameterCollectionInstance_SetVectorParameter_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0056A630
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter");

	UNiagaraParameterCollectionInstance_SetVector4Parameter_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0056A560
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter");

	UNiagaraParameterCollectionInstance_SetVector2DParameter_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0056A480
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FQuat                                       InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter");

	UNiagaraParameterCollectionInstance_SetQuatParameter_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0056A3A0
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetIntParameter(const struct FString& InVariableName, int InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter");

	UNiagaraParameterCollectionInstance_SetIntParameter_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0056A2C0
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetFloatParameter(const struct FString& InVariableName, float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter");

	UNiagaraParameterCollectionInstance_SetFloatParameter_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0056A1E0
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter");

	UNiagaraParameterCollectionInstance_SetColorParameter_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0056A100
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNiagaraParameterCollectionInstance::SetBoolParameter(const struct FString& InVariableName, bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter");

	UNiagaraParameterCollectionInstance_SetBoolParameter_Params params {};
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0056A040
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter");

	UNiagaraParameterCollectionInstance_GetVectorParameter_Params params {};
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00569F90
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter");

	UNiagaraParameterCollectionInstance_GetVector4Parameter_Params params {};
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00569EE0
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter");

	UNiagaraParameterCollectionInstance_GetVector2DParameter_Params params {};
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00569E30
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FQuat                                       ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter");

	UNiagaraParameterCollectionInstance_GetQuatParameter_Params params {};
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00569CC0
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UNiagaraParameterCollectionInstance::GetIntParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter");

	UNiagaraParameterCollectionInstance_GetIntParameter_Params params {};
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00569C10
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNiagaraParameterCollectionInstance::GetFloatParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter");

	UNiagaraParameterCollectionInstance_GetFloatParameter_Params params {};
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00569B60
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter");

	UNiagaraParameterCollectionInstance_GetColorParameter_Params params {};
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00569AB0
//		Name   -> Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InVariableName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNiagaraParameterCollectionInstance::GetBoolParameter(const struct FString& InVariableName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter");

	UNiagaraParameterCollectionInstance_GetBoolParameter_Params params {};
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UNiagaraParameterCollectionInstance::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Collection, UNiagaraParameterCollection);
}

void UNiagaraParameterCollectionInstance::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Collection);
}

void UNiagaraParameterCollection::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(DefaultInstance, UNiagaraParameterCollectionInstance);
}

void UNiagaraParameterCollection::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(DefaultInstance);
}

void UNiagaraRibbonRendererProperties::AfterRead()
{
	UNiagaraRendererProperties::AfterRead();

	READ_PTR_FULL(Material, UMaterialInterface);
}

void UNiagaraRibbonRendererProperties::BeforeDelete()
{
	UNiagaraRendererProperties::BeforeDelete();

	DELE_PTR_FULL(Material);
}

// Function:
//		Offset -> 0x0056FBD0
//		Name   -> Function Niagara.NiagaraScript.OnCompilationComplete
//		Flags  -> (Final, Native, Public)
void UNiagaraScript::OnCompilationComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraScript.OnCompilationComplete");

	UNiagaraScript_OnCompilationComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNiagaraScript::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraScript::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraScriptSourceBase::AfterRead()
{
	UObject::AfterRead();

}

void UNiagaraScriptSourceBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UNiagaraSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UNiagaraSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UNiagaraSpriteRendererProperties::AfterRead()
{
	UNiagaraRendererProperties::AfterRead();

	READ_PTR_FULL(Material, UMaterialInterface);
}

void UNiagaraSpriteRendererProperties::BeforeDelete()
{
	UNiagaraRendererProperties::BeforeDelete();

	DELE_PTR_FULL(Material);
}

void UNiagaraSystem::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(SystemSpawnScript, UNiagaraScript);
	READ_PTR_FULL(SystemUpdateScript, UNiagaraScript);
}

void UNiagaraSystem::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(SystemSpawnScript);
	DELE_PTR_FULL(SystemUpdateScript);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
