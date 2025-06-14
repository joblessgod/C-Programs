/* Question:
Write a C program to compare the memory size of a structure and a union
containing the same types of data.
*/

#include <stdio.h>
#include <windows.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

struct Book
{
	char title[100];
	char author[100];
	float price;
};

int main()
{
	SetConsoleTitle("Lab 10th - Structure");



	return 0;
}
