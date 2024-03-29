/* Linked Lists */
#include <stdio.h>

int main ()
{
  struct entry
  {
    int value;
    struct entry *next;
  };

  struct entry n1, n2, n3;
  int i;

  n1.value = 100;
  n2.value = 200;
  n3.value = 300;

  n1.next = &n2;
  n2.next = &n3;

  i = n1.next->value;
  printf("%i  ", i); /* should be 200 */

  printf("%i\n", n2.next->value);  /* should be 300 */

  return(0);
}