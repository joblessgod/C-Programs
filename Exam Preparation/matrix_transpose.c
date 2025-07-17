#include <stdio.h>
int main()
{
    int mat_a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat_t[3][3];

    printf("\n\nOriginal Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", mat_a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat_t[j][i] = mat_a[i][j];
        }
    }
    printf("\n\nTrasposed Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", mat_t[i][j]);
        }
        printf(" \n");
    }

    return 0;
}