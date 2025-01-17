#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PhysicalTriggerAreaNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct PhysicalImpulseAreaNodeInstance : world::PhysicalTriggerAreaNodeInstance
{
    static constexpr const char* NAME = "worldPhysicalImpulseAreaNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PhysicalImpulseAreaNodeInstance, 0xA0);
} // namespace world
using worldPhysicalImpulseAreaNodeInstance = world::PhysicalImpulseAreaNodeInstance;
} // namespace RED4ext

// clang-format on
