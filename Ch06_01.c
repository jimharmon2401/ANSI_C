/* calculate the absolute value of an integer */

#include <stdio.h>

int main()
{
  int number;

  printf("Type in your number: ");
  scanf("%i", &number);

  if(number < 0)
      number = -number;

  printf("The absolute value is %i\n", number);

  return 0;
}