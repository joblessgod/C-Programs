/* Question:
    Write a C program to copy one string into another using a loop (without using strcpy()).
*/
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int main() {
  char original[100], clone[100];

  printf("Enter your word: ");
  fgets(original,sizeof(original),stdin);
  int length = strlen(original);

  for (int i = 0; i <= length; i++){
    clone[i] = original[i];
  }

  printf(GREEN "Original string: %s" RESET, original);
  printf(RED "Cloned string: %s" RESET, clone);

  return 0;
}