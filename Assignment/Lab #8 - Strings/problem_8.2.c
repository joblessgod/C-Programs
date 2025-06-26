/* Question:
   Write a C program to reverse a string without using any library function.
*/
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main() {
  char stringData[100];

  printf("Enter words: ");
  fgets(stringData, sizeof(stringData), stdin); // not using scanf() due to space issue!

  int length = strlen(stringData) - 1;

  printf(GREEN "> Original String: %s" RESET, stringData);
  for (int i = 0; i < length/2; i++) {
    char temp = stringData[i];
    stringData[i] = stringData[length - i - 1];
    stringData[length - i - 1] = temp;
  }
  printf(GREEN "> Reversed String: %s" RESET, stringData);
  return 0;
}