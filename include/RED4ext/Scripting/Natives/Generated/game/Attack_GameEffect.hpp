#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttack.hpp>

namespace RED4ext
{
namespace game
{
struct Attack_GameEffect : game::IAttack
{
    static constexpr const char* NAME = "gameAttack_GameEffect";
    static constexpr const char* ALIAS = "Attack_GameEffect";

    uint8_t unkD8[0x100 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(Attack_GameEffect, 0x100);
} // namespace game
using gameAttack_GameEffect = game::Attack_GameEffect;
using Attack_GameEffect = game::Attack_GameEffect;
} // namespace RED4ext

// clang-format on
