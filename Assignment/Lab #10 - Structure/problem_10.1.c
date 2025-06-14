/* Question:
Write a C program to define a structure to store information about a book (title,
author, price) and then input and display the details of a book using structure
variables.
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

	struct Book BookDB;

	// data input from user
	printf(CYAN "Enter book title: " RESET);
	fgets(BookDB.title, sizeof(BookDB.title), stdin);

	printf(CYAN "Enter author name: " RESET);
	fgets(BookDB.author, sizeof(BookDB.author), stdin);

	printf(CYAN "Enter price: " RESET);
	scanf("%f", &BookDB.price);

	printf(GREEN "\nBook Details:\n");
	printf("Title : %s", BookDB.title);
	printf("Author: %s", BookDB.author);
	printf("Price : $%.2f\n" RESET, BookDB.price);

	return 0;
}
