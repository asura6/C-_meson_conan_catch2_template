#include <string_view>
#include <string>

#include "doubler.hpp"

[[nodiscard]] std::string doubleValue(std::string_view value)
{
    std::string doubleString{value};
    doubleString += value;
    return doubleString;
}
