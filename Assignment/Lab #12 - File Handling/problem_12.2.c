/* Question:
	Write a C program that reads a text file and displays its contents on the screen. The program should handle the case when the file doesn't exist.
*/
#include <stdio.h>
#include <string.h>
#include <windows.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main()
{
	system("cls");
	char animeName[100];
	char animeDesc[100];

	printf("\t>> Enter Anime details <<\n");
	FILE *fp = fopen("anime.txt", "r");
	if (fp == NULL){
		printf(RED "Error while opening file" RESET);
		return 1;
	}
	char ch;
	printf(CYAN "\nContents of anime.txt:\n" RESET);
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}

	fclose(fp);
	return 0;
}
