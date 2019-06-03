/* Function to convert a string to an integer */
#include <stdio.h>

int string_to_integer (char string[])
{
  int i, integer_value, result = 0;

  for ( i = 0; string[i] >= '0' && string[i] <= '9'; ++i)
  {
    integer_value = string[i] - '0';
    result = result * 10 + integer_value;
  }

  return (result);
}

int main ()
{
  int string_to_integer(char string[]);

  printf("%i\n", string_to_integer("245"));
  printf("%i\n", string_to_integer("100") + 25);
  printf("%i\n", string_to_integer("13x5"));

  return(0);
}