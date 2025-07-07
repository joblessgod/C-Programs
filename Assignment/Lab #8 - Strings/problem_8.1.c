/* Question:
   Write a C program to input a string and count the total number of vowels and consonants in it.
*/
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main()
{
  char data[1000];
  char chr; // character
  int vowels = 0, consonants = 0;

  printf("Enter any words: ");
  fgets(data, sizeof(data), stdin); // not using scanf() due to space issue!
  int length = strlen(data) - 1;

  if (length > 1000)
  {
    printf("\nYou\'ve reached out of words! \n");
    return 1;
  }

  for (int i = 0; i < length; i++)
  {
    chr = data[i];
    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' ||
        chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U')
    {
      vowels++;
    }
    else
    {
      consonants++;
    }
  }
  printf(GREEN "\n> Vowels: %d" RESET, vowels);
  printf(GREEN "\n> Consonants: %d" RESET, consonants);
  printf(GREEN "\n> Total character: %d\n" RESET, vowels + consonants);
  return 0;
}