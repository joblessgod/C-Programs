/* Question:
	Write a C program to open a text file, write your name and roll number into it, and then close the file.
*/
#include <stdio.h>
#include <windows.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main()
{
	FILE *fp;
	char name[100];
	int roll;

	system("cls");
	printf(CYAN "Enter your Name: " RESET);
	fgets(name, sizeof(name), stdin);

	size_t len = strlen(name);
	if (len > 0 && name[len - 1] == '\n') {
		name[len - 1] = '\0';
	}
	
	printf(CYAN "Enter your Roll No: " RESET);
	scanf("%d", &roll);

	fp = fopen("user.txt", "a+");
	if (fp == NULL)
	{
		printf(RED "Error opening file" RESET);
		return 1;
	}

	int written = fprintf(fp, "%s, %d\n", name, roll);
	if (written > 0)
		printf(GREEN "\nHi! %s\nRoll: %d" RESET, name, roll);
	else
		printf(RED "\nSorry! Something went wrong :(" RESET);
	fclose(fp);
	return 0;
}
