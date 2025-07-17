#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "POKHARA";
    int len = strlen(str);

    for (int i = 0; i < 4; i++) {
        // Print leading spaces (each space = 2 characters to align with letters + space)
        for (int s = 0; s < i * 2; s++) {
            printf(" ");
        }

        // Print the characters
        for (int j = i; j < len - i; j++) {
            printf("%c", str[j]);
            if (j != len - i - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
