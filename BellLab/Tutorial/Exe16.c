#include <stdio.h>

int main() {
	//Count digits, white space and others
	int c, i, nwhite, nother;
	int ndigit[10];
	nwhite =  nother = 0;
	for(i = 0; i < 10; i++) {
		ndigit[i] = 0;
	}
	//Getting input from the character and using the input of the character to access the array by using the index 
	while((c = getchar()) != EOF) {
		if(c >= '0' && c <= '9') {
			++ndigit[c - '0'];
		}
		else if(c == ' ' || c == '\n' || c == '\t') {
			nwhite++;	
		}
		else {
			nother++;
		}
	}
	printf("\n");	
	printf("Digits= ");
	for(i = 0; i < 10; i++) {
		printf("  %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
