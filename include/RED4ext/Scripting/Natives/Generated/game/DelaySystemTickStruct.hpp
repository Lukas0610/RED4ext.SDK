#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct DelaySystemTickStruct : ISerializable
{
    static constexpr const char* NAME = "gameDelaySystemTickStruct";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(DelaySystemTickStruct, 0x38);
} // namespace game
using gameDelaySystemTickStruct = game::DelaySystemTickStruct;
} // namespace RED4ext

// clang-format on
