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
struct VehicleDeformablePart_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleDeformablePart_Record";
    static constexpr const char* ALIAS = "VehicleDeformablePart_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleDeformablePart_Record, 0x50);
} // namespace game::data
using gamedataVehicleDeformablePart_Record = game::data::VehicleDeformablePart_Record;
using VehicleDeformablePart_Record = game::data::VehicleDeformablePart_Record;
} // namespace RED4ext

// clang-format on
