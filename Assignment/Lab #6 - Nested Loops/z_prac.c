/*
Write a C program to print the following left-angled triangle pattern using nested for loops:   
                *
              * *
            * * *
          * * * *
        * * * * *
*/

#include <stdio.h>
int main() {
    int Num = 5, i, j;

    for (i = 1; i <= Num; i++) {
        for (j = 1; j <= Num - i; j++) {
            printf("  ");
        };

        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    };
    return 0;
}