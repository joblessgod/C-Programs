#include <stdio.h>
int main()
{
    int n = 99999, sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum: %d", sum);

    return 0;
}