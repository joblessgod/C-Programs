/* Question:
    Write a C program to check whether a given number is a prime number using a function.
*/
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Is a prime number
}

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);
  if (isPrime(number))
    printf(GREEN "%d is a prime number.\n" RESET, number);
  else
    printf(RED "%d is not a prime number.\n" RESET, number);
  return 0;
}