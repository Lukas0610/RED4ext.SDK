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
struct StaticStickerNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldStaticStickerNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(StaticStickerNodeInstance, 0xA0);
} // namespace world
using worldStaticStickerNodeInstance = world::StaticStickerNodeInstance;
} // namespace RED4ext

// clang-format on
