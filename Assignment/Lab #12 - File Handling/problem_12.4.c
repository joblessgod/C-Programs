/* Question:
	Write a C program to read a file containing numbers (one per line), calculate their sum, and display the result. Ensure the program handles the case where the file is empty.
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
	int sum = 0;
	float num;

	FILE *fp = fopen("numDataList.txt", "r");
	if (fp == NULL){
		printf(RED "Error while opening file" RESET);
		return 1;
	}
	char n;
	int count = 0;
	printf(CYAN"Found Numbers: "RESET);
	while (fscanf(fp, "%f", &num) == 1){
		sum += num;
		printf("%d ",sum);
		count++;
	}
	if (count == 0)
	{
		printf(RED "\nFile is empty or contains invalid numbers.\n" RESET);
	}
	else
	{
		printf(GREEN "\nSum of all numbers: %d\n" RESET, sum);
	}

	return 0;
}
