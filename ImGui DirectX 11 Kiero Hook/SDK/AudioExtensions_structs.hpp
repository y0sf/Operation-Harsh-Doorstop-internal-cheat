#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioExtensions

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct AudioExtensions.SoundModulationParameter
// 0x0014 (0x0014 - 0x0000)
struct FSoundModulationParameter final 
{
public:
	class FName                                   Control;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14B1[0x8];                                     // 0x000C(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSoundModulationParameter) == 0x000004, "Wrong alignment on FSoundModulationParameter");
static_assert(sizeof(FSoundModulationParameter) == 0x000014, "Wrong size on FSoundModulationParameter");
static_assert(offsetof(FSoundModulationParameter, Control) == 0x000000, "Member 'FSoundModulationParameter::Control' has a wrong offset!");
static_assert(offsetof(FSoundModulationParameter, Value) == 0x000008, "Member 'FSoundModulationParameter::Value' has a wrong offset!");

// ScriptStruct AudioExtensions.SoundModulation
// 0x0010 (0x0010 - 0x0000)
struct FSoundModulation final 
{
public:
	TArray<class USoundModulationPluginSourceSettingsBase*> Settings;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSoundModulation) == 0x000008, "Wrong alignment on FSoundModulation");
static_assert(sizeof(FSoundModulation) == 0x000010, "Wrong size on FSoundModulation");
static_assert(offsetof(FSoundModulation, Settings) == 0x000000, "Member 'FSoundModulation::Settings' has a wrong offset!");

}
