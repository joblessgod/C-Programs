/* Question:
Write a C program to define a nested structure to store information about a book.
The outer structure should contain the book's title, author, and price, while the
nested structure should contain the publisher's name and year of publication. Input
and display the details of the book using nested structure variables.
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
