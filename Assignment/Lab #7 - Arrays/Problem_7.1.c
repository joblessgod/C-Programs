/* Question:
   Write a C program to input 10 integers into an array and display them using a for loop.
 */
#include <stdio.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main() {
	int arr[10];
	int sum = 0;

	printf(GREEN "\nEnter 10 Integer Number:\n" RESET);
	for (int i = 0; i < 10; i++) 	{
		printf(CYAN "> %d Number:\t " RESET, i + 1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	return printf(GREEN "\nSum of 10 integer is \'%d\'\n" RESET, sum);
}