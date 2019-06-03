/* Program to illustrate a structure */
#include <stdio.h>
int main()
{
  struct date
  {
    int month;
    int day;
    int year;
  };

  struct date today;

  today.month = 9;
  today.day = 25;
  today.year = 1993;

  printf("Today's date is %i/%i/%i.\n", today.month,
      today.day, today.year % 100);

  return 0;
}