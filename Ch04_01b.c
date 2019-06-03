#include <stdio.h>

int main()
{
  int    integer_var = 100;
  float  floating_var = 331.79;
  double double_var = 8.44e+11;
  char   char_var = 'W';

  printf("integer_var = %i\n", integer_var);
  printf("floating_var = %f\n", floating_var);
  printf("double_var = %e\n", double_var);
  printf("double_var = %g\n", double_var);
  printf("char_var = %c\n", char_var);

  /* NOTES */
  /* Character CONSTANTS use single quotes */
  /* character STRINGS use double quotes */
  /* thus the diff btwn char_var's assignment */
  /* and the first argument to printf() */

  return 0;
}