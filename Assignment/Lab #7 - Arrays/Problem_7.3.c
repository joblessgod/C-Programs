/* Question:
    Write a C program to calculate the sum and average of elements stored in an array.
 */
#include <stdio.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main() {
	int i, sum = 0;	
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (i = 0; i < 10; i++) 	{
		sum += arr[i];
	}

	printf(CYAN"\nArray:");
	for (i = 0; i < 10; i++) 	{
		printf(" %d", arr[i]);
	}
	
	printf(GREEN "\nSum of 10 numbers stored in array: \'%d\'" RESET, sum);
	printf(GREEN "\nAvgerate of 10 numbers stored in array: \'%d\'\n\n"RESET, sum/10);
	return 0;
}

