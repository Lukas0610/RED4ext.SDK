#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world
{
struct WeatherScriptInterface : IScriptable
{
    static constexpr const char* NAME = "worldWeatherScriptInterface";
    static constexpr const char* ALIAS = "WeatherSystem";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(WeatherScriptInterface, 0x50);
} // namespace world
using worldWeatherScriptInterface = world::WeatherScriptInterface;
using WeatherSystem = world::WeatherScriptInterface;
} // namespace RED4ext

// clang-format on
