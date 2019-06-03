/* Function to determine if two strings are equal */

#include <stdio.h>

int equal_strings (char s1[], char s2[])
{
  int i = 0, answer;

  while ( s1[i] == s2[i] &&
      s1[i] != '\0' && s2[i] != '\0')
    ++i;


  if ( s1[i] == '\0' && s2[i] == '\0' )
    answer = 1;   /* strings equal */
  else
    answer = 0;   /* not equal */

  return(answer);
}

int main ()
{
  int equal_strings (char s1[], char s2[]);
  char stra[] = "string compare test";
  char strb[] = "string";

  printf("%i\n", equal_strings(stra, strb));
  printf("%i\n", equal_strings(stra, stra));
  printf("%i\n", equal_strings(strb, "string"));

  return 0;
}