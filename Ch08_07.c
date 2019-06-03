/* Function to calculate the absolute value */
#include <stdio.h>

float absolute_value(float x)
{
  if ( x < 0 )
    x = -x;
  return (x);
}

int main()
{
  float f1 = -15.5, f2 = 20.0, f3 = -5.0;
  int i1 = -716;
  float result;

  result = absolute_value(f1);
  printf("result = %.2f\n", result);
  printf("f1 = %.2f\n", f1);

  result = absolute_value(f2) + absolute_value(f3);
  printf("result = %.2f\n", result);

  result = absolute_value( (float) i1 );
  printf("result = %.2f\n", result);

  result = absolute_value(i1);
  printf("result = %.2f\n", result);

  return 0;
}