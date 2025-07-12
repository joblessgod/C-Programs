#include <stdio.h>

int getFibonacci(int n)
{
    int sum = 0;
    if (n == 0)
        return 1;
    else
    {
        sum = n + getFibonacci(n - 1);
    }
    return sum;
}

int main()
{
    int n = 5;
    printf("Fibonacci is: %d", getFibonacci(n));
    return 0;
}