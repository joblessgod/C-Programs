#include<stdio.h>
int main () {

	int a = 0,b = 1, count=2;
	printf("%d %d",a,b);
	
	while (count <= 10){
		int c = a + b;
		printf(",%d",c);
		a = b;
		b = c;
		count = count+1;
	}
	return 0;
}
