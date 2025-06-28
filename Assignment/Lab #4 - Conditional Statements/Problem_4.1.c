/* Question
    WAP using nested if statements to check whether a given number is divisible by both 2 and 3.
 */

#include <stdio.h>
#include <windows.h>

// Color codes
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED		"\033[31m"
#define CYAN    "\033[36m"

int main()
{
    SetConsoleTitle("Lab #4.1");

    int number;

    printf(CYAN "Enter a number which can be divisible by 2 & 3:\n> "RESET);
    scanf("%d", &number);
    
    if(number % 2 == 0) {
    	if (number % 3 == 0)
    	{
    		printf(GREEN "The number %d is divisible by both 2 and 3.\n" RESET, number);
		} else {
			printf(GREEN"The number %d is divisible by 2 but "RED"not by 3.\n"RESET, number);	
		}
		
	} else if (number % 3 == 0) {
		printf(GREEN"The number %d is divisible by 3 but"RED" not by 2.\n"RESET, number);
	} else {
        printf(RED"The number %d is neither divisible by 2 or by 3.\n"RESET, number);
        }
        
	return 0;
}

