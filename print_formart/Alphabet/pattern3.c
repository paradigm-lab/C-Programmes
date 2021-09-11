#include <stdio.h>

int main () {
	//Number of rows 
	int i;
	//Number of columns
	int j;
	//Enter the number of rows
	int rows;
	printf("Enter the number of rows to be printed: ");
	//Input is entered
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= i; j++) {
			printf("%c", 64 + i);
		}
		printf("\n");
	}
}
