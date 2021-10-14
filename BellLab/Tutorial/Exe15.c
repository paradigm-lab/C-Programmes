#include <stdio.h>

int main() {
	//A program that takes it's input and prints it's output one word per line 
	int c;
	while((c = getchar()) != EOF) {
		if(c == '\n' || c == ' ' || c == '\t') {
			putchar('\n');
		}
		else 
			putchar(c);
	}

}
