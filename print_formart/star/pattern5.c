#include <stdio.h>

int main() {
	//Variable for the loop
	int i;
	//Variable for the inner loop
	int j;
	//Variable for the printing spaces in the loop
	int space;
	//Variable for the number of rows
	int rows;

	printf("Enter number of rows: ");
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
}
