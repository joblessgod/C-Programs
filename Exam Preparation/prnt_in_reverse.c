#include <stdio.h>
#include <string.h>
int main()
{
    char data[100] = "SanchitAnWebDeveloper";
    char newData[100];
    char ch;
    int len = strlen(data);

    for (int i = 0; i < len; i++)
    {
        ch = data[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch += 32; // Convert to lowercase
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch -= 32; // Convert to uppercase
        }
        newData[i] = ch;
    }
    printf("Original: %s\n", data);
    printf("Toggled : %s\n", newData);
    return 0;
}