#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CoverSelectionParameters_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct FriendlyTargetAngleDistanceCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataFriendlyTargetAngleDistanceCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "FriendlyTargetAngleDistanceCoverSelectionParameters_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(FriendlyTargetAngleDistanceCoverSelectionParameters_Record, 0x60);
} // namespace game::data
using gamedataFriendlyTargetAngleDistanceCoverSelectionParameters_Record = game::data::FriendlyTargetAngleDistanceCoverSelectionParameters_Record;
using FriendlyTargetAngleDistanceCoverSelectionParameters_Record = game::data::FriendlyTargetAngleDistanceCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
