#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "POKHARA";
    int len = strlen(name);

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }

        for (int j = 0; j <= len / 2 + 1 - i; j++)
        {
            printf("%c ", name[j + i]);
        }

        for (int j = len / 2 + 2; j < len-i; j++)
        {
            printf("%c ", name[j]);
        }
        printf("\n");
    }

    return 0;
}