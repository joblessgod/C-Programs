/* Question:
  Write a C program to swap two numbers using a function that takes pointers as arguments.
*/
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x, y;
  printf("Enter two numbers(x,y): ");
  scanf("%d %d", &x, &y);

  printf(GREEN "Before swapping: x = %d, y = %d\n" RESET, x, y);

  swap(&x, &y);

  printf(GREEN "After swapping:  x = %d, y = %d\n" RESET, x, y);

  return 0;
}