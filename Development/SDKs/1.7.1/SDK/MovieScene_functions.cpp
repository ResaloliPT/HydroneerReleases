﻿// Name: Hydroneer, Version: 1.7.1

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

void FMovieSceneTrackEvalOptions::AfterRead()
{
}

void FMovieSceneTrackEvalOptions::BeforeDelete()
{
}

void FMovieSceneSectionEvalOptions::AfterRead()
{
}

void FMovieSceneSectionEvalOptions::BeforeDelete()
{
}

void FMovieSceneEasingSettings::AfterRead()
{
}

void FMovieSceneEasingSettings::BeforeDelete()
{
}

void FMovieSceneFrameRange::AfterRead()
{
}

void FMovieSceneFrameRange::BeforeDelete()
{
}

void FOptionalMovieSceneBlendType::AfterRead()
{
}

void FOptionalMovieSceneBlendType::BeforeDelete()
{
}

void FMovieSceneTrackIdentifier::AfterRead()
{
}

void FMovieSceneTrackIdentifier::BeforeDelete()
{
}

void FMovieSceneSegment::AfterRead()
{
}

void FMovieSceneSegment::BeforeDelete()
{
}

void FMovieSceneEvaluationTrackSegments::AfterRead()
{
}

void FMovieSceneEvaluationTrackSegments::BeforeDelete()
{
}

void FSectionEvaluationDataTree::AfterRead()
{
}

void FSectionEvaluationDataTree::BeforeDelete()
{
}

void FMovieSceneEvalTemplatePtr::AfterRead()
{
}

void FMovieSceneEvalTemplatePtr::BeforeDelete()
{
}

void FMovieSceneTrackImplementationPtr::AfterRead()
{
}

void FMovieSceneTrackImplementationPtr::BeforeDelete()
{
}

void FMovieSceneEvaluationGroupLUTIndex::AfterRead()
{
}

void FMovieSceneEvaluationGroupLUTIndex::BeforeDelete()
{
}

void FMovieSceneSequenceID::AfterRead()
{
}

void FMovieSceneSequenceID::BeforeDelete()
{
}

void FMovieSceneSequenceInstanceDataPtr::AfterRead()
{
}

void FMovieSceneSequenceInstanceDataPtr::BeforeDelete()
{
}

void FMovieSceneEvaluationTemplateSerialNumber::AfterRead()
{
}

void FMovieSceneEvaluationTemplateSerialNumber::BeforeDelete()
{
}

void FMovieSceneTrackFieldData::AfterRead()
{
}

void FMovieSceneTrackFieldData::BeforeDelete()
{
}

void FMovieSceneSubSectionFieldData::AfterRead()
{
}

void FMovieSceneSubSectionFieldData::BeforeDelete()
{
}

void FMovieSceneTemplateGenerationLedger::AfterRead()
{
}

void FMovieSceneTemplateGenerationLedger::BeforeDelete()
{
}

void FMovieSceneSequenceHierarchyNode::AfterRead()
{
}

void FMovieSceneSequenceHierarchyNode::BeforeDelete()
{
}

void FMovieSceneSequenceTransform::AfterRead()
{
}

void FMovieSceneSequenceTransform::BeforeDelete()
{
}

void FMovieSceneSubSequenceData::AfterRead()
{
}

void FMovieSceneSubSequenceData::BeforeDelete()
{
}

void FMovieSceneSequenceHierarchy::AfterRead()
{
}

void FMovieSceneSequenceHierarchy::BeforeDelete()
{
}

void FMovieSceneEvaluationTrack::AfterRead()
{
	READ_PTR_FULL(SourceTrack, UMovieSceneTrack);
}

void FMovieSceneEvaluationTrack::BeforeDelete()
{
	DELE_PTR_FULL(SourceTrack);
}

void FMovieSceneEvaluationFieldTrackPtr::AfterRead()
{
}

void FMovieSceneEvaluationFieldTrackPtr::BeforeDelete()
{
}

void FMovieSceneSegmentIdentifier::AfterRead()
{
}

void FMovieSceneSegmentIdentifier::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldSegmentPtr::AfterRead()
{
	FMovieSceneEvaluationFieldTrackPtr::AfterRead();

}

void FMovieSceneEvaluationFieldSegmentPtr::BeforeDelete()
{
	FMovieSceneEvaluationFieldTrackPtr::BeforeDelete();

}

void FMovieSceneEvaluationGroup::AfterRead()
{
}

void FMovieSceneEvaluationGroup::BeforeDelete()
{
}

void FMovieSceneEvaluationKey::AfterRead()
{
}

void FMovieSceneEvaluationKey::BeforeDelete()
{
}

void FMovieSceneOrderedEvaluationKey::AfterRead()
{
}

void FMovieSceneOrderedEvaluationKey::BeforeDelete()
{
}

void FMovieSceneEvaluationMetaData::AfterRead()
{
}

void FMovieSceneEvaluationMetaData::BeforeDelete()
{
}

void FMovieSceneEvaluationField::AfterRead()
{
}

void FMovieSceneEvaluationField::BeforeDelete()
{
}

void FMovieSceneEvaluationTemplate::AfterRead()
{
}

void FMovieSceneEvaluationTemplate::BeforeDelete()
{
}

void FMovieSceneSequenceLoopCount::AfterRead()
{
}

void FMovieSceneSequenceLoopCount::BeforeDelete()
{
}

void FMovieSceneSequencePlaybackSettings::AfterRead()
{
}

void FMovieSceneSequencePlaybackSettings::BeforeDelete()
{
}

void FMovieSceneSequenceReplProperties::AfterRead()
{
}

void FMovieSceneSequenceReplProperties::BeforeDelete()
{
}

void FMovieSceneMarkedFrame::AfterRead()
{
}

void FMovieSceneMarkedFrame::BeforeDelete()
{
}

void FMovieSceneBinding::AfterRead()
{
}

void FMovieSceneBinding::BeforeDelete()
{
}

void FMovieScenePossessable::AfterRead()
{
	READ_PTR_FULL(PossessedObjectClass, UClass);
}

void FMovieScenePossessable::BeforeDelete()
{
	DELE_PTR_FULL(PossessedObjectClass);
}

void FMovieSceneSpawnable::AfterRead()
{
	READ_PTR_FULL(ObjectTemplate, UObject);
}

void FMovieSceneSpawnable::BeforeDelete()
{
	DELE_PTR_FULL(ObjectTemplate);
}

void FMovieSceneObjectBindingID::AfterRead()
{
}

void FMovieSceneObjectBindingID::BeforeDelete()
{
}

void FMovieSceneBindingOverrideData::AfterRead()
{
}

void FMovieSceneBindingOverrideData::BeforeDelete()
{
}

void FMovieSceneSectionParameters::AfterRead()
{
}

void FMovieSceneSectionParameters::BeforeDelete()
{
}

void FMovieSceneEvalTemplateBase::AfterRead()
{
}

void FMovieSceneEvalTemplateBase::BeforeDelete()
{
}

void FMovieSceneEvalTemplate::AfterRead()
{
	FMovieSceneEvalTemplateBase::AfterRead();

}

void FMovieSceneEvalTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplateBase::BeforeDelete();

}

void FMovieSceneChannel::AfterRead()
{
}

void FMovieSceneChannel::BeforeDelete()
{
}

void FMovieSceneBoolChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneBoolChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneTangentData::AfterRead()
{
}

void FMovieSceneTangentData::BeforeDelete()
{
}

void FMovieSceneKeyHandleMap::AfterRead()
{
	FKeyHandleLookupTable::AfterRead();

}

void FMovieSceneKeyHandleMap::BeforeDelete()
{
	FKeyHandleLookupTable::BeforeDelete();

}

void FMovieSceneFloatValue::AfterRead()
{
}

void FMovieSceneFloatValue::BeforeDelete()
{
}

void FMovieSceneFloatChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneFloatChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneIntegerChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

}

void FMovieSceneIntegerChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

}

void FMovieSceneTrackImplementation::AfterRead()
{
	FMovieSceneEvalTemplateBase::AfterRead();

}

void FMovieSceneTrackImplementation::BeforeDelete()
{
	FMovieSceneEvalTemplateBase::BeforeDelete();

}

void FMovieSceneTrackLabels::AfterRead()
{
}

void FMovieSceneTrackLabels::BeforeDelete()
{
}

void FMovieSceneExpansionState::AfterRead()
{
}

void FMovieSceneExpansionState::BeforeDelete()
{
}

void FMovieSceneEditorData::AfterRead()
{
}

void FMovieSceneEditorData::BeforeDelete()
{
}

void FMovieSceneTimecodeSource::AfterRead()
{
}

void FMovieSceneTimecodeSource::BeforeDelete()
{
}

void FMovieSceneByteChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

	READ_PTR_FULL(Enum, UEnum);
}

void FMovieSceneByteChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

	DELE_PTR_FULL(Enum);
}

void FMovieSceneEmptyStruct::AfterRead()
{
}

void FMovieSceneEmptyStruct::BeforeDelete()
{
}

void FMovieSceneEvaluationOperand::AfterRead()
{
}

void FMovieSceneEvaluationOperand::BeforeDelete()
{
}

void FMovieSceneSubSectionData::AfterRead()
{
}

void FMovieSceneSubSectionData::BeforeDelete()
{
}

void FMovieSceneKeyStruct::AfterRead()
{
}

void FMovieSceneKeyStruct::BeforeDelete()
{
}

void FMovieSceneKeyTimeStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieSceneKeyTimeStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FGeneratedMovieSceneKeyStruct::AfterRead()
{
}

void FGeneratedMovieSceneKeyStruct::BeforeDelete()
{
}

void FMovieSceneObjectPathChannelKeyValue::AfterRead()
{
	READ_PTR_FULL(HardPtr, UObject);
}

void FMovieSceneObjectPathChannelKeyValue::BeforeDelete()
{
	DELE_PTR_FULL(HardPtr);
}

void FMovieSceneObjectPathChannel::AfterRead()
{
	FMovieSceneChannel::AfterRead();

	READ_PTR_FULL(PropertyClass, UClass);
}

void FMovieSceneObjectPathChannel::BeforeDelete()
{
	FMovieSceneChannel::BeforeDelete();

	DELE_PTR_FULL(PropertyClass);
}

void FMovieScenePropertySectionData::AfterRead()
{
}

void FMovieScenePropertySectionData::BeforeDelete()
{
}

void FMovieScenePropertySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScenePropertySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FSectionEvaluationData::AfterRead()
{
}

void FSectionEvaluationData::BeforeDelete()
{
}

void FMovieSceneSequenceInstanceData::AfterRead()
{
}

void FMovieSceneSequenceInstanceData::BeforeDelete()
{
}

void FTestMovieSceneEvalTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FTestMovieSceneEvalTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneTrackDisplayOptions::AfterRead()
{
}

void FMovieSceneTrackDisplayOptions::BeforeDelete()
{
}

void FMovieSceneRootEvaluationTemplateInstance::AfterRead()
{
}

void FMovieSceneRootEvaluationTemplateInstance::BeforeDelete()
{
}

void UMovieSceneSignedObject::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneSignedObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneTrack::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneTrack::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

void UMovieSceneNameableTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieSceneNameableTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

// Function:
//		Offset -> 0x013EE560
//		Name   -> Function MovieScene.MovieSceneSection.SetRowIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewRowIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetRowIndex(int NewRowIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetRowIndex");

	UMovieSceneSection_SetRowIndex_Params params {};
	params.NewRowIndex = NewRowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EE4D0
//		Name   -> Function MovieScene.MovieSceneSection.SetPreRollFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InPreRollFrames                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetPreRollFrames(int InPreRollFrames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPreRollFrames");

	UMovieSceneSection_SetPreRollFrames_Params params {};
	params.InPreRollFrames = InPreRollFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EE440
//		Name   -> Function MovieScene.MovieSceneSection.SetPostRollFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InPostRollFrames                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetPostRollFrames(int InPostRollFrames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPostRollFrames");

	UMovieSceneSection_SetPostRollFrames_Params params {};
	params.InPostRollFrames = InPostRollFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EE180
//		Name   -> Function MovieScene.MovieSceneSection.SetOverlapPriority
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewPriority                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetOverlapPriority(int NewPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetOverlapPriority");

	UMovieSceneSection_SetOverlapPriority_Params params {};
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EE0F0
//		Name   -> Function MovieScene.MovieSceneSection.SetIsLocked
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInIsLocked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetIsLocked(bool bInIsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsLocked");

	UMovieSceneSection_SetIsLocked_Params params {};
	params.bInIsLocked = bInIsLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EE060
//		Name   -> Function MovieScene.MovieSceneSection.SetIsActive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInIsActive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetIsActive(bool bInIsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsActive");

	UMovieSceneSection_SetIsActive_Params params {};
	params.bInIsActive = bInIsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED620
//		Name   -> Function MovieScene.MovieSceneSection.IsLocked
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSection::IsLocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsLocked");

	UMovieSceneSection_IsLocked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED5F0
//		Name   -> Function MovieScene.MovieSceneSection.IsActive
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSection::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsActive");

	UMovieSceneSection_IsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED560
//		Name   -> Function MovieScene.MovieSceneSection.GetRowIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetRowIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetRowIndex");

	UMovieSceneSection_GetRowIndex_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED540
//		Name   -> Function MovieScene.MovieSceneSection.GetPreRollFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetPreRollFrames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPreRollFrames");

	UMovieSceneSection_GetPreRollFrames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED520
//		Name   -> Function MovieScene.MovieSceneSection.GetPostRollFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetPostRollFrames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPostRollFrames");

	UMovieSceneSection_GetPostRollFrames_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED2D0
//		Name   -> Function MovieScene.MovieSceneSection.GetOverlapPriority
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetOverlapPriority()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetOverlapPriority");

	UMovieSceneSection_GetOverlapPriority_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneSection::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneSection::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

void UMovieSceneSequence::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneSequence::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

// Function:
//		Offset -> 0x013EE6C0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::StopAtCurrentTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime");

	UMovieSceneSequencePlayer_StopAtCurrentTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EE6A0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Stop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	UMovieSceneSequencePlayer_Stop_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EE5E0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange");

	UMovieSceneSequencePlayer_SetTimeRange_Params params {};
	params.StartTime = StartTime;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EE200
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	UMovieSceneSequencePlayer_SetPlayRate_Params params {};
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EE380
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewStartTime                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              NewEndTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange");

	UMovieSceneSequencePlayer_SetPlaybackRange_Params params {};
	params.NewStartTime = NewStartTime;
	params.NewEndTime = NewEndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EE280
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewPlaybackPosition                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	UMovieSceneSequencePlayer_SetPlaybackPosition_Params params {};
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EDFD0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FFrameRate                                  FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate");

	UMovieSceneSequencePlayer_SetFrameRate_Params params {};
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EDF10
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetFrameRange(int StartFrame, int Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange");

	UMovieSceneSequencePlayer_SetFrameRange_Params params {};
	params.StartFrame = StartFrame;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EDE80
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInDisableCameraCuts                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts");

	UMovieSceneSequencePlayer_SetDisableCameraCuts_Params params {};
	params.bInDisableCameraCuts = bInDisableCameraCuts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED820
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds");

	UMovieSceneSequencePlayer_ScrubToSeconds_Params params {};
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EDDD0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(const struct FString& InLabel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame");

	UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params params {};
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013EDD40
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame");

	UMovieSceneSequencePlayer_ScrubToFrame_Params params {};
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EDD20
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Scrub
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Scrub()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");

	UMovieSceneSequencePlayer_Scrub_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EDC90
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		struct FFrameTime                                  StoppedTime                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::RPC_OnStopEvent(const struct FFrameTime& StoppedTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent");

	UMovieSceneSequencePlayer_RPC_OnStopEvent_Params params {};
	params.StoppedTime = StoppedTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EDBC0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		MovieScene_EUpdatePositionMethod                   Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFrameTime                                  RelevantTime                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(MovieScene_EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent");

	UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params params {};
	params.Method = Method;
	params.RelevantTime = RelevantTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EDB40
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds");

	UMovieSceneSequencePlayer_PlayToSeconds_Params params {};
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EDA90
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::PlayToMarkedFrame(const struct FString& InLabel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame");

	UMovieSceneSequencePlayer_PlayToMarkedFrame_Params params {};
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013EDA00
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame");

	UMovieSceneSequencePlayer_PlayToFrame_Params params {};
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED9E0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayReverse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::PlayReverse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	UMovieSceneSequencePlayer_PlayReverse_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED960
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NumLoops                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayLooping(int NumLoops)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	UMovieSceneSequencePlayer_PlayLooping_Params params {};
	params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED940
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	UMovieSceneSequencePlayer_Play_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED920
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Pause
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	UMovieSceneSequencePlayer_Pause_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED8A0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds");

	UMovieSceneSequencePlayer_JumpToSeconds_Params params {};
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED820
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewPlaybackPosition                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToPosition");

	UMovieSceneSequencePlayer_JumpToPosition_Params params {};
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED770
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::JumpToMarkedFrame(const struct FString& InLabel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame");

	UMovieSceneSequencePlayer_JumpToMarkedFrame_Params params {};
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED6E0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame");

	UMovieSceneSequencePlayer_JumpToFrame_Params params {};
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED6B0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsReversed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::IsReversed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsReversed");

	UMovieSceneSequencePlayer_IsReversed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED680
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsPlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	UMovieSceneSequencePlayer_IsPlaying_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED650
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::IsPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");

	UMovieSceneSequencePlayer_IsPaused_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED5D0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::GoToEndAndStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");

	UMovieSceneSequencePlayer_GoToEndAndStop_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013ED580
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetStartTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FQualifiedFrameTime                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetStartTime");

	UMovieSceneSequencePlayer_GetStartTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED2F0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneSequencePlayer::GetPlayRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	UMovieSceneSequencePlayer_GetPlayRate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED4A0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneSequencePlayer::GetPlaybackStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart");

	UMovieSceneSequencePlayer_GetPlaybackStart_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED3B0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition");

	UMovieSceneSequencePlayer_GetPlaybackPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED320
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd");

	UMovieSceneSequencePlayer_GetPlaybackEnd_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED1F0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FMovieSceneObjectBindingID>          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(class UObject* InObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings");

	UMovieSceneSequencePlayer_GetObjectBindings_Params params {};
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED1C0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetLength
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneSequencePlayer::GetLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetLength");

	UMovieSceneSequencePlayer_GetLength_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED1A0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FFrameRate                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate");

	UMovieSceneSequencePlayer_GetFrameRate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED170
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSequencePlayer::GetFrameDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration");

	UMovieSceneSequencePlayer_GetFrameDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED110
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetEndTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FQualifiedFrameTime                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetEndTime");

	UMovieSceneSequencePlayer_GetEndTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED0D0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FQualifiedFrameTime                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDuration");

	UMovieSceneSequencePlayer_GetDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED0A0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::GetDisableCameraCuts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts");

	UMovieSceneSequencePlayer_GetDisableCameraCuts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ED060
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FQualifiedFrameTime                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime");

	UMovieSceneSequencePlayer_GetCurrentTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ECF60
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMovieSceneObjectBindingID                  ObjectBinding                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UObject*>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");

	UMovieSceneSequencePlayer_GetBoundObjects_Params params {};
	params.ObjectBinding = ObjectBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x013ECF40
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	UMovieSceneSequencePlayer_ChangePlaybackDirection_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMovieSceneSequencePlayer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Sequence, UMovieSceneSequence);
}

void UMovieSceneSequencePlayer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Sequence);
}

void UMovieScenePlaybackClient::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieScenePlaybackClient::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieScene::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

	READ_PTR_FULL(CameraCutTrack, UMovieSceneTrack);
}

void UMovieScene::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

	DELE_PTR_FULL(CameraCutTrack);
}

void UMovieSceneBindingOverrides::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneBindingOverrides::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneBindingOwnerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneBindingOwnerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneBuiltInEasingFunction::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneBuiltInEasingFunction::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneEasingExternalCurve::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Curve, UCurveFloat);
}

void UMovieSceneEasingExternalCurve::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Curve);
}

// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function MovieScene.MovieSceneEasingFunction.OnEvaluate
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              Interp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneEasingFunction::OnEvaluate(float Interp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneEasingFunction.OnEvaluate");

	UMovieSceneEasingFunction_OnEvaluate_Params params {};
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneEasingFunction::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneEasingFunction::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneFolder::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneFolder::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneKeyProxy::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneKeyProxy::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x013EFAD0
//		Name   -> Function MovieScene.MovieSceneSubSection.SetSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSubSection::SetSequence(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.SetSequence");

	UMovieSceneSubSection_SetSequence_Params params {};
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x013EFAA0
//		Name   -> Function MovieScene.MovieSceneSubSection.GetSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMovieSceneSequence*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieSceneSequence* UMovieSceneSubSection::GetSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.GetSequence");

	UMovieSceneSubSection_GetSequence_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneSubSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(SubSequence, UMovieSceneSequence);
}

void UMovieSceneSubSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(SubSequence);
}

void UMovieSceneSubTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneSubTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UTestMovieSceneTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UTestMovieSceneTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UTestMovieSceneSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UTestMovieSceneSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UTestMovieSceneSequence::AfterRead()
{
	UMovieSceneSequence::AfterRead();

	READ_PTR_FULL(MovieScene, UMovieScene);
}

void UTestMovieSceneSequence::BeforeDelete()
{
	UMovieSceneSequence::BeforeDelete();

	DELE_PTR_FULL(MovieScene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
