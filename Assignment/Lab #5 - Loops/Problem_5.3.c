/* Question:
    Write a C program using a do-while loop to keep accepting numbers from the user until the user enters zero.
 */
#include <stdio.h>

// Color codes
#define RESET "\033[0m"
#define CYAN "\033[36m"
#define RED "\033[31m"

int main() {
    int inputNum;
    do {
        printf(CYAN "Enter a number (0 to stop): " RESET);
        scanf("%d", &inputNum);
    } while (inputNum != 0);
    
    printf(RED "\nYou entered \'0\'. You\'re OUT!\n" RESET);
    return 0;
}
