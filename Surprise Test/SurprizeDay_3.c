/* Question:
 number of n can be anything, but for this example, we will use 4.
 Print the following pattern:
    1
    5 2
    8 6 3
    10 9 7 4
*/

#include <stdio.h>

int main() {
    int n = 4;
    int arr[10][10] = {0}; // supports up to n=10, increase if needed
    int num = 1;

    // Fill the triangle
    for (int col = n - 1; col >= 0; col--) {
        int i = 0, j = col;
        while (j < n) {
            arr[i][j] = num++;
            i++;
            j++;
        }
    }

    // Print the triangle
    for (int i = 0; i < n; i++) {
        for (int j = n - i - 1; j > 0; j--)
            printf("  "); // for alignment
        for (int j = 0; j <= i; j++)
            printf("%d ", arr[j][i]);
        printf("\n");
    }
    return 0;
}

