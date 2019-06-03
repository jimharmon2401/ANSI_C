/* Function to find the minimum in an array */

#include <stdio.h>

int minimum ( int values[], int number_of_elements)
{
  int minimum_value, i;

  minimum_value = values[0];

  for ( i = 1; i < number_of_elements; ++i )
    if ( values[i] < minimum_value )
      minimum_value = values[i];

  return (minimum_value);
}

int main()
{
  int array1[5] = { 157, -28, -37, 26, 10 };
  int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };
  int minimum (int values[], int number_of_elements);

  printf("array1 minimum: %i\n", minimum (array1, 5));
  printf("array2 minimum: %i\n", minimum (array2, 7));

  return 0;
}