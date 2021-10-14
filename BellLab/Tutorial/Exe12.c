#include <stdio.h>
#define NONBLANK '-'

int main() {
	//This program copys it's input to its output and replacing each string of one or more blanks by a single blank
	int c;
	char lastc = NONBLANK;
	while((c = getchar()) != EOF) {
		if (c == ' ') {
			if(lastc != ' ') {
				putchar(c);
			}
		}
		else {
			putchar(c);
		}
		lastc = c;
	}
	return 0;
}
