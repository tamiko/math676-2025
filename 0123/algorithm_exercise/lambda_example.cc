#include <iostream>

int main()
{
  const auto my_shiny_lambda = [](unsigned int &value) { value += 42; };

  unsigned int my_int = 0;
  std::cout << "initial: " << my_int << std::endl;

  my_shiny_lambda(my_int);
  std::cout << "after lambda: " << my_int << std::endl;
}
