#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ContinuousEffector_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct BroadcastStimEffector_Record : game::data::ContinuousEffector_Record
{
    static constexpr const char* NAME = "gamedataBroadcastStimEffector_Record";
    static constexpr const char* ALIAS = "BroadcastStimEffector_Record";

    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(BroadcastStimEffector_Record, 0x68);
} // namespace game::data
using gamedataBroadcastStimEffector_Record = game::data::BroadcastStimEffector_Record;
using BroadcastStimEffector_Record = game::data::BroadcastStimEffector_Record;
} // namespace RED4ext

// clang-format on
