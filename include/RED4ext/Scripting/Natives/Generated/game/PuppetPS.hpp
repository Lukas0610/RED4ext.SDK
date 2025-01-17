#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ObjectPS.hpp>

namespace RED4ext
{
namespace game
{
struct PuppetPS : game::ObjectPS
{
    static constexpr const char* NAME = "gamePuppetPS";
    static constexpr const char* ALIAS = "GamePuppetPS";

    CName gender; // 68
    bool wasQuickHacked; // 70
    uint8_t unk71[0x73 - 0x71]; // 71
    bool hasAlternativeName; // 73
    bool isCrouch; // 74
    bool allowVehicleCollisionRagdoll; // 75
    uint8_t unk76[0x78 - 0x76]; // 76
};
RED4EXT_ASSERT_SIZE(PuppetPS, 0x78);
} // namespace game
using gamePuppetPS = game::PuppetPS;
using GamePuppetPS = game::PuppetPS;
} // namespace RED4ext

// clang-format on
