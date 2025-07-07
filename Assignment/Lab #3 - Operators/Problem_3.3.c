/* Question
	WAP to input a float and a character using scanf() and print them using printf() with appropriate format specifiers.
 */

#include <stdio.h>
#include <conio.h>
#include <windows.h>

// Color codes
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main()
{
	SetConsoleTitle("Lab #3.3");
	system("cls");

	float floatInput;
	char charInput;

	printf("Enter any floating num (e.g, 3.14, 4.1429):\n> ");
	scanf("%f", &floatInput);

	printf("\nEnter any one character (e.g, A, B, C):\n> ");
	scanf(" %c", &charInput);

	printf("\n\nData you shared:\n Float Number: %f\n Character: %c\n", floatInput, charInput);
	printf("\nPress any key to exit...");
	getch();
	return 0;
}
