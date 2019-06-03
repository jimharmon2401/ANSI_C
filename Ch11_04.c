/* Program to illustrate structure pointers */

#include <stdio.h>

int main ()
{
  struct date
  {
    int month;
    int day;
    int year;
  };

  struct date today, *date_pointer;

  date_pointer = &today;
  date_pointer->month = 9;
  date_pointer->day = 25;
  date_pointer->year = 1988;

  printf("Today's date is %i/%i/%i.\n",
    date_pointer->month, date_pointer->day, date_pointer->year % 100);

  (*date_pointer).month = 5;
  (*date_pointer).day = 3;
  (*date_pointer).year = 2019;

  printf("Today's date is %i/%i/%i.\n",
    (*date_pointer).month, (*date_pointer).day, (*date_pointer).year % 100);


  return(0);
}