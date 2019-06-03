#include <stdio.h>

struct entry
{
  int value;
  struct entry *next;
};

struct entry *find_entry (struct entry *lptr, int match)
{
  while ( lptr != 0 )
  {
    if ( lptr->value == match )
      return (lptr);
    else
      lptr = lptr->next;
  }
  return (0);
}

int main ()
{
  struct entry *find_entry (struct entry *lptr, int match);
  struct entry n1, n2, n3;
  struct entry *lptr, *list_start = &n1;
  int search;

  n1.value = 100;
  n1.next = &n2;

  n2.value = 200;
  n2.next = &n3;

  n3.value = 300;
  n3.next = 0;

  printf("Enter value to locate: ");
  scanf("%i", &search);

  lptr = find_entry (list_start, search);

  if( lptr != 0 )
    printf("Found %i.\n", lptr->value);
  else
    printf("Not found.\n");

  return(0);
}