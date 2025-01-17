#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct AsyncSpawnRequest : IScriptable
{
    static constexpr const char* NAME = "inkAsyncSpawnRequest";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x188 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AsyncSpawnRequest, 0x188);
} // namespace ink
using inkAsyncSpawnRequest = ink::AsyncSpawnRequest;
} // namespace RED4ext

// clang-format on
