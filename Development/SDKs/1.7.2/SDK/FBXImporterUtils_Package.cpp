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
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function FBXImporterUtils.FBXImporterUtils_C.GetActorsNameIDs
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_SceneRoot_C*                             Root                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                Names                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void UFBXImporterUtils_C::STATIC_GetActorsNameIDs(class ABP_SceneRoot_C* Root, class UObject* __WorldContext, TArray<class FName>* Names)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBXImporterUtils.FBXImporterUtils_C.GetActorsNameIDs");
		
		UFBXImporterUtils_C_GetActorsNameIDs_Params params {};
		params.Root = Root;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Names != nullptr)
			*Names = params.Names;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function FBXImporterUtils.FBXImporterUtils_C.GetActorsForNameID
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NameID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_SceneRoot_C*                             Root                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void UFBXImporterUtils_C::STATIC_GetActorsForNameID(const class FName& NameID, class ABP_SceneRoot_C* Root, class UObject* __WorldContext, TArray<class AActor*>* Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBXImporterUtils.FBXImporterUtils_C.GetActorsForNameID");
		
		UFBXImporterUtils_C_GetActorsForNameID_Params params {};
		params.NameID = NameID;
		params.Root = Root;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function FBXImporterUtils.FBXImporterUtils_C.GetAllAttachedActors
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      RootActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              Children                                                   (Parm, OutParm, ZeroConstructor)
	 */
	void UFBXImporterUtils_C::STATIC_GetAllAttachedActors(class AActor* RootActor, class UObject* __WorldContext, TArray<class AActor*>* Children)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBXImporterUtils.FBXImporterUtils_C.GetAllAttachedActors");
		
		UFBXImporterUtils_C_GetAllAttachedActors_Params params {};
		params.RootActor = RootActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Children != nullptr)
			*Children = params.Children;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B73C40
	 * 		Name   -> Function FBXImporterUtils.FBXImporterUtils_C.GetAllAttachedActorsInternal
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      RootActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFBXImporterUtils_C::STATIC_GetAllAttachedActorsInternal(class AActor* RootActor, TArray<class AActor*>* result, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FBXImporterUtils.FBXImporterUtils_C.GetAllAttachedActorsInternal");
		
		UFBXImporterUtils_C_GetAllAttachedActorsInternal_Params params {};
		params.RootActor = RootActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFBXImporterUtils_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFBXImporterUtils_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FBXImporterUtils.FBXImporterUtils_C");
		return ptr;
	}

}


