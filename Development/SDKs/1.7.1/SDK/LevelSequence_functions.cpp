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

void FLevelSequenceObjectReferenceMap::AfterRead()
{
}

void FLevelSequenceObjectReferenceMap::BeforeDelete()
{
}

void FLevelSequenceBindingReference::AfterRead()
{
}

void FLevelSequenceBindingReference::BeforeDelete()
{
}

void FLevelSequenceObject::AfterRead()
{
}

void FLevelSequenceObject::BeforeDelete()
{
}

void FLevelSequenceBindingReferenceArray::AfterRead()
{
}

void FLevelSequenceBindingReferenceArray::BeforeDelete()
{
}

void FLevelSequenceBindingReferences::AfterRead()
{
}

void FLevelSequenceBindingReferences::BeforeDelete()
{
}

void FLevelSequenceSnapshotSettings::AfterRead()
{
}

void FLevelSequenceSnapshotSettings::BeforeDelete()
{
}

void FLevelSequencePlayerSnapshot::AfterRead()
{
	READ_PTR_FULL(CameraComponent, UCameraComponent);
	READ_PTR_FULL(ActiveShot, ULevelSequence);
}

void FLevelSequencePlayerSnapshot::BeforeDelete()
{
	DELE_PTR_FULL(CameraComponent);
	DELE_PTR_FULL(ActiveShot);
}

void FBoundActorProxy::AfterRead()
{
}

void FBoundActorProxy::BeforeDelete()
{
}

void FLevelSequenceLegacyObjectReference::AfterRead()
{
}

void FLevelSequenceLegacyObjectReference::BeforeDelete()
{
}

void UDefaultLevelSequenceInstanceData::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(TransformOriginActor, AActor);
}

void UDefaultLevelSequenceInstanceData::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(TransformOriginActor);
}

void ULevelSequenceMetaData::AfterRead()
{
	UInterface::AfterRead();

}

void ULevelSequenceMetaData::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x0162DE60
//		Name   -> Function LevelSequence.LevelSequence.RemoveMetaDataByClass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequence::RemoveMetaDataByClass(class UClass* InClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");

	ULevelSequence_RemoveMetaDataByClass_Params params {};
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0162DA40
//		Name   -> Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ULevelSequence::FindOrAddMetaDataByClass(class UClass* InClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");

	ULevelSequence_FindOrAddMetaDataByClass_Params params {};
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0162DA40
//		Name   -> Function LevelSequence.LevelSequence.FindMetaDataByClass
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UClass*                                      InClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ULevelSequence::FindMetaDataByClass(class UClass* InClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");

	ULevelSequence_FindMetaDataByClass_Params params {};
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0162DA40
//		Name   -> Function LevelSequence.LevelSequence.CopyMetaData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     InMetaData                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* ULevelSequence::CopyMetaData(class UObject* InMetaData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");

	ULevelSequence_CopyMetaData_Params params {};
	params.InMetaData = InMetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULevelSequence::AfterRead()
{
	UMovieSceneSequence::AfterRead();

	READ_PTR_FULL(MovieScene, UMovieScene);
	READ_PTR_FULL(DirectorClass, UClass);
}

void ULevelSequence::BeforeDelete()
{
	UMovieSceneSequence::BeforeDelete();

	DELE_PTR_FULL(MovieScene);
	DELE_PTR_FULL(DirectorClass);
}

void ULevelSequenceBurnInInitSettings::AfterRead()
{
	UObject::AfterRead();

}

void ULevelSequenceBurnInInitSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0162E200
//		Name   -> Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FSoftClassPath                              InBurnInClass                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void ULevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");

	ULevelSequenceBurnInOptions_SetBurnIn_Params params {};
	params.InBurnInClass = InBurnInClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULevelSequenceBurnInOptions::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Settings, ULevelSequenceBurnInInitSettings);
}

void ULevelSequenceBurnInOptions::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Settings);
}

// Function:
//		Offset -> 0x0162E490
//		Name   -> Function LevelSequence.LevelSequenceActor.SetSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ULevelSequence*                              InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	ALevelSequenceActor_SetSequence_Params params {};
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0162E400
//		Name   -> Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReplicatePlayback                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback");

	ALevelSequenceActor_SetReplicatePlayback_Params params {};
	params.ReplicatePlayback = ReplicatePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0162E2C0
//		Name   -> Function LevelSequence.LevelSequenceActor.SetEventReceivers
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<class AActor*>                              AdditionalReceivers                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void ALevelSequenceActor::SetEventReceivers(TArray<class AActor*> AdditionalReceivers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");

	ALevelSequenceActor_SetEventReceivers_Params params {};
	params.AdditionalReceivers = AdditionalReceivers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0162E010
//		Name   -> Function LevelSequence.LevelSequenceActor.SetBinding
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bAllowBindingsFromAsset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	ALevelSequenceActor_SetBinding_Params params {};
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0162DFC0
//		Name   -> Function LevelSequence.LevelSequenceActor.ResetBindings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ALevelSequenceActor::ResetBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	ALevelSequenceActor_ResetBindings_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0162DED0
//		Name   -> Function LevelSequence.LevelSequenceActor.ResetBinding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	ALevelSequenceActor_ResetBinding_Params params {};
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0162DD20
//		Name   -> Function LevelSequence.LevelSequenceActor.RemoveBinding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	ALevelSequenceActor_RemoveBinding_Params params {};
	params.Binding = Binding;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B73C40
//		Name   -> DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
//		Flags  -> (Public, Delegate)
void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature");

	ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0162DCF0
//		Name   -> Function LevelSequence.LevelSequenceActor.LoadSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ULevelSequence*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequence* ALevelSequenceActor::LoadSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");

	ALevelSequenceActor_LoadSequence_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0162DCA0
//		Name   -> Function LevelSequence.LevelSequenceActor.GetSequencePlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ULevelSequencePlayer*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");

	ALevelSequenceActor_GetSequencePlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0162DC70
//		Name   -> Function LevelSequence.LevelSequenceActor.GetSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ULevelSequence*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequence* ALevelSequenceActor::GetSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	ALevelSequenceActor_GetSequence_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0162D8F0
//		Name   -> Function LevelSequence.LevelSequenceActor.AddBinding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMovieSceneObjectBindingID                  Binding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAllowBindingsFromAsset                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	ALevelSequenceActor_AddBinding_Params params {};
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ALevelSequenceActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SequencePlayer, ULevelSequencePlayer);
	READ_PTR_FULL(BurnInOptions, ULevelSequenceBurnInOptions);
	READ_PTR_FULL(BindingOverrides, UMovieSceneBindingOverrides);
	READ_PTR_FULL(DefaultInstanceData, UObject);
	READ_PTR_FULL(BurnInInstance, ULevelSequenceBurnIn);
}

void ALevelSequenceActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SequencePlayer);
	DELE_PTR_FULL(BurnInOptions);
	DELE_PTR_FULL(BindingOverrides);
	DELE_PTR_FULL(DefaultInstanceData);
	DELE_PTR_FULL(BurnInInstance);
}

// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function LevelSequence.LevelSequenceBurnIn.SetSettings
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UObject*                                     InSettings                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	ULevelSequenceBurnIn_SetSettings_Params params {};
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0162DCD0
//		Name   -> Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
//		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	ULevelSequenceBurnIn_GetSettingsClass_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULevelSequenceBurnIn::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(LevelSequenceActor, ALevelSequenceActor);
}

void ULevelSequenceBurnIn::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(LevelSequenceActor);
}

// Function:
//		Offset -> 0x00B73C40
//		Name   -> Function LevelSequence.LevelSequenceDirector.OnCreated
//		Flags  -> (Event, Public, BlueprintEvent)
void ULevelSequenceDirector::OnCreated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");

	ULevelSequenceDirector_OnCreated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULevelSequenceDirector::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Player, ULevelSequencePlayer);
}

void ULevelSequenceDirector::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Player);
}

void ULegacyLevelSequenceDirectorBlueprint::AfterRead()
{
	UBlueprint::AfterRead();

}

void ULegacyLevelSequenceDirectorBlueprint::BeforeDelete()
{
	UBlueprint::BeforeDelete();

}

// Function:
//		Offset -> 0x0162DC30
//		Name   -> Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UCameraComponent*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");

	ULevelSequencePlayer_GetActiveCameraComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0162DAC0
//		Name   -> Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULevelSequence*                              LevelSequence                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMovieSceneSequencePlaybackSettings         Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class ALevelSequenceActor*                         OutActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ULevelSequencePlayer*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;


	return params.ReturnValue;
}


void ULevelSequencePlayer::AfterRead()
{
	UMovieSceneSequencePlayer::AfterRead();

}

void ULevelSequencePlayer::BeforeDelete()
{
	UMovieSceneSequencePlayer::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
