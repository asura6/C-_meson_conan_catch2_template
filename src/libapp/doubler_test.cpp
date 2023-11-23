#include "catch2/catch_all.hpp"
#include <string_view>

#include "doubler.hpp"

TEST_CASE("template types", "[doubleValue]")
{
    SECTION("unsigned int")
    {
        const unsigned int val = 5;
        const auto doubledVal = doubleValue(val);
        REQUIRE(doubledVal == 10U);
    }
    SECTION("signed int")
    {
        const int val = 5;
        const auto doubledVal = doubleValue(val);
        REQUIRE(doubledVal == 10);
    }
}

TEST_CASE("string types", "[doubleValue]")
{
    const std::string_view val = "hello";
    const auto doubledVal = doubleValue(val);
    REQUIRE(doubledVal == "hellohello");
}