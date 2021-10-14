#include <stdio.h>

int main() {
	//A program to copy it's input to it's output, replacing each tab by \t, backspace by \b  and the backslash with \\
	
	int c;
	while((c = getchar()) != EOF) {
		if(c == '\t') {
			putchar('\\');
			putchar('t');
		}
		if(c == '\b') {
			putchar('\\');
			putchar('b');
		}
		if(c == '\\')	{
			putchar('\\');
			putchar('\\');
		}	
		if(c != '\t' && c != '\b' && c != '\\')
			putchar(c);
	}
}
