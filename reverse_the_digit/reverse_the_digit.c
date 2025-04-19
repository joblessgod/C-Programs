#include <stdio.h>

int main()
{
	int number, reverse = 0;
	printf("Enter a digit number: ");
	scanf("%d", &number);

	while (number != 0)
	{
		reverse = reverse * 10 + number % 10;
		number /= 10;
	}

	printf("Reversed Number: %d", reverse);
	getchar();
	getchar();
	return 0;
}
