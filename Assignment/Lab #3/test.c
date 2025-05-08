#include <stdio.h>
int main()
{
    int a = 1, b = 5;
    printf("> Intial Stage:\n  a = %d, b = %d\n", a, b);

    a++, b++; // Increment
    printf("> Increment (++):\n  a = %d, b = %d\n", a, b);
    
    a--, b--; // Decrement
    printf("> Decrement (--):\n  a = %d, b = %d\n", a, b);

    return 0;
}