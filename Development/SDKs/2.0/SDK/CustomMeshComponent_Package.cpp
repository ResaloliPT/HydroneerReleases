﻿/**
 * Name: Hydroneer
 * Version: 2.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCustomMeshTriangle>                 Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UCustomMeshComponent::SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles");
		
		struct
		{
			TArray<struct FCustomMeshTriangle>                 Triangles;
		} params;
		params.Triangles = Triangles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	 * 		Flags  -> ()
	 */
	void UCustomMeshComponent::ClearCustomMeshTriangles()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles");
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCustomMeshTriangle>                 Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomMeshComponent::AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles");
		
		struct
		{
			TArray<struct FCustomMeshTriangle>                 Triangles;
		} params;
		params.Triangles = Triangles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCustomMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMeshComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CustomMeshComponent.CustomMeshComponent");
		return ptr;
	}

}

