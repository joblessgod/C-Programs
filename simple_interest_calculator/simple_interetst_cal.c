#include<stdio.h>
int main () {
	float P,T,R,SimpleInterest;
	printf("Enter Principle(NPR), Time(Yeras), Rate(Percentage): ");
	scanf("%f%f%f",&P,&T,&R);

	SimpleInterest = P*T*R/100;


	printf("\nPrinciple: NPR %.2f\nTime: %.f Year\nRate: %.f % \nSimple Interest: NPR %.2f\n",P,T,R,SimpleInterest);

	getchar();
	getchar();
	return 0;

}
