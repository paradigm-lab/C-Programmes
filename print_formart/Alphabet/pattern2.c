#include <stdio.h>

int main() {
	//varibles for the loops inner and outer loop
	int i, j;
	int z;
	int row;
	/*
	for(i = 1; i <= 5; i++) {
		for(j = 5; j >= i; j--) {
			z = 0;
			z++;
			printf("%c", 64 + z);
		}
		printf("\n");
	}
	*/

	printf("\n");
	printf("Enter number of rows: ") 
	scanf("%d", &row);
	for (i = row; i >= 1; i--) {
		for(j=1; j <= i; j++) {
			printf("%c", 64 + j);
		}
		printf("\n");
	}

	printf("\n");	

	for (i = row; i >= 1; i--) {
		for(j = 1; j <= i; j++) {
			printf("%c", 64 + i);
		}
		printf("\n");
	}
}
