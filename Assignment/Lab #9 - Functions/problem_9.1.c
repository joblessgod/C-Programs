/* Question:
    Write a C program to define a function that accepts two integers as arguments and returns their sum.
*/
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int sum(int a, int b);
int main() {
  int x = 5, y = 6;
  
  printf(GREEN "Sum of %d and %d is %d\n" RESET, x, y, sum(x, y));
  return 0;
}

int sum(int a, int b){
  return a + b;
}