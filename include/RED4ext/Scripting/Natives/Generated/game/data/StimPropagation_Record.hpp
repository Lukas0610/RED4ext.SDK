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
struct StimPropagation_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStimPropagation_Record";
    static constexpr const char* ALIAS = "StimPropagation_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StimPropagation_Record, 0x58);
} // namespace game::data
using gamedataStimPropagation_Record = game::data::StimPropagation_Record;
using StimPropagation_Record = game::data::StimPropagation_Record;
} // namespace RED4ext

// clang-format on
