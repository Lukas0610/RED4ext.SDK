#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct SBehaviorConstraintNodeFloorIKCommon
{
    static constexpr const char* NAME = "animSBehaviorConstraintNodeFloorIKCommon";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x300 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SBehaviorConstraintNodeFloorIKCommon, 0x300);
} // namespace anim
using animSBehaviorConstraintNodeFloorIKCommon = anim::SBehaviorConstraintNodeFloorIKCommon;
} // namespace RED4ext

// clang-format on
