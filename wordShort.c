#include <stdio.h>
#include <string.h>

int main()
{
    char text[100] = "Sanchit";
    int len = strlen(text);

    printf("\nOriginal: \'%s\'", text);
    for (int i = 0; i < len / 2; i++)
    {
        if (text[i] != text[len - i - 1])
        {
            char temp = text[i];
            text[i] = text[len - i - 1];
            text[len - i - 1] = temp;
        }
    }

    printf("\nReverse: \'%s\'", text);
    return 0;
}