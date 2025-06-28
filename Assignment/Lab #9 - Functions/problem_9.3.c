/* Question:
    Write a C program to check whether a given number is a prime number using a function.
*/
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int isPrime(int num){
  if (num <= 1) return printf(RED"%d is not a prime number.\n"RESET, num);
  for (int i = 2; i * i <= num; i++){
    if (num % i == 0) return 0;
  }
  return 1;
}

int main()
{
  int inpNum;

  printf("Enter a number: ");
  scanf("%d", &inpNum);
  if (isPrime(inpNum))
    printf(GREEN "%d is a prime number.\n" RESET, inpNum);
  else
    printf(RED "%d is not a prime number.\n" RESET, inpNum);
  return 0;
}