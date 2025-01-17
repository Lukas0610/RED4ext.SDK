#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AIOptimalDistanceCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIOptimalDistanceCond_Record";
    static constexpr const char* ALIAS = "AIOptimalDistanceCond_Record";

    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIOptimalDistanceCond_Record, 0x70);
} // namespace game::data
using gamedataAIOptimalDistanceCond_Record = game::data::AIOptimalDistanceCond_Record;
using AIOptimalDistanceCond_Record = game::data::AIOptimalDistanceCond_Record;
} // namespace RED4ext

// clang-format on
