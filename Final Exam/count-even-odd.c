#include <stdio.h>
int main()
{
    int n = 123428796, even = 0, odd = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        if (remainder % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }

    printf(" Odd: %d\n Even: %d", odd, even);

    return 0;
}