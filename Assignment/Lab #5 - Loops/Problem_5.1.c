/* Question:
    Write a C program using a for loop to print the multiplication table of a number entered by the user.
 */
#include <stdio.h>
#include <windows.h>

// Color codes
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int main()
{

    int num, i;
    SetConsoleTitle("Lab #5.1");

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf(GREEN "7 x %d = %d\n" RESET, i, 7 * i);
    }

    return 0;
}
