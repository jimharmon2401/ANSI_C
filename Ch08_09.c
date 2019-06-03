/* Function to find the minimum in an array */

#include <stdio.h>

int minimum (int values[10])
{
  int minimum_value, i;

  minimum_value = values[0];

  for ( i = 1; i < 10; ++i)
    if ( values[i] < minimum_value )
      minimum_value = values[i];

  return(minimum_value);
}

int main()
{
  int scores[10], i, minimum_score;
  int minimum ( int values[10]); /* not necessary, but playing it safe */

  printf("Enter 10 scores\n");

  for ( i = 0; i < 10; ++i)
    scanf("%i", &scores[i]);

  minimum_score = minimum(scores);
  printf("\nMinimum score is %i\n", minimum_score);

  return 0;
}