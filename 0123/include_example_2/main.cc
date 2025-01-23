/*
 * Include the "feature.h" header file so that the compile knows about the
 * existence of the foo function.
 *
 * Compile with
 *   g++ -o example feature.cc main.cc
 */

#include "feature.h"

int main()
{
  foo();
}
