#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    int Result = num % 2;

    return (Result == 0) ?
     printf("Given number is \"Even\".") 
    :
     printf("Given number is \"Odd\"."); //true = even || false == odd
}
