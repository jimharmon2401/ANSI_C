#include <stdio.h>
int main()
{
  int j;
  long int factorial(int n);
  for(j = 0; j < 11; ++j)
    printf("%2i! = %li\n", j, factorial(j));

  return 0;
}

/* Recursive function to calculate the factorial
    of a positive integer */

long int factorial(int n)
{
  long int result;

  if(n ==0)
    result = 1;
  else
    result = n * factorial(n-1);

  return(result);
}