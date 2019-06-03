/* copy a string */

#include <stdio.h>

void copy_string (char *to, char *from)
{
  for ( ; *from != '\0'; ++from, ++to)
    *to = *from;

  *to = '\0';
}

int main ()
{
  void copy_string (char  *to, char  *from);
  char string1[] = "A string to be copied."; char string2[50];

  copy_string(string2, string1);
  printf("%s\n", string2);

  copy_string(string2, "So is this.");
  printf("%s\n", string2);

  return(0);
}