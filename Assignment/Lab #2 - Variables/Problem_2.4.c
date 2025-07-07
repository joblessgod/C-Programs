/* Question
    Write a C program to demonstrate and differentiate between global, local, static, and non-static variables by printing their values from different functions.
*/

#include <stdio.h>

// Global Variables
int a;     // Global variable a
int b = 0; // Global variable b, initialized to false

// Function Prototypes
void assignValue();

// Main Function
int main() {
    // Call the function to assign values to global variables
    assignValue();

    // Update the value of global variable a
    a = 100; 

    // Print the value of a from the main function
    printf("\nPrint from PUBLIC Function\n");
    printf("\tValue of a: %d\n", a);

    // Check the value of b and print accordingly
    if (b) {
        printf("\tValue of b: %d\n", b);
    } else {
        printf("\t'b' is not assigned yet!\n");
    }

    return 0;
}

// Function to assign values to global variables
void assignValue() {
    printf("\nPrint from PRIVATE Function\n");

    // Assign values to global variables
    a = 200; // Assign value to global variable a
    b = 1;   // Mark b as true

    // Print the assigned values
    printf("\tValue of a: %d\n", a);
    printf("\tValue of b: %d\n", b);
}
