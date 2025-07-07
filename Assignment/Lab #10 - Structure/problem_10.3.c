/* Question:
Write a C program to compare the memory size of a structure and a union containing the same types of data.
*/
#include <stdio.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

struct Book
{
	char title[100];
	char author[100];
	float price;
};

union BookUnion
{
	char title[999999];
	char author[50];
	float price;
};

int main()
{
	printf(GREEN "Size of struct Book: %zu bytes\n" RESET, sizeof(struct Book));
	printf(CYAN "Size of union BookUnion: %zu bytes\n" RESET, sizeof(union BookUnion));
	return 0;
}
