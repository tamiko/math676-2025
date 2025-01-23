/*
 * Include the declaration header and necessary STL header files:
 */

#include "feature.h"

#include <iostream>

/*
 * Define the foo() function: We now implement the body of the function. In
 * our case simply print "Hello class!".
 *
 * With this the compiler is able to generate code for the function:
 */

void foo()
{
  std::cout << "Hello class!" << std::endl;
}

