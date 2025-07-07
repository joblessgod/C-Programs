#include <stdio.h>

int main() {
    int n = 4;
    int num = 1;
    int arr[n][n];

    // Initialize array with 0s
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = 0;

    // Fill values in reverse diagonals
    for (int i = 0; i < n; i++) {
        int row = i;
        int col = 0;
        while (row >= 0) {
            arr[row][col] = num++;
            row--;
            col++;
        }
    }

    // Print in required format
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", arr[i - j][j]);
        }
        printf("\n");
    }

    return 0;
}
