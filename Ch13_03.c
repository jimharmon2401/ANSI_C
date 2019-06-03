/* Illustrate the use of the #include statement
   Note: This program assumes that definitions are
   set up in a file called metric.h     */

#include <stdio.h>
#include "metric.h"

int main( )
{
  float liters, gallons;

  printf("*** Liters to Gallons ***\n\n");
  printf("Enter the number of liters: ");
  scanf("%f", &liters);

  gallons = liters * QUARTS_PER_LITER / 4.0;
  printf("%.2f liters = %.2f gallons\n", 
      liters, gallons);

  return(0);
}