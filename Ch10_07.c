/* Function to determine if a character is alphabetic */
#include <stdio.h>

int alphabetic (char c)
{
  if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
    return (1);
  else
    return(0);
}

/* Function to count the number of words in a string */

int count_words (char string[])
{
  int i, looking_for_word = 1, word_count = 0;
  int alphabetic (char c);

  for ( i = 0; string[i] != '\0'; ++i )
    if ( alphabetic(string[i]) )
    {
      if ( looking_for_word )
      {
        ++word_count;
        looking_for_word = 0;
      }
    }
    else
      looking_for_word = 1;

  return(word_count);
}

int main ()
{
  char text1[] = "Well, here goes.";
  char text2[] = "And here we go... again.";
  int count_words (char string[]);

  printf("%s -- words = %i\n", text1, count_words(text1));
  printf("%s -- words = %i\n", text2, count_words(text2));

  return 0;
}