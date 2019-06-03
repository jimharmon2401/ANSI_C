/* Function to calculate the nth triangular number */

#include <stdio.h>

void calculate_triangular_number(int n)
{
  int i, triangular_number = 0;

  for(i = 1; i <=n; ++i)
    triangular_number = triangular_number + i;

  printf("Triangular number %i is %i\n", n, triangular_number);
}

int main()
{
  calculate_triangular_number(10);
  calculate_triangular_number(20);
  calculate_triangular_number(50);

  return 0;
}