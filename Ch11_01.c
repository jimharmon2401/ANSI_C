/* Program to illustrate pionters */
#include <stdio.h>

int main()
{
  int count = 10, x;
  int *int_pointer;

  int_pointer = &count;
  x = *int_pointer;

  printf("count = %i, x = %i\n", count, x);

  return(0);
}