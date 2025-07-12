#include <stdio.h>
#include <string.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 4, 3, 7, 3,99};
    int max = arr[0], min = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("Max Number: %d \n", max);
    printf("Min Number: %d \n", min);

    return 0;
}