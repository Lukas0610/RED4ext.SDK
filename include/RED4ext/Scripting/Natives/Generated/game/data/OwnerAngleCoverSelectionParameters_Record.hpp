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
struct OwnerAngleCoverSelectionParameters_Record : game::data::CoverSelectionParameters_Record
{
    static constexpr const char* NAME = "gamedataOwnerAngleCoverSelectionParameters_Record";
    static constexpr const char* ALIAS = "OwnerAngleCoverSelectionParameters_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(OwnerAngleCoverSelectionParameters_Record, 0x58);
} // namespace game::data
using gamedataOwnerAngleCoverSelectionParameters_Record = game::data::OwnerAngleCoverSelectionParameters_Record;
using OwnerAngleCoverSelectionParameters_Record = game::data::OwnerAngleCoverSelectionParameters_Record;
} // namespace RED4ext

// clang-format on
