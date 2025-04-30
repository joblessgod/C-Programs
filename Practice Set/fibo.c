#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}