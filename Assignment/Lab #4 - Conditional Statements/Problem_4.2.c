/* Question
    WAP that takes a day number (1 to 7) as input and displays the corresponding weekday using a switch-case statement.
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

// Color codes
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define RED "\033[31m"

int main()
{
    int dayNum;
    const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    system("cls");
    printf(CYAN "Enter a day number (1 to 7): " RESET);
    scanf("%d", &dayNum);

    if (dayNum >= 1 && dayNum <= 7)
    {
        printf(CYAN "> Day %d is %s!\n" RESET, dayNum, days[dayNum]);
    }
    else
    {
        printf(RED "Invalid input! Please enter a number from 1 to 7. Try again!\n" RESET);
        return 0;
    }
    printf("\nPress any key to exit... ");
    getch();
    return 0;
}
