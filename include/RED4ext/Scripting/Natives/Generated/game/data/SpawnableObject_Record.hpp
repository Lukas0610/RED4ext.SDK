#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/BaseObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct SpawnableObject_Record : game::data::BaseObject_Record
{
    static constexpr const char* NAME = "gamedataSpawnableObject_Record";
    static constexpr const char* ALIAS = "SpawnableObject_Record";

    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(SpawnableObject_Record, 0x78);
} // namespace game::data
using gamedataSpawnableObject_Record = game::data::SpawnableObject_Record;
using SpawnableObject_Record = game::data::SpawnableObject_Record;
} // namespace RED4ext

// clang-format on
