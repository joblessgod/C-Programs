/* Question:
   Write a C program to input a string and count the total number of vowels and consonants in it using function.
*/
#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(const char *str, int *vowelCount, int *consonantCount)
{
    *vowelCount = 0;
    *consonantCount = 0;

    while (*str)
    {
        char ch = tolower(*str);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                (*vowelCount)++;
            }
            else
            {
                (*consonantCount)++;
            }
        }
        str++;
    }
}

int main()
{
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
