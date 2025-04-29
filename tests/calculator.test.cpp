#define CATCH_CONFIG_MAIN
#include "../include/catch.hpp"
#include "../src/calculator.h"

TEST_CASE("Calculator addition", "[add]") {
    REQUIRE(Calculator::add(2, 3) == 5);
    REQUIRE(Calculator::add(-1, -1) == -2);
}

TEST_CASE("Calculator subtraction", "[subtract]") {
    REQUIRE(Calculator::subtract(5, 3) == 2);
    REQUIRE(Calculator::subtract(0, 5) == -5);
}