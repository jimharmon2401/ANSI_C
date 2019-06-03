/* program to count instances of numbers */
#include <stdio.h>

int main()
{
  int rating_counters[11], i, response;

  for(i = 1; i <= 10; ++i)
    rating_counters[i] = 0;

  printf("Enter your responses\n");

  for( i = 1; i <= 20; ++i)
  {
    scanf("%i", &response);

    if(response < 1 || response > 10)
      printf("Bad response: %i\n", response);
    else
      ++rating_counters[response];
  }

  printf("\n\nRating   Number of Responses\n");
  printf("------   ------------------\n");

  for(i = 1; i <= 10; ++i)
  {
    printf("%4d%14d\n", i, rating_counters[i]);
  }

  return 0;
}