/* program to calculate sum of digits of an integer */

#include <stdio.h>

int main()
{
  int total, number;

  printf("Enter your number.\n");
  scanf("%i", &number);

  total = 0;

  do
  {
    total += number % 10;
    number = number / 10;
  }
  while(number != 0);

  printf("%i\n", total);

  return 0;
}