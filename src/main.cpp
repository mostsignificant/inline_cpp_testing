#ifndef BUILD_TESTS

#include "square.hpp"

#include <cstdlib>
#include <stdexcept>
#include <string>

auto main(int argc, char *argv[]) -> int {
  if (argc != 1)
    return EXIT_FAILURE;

  const auto num = std::stoi(std::string(argv[0]));
  return square(num);
}

#endif // !BUILD_TESTS
