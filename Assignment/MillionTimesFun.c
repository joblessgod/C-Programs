#include <time.h>
#include <windows.h>
#include <stdio.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define CYAN "\033[36m"

int main(){
	system("cls");
	clock_t start, end;
	double cpu_time_used;

	start = clock();

	FILE *fp = fopen("fun.txt", "a+"); // a+: create files if it doesn't exists
	if (fp == NULL){
		printf(RED "Error while opening file" RESET);
		return 1;
	}

	// 100 | 100k | 1M | 100M | ???
	for (int i = 0; i < 1000000000; i++){
		fprintf(fp, "%d\n", i + 1);
	}

	fclose(fp);
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

	printf(CYAN "Time taken: %.3f seconds\n" RESET, cpu_time_used);
	return 0;
}
