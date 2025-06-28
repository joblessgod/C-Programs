/* Question:
Write a C program to define a nested structure to store information about a book. The outer structure should contain the book's title, author, and price, while the nested structure should contain the publisher's name and year of publication. Input and display the details of the book using nested structure variables.
*/
#include <stdio.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

struct Book {
	char title[100];
	char author[100];
	struct {
		char name[100];
		int year;
	} publisher;
	float price;
} book;
int main()
{
	printf(GREEN "Enter book title: " RESET);
	scanf(" %[^\n]", book.title);

	printf(GREEN "Enter book auther: " RESET);
	scanf(" %[^\n]", book.author);

	printf(GREEN "Enter book publisher\'s name: " RESET);
	scanf(" %[^\n]", book.publisher.name);

	printf(GREEN "Enter book published year: " RESET);
	scanf("%d", &book.publisher.year);

	printf(GREEN "Enter book\' price: " RESET);
	scanf("%f", &book.price);

	printf(CYAN "\nBook Details:\n" RESET);
	printf(GREEN "Title: " RESET "%s\n", book.title);
	printf(GREEN "Author: " RESET "%s\n", book.author);
	printf(GREEN "Publisher Name: " RESET "%s\n", book.publisher.name);
	printf(GREEN "Year of Publication: " RESET "%d\n", book.publisher.year);
	printf(GREEN "Price: " RESET "%.2f\n", book.price);
	return 0;
}
