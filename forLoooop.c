#include <stdio.h>
int main()
{
    int i =0, j=0, n = 5;
    
    for (i = 0; i < n; i++)
    {
        for (j = n; j > 0; j--)
        {
            printf("%d%d\t", i, j);
        }
        printf("\n");
    }
    return 0;
}
