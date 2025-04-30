#include <stdio.h>

int main()
{
    char a, b, d;

    a = "F";
    b = "G";
    d = "+";
    printf("%d %d %d", &a, &d, &b);
}