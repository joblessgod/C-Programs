/* Question:
    Write a C program using a while loop to calculate the sum of the first n natural numbers.
 */
#include <stdio.h>

// Color codes
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define RED "\033[31m"

int main()
{
    int n, i, sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        sum = n * (n + 1) / 2;
        // sum = (n * (n + 1) * (2 * n + 1)) / 6;
    }
    printf(GREEN "The sum of the first %d natural numbers: %d\n" RESET, n, sum);
    return 0;
}
