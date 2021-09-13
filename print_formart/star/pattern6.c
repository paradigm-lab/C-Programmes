#include <stdio.h>

int main () {
	//The variable name for the outer loop
	int i;

	//The variable name for the inner loop
	int j;

	//The variable name for the spaces
	int space;

	//The variable name for getting number of rows
	int rows;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	for (i = rows; i >= 1; i--) {
		for (space = 1; space <= rows - i; space++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
