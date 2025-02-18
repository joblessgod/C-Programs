#include<stdio.h>
int main () {

	int a = 0,b = 1, count;
	int number = 0;
	
	printf("Enter counting up to digit: ");
	scanf("%d", &number);
	
	//Result design only!
	printf("\n");
	printf("Fabinacci Series up to '%d'",number);
	printf("\nAns: ");
	
	printf("%d, %d",a,b); // print initial values

	while (count <= number){
		int c = a + b;
		printf(", %d",c);
		a = b;
		b = c;
		count = count+1;
	}
	printf("\n");
	getchar();
	getchar();
	return 0;
}
