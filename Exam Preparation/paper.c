#include <stdio.h>

void main()
{
    char string[] = "Storage Classes";
    int x;
    for (int x = 0; string[x] != NULL; x++)
    {
        if ((x % 3) == 1)
        {
            printf("%c", string[x]);
        }
    }
}