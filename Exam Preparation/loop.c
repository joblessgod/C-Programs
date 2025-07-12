#include <stdio.h>
#include <windows.h>
int main()
{
    int num = 20;
    for (int i = 0; i < num; i++)
    {
        // system("cls");
        if (i == 5 || i == 10 || i == 15)
        {
            printf("\n");
        }
        printf("%d\t", i + 1);
        Sleep(50);
    }

    return 0;
}