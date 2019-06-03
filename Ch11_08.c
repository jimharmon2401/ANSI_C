/* pointers and functions */

#include <stdio.h>

void test (int *int_pointer)
{
  *int_pointer = 100;
}

int main ()
{
  void test (int *int_pointer);
  int i = 50, *p = &i;

  printf("i before the cal to test = %i\n", i);

  test(p);
  printf("i after the call to test = %i\n", i);

  return (0);
}