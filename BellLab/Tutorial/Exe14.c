#include <stdio.h>
#define IN 1		//Inside the word
#define OUT 0		//Outside the word

int main() {
	//The program to print number of word, number of character and number of lines
	int c, nl, nw, nc, state;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF) {
		nc++;
		if (c == '\n') {
			nl++;
		}
		if(c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		}
		else if(state == OUT) {
			state = IN;
			++nw;	
		}
	}
	printf("\n \n");
	printf("Number of charcter: %d, Number of line: %d, Number of words: %d.", nc, nl, nw);

}
