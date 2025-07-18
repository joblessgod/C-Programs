/* Question
     WAP to demonstrate the use of increamtnet (++) and decrement (--) operators with both prefix and postfix notation. Explain the output.
 */

#include <stdio.h>
#include <conio.h>
#include <windows.h>

// Color codes
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
int main()
{
	SetConsoleTitle("Lab #3.1"); // to change the title of console/terminal
     system("cls");
	
     int a = 2,b =20;
     printf(GREEN"Default value"RESET"\n a: %d\n b: %d",a,b);
     a++;
     b--;
     printf(GREEN"\n\nValue Initial Prefix"RESET"\n a++ : %d (increment)\n b-- : %d (decrement)",a,b);
     printf(GREEN"\n\nValue Before Postfix"RESET"\n a++ : %d (same as prev)\n b-- : %d (same as prev)",a++,b--);
     printf(GREEN"\n\nValue After Postfix"RESET"\n a++ : %d (increment)\n b-- : %d (decrement)\n",a,b);
     printf("\nPress any key to exit...");
     getch();
     return 0;
}
