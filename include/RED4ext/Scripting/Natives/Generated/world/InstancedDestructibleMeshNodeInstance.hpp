#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/MeshNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct InstancedDestructibleMeshNodeInstance : world::MeshNodeInstance
{
    static constexpr const char* NAME = "worldInstancedDestructibleMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x230 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(InstancedDestructibleMeshNodeInstance, 0x230);
} // namespace world
using worldInstancedDestructibleMeshNodeInstance = world::InstancedDestructibleMeshNodeInstance;
} // namespace RED4ext

// clang-format on
