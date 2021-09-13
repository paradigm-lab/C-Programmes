#include <stdio.h>

int main () {
	//The variable for the outter loop 
	int i;

	//The variable for the inner loop
	int j;

	//The variable for inputing the number of rows 
	int rows;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}	
	
	for (j = rows - 1; j >= 1; j--) {
		for (i = 1; i <= j; i++) {
			printf("*");
		}
		printf("\n");
	}
}
