#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/State.hpp>

namespace RED4ext
{
namespace gsm
{
struct State_SessionRestoreFromSave : gsm::State
{
    static constexpr const char* NAME = "gsmState_SessionRestoreFromSave";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkB8[0x2A0 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(State_SessionRestoreFromSave, 0x2A0);
} // namespace gsm
using gsmState_SessionRestoreFromSave = gsm::State_SessionRestoreFromSave;
} // namespace RED4ext

// clang-format on
