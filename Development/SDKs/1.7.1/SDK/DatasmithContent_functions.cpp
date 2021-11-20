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

void FDatasmithCameraLookatTrackingSettingsTemplate::AfterRead()
{
}

void FDatasmithCameraLookatTrackingSettingsTemplate::BeforeDelete()
{
}

void FDatasmithCameraFilmbackSettingsTemplate::AfterRead()
{
}

void FDatasmithCameraFilmbackSettingsTemplate::BeforeDelete()
{
}

void FDatasmithCameraLensSettingsTemplate::AfterRead()
{
}

void FDatasmithCameraLensSettingsTemplate::BeforeDelete()
{
}

void FDatasmithCameraFocusSettingsTemplate::AfterRead()
{
}

void FDatasmithCameraFocusSettingsTemplate::BeforeDelete()
{
}

void FDatasmithPostProcessSettingsTemplate::AfterRead()
{
}

void FDatasmithPostProcessSettingsTemplate::BeforeDelete()
{
}

void FDatasmithAssetImportOptions::AfterRead()
{
}

void FDatasmithAssetImportOptions::BeforeDelete()
{
}

void FDatasmithStaticMeshImportOptions::AfterRead()
{
}

void FDatasmithStaticMeshImportOptions::BeforeDelete()
{
}

void FDatasmithTessellationOptions::AfterRead()
{
}

void FDatasmithTessellationOptions::BeforeDelete()
{
}

void FDatasmithReimportOptions::AfterRead()
{
}

void FDatasmithReimportOptions::BeforeDelete()
{
}

void FDatasmithStaticParameterSetTemplate::AfterRead()
{
}

void FDatasmithStaticParameterSetTemplate::BeforeDelete()
{
}

void FDatasmithImportBaseOptions::AfterRead()
{
}

void FDatasmithImportBaseOptions::BeforeDelete()
{
}

void FDatasmithMeshSectionInfoTemplate::AfterRead()
{
}

void FDatasmithMeshSectionInfoTemplate::BeforeDelete()
{
}

void FDatasmithMeshSectionInfoMapTemplate::AfterRead()
{
}

void FDatasmithMeshSectionInfoMapTemplate::BeforeDelete()
{
}

void FDatasmithMeshBuildSettingsTemplate::AfterRead()
{
}

void FDatasmithMeshBuildSettingsTemplate::BeforeDelete()
{
}

void FDatasmithStaticMaterialTemplate::AfterRead()
{
	READ_PTR_FULL(MaterialInterface, UMaterialInterface);
}

void FDatasmithStaticMaterialTemplate::BeforeDelete()
{
	DELE_PTR_FULL(MaterialInterface);
}

void UDatasmithObjectTemplate::AfterRead()
{
	UObject::AfterRead();

}

void UDatasmithObjectTemplate::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UDatasmithActorTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

}

void UDatasmithActorTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

}

void ADatasmithAreaLightActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(IESTexture, UTextureLightProfile);
}

void ADatasmithAreaLightActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(IESTexture);
}

void UDatasmithAreaLightActorTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

}

void UDatasmithAreaLightActorTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

}

void UDatasmithAssetImportData::AfterRead()
{
	UAssetImportData::AfterRead();

}

void UDatasmithAssetImportData::BeforeDelete()
{
	UAssetImportData::BeforeDelete();

}

void UDatasmithStaticMeshImportData::AfterRead()
{
	UDatasmithAssetImportData::AfterRead();

}

void UDatasmithStaticMeshImportData::BeforeDelete()
{
	UDatasmithAssetImportData::BeforeDelete();

}

void UDatasmithStaticMeshCADImportData::AfterRead()
{
	UDatasmithStaticMeshImportData::AfterRead();

}

void UDatasmithStaticMeshCADImportData::BeforeDelete()
{
	UDatasmithStaticMeshImportData::BeforeDelete();

}

void UDatasmithSceneImportData::AfterRead()
{
	UAssetImportData::AfterRead();

}

void UDatasmithSceneImportData::BeforeDelete()
{
	UAssetImportData::BeforeDelete();

}

void UDatasmithCADImportSceneData::AfterRead()
{
	UDatasmithSceneImportData::AfterRead();

}

void UDatasmithCADImportSceneData::BeforeDelete()
{
	UDatasmithSceneImportData::BeforeDelete();

}

void UDatasmithMDLSceneImportData::AfterRead()
{
	UDatasmithSceneImportData::AfterRead();

}

void UDatasmithMDLSceneImportData::BeforeDelete()
{
	UDatasmithSceneImportData::BeforeDelete();

}

void UDatasmithGLTFSceneImportData::AfterRead()
{
	UDatasmithSceneImportData::AfterRead();

}

void UDatasmithGLTFSceneImportData::BeforeDelete()
{
	UDatasmithSceneImportData::BeforeDelete();

}

void UDatasmithStaticMeshGLTFImportData::AfterRead()
{
	UDatasmithStaticMeshImportData::AfterRead();

}

void UDatasmithStaticMeshGLTFImportData::BeforeDelete()
{
	UDatasmithStaticMeshImportData::BeforeDelete();

}

void UDatasmithDeltaGenAssetImportData::AfterRead()
{
	UDatasmithAssetImportData::AfterRead();

}

void UDatasmithDeltaGenAssetImportData::BeforeDelete()
{
	UDatasmithAssetImportData::BeforeDelete();

}

void UDatasmithDeltaGenSceneImportData::AfterRead()
{
	UDatasmithSceneImportData::AfterRead();

}

void UDatasmithDeltaGenSceneImportData::BeforeDelete()
{
	UDatasmithSceneImportData::BeforeDelete();

}

void UDatasmithVREDAssetImportData::AfterRead()
{
	UDatasmithAssetImportData::AfterRead();

}

void UDatasmithVREDAssetImportData::BeforeDelete()
{
	UDatasmithAssetImportData::BeforeDelete();

}

void UDatasmithVREDSceneImportData::AfterRead()
{
	UDatasmithSceneImportData::AfterRead();

}

void UDatasmithVREDSceneImportData::BeforeDelete()
{
	UDatasmithSceneImportData::BeforeDelete();

}

void UDatasmithAssetUserData::AfterRead()
{
	UAssetUserData::AfterRead();

}

void UDatasmithAssetUserData::BeforeDelete()
{
	UAssetUserData::BeforeDelete();

}

void UDatasmithCineCameraActorTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

}

void UDatasmithCineCameraActorTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

}

void UDatasmithCineCameraComponentTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

}

void UDatasmithCineCameraComponentTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

}

// Function:
//		Offset -> 0x007B7E10
//		Name   -> Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UDatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey");

	UDatasmithContentBlueprintLibrary_GetDatasmithUserDataValueForKey_Params params {};
	params.Object = Object;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007B7C60
//		Name   -> Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StringToMatch                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FName>                               OutKeys                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             OutValues                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UDatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const struct FString& StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue");

	UDatasmithContentBlueprintLibrary_GetDatasmithUserDataKeysAndValuesForValue_Params params {};
	params.Object = Object;
	params.StringToMatch = StringToMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
	if (OutValues != nullptr)
		*OutValues = params.OutValues;

}


// Function:
//		Offset -> 0x007B7BE0
//		Name   -> Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UDatasmithAssetUserData*                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::STATIC_GetDatasmithUserData(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData");

	UDatasmithContentBlueprintLibrary_GetDatasmithUserData_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDatasmithContentBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UDatasmithContentBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UDatasmithImportOptions::AfterRead()
{
	UObject::AfterRead();

}

void UDatasmithImportOptions::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UDatasmithLandscapeTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

	READ_PTR_FULL(LandscapeMaterial, UMaterialInterface);
}

void UDatasmithLandscapeTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

	DELE_PTR_FULL(LandscapeMaterial);
}

void UDatasmithLightComponentTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

	READ_PTR_FULL(LightFunctionMaterial, UMaterialInterface);
	READ_PTR_FULL(IESTexture, UTextureLightProfile);
}

void UDatasmithLightComponentTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

	DELE_PTR_FULL(LightFunctionMaterial);
	DELE_PTR_FULL(IESTexture);
}

void UDatasmithMaterialInstanceTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

}

void UDatasmithMaterialInstanceTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

}

void UDatasmithPointLightComponentTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

}

void UDatasmithPointLightComponentTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

}

void UDatasmithPostProcessVolumeTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

}

void UDatasmithPostProcessVolumeTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

}

void UDatasmithScene::AfterRead()
{
	UObject::AfterRead();

}

void UDatasmithScene::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ADatasmithSceneActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Scene, UDatasmithScene);
}

void ADatasmithSceneActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Scene);
}

void UDatasmithSceneComponentTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

}

void UDatasmithSceneComponentTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

}

void UDatasmithSkyLightComponentTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

	READ_PTR_FULL(Cubemap, UTextureCube);
}

void UDatasmithSkyLightComponentTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

	DELE_PTR_FULL(Cubemap);
}

void UDatasmithSpotLightComponentTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

}

void UDatasmithSpotLightComponentTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

}

void UDatasmithStaticMeshComponentTemplate::AfterRead()
{
	UDatasmithSceneComponentTemplate::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMesh);
}

void UDatasmithStaticMeshComponentTemplate::BeforeDelete()
{
	UDatasmithSceneComponentTemplate::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
}

void UDatasmithStaticMeshTemplate::AfterRead()
{
	UDatasmithObjectTemplate::AfterRead();

}

void UDatasmithStaticMeshTemplate::BeforeDelete()
{
	UDatasmithObjectTemplate::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
