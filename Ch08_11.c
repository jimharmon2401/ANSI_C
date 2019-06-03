#include <stdio.h>

void multiply_by_two (float array[], int n)
{
  int i;

  for(i = 0; i < n; ++i)
    array[i] *= 2;
}

int main()
{
  float float_values[4] = {1.2, -3.7, 6.2, 8.55};
  int i;
  void multiply_by_two (float array[], int n);

  multiply_by_two(float_values, 4);

  for(i = 0; i < 4; ++i)
    printf("%.2f   ", float_values[i]);

  return 0;
}