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
struct AIWeakSpotCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIWeakSpotCond_Record";
    static constexpr const char* ALIAS = "AIWeakSpotCond_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIWeakSpotCond_Record, 0x58);
} // namespace game::data
using gamedataAIWeakSpotCond_Record = game::data::AIWeakSpotCond_Record;
using AIWeakSpotCond_Record = game::data::AIWeakSpotCond_Record;
} // namespace RED4ext

// clang-format on
