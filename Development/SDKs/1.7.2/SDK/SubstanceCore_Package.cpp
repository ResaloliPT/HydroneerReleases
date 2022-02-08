/**
 * Name: Hydroneer
 * Version: 1.7.2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0059B700
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceGraphInstance::SetInputString(const class FString& Identifier, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputString");
		
		USubstanceGraphInstance_SetInputString_Params params {};
		params.Identifier = Identifier;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059B5B0
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputInt
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    InputValues                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubstanceGraphInstance::SetInputInt(const class FString& Identifier, TArray<int32_t> InputValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputInt");
		
		USubstanceGraphInstance_SetInputInt_Params params {};
		params.Identifier = Identifier;
		params.InputValues = InputValues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059B4C0
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputImg
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubstanceGraphInstance::SetInputImg(const class FString& InputName, class UObject* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputImg");
		
		USubstanceGraphInstance_SetInputImg_Params params {};
		params.InputName = InputName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059B370
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      InputValues                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USubstanceGraphInstance::SetInputFloat(const class FString& Identifier, TArray<float> InputValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputFloat");
		
		USubstanceGraphInstance_SetInputFloat_Params params {};
		params.Identifier = Identifier;
		params.InputValues = InputValues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059B230
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputColor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceGraphInstance::SetInputColor(const class FString& Identifier, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputColor");
		
		USubstanceGraphInstance_SetInputColor_Params params {};
		params.Identifier = Identifier;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059B100
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.SetInputBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               boolValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceGraphInstance::SetInputBool(const class FString& Identifier, bool boolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputBool");
		
		USubstanceGraphInstance_SetInputBool_Params params {};
		params.Identifier = Identifier;
		params.boolValue = boolValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059AAD0
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSubstanceIntInputDesc USubstanceGraphInstance::GetIntInputDesc(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc");
		
		USubstanceGraphInstance_GetIntInputDesc_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059A9A0
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FSubstanceInstanceDesc USubstanceGraphInstance::GetInstanceDesc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc");
		
		USubstanceGraphInstance_GetInstanceDesc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059A8B0
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	SubstanceCore_ESubstanceInputType USubstanceGraphInstance::GetInputType(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputType");
		
		USubstanceGraphInstance_GetInputType_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059A780
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USubstanceGraphInstance::GetInputString(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputString");
		
		USubstanceGraphInstance_GetInputString_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059A6A0
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class FString> USubstanceGraphInstance::GetInputNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputNames");
		
		USubstanceGraphInstance_GetInputNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059A570
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> USubstanceGraphInstance::GetInputInt(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputInt");
		
		USubstanceGraphInstance_GetInputInt_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059A440
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> USubstanceGraphInstance::GetInputFloat(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputFloat");
		
		USubstanceGraphInstance_GetInputFloat_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059A340
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USubstanceGraphInstance::GetInputColor(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputColor");
		
		USubstanceGraphInstance_GetInputColor_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059A250
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetInputBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USubstanceGraphInstance::GetInputBool(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputBool");
		
		USubstanceGraphInstance_GetInputBool_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00599F70
	 * 		Name   -> Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSubstanceFloatInputDesc USubstanceGraphInstance::GetFloatInputDesc(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc");
		
		USubstanceGraphInstance_GetFloatInputDesc_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceGraphInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceGraphInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceGraphInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceImageInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceImageInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceImageInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceInstanceFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceInstanceFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceInstanceFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00599E70
	 * 		Name   -> Function SubstanceCore.SubstanceTexture2D.GetChannel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	SubstanceCore_ESubChannelType USubstanceTexture2D::GetChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceTexture2D.GetChannel");
		
		USubstanceTexture2D_GetChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceTexture2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceTexture2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceTexture2D");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059B840
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.SyncRendering
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     InstancesToRender                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::STATIC_SyncRendering(class USubstanceGraphInstance* InstancesToRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.SyncRendering");
		
		USubstanceUtility_SyncRendering_Params params {};
		params.InstancesToRender = InstancesToRender;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059B010
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::STATIC_SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt");
		
		USubstanceUtility_SetGraphInstanceOutputSizeInt_Params params {};
		params.GraphInstance = GraphInstance;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059AF20
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		SubstanceCore_ESubstanceTextureSize                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		SubstanceCore_ESubstanceTextureSize                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::STATIC_SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, SubstanceCore_ESubstanceTextureSize Width, SubstanceCore_ESubstanceTextureSize Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize");
		
		USubstanceUtility_SetGraphInstanceOutputSize_Params params {};
		params.GraphInstance = GraphInstance;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059AEB0
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.ResetInputParameters
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::STATIC_ResetInputParameters(class USubstanceGraphInstance* GraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.ResetInputParameters");
		
		USubstanceUtility_ResetInputParameters_Params params {};
		params.GraphInstance = GraphInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059AD10
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.GetSubstanceTextures
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class USubstanceTexture2D*> USubstanceUtility::STATIC_GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetSubstanceTextures");
		
		USubstanceUtility_GetSubstanceTextures_Params params {};
		params.GraphInstance = GraphInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059ADE0
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.GetSubstances
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class USubstanceGraphInstance*> USubstanceUtility::STATIC_GetSubstances(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetSubstances");
		
		USubstanceUtility_GetSubstances_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059ACE0
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 */
	float USubstanceUtility::STATIC_GetSubstanceLoadingProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress");
		
		USubstanceUtility_GetSubstanceLoadingProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0059A180
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.GetGraphName
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USubstanceUtility::STATIC_GetGraphName(class USubstanceGraphInstance* GraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetGraphName");
		
		USubstanceUtility_GetGraphName_Params params {};
		params.GraphInstance = GraphInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00599EA0
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.GetFactoryName
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USubstanceUtility::STATIC_GetFactoryName(class USubstanceGraphInstance* GraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.GetFactoryName");
		
		USubstanceUtility_GetFactoryName_Params params {};
		params.GraphInstance = GraphInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00599D20
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    OutputIndices                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::STATIC_EnableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int32_t> OutputIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs");
		
		USubstanceUtility_EnableInstanceOutputs_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GraphInstance = GraphInstance;
		params.OutputIndices = OutputIndices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00599C60
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USubstanceGraphInstance* USubstanceUtility::STATIC_DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance");
		
		USubstanceUtility_DuplicateGraphInstance_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GraphInstance = GraphInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00599B10
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceGraphInstance*                     GraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    OutputIndices                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::STATIC_DisableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int32_t> OutputIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs");
		
		USubstanceUtility_DisableInstanceOutputs_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GraphInstance = GraphInstance;
		params.OutputIndices = OutputIndices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00599990
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.CreateGraphInstance
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceInstanceFactory*                   Factory                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GraphDescIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InstanceName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USubstanceGraphInstance* USubstanceUtility::STATIC_CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int32_t GraphDescIndex, const class FString& InstanceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.CreateGraphInstance");
		
		USubstanceUtility_CreateGraphInstance_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Factory = Factory;
		params.GraphDescIndex = GraphDescIndex;
		params.InstanceName = InstanceName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005997C0
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USubstanceInstanceFactory*                   OutputFactory                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutputFactoryGraphIndex                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceInstanceFactory*                   InputFactory                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InputFactoryGraphIndex                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSubstanceConnection>                Connections                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class USubstanceInstanceFactory* USubstanceUtility::STATIC_CreateAggregateSubstanceFactory(class USubstanceInstanceFactory* OutputFactory, int32_t OutputFactoryGraphIndex, class USubstanceInstanceFactory* InputFactory, int32_t InputFactoryGraphIndex, TArray<struct FSubstanceConnection> Connections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory");
		
		USubstanceUtility_CreateAggregateSubstanceFactory_Params params {};
		params.OutputFactory = OutputFactory;
		params.OutputFactoryGraphIndex = OutputFactoryGraphIndex;
		params.InputFactory = InputFactory;
		params.InputFactoryGraphIndex = InputFactoryGraphIndex;
		params.Connections = Connections;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00599710
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.CopyInputParameters
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     SourceGraphInstance                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USubstanceGraphInstance*                     DestGraphInstance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::STATIC_CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.CopyInputParameters");
		
		USubstanceUtility_CopyInputParameters_Params params {};
		params.SourceGraphInstance = SourceGraphInstance;
		params.DestGraphInstance = DestGraphInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x005996F0
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.ClearCache
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 */
	void USubstanceUtility::STATIC_ClearCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.ClearCache");
		
		USubstanceUtility_ClearCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00599680
	 * 		Name   -> Function SubstanceCore.SubstanceUtility.AsyncRendering
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USubstanceGraphInstance*                     InstancesToRender                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USubstanceUtility::STATIC_AsyncRendering(class USubstanceGraphInstance* InstancesToRender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceUtility.AsyncRendering");
		
		USubstanceUtility_AsyncRendering_Params params {};
		params.InstancesToRender = InstancesToRender;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USubstanceUtility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubstanceUtility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceUtility");
		return ptr;
	}

}


