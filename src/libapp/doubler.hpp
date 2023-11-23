#pragma once
#include <string_view>

template <typename T>
[[nodiscard]] T doubleValue(T value)
{
    return 2 * value;
}

[[nodiscard]] std::string doubleValue(std::string_view value);
