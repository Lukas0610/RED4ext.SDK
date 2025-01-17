#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MovingPlatformMoveTo.hpp>

namespace RED4ext
{
namespace game
{
struct MovingPlatformRestoreMoveTo : game::MovingPlatformMoveTo
{
    static constexpr const char* NAME = "gameMovingPlatformRestoreMoveTo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(MovingPlatformRestoreMoveTo, 0x70);
} // namespace game
using gameMovingPlatformRestoreMoveTo = game::MovingPlatformRestoreMoveTo;
} // namespace RED4ext

// clang-format on
