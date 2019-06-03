/* program to find primes < 50 */
#include <stdio.h>

int main()
{
  int p, is_prime, i, primes[50], prime_index = 2;

  primes[0] = 2;
  primes[1] = 3;

  for(p = 5; p <= 50; p = p + 2)
  {
    is_prime = 1;

    for(i = 1; is_prime && p / primes[i] >= primes[i]; ++i)
      if(p % primes[i] == 0)
        is_prime = 0;

    if(is_prime)
    {
      primes[prime_index] = p;
      ++prime_index;
    }
  }

  for(i = 0; i < prime_index; ++i)
    printf("%i   ", primes[i]);

  printf("\n");

  return 0;
}