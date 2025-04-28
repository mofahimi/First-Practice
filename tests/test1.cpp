#define CATCH_CONFIG_MAIN
#include "../include/catch.hpp"
#include "../src/calculator.h"

TEST_CASE("Test 1 - Addition", "[add]"){
  REQUIRE(Calculator::add(2, 3) == 5);
}