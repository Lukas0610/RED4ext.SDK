#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootSlotSingleItem.hpp>

namespace RED4ext
{
namespace game
{
struct LootSlotSingleItemLongStreaming : game::LootSlotSingleItem
{
    static constexpr const char* NAME = "gameLootSlotSingleItemLongStreaming";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LootSlotSingleItemLongStreaming, 0x2A0);
} // namespace game
using gameLootSlotSingleItemLongStreaming = game::LootSlotSingleItemLongStreaming;
} // namespace RED4ext

// clang-format on
