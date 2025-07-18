#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "POKHARA";
    int len = strlen(str); // 7

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < i * 2; j++) {
            printf(" ");
        }

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
