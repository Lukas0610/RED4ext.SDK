#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ForceStickerTransformEvent : red::Event
{
    static constexpr const char* NAME = "gameuiForceStickerTransformEvent";
    static constexpr const char* ALIAS = "ForceStickerTransformEvent";

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ForceStickerTransformEvent, 0x60);
} // namespace game::ui
using gameuiForceStickerTransformEvent = game::ui::ForceStickerTransformEvent;
using ForceStickerTransformEvent = game::ui::ForceStickerTransformEvent;
} // namespace RED4ext

// clang-format on
