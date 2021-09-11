#include <stdio.h>

int main() {
	int i;
	int j;
	int row;
	
	printf("Enter the number: ");
	scanf("%d", &row);
	for(i = 0; i <= row; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
