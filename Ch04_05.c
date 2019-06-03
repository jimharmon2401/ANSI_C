/* basic conversions in c */
#include <stdio.h>

int main()
{
  float f1 = 123.125, f2;
  int i1, i2 = -150;

  i1 = f1; /* float to int conv*/
  printf("%f assigned to an int produces %i\n", f1, i1);

  f1 = i2; /* int to float conversion */
  printf("%i assigned to a float produces %f\n", i2, f1);

  f1 = i2 / 100; /* int divided by int */
  printf("%i divided by 100 produces %f\n", i2, f1);

  f2 = i2 / 100.0; /* int divided by a float */
  printf("%i divided by 100.0 produces %f\n", i2, f2);

  return 0;
}