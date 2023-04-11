#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FPPCameraSharedVar : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FPPCameraSharedVar";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_FPPCameraSharedVar, 0x58);
} // namespace anim
using animAnimNode_FPPCameraSharedVar = anim::AnimNode_FPPCameraSharedVar;
} // namespace RED4ext

// clang-format on
