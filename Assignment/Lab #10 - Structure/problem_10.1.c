/* Question:
Write a C program to define a structure to store information about a book (title, author, price) and then input and display the details of a book using structure variables.
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
} BookDB;

int main()
{
	SetConsoleTitle("Lab 10th - Structure");
	system("cls");

	// data input from user
	printf(CYAN "Enter book title: " RESET);
	fgets(BookDB.title, sizeof(BookDB.title), stdin);

	printf(CYAN "Enter author name: " RESET);
	fgets(BookDB.author, sizeof(BookDB.author), stdin);

	printf(CYAN "Enter price: " RESET);
	scanf("%f", &BookDB.price);

	printf(GREEN "\nBook Details:\n");
	printf("Title : \t%s", BookDB.title);
	printf("Author: \t%s", BookDB.author);
	printf("Price : \t$%.2f\n" RESET, BookDB.price);

	return 0;
}
