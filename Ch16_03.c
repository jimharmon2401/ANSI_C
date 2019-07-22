/* Program to copy one ifle to another */

#include <stdio.h>

int main ()
{
  char in_name[25], out_name[25];
  FILE *in, *out;
  int c;

  printf("Enter name of file to be copied: ");
  scanf("%24s", in_name);
  printf("Enter name of output file: ");
  scanf("%24s", out_name);

  if ( (in = fopen (in_name, "r")) == NULL )
    printf ("Can't open %s for reading.\n", in_name);
  else if ( (out = fopen (out_name, "w")) == NULL )
    printf ("Can't open %s for writing.\n", out_name);
  else
  {
    while ( (c = getc (in)) != EOF )
      putc (c, out);

    printf ("File has been copied.\n");
  }

  return(0);
}