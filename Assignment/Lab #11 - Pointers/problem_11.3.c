/* Question:
	Write a C program that dynamically allocates memory for an array of n integers using malloc(). The program should input the values into the array and then print them. Finally, free the allocated memory using free().
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
	system("cls");
	int num;
	printf(CYAN "Enter the number of elements in the array: " RESET);
	scanf("%d", &num);

	int *ptr = NULL; //0

	printf(RED "Pointer before malloc:" RESET " %d\n", (void *)ptr); //memo location

	ptr = (int *) malloc(num * sizeof(int)); //malloc case
	// ptr = (int *) calloc(num, sizeof(int)); //calloc case

	if (ptr == NULL){
		printf(RED "Memory allocation failed.\n" RESET);
		return 1;
	}

	printf(RED "Pointer after malloc & before free:" RESET " %d\n", (void *)ptr); // Memo Location /// 6778987

	printf(CYAN "Enter %d integers:\n" RESET, num);
	for (int i = 0; i < num; i++){
		printf("Element %d: ", i + 1);
		while (scanf("%d", (ptr + i)) != 1){
			printf(RED "Invalid input. Please enter an integer: " RESET);
			while (getchar() != '\n');
		}
	}

	printf(GREEN "\nOutput integer(s):\n" RESET);
	for (int i = 0; i < num; i++){
		printf("Value %d - %d (%d)\n", i + 1, *(ptr + i), (void *)(ptr + i)); //1 - 6778987
	}

	free(ptr);
	printf(RED "Pointer after free before null:" RESET " %d\n", (void *)ptr); //0
	ptr = NULL;
	printf(RED "Pointer after free:" RESET " %d\n", (void *)ptr); //0
	return 0;
}
