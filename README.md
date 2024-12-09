# Simple Interest Calculation and Reverse Number Program

## Description
This repository contains two programs:
1. **Simple Interest Calculation**: Calculates the simple interest based on given Principle (P), Time (T), and Rate (R).
2. **Reverse Number**: Reverses the digits of an integer.

## Programs

### 1. Simple Interest Calculation Program

#### Formula:
```
Simple Interest = (P * T * R) / 100
```

#### Code:
```c
#include<stdio.h>

int main () {
    float P, T, R, SimpleInterest;

    // Prompt the user to enter Principle, Time, and Rate
    printf("Enter Principle(NPR), Time(Years), Rate(Percentage): ");
    scanf("%f%f%f", &P, &T, &R);

    // Calculate Simple Interest
    SimpleInterest = P * T * R / 100;

    // Output the result with proper formatting
    printf("\nPrinciple: NPR %.2f\nTime: %.f Year\nRate: %.f %% \nSimple Interest: NPR %.2f\n", P, T, R, SimpleInterest);

    getchar(); // Consume the newline character left in the buffer
    getchar(); // Wait for user input before closing

    return 0;
}
```

#### Explanation:
- **Principle (P):** The initial amount of money in NPR (Nepalese Rupees).
- **Time (T):** The duration for which the money is borrowed or invested (in years).
- **Rate (R):** The interest rate (percentage) per year.
- **Simple Interest Calculation:** Formula used to calculate interest based on the input values.

### 2. Reverse Number Program

#### Code:
```c
#include <stdio.h>

int main() {
    int number, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    printf("Reversed number: %d\n", reverse);
    return 0;
}
```

#### Explanation:
- **Input:** The user inputs a number (integer).
- **Reverse Logic:** 
   - The last digit is obtained using the modulus operator (`% 10`).
   - This digit is added to the `reverse` variable, which is multiplied by 10 to shift the digits left.
   - The last digit is removed from the `number` using integer division (`/ 10`).
- **Output:** The program displays the reversed number.

## Example Outputs

### Simple Interest Calculation:

**Input:**
```
Enter Principle(NPR), Time(Years), Rate(Percentage): 10000 5 10
```

**Output:**
```
Principle: NPR 10000.00
Time: 5 Year
Rate: 10 %
Simple Interest: NPR 5000.00
```

### Reverse Number:

**Input:**
```
Enter a number: 12345
```

**Output:**
```
Reversed number: 54321
```
