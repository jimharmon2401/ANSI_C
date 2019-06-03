/* Function to count the characters in a string pointer version */
#include <stdio.h>

int string_length (char  *string)
{
  char *cptr = string;

  while ( *cptr )
    ++cptr;

  return ( cptr - string );
}

int main()
{
  int string_length (char  *string);
  printf("%i  ", string_length("string_length test"));
  printf("%i  ", string_length(""));
  printf("%i\n", string_length("complete"));

  return(0);
}