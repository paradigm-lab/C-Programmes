#include <stdio.h>

int main() {
	//Writing a program to count the blanks, tabs and newlines
	int cb, ct, cl = 0;
	int c;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n'){
			cl++;
		}	
		if (c == '\t') {
			ct++;
		}
		if (c == ' ') {
			cb++;
		}
	}
	printf("\n");
	printf("No of blanks: %d, No of tabs: %d, No of lines: %d", cb, ct, cl);
}
