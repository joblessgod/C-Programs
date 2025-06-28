/* Question
    Write a C program to print all characters corresponding to ASCII values from 1 to 255.
*/

#include <stdio.h>
int main()
{
     int i;
     for (i = 0; i < 255; i++)
     {
          printf("> ASCII Num: %d\n  Character: %c\n\n", i, i);
     }

     return 0;
}