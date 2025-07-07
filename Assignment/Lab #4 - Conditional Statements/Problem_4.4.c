/* Question
    WAP to display the grade of a student based on the percentage using multiple if-else conditions (e.g., A for =90, B for 80�89, etc.).
 */

#include <stdio.h>
#include <windows.h>
#include <conio.h>

// Color codes
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define RED "\033[31m"

int main()
{
    SetConsoleTitle("Lab #4.4");
    system("cls");

    float percentage;

    printf(CYAN "Enter the student's percentage (0-100): " RESET);
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf(GREEN "Grade: A (Excellent)\n" RESET);
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf(GREEN "Grade: B (Good)\n" RESET);
    }
    else if (percentage >= 70 && percentage < 80)
    {
        printf(GREEN "Grade: C (Satisfactory)\n" RESET);
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf(GREEN "Grade: D (Needs Improvement)\n" RESET);
    }
    else if (percentage >= 0 && percentage < 60)
    {
        printf(RED "Grade: F (Fail / Poor)\n" RESET);
    }
    else
    {
        printf(RED "Invalid percentage! Please enter a value between 0 and 100.\n" RESET);
    }
    printf("\nPress any key to exit... ");
    getch();
    return 0;
}
