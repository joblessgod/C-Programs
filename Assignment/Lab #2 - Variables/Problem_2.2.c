/* Question
    Write a C program to display the size (in bytes) of various data types like int, float, char, double, and string using the sizeof operator.
*/

#include <stdio.h>
int main()
{
     int intSize = sizeof(int);
     int floatSize = sizeof(float);
     int charSize = sizeof(char);
     int doubleSize = sizeof(double);
     int stringSize = sizeof("");

     printf("Size of \'int\' = %d byte\n", intSize);
     printf("Size of \'float\' = %d byte\n", floatSize);
     printf("Size of \'char\' = %d byte\n", charSize);
     printf("Size of \'double\' = %d byte\n", doubleSize);
     printf("Size of \'string\' = %d byte\n", stringSize);

     return 0;
}