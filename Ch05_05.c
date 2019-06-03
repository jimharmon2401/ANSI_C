#include <stdio.h>

int main()
{
  int n, number, triangular_number, counter;

  for (counter = 1; counter <= 5; ++counter)
  {
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangular_number = 0;

    for (n = 1; n <= number; ++n)
      triangular_number = triangular_number + n;

    printf("Triangular number %i is %i\n\n", number, triangular_number);
  }

  return 0;
}