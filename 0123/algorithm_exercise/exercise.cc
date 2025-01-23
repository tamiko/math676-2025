#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> numbers{42, 1, -1, 13, 7, 18};

  std::for_each(numbers.begin(), numbers.end(),
                [](const auto i) { std::cout << i << ", "; });
  std::cout << std::endl;

  std::vector<std::string> results;

  std::transform(numbers.begin(), numbers.end(), std::back_inserter(results),
                 [](const auto number) {
                   if (number % 2 == 0)
                     return "even";
                   else
                     return "odd";
                 });

  std::for_each(results.begin(), results.end(),
                [](const auto string) { std::cout << string << ", "; });
  std::cout << std::endl;
}
