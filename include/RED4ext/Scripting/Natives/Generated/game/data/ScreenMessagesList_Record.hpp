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
struct ScreenMessagesList_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataScreenMessagesList_Record";
    static constexpr const char* ALIAS = "ScreenMessagesList_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ScreenMessagesList_Record, 0x50);
} // namespace game::data
using gamedataScreenMessagesList_Record = game::data::ScreenMessagesList_Record;
using ScreenMessagesList_Record = game::data::ScreenMessagesList_Record;
} // namespace RED4ext

// clang-format on
