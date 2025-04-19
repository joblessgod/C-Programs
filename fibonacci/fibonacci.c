#include<stdio.h>
int main () {

	int a = 0, count;
	int number = 0;
	
	printf("Enter counting up to digit: ");
	scanf("%d", &number);
	printf("Enter initial count number: ");
	scanf("%d",&a);
	int b = a+1; // moved to down due to initial "b" values;
	
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
