#include <stdio.h>


int main() {
	int i;
	int j;
	int space;
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	for(i = 0; i <= rows; i++) {
		for(space=1; space <= (rows-i); space++) {
			printf(" "); 
		}
		for(j=1; j<=i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
