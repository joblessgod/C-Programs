/* Question:
	Write a C program that uses calloc() to allocate memory for an array of n integers, initializes the array to zero, and then prints the elements. Afterward, release the allocated memory using free().
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main()
{
	int num;
	int *ptr = NULL;
	
	system("cls");
	printf(CYAN "Enter the number of elements in the array: " RESET);
	scanf("%d", &num);

	ptr = (int *)calloc(num, sizeof(int));
	if (ptr == NULL)
	{
		printf(RED "Memory allocation failed.\n" RESET);
		return 1;
	}

	printf(CYAN "Enter %d integers:\n" RESET, num);
	for (int i = 0; i < num; i++)
	{
		printf("Element %d: ", i + 1);
		while (scanf("%d", (ptr + i)) != 1)
		{
			printf(RED "Invalid input. Please enter an integer: " RESET);
			while (getchar() != '\n')
				;
		}
	}

	printf(GREEN "\nOutput integer(s):\n" RESET);
	for (int i = 0; i < num; i++)
	{
		printf("Value %d - %d (%d)\n", i + 1, *(ptr + i), (void *)(ptr + i)); // <memory value> - <memory location>
	}

	free(ptr);
	return 0;
}
