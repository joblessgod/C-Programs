#include <stdio.h>
#include <string.h>
int main()
{
    int len = 4;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= len-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}