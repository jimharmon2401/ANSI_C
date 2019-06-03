/* Rotation of integers */
#include <stdio.h>

int main ()
{
  unsigned int w1 = 0xa1b5u, w2 = 0xff22u;
  unsigned int rotate (unsigned int value, int n);

  printf("%x\n", rotate (w1, 4));
  printf("%x\n", rotate (w1, -4));
  printf("%x\n", rotate (w2, 8));
  printf("%x\n", rotate (w2, -2));
  printf("%x\n", rotate (w1, 0));
  printf("%x\n", rotate (w1, 20));

  return(0);
}

/* Function to rotate an unsigned int left or right */

unsigned int  rotate (unsigned int  value, int n)
{
  unsigned int  result, bits;

  /* scale down the shift count to a defined range */

  if ( n > 0 )
    n = n % 16;
  else
    n = -(-n % 16);

  if ( n == 0 )
    result = value;
  else if ( n > 0 )  /* left rotate */
  {
    bits = value >> (16 - n);
    result = value << n | bits;
  }
  else              /* right rotate */
  {
    n = -n;
    bits = value << (16 - n);
    result = value >> n | bits;
  }

  return(result);
}