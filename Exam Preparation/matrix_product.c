#include <stdio.h>
int main()
{
    int m, n, p, q;
    int matA[5][5], matB[5][5], prd[5][5];

    printf("Enter the size of first matrix: ");
    scanf("%dx%d", &m, &n);

    printf("Enter the size of second matrix: ");
    scanf("%dx%d", &p, &q);

    if (m != q)
    {
        printf("The Product in this size of matrix is not possible!");
        return 1;
    }

    printf("Enter elements of First matrix: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Enter elements of Second matrix: \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    // production of two different matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            prd[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                prd[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    // display the result
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", prd[i][j]);
        }
        printf("\n");
    }
    return 0;
}