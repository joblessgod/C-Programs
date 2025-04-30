#include <stdio.h>

int main()
{
    int givenNum = 0;

    printf("Enter a number: ");
    scanf("%d", &givenNum); // takes number from user - 4

    if (givenNum > 0)
    {
        printf("Given number \'%d\' is \"Positive\".\n", givenNum);
    }
    else if (givenNum < 0)
    {
        printf("Given number \'%d\' is \"Negative\".\n", givenNum);
    }
    else
    {
        printf("Given number \'%d\' is neither \"Positive\" or \"Negative\".\n", givenNum);
    }

    return 0;
}
