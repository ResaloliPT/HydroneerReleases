#pragma once

// Name: Hydroneer, Version: 1.7.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Overlay.Overlays
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UOverlays : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.Overlays");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Overlay.BasicOverlays
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                        Overlays;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.BasicOverlays");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Overlay.LocalizedOverlays
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                              DefaultOverlays;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, class UBasicOverlays*>        LocaleToOverlaysMap;                                       // 0x0030(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Overlay.LocalizedOverlays");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
