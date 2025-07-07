/* Question:
	Write a C program to append a new line of text to an existing file. If the file does not exist, create a new file and write the text to it.
*/
#include <windows.h>
#include <stdio.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main()
{
	system("cls");
	char langName[100] = "JS Programming Tutorial\n";
	char langDesc[100] = "This is JavaScript tutorial and this is for learning JavaScript\n";

	FILE *fp = fopen("langCode.txt", "a+");
	if (fp == NULL)
	{
		printf(RED "Error while opening file" RESET);
		return 1;
	}
	for (int i = 0; i < 4; i++)
	{
		fprintf(fp, "Language %d: %sDescription: %s\n", i + 1, langName, langDesc);
	}

	fclose(fp);
	printf(GREEN "Language details appended to file successfully.\n" RESET);
	return 0;
}
