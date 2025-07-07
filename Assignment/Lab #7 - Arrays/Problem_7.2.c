/* Question:
    Write a C program to find the largest and smallest element in a one-dimensional array.
 */
#include <stdio.h>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"

int main () {
	int i;
	int arr[10] = {2,1,34,75,3,6,5,4,2,12}; // hard coded data because question didn't specified
	int maxNum = arr[1];
	int minNum = arr[1];
	
	for (i = 0; i < 10; i++){
		if(maxNum < arr[i]) {
			maxNum = arr[i];
		}
		
		if(minNum > arr[i]) {
			minNum = arr[i];
		}
	}	
	printf(GREEN"MaxNum: %d\n"RESET,maxNum);
	printf(GREEN"MinNum: %d\n"RESET,minNum);
}

