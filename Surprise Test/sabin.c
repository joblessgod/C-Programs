#include<stdio.h>
#include<windows.h>

int main()
{
    system("cls");
	int i, j, n=7;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(j==i){
				printf("%d ", i);
			}
			else if(j==(i-1)){
				printf("%d ", i+(n-1));	
			}
			else if(j==(i-2)){
				printf("%d ", i+(n-1)+(n-2));	
			}
			else if(j==(i-3)){
				printf("%d ", i+(n-1)+(n-2)+(n-3));	
			}
			else if(j==(i-4)){
				printf("%d ", i+(n-1)+(n-2)+(n-3)+(n-4));	
			}
		}
		printf("\n");
	}
	return 0;
}