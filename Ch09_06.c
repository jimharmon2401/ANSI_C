/* Program to illustrate arrays of structures */

#include <stdio.h>

struct time
{
  int hour;
  int minutes;
  int seconds;
};

int main()
{
  struct time time_update (struct time now);
  struct time test_times[5] = 
  {  {11, 59, 59 }, { 12, 0, 0 }, { 1, 29, 59},
     {23, 59, 59 }, { 19, 12, 27 }};
  int i;

  for ( i = 0; i < 5; ++i )
  {
    printf("Time is %.2i:%.2i:%.2i", test_times[i].hour, 
        test_times[i].minutes, test_times[i].seconds);

    test_times[i] = time_update (test_times[i]);
 
    printf(" ...one second later it's %.2i:%.2i:%.2i\n",
        test_times[i].hour, test_times[i].minutes,
        test_times[i].seconds);
  }

  return 0;
}

/* below function from program 9.5 */
struct time time_update (struct time  now)
{
  ++now.seconds;

  if ( now.seconds == 60 )  /* next minute */
  {
    now.seconds = 0;
    ++now.minutes;

    if ( now.minutes == 60 )  /* next hour */
    {
      now.minutes = 0;
      ++now.hour;

      if ( now.hour == 24 )
        now.hour = 0; /* midnight */
    }
  }
  return (now);
}