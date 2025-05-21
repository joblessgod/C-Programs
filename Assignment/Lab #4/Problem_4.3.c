/* Question:
     WAP to find the greatest of three numbers using nested if statements.
 */
#include <stdio.h>
#include <windows.h>
// Color codes
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"

int main(){
    SetConsoleTitle("Lab #4.3");

    int a, b, c;

    printf(CYAN "Enter three numbers:\n" RESET);
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    
    printf(GREEN"\nFinding the greatest number...\n"RESET);

    if (a > b) {
        if (a > c)
            printf(GREEN"Greatest number is: %d\n"RESET, a);
        else
            printf(GREEN"Greatest number is: %d\n"RESET, c);
    } else {
        if (b > c)
            printf(GREEN"Greatest number is: %d\n"RESET, b);
        else
            printf(GREEN"Greatest number is: %d\n"RESET, c);
    }

    return 0;
}

