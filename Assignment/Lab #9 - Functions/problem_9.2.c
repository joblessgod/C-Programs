/* Question:
  Write a C program to find the factorial of a number using a recursive function.
*/
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int factorial(int n) {
  if (n == 0 || n == 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  int input = 5; // 5*4*3*2*1 = 120
  return printf(GREEN "\nFactorial of %d is: %d\n" RESET, input, factorial(input));
}
