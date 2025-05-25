#include <stdio.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"

int main () {
	int arr[10];
	int sum = 0;
	int i;
	
	
	for(i = 0; i < 10; i++) {
	printf(CYAN"Enter %d Number:\n> "RESET,i+1);
	scanf("%d",&arr[i]);
	sum += arr[i];
	}
	
	printf(GREEN"\nYou entered 10 numbers which sum is \'%d\'"RESET,sum);
}
