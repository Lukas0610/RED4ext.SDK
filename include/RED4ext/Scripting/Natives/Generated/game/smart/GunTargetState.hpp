#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::smart { 
enum class GunTargetState : uint32_t
{
    Visible = 0,
    Targetable = 1,
    Locking = 2,
    Locked = 3,
    Unlocking = 4,
};
} // namespace game::smart
using gamesmartGunTargetState = game::smart::GunTargetState;
} // namespace RED4ext

// clang-format on
