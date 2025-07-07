/* Question:
	Write a C program to find the value of an array element using a pointer. The program should accept an array of integers, take an index as input, and use a pointer to display the element at that index.
*/
#include <stdio.h>
#include <windows.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main()
{
	system("cls");

	int n;
	int dataArray[36];
	int *ptr;

	printf(CYAN "Enter the number of elements in the array: " RESET);
	scanf("%d", &n);

	ptr = dataArray;
	printf(GREEN "Enter %d integer(s):\n" RESET, n);
	for (int i = 0; i < n; i++)
	{
		printf("Element %d: ", i + 1);
		while (scanf("%d", (ptr + i)) != 1) {
			printf(RED "Invalid input. Please enter an integer: " RESET);
			while (getchar() != '\n');
		}
		// scanf("%d", (ptr + i));
	}

	printf(GREEN "\n%d Output integer(s):" RESET, n);
	for (int i = 0; i < n; i++)
	{
		printf("\nValue %d - %d", i + 1, *(ptr + i));
	}
	return 0;
}
