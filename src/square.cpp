int square(int num) { return num * num; }

#ifdef BUILD_TESTS
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Square function", "[square]") {
  REQUIRE(square(2) == 4);
  REQUIRE(square(-1) == 1);
}

#endif