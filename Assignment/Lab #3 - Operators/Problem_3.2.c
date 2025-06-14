/* Question:
     WAP to perform and display the result of logical AND, OR, and NOT operations on two boolean values.
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

// Color codes
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"

int main(){
	SetConsoleTitle("Lab #3.2");	
	
	int a,b;
	printf("TIPS: (0 for \'false\', 1 for \'true\')\n\n");
	printf("Enter first and second boolean value (Use coma \",\" to seperate values.):\n(Ex: 0, 1)\n> ");
	scanf("%1d, %1d",&a,&b);
	
	printf(GREEN"\nLogical AND (a && b)"RESET": %d\n",a && b);
	printf(GREEN"Logical OR  (a || b)"RESET": %d\n", a || b);
    printf(GREEN"Logical NOT (!a)"RESET": %d\n", !a);
    printf(GREEN"Logical NOT (!b)"RESET": %d\n", !b);
	return 0;
}
