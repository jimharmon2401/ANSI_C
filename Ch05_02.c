/* program to calculate the 200th triangular number */
/* introduction of the for statement */
#include <stdio.h>

int main()
{
  int n, triangular_number;

  triangular_number = 0;

  for ( n = 1;  n <= 200; n = n + 1)
    triangular_number = triangular_number + n;

  printf("The 200th triangular number is %i\n",
          triangular_number);

  return 0;
}