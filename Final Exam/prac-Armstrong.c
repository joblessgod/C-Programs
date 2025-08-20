#include <stdio.h>
#include <math.h>

int main()
{
    int num, orgn, n = 0, reminder, sum = 0;

    printf("Enter a integer: ");
    scanf("%d", &num);

    orgn = num;
    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        ++n;
    }

    temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;
        int power = 1;
        for (int i = 0; i < n; i++)
        {
            power *= reminder;
        }
        sum += power;

        temp /= 10;
    }

    if (sum == orgn)
        printf("%d is armstorng", orgn);
    else
        printf("%d not armstong", orgn);
    return 0;
}