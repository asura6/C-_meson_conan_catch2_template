#include "catch2/catch_all.hpp"
#include <string_view>
#include <cstdlib>
#include <ctime>

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

TEST_CASE("sanitizer example")
{
    std::srand(std::time(nullptr));
    const auto randval = std::rand();
    auto i = (int *)malloc(sizeof(int *));
    *i = randval;
    free(i);
    REQUIRE(*i == randval);
}