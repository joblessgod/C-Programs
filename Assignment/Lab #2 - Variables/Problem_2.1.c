/* Question
    Write a C program to declare and initialize variables of different data types (int, char, float, string) and print their values to the screen.
*/

#include <stdio.h>
int main()
{
     int intData = 7;
     char charData = 'S';
     float floatData = 3.14;
     char name_of_student[] = "Sanchit Never Dies";

     printf("\nThis is Integer(Int): %d", intData);
     printf("\nThis is Character(Char): %c", charData);
     printf("\nThis is Floating Number(Float): %.2f", floatData); // %.2f -> only 2 points after '.'
     printf("\nThis is Array of Strings(String): %s\n", name_of_student);

     return 0;
}