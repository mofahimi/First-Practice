#define CATCH_CONFIG_MAIN
#include "../include/catch.hpp"

TEST_CASE("Test 1 - Addition", "[math]")
{
  REQUIRE(2 + 2 == 4);
}
