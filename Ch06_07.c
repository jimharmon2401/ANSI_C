/* This program categorizes a single character
    that is entered at the terminal */

#include <stdio.h>

int main()
{
  char c;

  printf("Enter a single character: \n");
  scanf("%c", &c);

  if ( (c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z') )
    printf("It is an alphabetic charcter.\n");
  else if ( c >= '0' && c <= '9' )
    printf("It is a digit.\n");
  else
    printf("It is a special character.\n");

  return 0;
}