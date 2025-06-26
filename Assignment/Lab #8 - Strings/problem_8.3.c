/* Question:
  Write a C program to compare two strings using strcmp() and display whether they are equal or not.
*/
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int main() {
  char str1[100], str2[100];

  printf("Enter first word: ");
  fgets(str1,sizeof(str1),stdin);

  printf("Enter second word: ");
  fgets(str2,sizeof(str2),stdin);

  int isEqual = strcmp(str1,str2);
  if(isEqual == 0) {
    printf(GREEN "The two strings are equal!\n" RESET);
  } else {
    printf(RED "The two strings are not equal!\n" RESET);
  }
  return 0;
}