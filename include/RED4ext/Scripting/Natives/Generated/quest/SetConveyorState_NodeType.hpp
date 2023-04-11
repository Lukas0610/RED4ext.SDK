#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IInteractiveObjectManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetConveyorState_NodeType : quest::IInteractiveObjectManagerNodeType
{
    static constexpr const char* NAME = "questSetConveyorState_NodeType";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 30
    bool enable; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(SetConveyorState_NodeType, 0x40);
} // namespace quest
using questSetConveyorState_NodeType = quest::SetConveyorState_NodeType;
} // namespace RED4ext

// clang-format on
