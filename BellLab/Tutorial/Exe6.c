#include <stdio.h>

int main() {
	int c; 
	//The old version of the Program 
	/*
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	*/
	
	//The update of the same program
	while ((c = getchar()) != EOF) {
		putchar(c);
	}

}
