#include <fmt/core.h>
#include <string_view>

#include "libapp/doubler.hpp"

template <typename T>
void printAndDouble(T something)
{
    fmt::print("{} doubled is {}\n", something, doubleValue(something));
}

int main()
{
    {
        using namespace std::string_view_literals;
        printAndDouble("C++"sv);
    }
    printAndDouble(5U);
    return 0;
}