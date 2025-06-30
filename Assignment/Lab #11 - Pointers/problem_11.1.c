/* Question:
	Write a C program that uses a pointer to swap the values of two integers.The program should take two integer inputs, pass their addresses to a function, and swap their values using a pointer.
*/
#include <stdio.h>
#include <windows.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int num1, num2;
	system("cls");
	printf(GREEN "Enter first integer: " RESET);
	scanf("%d", &num1);
	printf(GREEN "Enter second integer: " RESET);
	scanf("%d", &num2);
	printf(CYAN "Before swapping: num1 = %d, num2 = %d\n" RESET, num1, num2);
	swap(&num1, &num2);
	printf(CYAN "After swapping: num1 = %d, num2 = %d\n" RESET, num1, num2);
	printf(GREEN "Press enter to exit..." RESET);
	getchar();
	getchar();
	return 0;
}
