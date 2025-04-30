#include <stdio.h>

int main()
{
    int num;
    printf("Ender a number: ");
    scanf("%d", &num);

    printf("Now I am letting you on a secret...\n");
    printf("You have just entered the number %d\n", num);
    getchar();
    return 0;
}