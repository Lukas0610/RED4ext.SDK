#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct CrowdParkingSpaceNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldCrowdParkingSpaceNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CrowdParkingSpaceNodeInstance, 0x90);
} // namespace world
using worldCrowdParkingSpaceNodeInstance = world::CrowdParkingSpaceNodeInstance;
} // namespace RED4ext

// clang-format on
