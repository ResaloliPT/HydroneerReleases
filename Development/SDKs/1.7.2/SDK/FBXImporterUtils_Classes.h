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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass FBXImporterUtils.FBXImporterUtils_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFBXImporterUtils_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetActorsNameIDs(class ABP_SceneRoot_C* Root, class UObject* __WorldContext, TArray<class FName>* Names);
		void STATIC_GetActorsForNameID(const class FName& NameID, class ABP_SceneRoot_C* Root, class UObject* __WorldContext, TArray<class AActor*>* Actors);
		void STATIC_GetAllAttachedActors(class AActor* RootActor, class UObject* __WorldContext, TArray<class AActor*>* Children);
		void STATIC_GetAllAttachedActorsInternal(class AActor* RootActor, TArray<class AActor*>* result, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
