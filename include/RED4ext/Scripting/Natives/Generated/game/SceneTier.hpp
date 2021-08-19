#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/StimuliData.hpp>

namespace RED4ext
{
namespace game { 
struct SceneTier : sense::StimuliData
{
    static constexpr const char* NAME = "gameSceneTier";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SceneTier, 0x50);
} // namespace game
} // namespace RED4ext