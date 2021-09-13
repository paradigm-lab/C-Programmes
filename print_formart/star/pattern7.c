#include <stdio.h>

int main () {
	//The variable for the outer loop
	int i;

	//The variable for the inner loop
	int j;

	//The variable for printing the spaces in the loop
	int space;

	//The variable for inputing the number of rows
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++) {
		for (space = 1; space <= rows - i; space++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = rows - 1; i >= 1; i--) {
		for (space = 1; space <= rows - i; space++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
