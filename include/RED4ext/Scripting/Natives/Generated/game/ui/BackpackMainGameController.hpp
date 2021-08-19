#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BackpackMainGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiBackpackMainGameController";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(BackpackMainGameController, 0xD0);
} // namespace game::ui
} // namespace RED4ext