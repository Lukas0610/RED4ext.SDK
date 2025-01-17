#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace AI
{
struct VehiclePanicCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehiclePanicCommand";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VehiclePanicCommand, 0x68);
} // namespace AI
using AIVehiclePanicCommand = AI::VehiclePanicCommand;
} // namespace RED4ext

// clang-format on
