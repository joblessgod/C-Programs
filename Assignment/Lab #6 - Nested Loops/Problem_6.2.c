/* Write a C program to print the following right-angled triangle pattern using nested for loops:
            * * * * *
            * * * *
            * * *
            * *
            *
*/
#include <stdio.h>
int main() {
    int num = 5;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num-i; j++) {
            printf("* ");
        }
        printf("\n");
    };
    return 0;
}