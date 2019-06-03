#include <stdio.h>
#define TRUE  1
#define FALSE 0

/* Function to determine if an integer is even */
int is_even(int number)
{
  int answer;

  if ( number % 2 == 0 )
    answer = TRUE;
  else
    answer = FALSE;

  return(answer);
}

int main ()
{
  int is_even (int number);

  if ( is_even (17) == TRUE )
    printf ("yes ");
  else
    printf ("no ");

  if ( is_even (20) == TRUE )
    printf ("yes\n");
  else
    printf ("no\n");

  return (0);
}