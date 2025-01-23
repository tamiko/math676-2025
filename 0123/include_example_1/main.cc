#include <iostream>

int main()
{
  /*
   * The preprocessor simply takes the referenced file and substitutes it
   * into the source file as is. Just to bring the point across: The file
   * "main_impl.cc" contains the following line:
   *
   *   std::cout << "Hello world!" << std::endl;
   *
   * And we can just include it here:
   */
#include "main_impl.cc"
  /*
   * A word of advise, though: except under rare circumstances this is bad
   * style. Don't do this.
   *
   * Compile the "main.cc" file:
   *
   *   g++ -o example main.cc
   *   ./example
   */
}
