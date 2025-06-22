/* Question:
    Write a C program to print all even numbers from 1 to 100 using a loop.
 */
#include <stdio.h>

// Color codes
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define RED "\033[31m"

int main() {
    int maxNum = 100;
    printf("\nEven numbers from 1 to 100:\n");
    for (int i = 0; i < maxNum; i++) {
        if (i % 2 == 0) {
            printf(CYAN "%d ", i);
        }
    }
    return 0;
}