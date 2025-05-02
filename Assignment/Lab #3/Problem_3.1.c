/* Question:
     Write a C program to declare and initialize variables of different data types (int,
     char, float, string) and print their values to the screen.
*/

#include <stdio.h>
int main()
{
     int a  = 5, b  = 5;
     int x  = 10, y  = 10;
     printf("original a = %d, b = %d\n", a, b);
     printf("original x = %d, y = %d\n\n", x, y);
     printf("++a = %d\n", ++a);
     printf("b++ = %d\n", b++);
     printf("after b++,b = %d\n\n", b);
     printf("--x = %d\n", --x);
     printf("y-- = %d\n", y--);
     printf("after y-- = %d\n", y);

     return 0;
}