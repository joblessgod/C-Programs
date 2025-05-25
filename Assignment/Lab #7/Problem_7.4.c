#include <stdio.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main()
{
	int i,j;
	int matrix_A[3][3], matrix_B[3][3], sum[3][3];
	
	// 1st matrix
	printf("Enter numbers of the FIRST 3x3 matrix:\n");
	for (i = 0; i < 3; i++){
		for ( j = 0; j < 3; j++){
			printf(CYAN"matrix_A [%d][%d] = "RESET,i+1,j+1);
			scanf("%d",&matrix_A[i][j]);
		}
	}
	
	// 2nd matrix
	printf("Enter numbers of the SECOND 3x3 matrix:\n");
	for (i = 0; i < 3; i++){
		for ( j = 0; j < 3; j++){
			printf(CYAN"matrix_B [%d][%d] = "RESET,i+1,j+1);
			scanf("%d",&matrix_B[i][j]);
		}
	}
	
	// addition
	for (i = 0; i < 3; i++){
		for ( j = 0; j < 3; j++){
			sum[i][j] = matrix_A[i][j] + matrix_B[i][j];
			
		}
	}
	
	// output
	for (i = 0; i < 3; i++){
		for ( j = 0; j < 3; j++){
			printf(GREEN"%4d ",sum[i][j]);
		}
		printf("\n");
	}
	RESET;
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	return 0;
}


