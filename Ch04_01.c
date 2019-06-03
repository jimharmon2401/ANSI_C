#include <stdio.h>

int main()
{
  int type_mask;

  /* use 0x to precede a hexidecimal int */
  /* use 0 to precede an octal int */

  type_mask = 0x5EB;
  printf("Value = %x\n", type_mask);
  printf("Value = %#x\n", type_mask);
  return 0;
}