#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineplayeractionsLocomotionBase.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineplayeractionsLocomotionSwimmingDiving : game::state::MachineplayeractionsLocomotionBase
{
    static constexpr const char* NAME = "gamestateMachineplayeractionsLocomotionSwimmingDiving";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x140 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(MachineplayeractionsLocomotionSwimmingDiving, 0x140);
} // namespace game::state
using gamestateMachineplayeractionsLocomotionSwimmingDiving = game::state::MachineplayeractionsLocomotionSwimmingDiving;
} // namespace RED4ext

// clang-format on
