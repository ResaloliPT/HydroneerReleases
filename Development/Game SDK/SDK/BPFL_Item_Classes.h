#pragma once

/**
 * Name: Hydroneer
 * Version: 2.1.1
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
	 * BlueprintGeneratedClass BPFL_Item.BPFL_Item_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Item_C : public UBlueprintFunctionLibrary
	{
	public:

		void IsRootComponent(
class AActor* Actor
, 
class USceneComponent* Component
, 
class UObject* __WorldContext
, 
bool* Result
);

		void SetHighlight(
class ABP_GameController_C* Controller
, 
class AActor* Target
, 
class UObject* __WorldContext
);

		void ForceStopHighlight(
class ABP_GameController_C* Controller
, 
class AActor* Target
, 
class UObject* __WorldContext
);

		void ToggleHighlightSpecific(
bool Highlight
, 
int32_t StencilValue
, 
class ABP_GameController_C* Controller
, 
class AActor* Target
, 
class UObject* __WorldContext
);

		void ToggleHighlightPlayer(
bool Highlight
, 
class ABP_GameController_C* Controller
, 
class AActor* Target
, 
class UObject* __WorldContext
);

		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
