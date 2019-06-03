/* Program to convert a positive integer to another base */
#include <stdio.h>

int converted_number[64];
long int number_to_convert;
int base;
int index = 0;

void get_number_and_base(void)
{
  printf("Number to be converted? ");
  scanf("%li", &number_to_convert);

  printf("Base? ");
  scanf("%i", &base);

  if(base < 2 || base > 16)
  {
    printf("Bad base - must be between 2 and 16\n");
    base = 10;
  }
}

void convert_number(void)
{
  do
  {
    converted_number[index] = number_to_convert % base;
    ++index;
    number_to_convert /= base;
  }
  while(number_to_convert != 0);
}

void display_converted_number(void)
{
  char base_digits[16] = 
    { '0', '1', '2', '3', '4', '5', '6', '7',
      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int next_digit;

  printf("Converted number = ");

  for(--index; index >= 0;--index)
  {
    next_digit = converted_number[index];
    printf("%c", base_digits[next_digit]);
  }

  printf("\n");
}

int main()
{
  void get_number_and_base(void), convert_number(void), 
    display_converted_number(void);

  get_number_and_base();
  convert_number();
  display_converted_number();

  return 0;
}