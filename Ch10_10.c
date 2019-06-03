/* Dictionary lookup program */
#include <stdio.h>

struct entry
{
  char word[10];
  char definition[50];
};


int compare_strings (char s1[], char s2[])
{
  int i = 0, answer;

  while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    ++i;

  if(s1[i] < s2[i])
    answer = -1;             /* s1 < s2 */
  else if (s1[i] == s2[i])
    answer = 0;              /* s1 == s2 */
  else
    answer = 1;              /* s1 > s2 */

  return(answer);
}


/* function to lookup a word inside a dictionary */
/* BASIC BINARY SEARCH */

int lookup (struct entry dictionary[], char search[], int entries)
{
  int low = 0;
  int high = entries - 1;
  int mid, result;
  int compare_strings(char s1[], char s2[]);

  while(low <= high)
  {
    mid = (low + high) / 2;
    result = compare_strings(dictionary[mid].word, search);

    if(result == -1)
      low = mid + 1;
    else if (result == 1)
      high = mid - 1;
    else
      return(mid);   /* found it */
  }

  return(-1);    /* not found */
}


int main ()
{
  struct entry dictionary[100] = 
    { { "aardvark",  "a burrowing African mammal"        },
      { "abyss",     "a bottomless pit"                  },
      { "acumen",    "mentally sharp; keen"              },
      { "addle",     "to become confused"                },
      { "aerie",     "a high nest"                       },
      { "affix",     "to append; attach"                 },
      { "agar",      "a jelly made from seaweed"         },
      { "ahoy",      "a nautical call of greeting"       },
      { "aigrette",  "an ornamental cluster of feathers" },
      { "ajar",      "partially opened"                  } };

  char word[10];
  int entries = 10;
  int entry_number;
  int lookup (struct entry dictionary[], char search[], int entries);

  printf("Enter word: ");
  scanf("%9s", word);
  entry_number = lookup(dictionary, word, entries);

  if(entry_number != -1)
    printf("%s\n", dictionary[entry_number].definition);
  else
    printf("Sorry, that word is not in my dictionary.\n");

  return(0);
}