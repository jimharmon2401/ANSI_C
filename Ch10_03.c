/* new concatenation program */

#include <stdio.h>

int main ()
{
  void concat (char result[], char str1[], char str2[]);
  char s1[] = {"Test " };
  char s2[] = { "works." };
  char s3[20];

  concat (s3, s1, s2);

  printf("%s\n", s3);

  return 0;
}

/* Function to concatenate two character strings */

void concat (char result[], char str1[], char str2[])
{
  int i, j;

  /* copy str1 to result */

  for ( i = 0; str1[i] != '\0'; ++i)
    result[i] = str1[i];

  /* copy str2 to result */

  for ( j = 0; str2[j] != '\0'; ++j)
    result[i + j] = str2[j];

  /* Terminate the concatenated string with a null */

  result[i+j] = '\0';
}