/* Question:
    Write a C program to input two 3x3 matrices and perform matrix multiplcation.
 */
#include <stdio.h>
#define SIZE 3

void inputMatrix(int matrix[SIZE][SIZE]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int first[SIZE][SIZE], int second[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0; // Initialize the result element
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    printf("Resulting Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[SIZE][SIZE], secondMatrix[SIZE][SIZE], resultMatrix[SIZE][SIZE];

    printf("Input for the first matrix:\n");
    inputMatrix(firstMatrix);

    printf("Input for the second matrix:\n");
    inputMatrix(secondMatrix);

    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

    printMatrix(resultMatrix);

    return 0;
}
