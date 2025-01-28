#include <iostream>
#include <vector>

int main()
{
  std::vector<int> numbers;
  numbers.resize(6);
  numbers[0] = 42;
  numbers[1] = 1;
  numbers[2] = -1;
  numbers[3] = 13;
  numbers[4] = 7;
  numbers[5] = 18;

  std::vector<std::string> strings;
  strings.resize(6);

  for(unsigned int i = 0; i < strings.size(); ++i) {
    if (numbers[i] % 2 == 0)
      strings[i] = "even";
    else
      strings[i] = "odd";
  }

  for(unsigned int i = 0; i < strings.size(); ++i) {
    std::cout << strings[i] << ", ";
  }
  std::cout << std::endl;

  return 0;
}
