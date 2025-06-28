/* Question
    Write a C program to demonstrate and differentiate between global, local, static, and non-static variables by printing their values from different functions.
*/

#include <stdio.h>
int a;     // globle variable a and initialize
int b = 0; // mark it as false

void assignValue()
{
     printf("\nPrint from PRIVATE Function\n");

     a = 200; // assign value of b
     b = 1;   // mark it as true

     printf("\tValue of a: %d\n", a);
     printf("\tValue of b: %d\n", b);
}

int main()
{
     assignValue();
     // if we make it visible it will update the value of b and PUBLIC fuction's ifelse will be trigger as 'true' and return updated value of b from that PRIVATE function.

     a = 100; // assign value of b

     printf("\nPrint from PUBLIC Function\n");
     printf("\tValue of a: %d\n", a);

     if (b)
     {
          printf("\tValue of b: %d\n", b);
     }
     else
     {
          printf("\t\'b\' is not assigned yet!\n");
     }
     return 0;
}