// Denise Gruta
// dnsgruta@csu.fullerton.edu
// @dnsgruta
// Partners: @dnsgruta

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least 1 argument\n";
    return 1;
  }
  double sum{0.0};
  for (int index = 1; index < arguments.size(); ++index) {
    sum += std::stod(arguments.at(index));
  }
  std::cout << sum << "\n";
  double average{0};
  double size{0};
  size = arguments.size() - 1;
  average = sum / size;
  std::cout << "average = " << average << "\n";

  return 0;
}
