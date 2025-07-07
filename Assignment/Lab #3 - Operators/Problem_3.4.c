/* Question
    WAP that reads a string using gets() and displays it using puts().
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
    SetConsoleTitle("Lab #3.4");
    system("cls");

    char input[100];

    printf(CYAN "Enter any string:\n> " RESET);
    gets(input);

    printf(CYAN "\nYou entered: " RESET);
    puts(input);
    printf("\nPress any key to exit... ");
    getch();
    return 0;
}
