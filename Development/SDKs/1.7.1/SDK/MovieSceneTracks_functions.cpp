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

void FMovieSceneTransformMask::AfterRead()
{
}

void FMovieSceneTransformMask::BeforeDelete()
{
}

void FMovieSceneCameraShakeSectionData::AfterRead()
{
	READ_PTR_FULL(ShakeClass, UClass);
}

void FMovieSceneCameraShakeSectionData::BeforeDelete()
{
	DELE_PTR_FULL(ShakeClass);
}

void FMovieSceneActorReferenceKey::AfterRead()
{
}

void FMovieSceneActorReferenceKey::BeforeDelete()
{
}

void FMovieSceneActorReferenceData::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneActorReferenceData::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneCameraAnimSectionData::AfterRead()
{
	READ_PTR_FULL(CameraAnim, UCameraAnim);
}

void FMovieSceneCameraAnimSectionData::BeforeDelete()
{
	DELE_PTR_FULL(CameraAnim);
}

void FVectorParameterNameAndCurves::AfterRead()
{
}

void FVectorParameterNameAndCurves::BeforeDelete()
{
}

void FMovieSceneEvent::AfterRead()
{
}

void FMovieSceneEvent::BeforeDelete()
{
}

void FMovieSceneStringChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneStringChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieScene3DAttachSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScene3DAttachSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieScene3DPathSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScene3DPathSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieScene3DTransformKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DTransformKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieScene3DScaleKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DScaleKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FScalarParameterNameAndCurve::AfterRead()
{
}

void FScalarParameterNameAndCurve::BeforeDelete()
{
}

void FColorParameterNameAndCurves::AfterRead()
{
}

void FColorParameterNameAndCurves::BeforeDelete()
{
}

void FMovieSceneParameterSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneMaterialParameterCollectionTemplate::AfterRead()
{
	FMovieSceneParameterSectionTemplate::AfterRead();

	READ_PTR_FULL(MPC, UMaterialParameterCollection);
}

void FMovieSceneMaterialParameterCollectionTemplate::BeforeDelete()
{
	FMovieSceneParameterSectionTemplate::BeforeDelete();

	DELE_PTR_FULL(MPC);
}

void FMovieSceneObjectPropertyTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneObjectPropertyTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneComponentMaterialSectionTemplate::AfterRead()
{
	FMovieSceneParameterSectionTemplate::AfterRead();

}

void FMovieSceneComponentMaterialSectionTemplate::BeforeDelete()
{
	FMovieSceneParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneParticleParameterSectionTemplate::AfterRead()
{
	FMovieSceneParameterSectionTemplate::AfterRead();

}

void FMovieSceneParticleParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneParticleChannel::AfterRead()
{
	FMovieSceneByteChannel::AfterRead();

}

void FMovieSceneParticleChannel::BeforeDelete()
{
	FMovieSceneByteChannel::BeforeDelete();

}

void FMovieSceneParticleSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneParticleSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieScene3DTransformTemplateData::AfterRead()
{
}

void FMovieScene3DTransformTemplateData::BeforeDelete()
{
}

void FMovieSceneTransformPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneTransformPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneVectorPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneVectorPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneEventParameters::AfterRead()
{
}

void FMovieSceneEventParameters::BeforeDelete()
{
}

void FMovieScene3DRotationKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DRotationKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieScene3DLocationKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DLocationKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieSceneAdditiveCameraAnimationTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneAdditiveCameraAnimationTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneCameraAnimSectionTemplate::AfterRead()
{
	FMovieSceneAdditiveCameraAnimationTemplate::AfterRead();

}

void FMovieSceneCameraAnimSectionTemplate::BeforeDelete()
{
	FMovieSceneAdditiveCameraAnimationTemplate::BeforeDelete();

}

void FMovieSceneCameraCutSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneCameraCutSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneColorKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieSceneColorKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieSceneColorSectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneColorSectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneEventTemplateBase::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneEventTemplateBase::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneEventRepeaterTemplate::AfterRead()
{
	FMovieSceneEventTemplateBase::AfterRead();

}

void FMovieSceneEventRepeaterTemplate::BeforeDelete()
{
	FMovieSceneEventTemplateBase::BeforeDelete();

}

void FMovieSceneEventTriggerTemplate::AfterRead()
{
	FMovieSceneEventTemplateBase::AfterRead();

}

void FMovieSceneEventTriggerTemplate::BeforeDelete()
{
	FMovieSceneEventTemplateBase::BeforeDelete();

}

void FMovieScenePrimitiveMaterialTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScenePrimitiveMaterialTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FEventPayload::AfterRead()
{
}

void FEventPayload::BeforeDelete()
{
}

void FMovieSceneEventSectionData::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneEventSectionData::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneSkeletalAnimationParams::AfterRead()
{
	READ_PTR_FULL(Animation, UAnimSequenceBase);
}

void FMovieSceneSkeletalAnimationParams::BeforeDelete()
{
	DELE_PTR_FULL(Animation);
}

void FMovieSceneSkeletalAnimationSectionTemplateParameters::AfterRead()
{
	FMovieSceneSkeletalAnimationParams::AfterRead();

}

void FMovieSceneSkeletalAnimationSectionTemplateParameters::BeforeDelete()
{
	FMovieSceneSkeletalAnimationParams::BeforeDelete();

}

void FMovieSceneSkeletalAnimationSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneSkeletalAnimationSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneEventChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneEventChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneEventSectionTemplate::AfterRead()
{
	FMovieSceneEventTemplateBase::AfterRead();

}

void FMovieSceneEventSectionTemplate::BeforeDelete()
{
	FMovieSceneEventTemplateBase::BeforeDelete();

}

void FMovieSceneFadeSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneFadeSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneLevelVisibilitySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneLevelVisibilitySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneComponentTransformSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneComponentTransformSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneActorReferenceSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneActorReferenceSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneAudioSectionTemplateData::AfterRead()
{
	READ_PTR_FULL(Sound, USoundBase);
	READ_PTR_FULL(AttenuationSettings, USoundAttenuation);
}

void FMovieSceneAudioSectionTemplateData::BeforeDelete()
{
	DELE_PTR_FULL(Sound);
	DELE_PTR_FULL(AttenuationSettings);
}

void FMovieSceneAudioSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneAudioSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneCameraShakeSectionTemplate::AfterRead()
{
	FMovieSceneAdditiveCameraAnimationTemplate::AfterRead();

}

void FMovieSceneCameraShakeSectionTemplate::BeforeDelete()
{
	FMovieSceneAdditiveCameraAnimationTemplate::BeforeDelete();

}

void FMovieSceneEulerTransformPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneEulerTransformPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneVectorKeyStructBase::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieSceneVectorKeyStructBase::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieSceneVector2DKeyStruct::AfterRead()
{
	FMovieSceneVectorKeyStructBase::AfterRead();

}

void FMovieSceneVector2DKeyStruct::BeforeDelete()
{
	FMovieSceneVectorKeyStructBase::BeforeDelete();

}

void FMovieSceneBoolPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneBoolPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneVisibilitySectionTemplate::AfterRead()
{
	FMovieSceneBoolPropertySectionTemplate::AfterRead();

}

void FMovieSceneVisibilitySectionTemplate::BeforeDelete()
{
	FMovieSceneBoolPropertySectionTemplate::BeforeDelete();

}

void FMovieSceneStringPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneStringPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneIntegerPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneIntegerPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneEnumPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneEnumPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneBytePropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneBytePropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneFloatPropertySectionTemplate::AfterRead()
{
	FMovieScenePropertySectionTemplate::AfterRead();

}

void FMovieSceneFloatPropertySectionTemplate::BeforeDelete()
{
	FMovieScenePropertySectionTemplate::BeforeDelete();

}

void FMovieSceneVector4KeyStruct::AfterRead()
{
	FMovieSceneVectorKeyStructBase::AfterRead();

}

void FMovieSceneVector4KeyStruct::BeforeDelete()
{
	FMovieSceneVectorKeyStructBase::BeforeDelete();

}

void FMovieSceneVectorKeyStruct::AfterRead()
{
	FMovieSceneVectorKeyStructBase::AfterRead();

}

void FMovieSceneVectorKeyStruct::BeforeDelete()
{
	FMovieSceneVectorKeyStructBase::BeforeDelete();

}

void FMovieSceneSlomoSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneSlomoSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneSpawnSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneSpawnSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
//		Flags  -> (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin");

	UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneTransformOrigin::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneTransformOrigin::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x01494F40
//		Name   -> Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FMovieSceneObjectBindingID                  InConstraintBindingID                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID");

	UMovieScene3DConstraintSection_SetConstraintBindingID_Params params {};
	params.InConstraintBindingID = InConstraintBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01494EC0
//		Name   -> Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FMovieSceneObjectBindingID                  ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID");

	UMovieScene3DConstraintSection_GetConstraintBindingID_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieScene3DConstraintSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieScene3DConstraintSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScene3DAttachSection::AfterRead()
{
	UMovieScene3DConstraintSection::AfterRead();

}

void UMovieScene3DAttachSection::BeforeDelete()
{
	UMovieScene3DConstraintSection::BeforeDelete();

}

void UMovieScene3DConstraintTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieScene3DConstraintTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UMovieScene3DAttachTrack::AfterRead()
{
	UMovieScene3DConstraintTrack::AfterRead();

}

void UMovieScene3DAttachTrack::BeforeDelete()
{
	UMovieScene3DConstraintTrack::BeforeDelete();

}

void UMovieScene3DPathSection::AfterRead()
{
	UMovieScene3DConstraintSection::AfterRead();

}

void UMovieScene3DPathSection::BeforeDelete()
{
	UMovieScene3DConstraintSection::BeforeDelete();

}

void UMovieScene3DPathTrack::AfterRead()
{
	UMovieScene3DConstraintTrack::AfterRead();

}

void UMovieScene3DPathTrack::BeforeDelete()
{
	UMovieScene3DConstraintTrack::BeforeDelete();

}

void UMovieScene3DTransformSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieScene3DTransformSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScenePropertyTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

	READ_PTR_FULL(SectionToKey, UMovieSceneSection);
}

void UMovieScenePropertyTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

	DELE_PTR_FULL(SectionToKey);
}

void UMovieScene3DTransformTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieScene3DTransformTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneCameraShakeSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(ShakeClass, UClass);
}

void UMovieSceneCameraShakeSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(ShakeClass);
}

void UMovieSceneCameraShakeTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneCameraShakeTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

// Function:
//		Offset -> 0x0149AAA0
//		Name   -> Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InShotDisplayName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCinematicShotSection::SetShotDisplayName(const struct FString& InShotDisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName");

	UMovieSceneCinematicShotSection_SetShotDisplayName_Params params {};
	params.InShotDisplayName = InShotDisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0149A900
//		Name   -> Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMovieSceneCinematicShotSection::GetShotDisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName");

	UMovieSceneCinematicShotSection_GetShotDisplayName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneCinematicShotSection::AfterRead()
{
	UMovieSceneSubSection::AfterRead();

}

void UMovieSceneCinematicShotSection::BeforeDelete()
{
	UMovieSceneSubSection::BeforeDelete();

}

void UMovieSceneCinematicShotTrack::AfterRead()
{
	UMovieSceneSubTrack::AfterRead();

}

void UMovieSceneCinematicShotTrack::BeforeDelete()
{
	UMovieSceneSubTrack::BeforeDelete();

}

void UMovieSceneColorSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneColorSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneColorTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneColorTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneActorReferenceSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneActorReferenceSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneActorReferenceTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneActorReferenceTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

// Function:
//		Offset -> 0x01495080
//		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FFrameNumber                                InStartOffset                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset");

	UMovieSceneAudioSection_SetStartOffset_Params params {};
	params.InStartOffset = InStartOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01495000
//		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.SetSound
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USoundBase*                                  InSound                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.SetSound");

	UMovieSceneAudioSection_SetSound_Params params {};
	params.InSound = InSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01494F20
//		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FFrameNumber                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset");

	UMovieSceneAudioSection_GetStartOffset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01494F00
//		Name   -> Function MovieSceneTracks.MovieSceneAudioSection.GetSound
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class USoundBase*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USoundBase* UMovieSceneAudioSection::GetSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneAudioSection.GetSound");

	UMovieSceneAudioSection_GetSound_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneAudioSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(Sound, USoundBase);
	READ_PTR_FULL(AttenuationSettings, USoundAttenuation);
}

void UMovieSceneAudioSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(Sound);
	DELE_PTR_FULL(AttenuationSettings);
}

void UMovieSceneAudioTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneAudioTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneBoolSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneBoolSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneBoolTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneBoolTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneByteSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneByteSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneByteTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

	READ_PTR_FULL(Enum, UEnum);
}

void UMovieSceneByteTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

	DELE_PTR_FULL(Enum);
}

void UMovieSceneCameraAnimSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(CameraAnim, UCameraAnim);
}

void UMovieSceneCameraAnimSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(CameraAnim);
}

void UMovieSceneCameraAnimTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneCameraAnimTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

// Function:
//		Offset -> 0x01494F40
//		Name   -> Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FMovieSceneObjectBindingID                  InCameraBindingID                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID");

	UMovieSceneCameraCutSection_SetCameraBindingID_Params params {};
	params.InCameraBindingID = InCameraBindingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01494EC0
//		Name   -> Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FMovieSceneObjectBindingID                  ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID");

	UMovieSceneCameraCutSection_GetCameraBindingID_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneCameraCutSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneCameraCutSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneCameraCutTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneCameraCutTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneIntegerSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneIntegerSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneIntegerTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneIntegerTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

// Function:
//		Offset -> 0x0149AB90
//		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		MovieSceneTracks_ELevelVisibility                  InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneLevelVisibilitySection::SetVisibility(MovieSceneTracks_ELevelVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility");

	UMovieSceneLevelVisibilitySection_SetVisibility_Params params {};
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0149A9F0
//		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FName>                               InLevelNames                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<struct FName> InLevelNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames");

	UMovieSceneLevelVisibilitySection_SetLevelNames_Params params {};
	params.InLevelNames = InLevelNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0149A9C0
//		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MovieSceneTracks_ELevelVisibility                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MovieSceneTracks_ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility");

	UMovieSceneLevelVisibilitySection_GetVisibility_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0149A8D0
//		Name   -> Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FName>                               ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<struct FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames");

	UMovieSceneLevelVisibilitySection_GetLevelNames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneLevelVisibilitySection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneLevelVisibilitySection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneLevelVisibilityTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneLevelVisibilityTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneMaterialTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneMaterialTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneMaterialParameterCollectionTrack::AfterRead()
{
	UMovieSceneMaterialTrack::AfterRead();

	READ_PTR_FULL(MPC, UMaterialParameterCollection);
}

void UMovieSceneMaterialParameterCollectionTrack::BeforeDelete()
{
	UMovieSceneMaterialTrack::BeforeDelete();

	DELE_PTR_FULL(MPC);
}

void UMovieSceneComponentMaterialTrack::AfterRead()
{
	UMovieSceneMaterialTrack::AfterRead();

}

void UMovieSceneComponentMaterialTrack::BeforeDelete()
{
	UMovieSceneMaterialTrack::BeforeDelete();

}

void UMovieSceneObjectPropertySection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneObjectPropertySection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneObjectPropertyTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

	READ_PTR_FULL(PropertyClass, UClass);
}

void UMovieSceneObjectPropertyTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

	DELE_PTR_FULL(PropertyClass);
}

void UMovieSceneEnumSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneEnumSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneEnumTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

	READ_PTR_FULL(Enum, UEnum);
}

void UMovieSceneEnumTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

	DELE_PTR_FULL(Enum);
}

void UMovieSceneEulerTransformTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneEulerTransformTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneEventSectionBase::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneEventSectionBase::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneSpawnTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieSceneSpawnTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UMovieSceneStringSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneStringSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneStringTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneStringTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneTransformTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneTransformTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneVectorSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneVectorSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneVectorTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneVectorTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneVisibilityTrack::AfterRead()
{
	UMovieSceneBoolTrack::AfterRead();

}

void UMovieSceneVisibilityTrack::BeforeDelete()
{
	UMovieSceneBoolTrack::BeforeDelete();

}

void UMovieSceneEventRepeaterSection::AfterRead()
{
	UMovieSceneEventSectionBase::AfterRead();

}

void UMovieSceneEventRepeaterSection::BeforeDelete()
{
	UMovieSceneEventSectionBase::BeforeDelete();

}

void UMovieSceneEventSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneEventSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneEventTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneEventTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneEventTriggerSection::AfterRead()
{
	UMovieSceneEventSectionBase::AfterRead();

}

void UMovieSceneEventTriggerSection::BeforeDelete()
{
	UMovieSceneEventSectionBase::BeforeDelete();

}

void UMovieSceneFloatSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneFloatSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneFadeSection::AfterRead()
{
	UMovieSceneFloatSection::AfterRead();

}

void UMovieSceneFadeSection::BeforeDelete()
{
	UMovieSceneFloatSection::BeforeDelete();

}

void UMovieSceneFloatTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneFloatTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneFadeTrack::AfterRead()
{
	UMovieSceneFloatTrack::AfterRead();

}

void UMovieSceneFadeTrack::BeforeDelete()
{
	UMovieSceneFloatTrack::BeforeDelete();

}

void UMovieSceneParameterSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneParameterSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneParticleParameterTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneParticleParameterTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneParticleSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneParticleSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneParticleTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneParticleTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieScenePrimitiveMaterialSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieScenePrimitiveMaterialSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScenePrimitiveMaterialTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieScenePrimitiveMaterialTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneSkeletalAnimationSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(AnimSequence, UAnimSequence);
	READ_PTR_FULL(Animation, UAnimSequenceBase);
}

void UMovieSceneSkeletalAnimationSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(AnimSequence);
	DELE_PTR_FULL(Animation);
}

void UMovieSceneSkeletalAnimationTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneSkeletalAnimationTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneSlomoSection::AfterRead()
{
	UMovieSceneFloatSection::AfterRead();

}

void UMovieSceneSlomoSection::BeforeDelete()
{
	UMovieSceneFloatSection::BeforeDelete();

}

void UMovieSceneSlomoTrack::AfterRead()
{
	UMovieSceneFloatTrack::AfterRead();

}

void UMovieSceneSlomoTrack::BeforeDelete()
{
	UMovieSceneFloatTrack::BeforeDelete();

}

void UMovieSceneSpawnSection::AfterRead()
{
	UMovieSceneBoolSection::AfterRead();

}

void UMovieSceneSpawnSection::BeforeDelete()
{
	UMovieSceneBoolSection::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
