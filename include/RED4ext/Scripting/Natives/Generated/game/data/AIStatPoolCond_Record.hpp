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
struct AIStatPoolCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIStatPoolCond_Record";
    static constexpr const char* ALIAS = "AIStatPoolCond_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIStatPoolCond_Record, 0x60);
} // namespace game::data
using gamedataAIStatPoolCond_Record = game::data::AIStatPoolCond_Record;
using AIStatPoolCond_Record = game::data::AIStatPoolCond_Record;
} // namespace RED4ext

// clang-format on
