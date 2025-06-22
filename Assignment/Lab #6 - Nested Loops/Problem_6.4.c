/* Write a C program to print the following right-angled triangle pattern using nested for loops:
                    *
                  * * *
                * * * * *
                  * * *
                    *
*/
#include <stdio.h>
int main() {
    int num = 3; // upper 5
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num-i-1; j++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        for (int j = 0; j < i; j++) {
            printf("* ");
        }        
        printf("\n");
    }
    // bottom part
    for (int i = num-2; i >= 0; i--) {
       for (int j = 0; j < num-i-1; j++) {
        printf("  ");
       }
       for (int j = 0; j <= i; j++) {
        printf("* ");
    }    
    for (int j = 0; j < i ; j++) {
        printf("* ");
       }       
       printf("\n");
    }
return 0;
}