/* Write a C program to print the following right-angled triangle pattern using nested for loops:
                    *
                  * * *
                * * * * *
              * * * * * * *
            * * * * * * * * *
*/
#include <stdio.h>
int main() {
    int num = 5;
    for (int i = 0; i < num; i++) { // vertical length loop for each row
        for (int j = 0; j < num - i - 1; j++) { // left padding loop
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        for (int j = 0; j < i; j++) { // right padding loop - ignores first row
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}