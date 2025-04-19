#include<stdio.h>

int main() {
	int n;
	int i;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int sum = n*(n+1)/2;
	
	printf("%d",sum);
	
	return 0;
}	
