#include <stdio.h>
#include <stdbool.h>

// Function to check if number is prime
bool isPrime(int num, int i) {
    if (num <= 1) return false;
    if (i * i > num) return true;
    if (num % i == 0) return false;
    return isPrime(num, i + 1);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number, 2)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}