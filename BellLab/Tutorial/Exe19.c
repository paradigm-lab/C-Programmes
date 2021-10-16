#include <stdio.h>

#define TOTAL_CHARS 128 //The total number of the character is 128 because of the ASCII table

int main() {
	//Making a program to print the histogram of the frequencies of the character in the input
	/*
	int c;
	int _char[TOTAL_CHARS];
	int i = 0;

	for(int i = 0; i < TOTAL_CHARS; i++) {
		_char[i] = 0;
	}
	
	while((c = getchar()) != EOF){
		_char[c] = _char[c] + 1;
	}

	for (i = 0; i < TOTAL_CHARS; i++) {
		//putchar(i);
		for(int j = 0; j < _char[i]; ++j) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
	*/

	int c, nc;
	nc = 0;
	while((c = getchar()) != EOF) {
		nc++;
		if(c == '\n'){
			printf("%d", nc);
		}  
		else if(c == ' ' || c == '\t') {
			putchar('\n');
		}
		else 
			putchar(c);
		
					

	}
}
