#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
struct DecorationProxyMeshNode : world::PrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldDecorationProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DecorationProxyMeshNode, 0x60);
} // namespace world
using worldDecorationProxyMeshNode = world::DecorationProxyMeshNode;
} // namespace RED4ext

// clang-format on
