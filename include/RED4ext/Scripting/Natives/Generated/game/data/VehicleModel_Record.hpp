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
struct VehicleModel_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleModel_Record";
    static constexpr const char* ALIAS = "VehicleModel_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleModel_Record, 0x58);
} // namespace game::data
using gamedataVehicleModel_Record = game::data::VehicleModel_Record;
using VehicleModel_Record = game::data::VehicleModel_Record;
} // namespace RED4ext

// clang-format on
