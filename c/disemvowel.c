/*
Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this kata y isn't considered a vowel.
*/

#include <stdlib.h>
#include <strings.h>

char *disemvowel(const char *str)
{
  char *non_vowels = malloc(sizeof(char) * strlen(str) + 1);
  int n = 0;
  for (int i = 0; i < strlen(str); i++) {
    switch (str[i]) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        break;
    
    default:
        non_vowels[n++] = str[i];
        break;
    }
  }
  non_vowels[n] = '\0';
 return non_vowels;
}