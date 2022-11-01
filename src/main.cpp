#include <iostream>
#include <fmt/format.h>

int main()
{
  std::cout << fmt::format("{} \n", "working");
  return EXIT_SUCCESS;
}