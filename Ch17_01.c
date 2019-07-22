/* Program to copy one file to another - version 2 */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE *in, *out;
  int c;

  if ( argc != 3 )
  {
    fprintf(stderr, "Need two file names\n");
    return (EXIT_FAILURE);
  }

  if ( (in = fopen (argv[1], "r")) == NULL )
  {
    fprintf (stderr, "Can't read %s.\n", argv[1]);
    return (EXIT_FAILURE);
  }

  if ( (out = fopen (argv[2], "w"))== NULL )
  {
    fprintf (stderr, "Can't write %s.\n", argv[2]);
    return (EXIT_FAILURE);
  }

  while ( (c = getc (in)) != EOF )
    putc (c, out);

  printf ("File has been copied.\n");

  return(EXIT_SUCCESS);
}