#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/MenuState.hpp>

namespace RED4ext
{
namespace gsm
{
struct MenuState_InGamePause : gsm::MenuState
{
    static constexpr const char* NAME = "gsmMenuState_InGamePause";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD8[0xE0 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(MenuState_InGamePause, 0xE0);
} // namespace gsm
using gsmMenuState_InGamePause = gsm::MenuState_InGamePause;
} // namespace RED4ext

// clang-format on
