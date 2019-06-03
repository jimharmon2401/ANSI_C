/* Bitwise operators illustrated */
#include <stdio.h>

int main ()
{
  unsigned int w1 = 0525u, w2 = 0707u, w3 = 0122u;

  printf ("%o\t%o\t%o\n", w1 & w2, w1 | w2, w1 ^ w2);
  printf ("%o\t%o\t%o\n", ~w1, ~w2, ~w3);
  printf ("%o\t%o\t%o\n", w1 ^ w1, w1 & ~w2, w1 | w2 | w3);
  printf ("%o\t%o\n", w1 | w2 & w3, w1 | w2 & ~w3);
  printf ("%o\t%o\n", ~(~w1 & ~w2), ~(~w1 | ~w2));

  w1 ^= w2;
  w2 ^= w1;
  w1 ^= w2;
  printf("w1 = %o, w2 = %o\n", w1, w2);

  return (0);
}