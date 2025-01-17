#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct SeatState_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataSeatState_Record";
    static constexpr const char* ALIAS = "SeatState_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SeatState_Record, 0x60);
} // namespace game::data
using gamedataSeatState_Record = game::data::SeatState_Record;
using SeatState_Record = game::data::SeatState_Record;
} // namespace RED4ext

// clang-format on
