#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IContainerManager.hpp>

namespace RED4ext
{
namespace game
{
struct ContainerManager : game::IContainerManager
{
    static constexpr const char* NAME = "gameContainerManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x158 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ContainerManager, 0x158);
} // namespace game
using gameContainerManager = game::ContainerManager;
} // namespace RED4ext

// clang-format on
