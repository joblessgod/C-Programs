/* Question:
     Write a C program to declare and initialize variables of different data types (int,
     char, float, string) and print their values to the screen.
*/

#include <stdio.h>
int main()
{
     int intData = 7;
     char charData = 'S';
     float floatData = 3.14;
     char *name_of_student[3] = {"Sanchit", "Sanchit 2", "Sanchit 3"};

     printf("\nThis is Integer(Int): %d", intData);
     printf("\nThis is Character(Char): %c", charData);
     printf("\nThis is Floating Number(Float): %.2f", floatData); // %.2f -> only 2 points after '.'
     printf("\nThis is Array of Strings(String): %c\n", name_of_student[3]);

     return 0;
}